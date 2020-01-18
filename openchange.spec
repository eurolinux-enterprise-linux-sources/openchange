%{!?python_sitearch: %global python_sitearch %(%{__python} -c "from distutils.sysconfig import get_python_lib; print get_python_lib(1)")}

%global samba_version 4.0.1
%global talloc_version 2.0.5
%global nickname QUADRANT

%global build_python_package 0

%if 0%{?rhel}
%global build_server_package 0
%else
# currently disabled also for rawhide (f18), due to samba4 changes
%global build_server_package 0
%endif

### Abstract ###

# Licensing Note: The code is GPLv3+ and the IDL files are public domain.

Name: openchange
Version: 2.0
Release: 4%{?dist}
Group: Applications/System
Summary: Provides access to Microsoft Exchange servers using native protocols
License: GPLv3+ and Public Domain
URL: http://www.openchange.org/
Source0: http://tracker.openchange.org/attachments/download/220/openchange-%{version}-%{nickname}.tar.gz
Source1: doxygen_to_devhelp.xsl
BuildRoot: %(mktemp -ud %{_tmppath}/%{name}-%{version}-%{release}-XXXXXX)

### Build Dependencies ###

BuildRequires: autoconf
BuildRequires: automake
BuildRequires: bison
BuildRequires: doxygen
BuildRequires: file-devel
BuildRequires: flex
BuildRequires: gcc
BuildRequires: libical-devel
BuildRequires: libldb-devel
BuildRequires: libtalloc-devel >= %{talloc_version}
BuildRequires: libtdb-devel
BuildRequires: pkgconfig
BuildRequires: libxslt
BuildRequires: popt-devel
BuildRequires: python-devel
BuildRequires: samba-common >= %{samba_version}
BuildRequires: samba-devel >= %{samba_version}
BuildRequires: samba-libs >= %{samba_version}
BuildRequires: samba-pidl >= %{samba_version}
BuildRequires: sqlite-devel
BuildRequires: zlib-devel

# Certain versions of libtevent have incorrect
# internal ABI versions
Conflicts: libtevent < 0.9.13

### Patches ###

# OpenChange's libmapi conflicts with Zarafa's libmapi.
# Zarafa is older than OpenChange, so it wins.
Patch0: libmapi-0.8.2-libmapi-conflict.patch

# RH bug #552984
Patch1: openchange-0.9-generate-xml-doc.patch

# Do not build server and python parts
Patch2: openchange-1.0-OC_RULE_ADD-fix.patch

# Avoid multilib issue in libmapi/version.h
Patch3: openchange-2.0-multilib-issue-libmapi-version-h.patch

%description
OpenChange provides libraries to access Microsoft Exchange servers
using native protocols.

%package devel
Summary: Developer tools for OpenChange libraries
Group: Development/Libraries
Requires: openchange = %{version}-%{release}
%if %{build_server_package}
Requires: openchange-server = %{version}-%{release}
%endif

%description devel
This package provides the development tools and headers for
OpenChange, providing libraries to access Microsoft Exchange servers
using native protocols.

%package devel-docs
Summary: Developer documentation for OpenChange libraries
Group: Development/Libraries
Requires: devhelp
Requires: openchange = %{version}-%{release}
BuildArch: noarch

%description devel-docs
This package contains developer documentation for Openchange.

%package client
Summary: User tools for OpenChange libraries
Group: Applications/System
Requires: openchange = %{version}-%{release}

%description client
This package provides the user tools for OpenChange, providing access to
Microsoft Exchange servers using native protocols.

%if %{build_python_package}
%package python
Summary: Python bindings for OpenChange libraries
Group: Development/Libraries
Requires: openchange = %{version}-%{release}

%description python
This module contains a wrapper that allows the use of OpenChange via Python.
%endif

%if %{build_server_package}
%package server
Summary: Server-side modules for OpenChange
Group: Applications/System
Requires: openchange = %{version}-%{release}
Requires: sqlite

%description server
This package provides the server elements for OpenChange.
%endif

%prep
%setup -q -n %{name}-%{version}-%{nickname}
%patch0 -p1 -b .libmapi-conflict
%patch1 -p1 -b .generate-xml-doc
%patch2 -p1 -b .OC_RULE_ADD-fix
%patch3 -p1 -b .multilib-issue-libmapi-version-h

%build
./autogen.sh
%configure \
%if %{build_python_package}
	--enable-pymapi \
%endif
	--with-modulesdir=%{_libdir}/samba/modules

# Parallel builds prohibited by makefile
make
rm -r apidocs
make doxygen

xsltproc -o openchange-libmapi.devhelp --stringparam "booktitle" "MAPI client library (libmapi)" --stringparam "bookpart" "libmapi" %{SOURCE1} apidocs/xml/libmapi/index.xml
xsltproc -o openchange-libmapiadmin.devhelp --stringparam "booktitle" "MAPI administration libraries (libmapiadmin)" --stringparam "bookpart" "libmapiadmin" %{SOURCE1} apidocs/xml/libmapiadmin/index.xml
xsltproc -o openchange-libocpf.devhelp --stringparam "booktitle" "OpenChange Property Files (libocpf)" --stringparam "bookpart" "libocpf" %{SOURCE1} apidocs/xml/libocpf/index.xml
xsltproc -o openchange-mapitest.devhelp --stringparam "booktitle" "MA regression test framework (mapitest)" --stringparam "bookpart" "mapitest" %{SOURCE1} apidocs/xml/mapitest/index.xml
xsltproc -o openchange-mapiproxy.devhelp --stringparam "booktitle" "MAPIProxy project (mapiproxy)" --stringparam "bookpart" "mapiproxy" %{SOURCE1} apidocs/xml/mapiproxy/index.xml
xsltproc -o openchange-libmapi++.devhelp --stringparam "booktitle" "C++ bindings for libmapi (libmapi++)" --stringparam "bookpart" "libmapi++" %{SOURCE1} apidocs/xml/libmapi++/index.xml

%install
rm -rf $RPM_BUILD_ROOT
make install DESTDIR=$RPM_BUILD_ROOT

cp -r libmapi++ $RPM_BUILD_ROOT%{_includedir}

# This makes the right links, as rpmlint requires that the
# ldconfig-created links be recorded in the RPM.
/sbin/ldconfig -N -n $RPM_BUILD_ROOT/%{_libdir}

mkdir $RPM_BUILD_ROOT%{_mandir}
cp -r doc/man/man1 $RPM_BUILD_ROOT%{_mandir}

# Skip man3 for now, it doesn't work anyway
# cp -r apidocs/man/man3 $RPM_BUILD_ROOT%{_mandir}
rm -r apidocs/man/man3

#%if ! %{build_python_package}
#rm -r $RPM_BUILD_ROOT%{python_sitearch}/openchange
#%endif

%if ! %{build_server_package}
# XXX OC_RULE_ADD patch disables build of this, no need to delete it.
#rm $RPM_BUILD_ROOT%{_libdir}/libmapiserver.so.*
#rm -r $RPM_BUILD_ROOT%{_libdir}/samba/modules/*
#rm $RPM_BUILD_ROOT%{_libdir}/samba/dcerpc_server/dcesrv_mapiproxy.so
rm $RPM_BUILD_ROOT%{_libdir}/nagios/check_exchange
rm -r $RPM_BUILD_ROOT%{_datadir}/setup/*
%endif

%if !%{build_python_package} && !%{build_server_package}
rm $RPM_BUILD_ROOT%{_bindir}/check_fasttransfer
%endif

mkdir -p $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-libmapi
cp openchange-libmapi.devhelp $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-libmapi
cp -r apidocs/html/libmapi/* $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-libmapi

mkdir -p $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-libmapiadmin
cp openchange-libmapiadmin.devhelp $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-libmapiadmin
cp -r apidocs/html/libmapiadmin/* $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-libmapiadmin

mkdir -p $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-libocpf
cp openchange-libocpf.devhelp $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-libocpf
cp -r apidocs/html/libocpf/* $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-libocpf

mkdir -p $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-mapitest
cp openchange-mapitest.devhelp $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-mapitest
cp -r apidocs/html/mapitest/* $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-mapitest

mkdir -p $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-mapiproxy
cp openchange-mapiproxy.devhelp $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-mapiproxy
cp -r apidocs/html/mapiproxy/* $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-mapiproxy

mkdir -p $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-libmapi++
cp openchange-libmapi++.devhelp $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-libmapi++
cp -r apidocs/html/libmapi++/* $RPM_BUILD_ROOT%{_datadir}/devhelp/books/openchange-libmapi++

%clean
rm -rf $RPM_BUILD_ROOT

%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig

%if %{build_server_package}
%post server -p /sbin/ldconfig

%postun server -p /sbin/ldconfig
%endif

%files
%defattr(-,root,root,-)
%doc ChangeLog COPYING IDL_LICENSE.txt VERSION
%{_libdir}/libmapi-openchange.so.*
%{_libdir}/libmapiadmin.so.*
%if %{build_python_package} || %{build_server_package}
%{_libdir}/libmapiproxy.so.*
%{_libdir}/libmapistore.so.*
%endif
%{_libdir}/libocpf.so.*

%files devel
%defattr(-,root,root,-)
%{_includedir}/*
%{_libdir}/*.so
%{_libdir}/pkgconfig/*

%files devel-docs
%defattr(-,root,root,-)
#%{_mandir}/man3/*
%doc %{_datadir}/devhelp/books/*
%doc apidocs/html/libmapi
%doc apidocs/html/libocpf
%doc apidocs/html/overview
%doc apidocs/html/index.html

%files client
%defattr(-,root,root,-)
%{_bindir}/*
%{_mandir}/man1/*
%{_datadir}/mapitest/*

%if %{build_python_package}
%files python
%defattr(-,root,root,-)
%{python_sitearch}/openchange
%endif

%if %{build_server_package}
%files server
%defattr(-,root,root,-)
%{_libdir}/libmapiserver.so.*
%{_libdir}/samba/dcerpc_server/dcesrv_mapiproxy.so
%{_libdir}/samba/modules/*
%if !0%{?rhel}
%{_libdir}/nagios/check_exchange
%endif
%{_datadir}/setup/*
%endif

%changelog
* Fri Jan 24 2014 Daniel Mach <dmach@redhat.com> - 2.0-4
- Mass rebuild 2014-01-24

* Fri Dec 27 2013 Daniel Mach <dmach@redhat.com> - 2.0-3
- Mass rebuild 2013-12-27

* Thu Sep 19 2013 Milan Crha <mcrha@redhat.com> - 2.0-2
- Add patch to fix multilib issue in libmapi/version.h
- Move devel-docs subpackage to noarch

* Thu Feb 14 2013 Milan Crha <mcrha@redhat.com> - 2.0-1
- Update to OpenChange 2.0

* Thu Feb 14 2013 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 1.0-13
- Rebuilt for https://fedoraproject.org/wiki/Fedora_19_Mass_Rebuild

* Fri Oct 26 2012 Milan Crha <mcrha@redhat.com> - 1.0-12
- Add patch for Gnome bug #682449 (WriteStream fails)

* Mon Aug 06 2012 Milan Crha <mcrha@redhat.com> - 1.0-11
- Add patch for Red Hat bug #845618 (incorrect symbol resolution)

* Thu Jul 26 2012 Milan Crha <mcrha@redhat.com> - 1.0-10
- Remove check_fasttransfer from openchange-client, if not building server package

* Fri Jul 20 2012 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 1.0-9
- Rebuilt for https://fedoraproject.org/wiki/Fedora_18_Mass_Rebuild

* Tue Jul 10 2012 Milan Crha <mcrha@redhat.com> - 1.0-8
- Add patch for OpenChange bug #397 (crash under MAPIUninitialize)
- Disable build of python and mapiproxy

* Fri Jun 01 2012 Milan Crha <mcrha@redhat.com> - 1.0-7
- Add patch to use system's popt.h
- Add patch to compile only certain parts of the package
- Disable openchange-server for rawhide too (due to samba4 changes)

* Thu May 17 2012 Matthew Barnes <mbarnes@redhat.com> -1.0-6
- Do not build openchange-server in RHEL.
  (And make disabling the subpackage actually work.)

* Wed May 02 2012 Milan Crha <mcrha@redhat.com> - 1.0-5
- Do not include nagios/check_exchange in RHEL

* Tue Apr 24 2012 Milan Crha <mcrha@redhat.com> - 1.0-4
- Bump samba4 dependency

* Thu Apr 19 2012 Matthew Barnes <mbarnes@redhat.com> - 1.0-3
- Add BR: libical-devel (RH bug #803640).

* Wed Apr 18 2012 Milan Crha <mcrha@redhat.com> - 1.0-2
- Bump samba4 dependency

* Tue Apr 03 2012 Milan Crha <mcrha@redhat.com> - 1.0-1
- Update to 1.0
- Enable packages for server part and python bindings
- Skip man3 pages, which are generated incomplete (use devhelp instead)

* Fri Jan 13 2012 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.11-4
- Rebuilt for https://fedoraproject.org/wiki/Fedora_17_Mass_Rebuild

* Tue Aug 30 2011 Milan Crha <mcrha@redhat.com> - 0.11-3
- Fix package version number

* Mon Aug 29 2011 Stephen Gallagher <sgallagh@redhat.com> - 0.11-2.1
- Rebuild against fixed libtevent version

* Mon Aug 29 2011 Milan Crha <mcrha@redhat.com> - 0.11-2
- Sync version and changes with Fedora 16 package

* Thu Aug 11 2011 Milan Crha <mcrha@redhat.com> - 0.11-1
- Update to OpenChange 0.11 Transporter upstream release
- Remove unnecessary build modification patches.
- Add patch to not use mapi_ctx->session as a TALLOC_CTX (OpenChange issue #366)
- Add patch to read/write PidNameKeywords (OpenChange issue #367)

* Wed Apr 6 2011 Matthew Barnes <mbarnes@redhat.com> - 0.10.9-4
- OpenChange relies on a private Samba 4 library (libsamba-util-common).
  Add extra linker flags to libmapi.pc to compensate.

* Wed Apr 6 2011 Matthew Barnes <mbarnes@redhat.com> - 0.10.9-3
- Move libmapiproxy.so, libmapistore.so and mapistore backend libraries
  to the main package so the client subpackage is installable.

* Fri Mar 25 2011 Simo Sorce <ssorce@redhat.com> - 0.10.9-2
- New snapshot that avoid bison issues.
- Also add patch that fix build (previously erroneously preapplied in the
  snapshot tarball)
- Fix timestamps in tarball
- Fix specfile's install and files section to cope with newer version changes

* Fri Mar 25 2011 Simo Sorce <ssorce@redhat.com> - 0.10.9-1
- Upgrade to a 0.11 development snapshot.
- Required by the new samba4 packages.

* Mon Feb 21 2011 Milan Crha <mcrha@redhat.com> - 0.9-14
- Rebuild against newer libldb

* Tue Feb 08 2011 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.9-13
- Rebuilt for https://fedoraproject.org/wiki/Fedora_15_Mass_Rebuild

* Wed Feb 02 2011 Milan Crha <mcrha@redhat.com> - 0.9-12
- Add patch for message sending, found by Gianluca Cecchi (RH bug #674034)

* Thu Dec 16 2010 Matthew Barnes <mbarnes@redhat.com> - 0.9-11
- Re-fix man-pages file conflict (RH bug #654729).

* Thu Dec 02 2010 Milan Crha <mcrha@redhat.com> - 0.9-10
- Add patch for talloc abort in FindGoodServer, found by Jeff Raber (RH bug #602661)

* Wed Sep 29 2010 jkeating - 0.9-9
- Rebuilt for gcc bug 634757

* Mon Sep 13 2010 Matthew Barnes <mbarnes@redhat.com> - 0.9-8
- Backport unicode and properties support (RH bug #605364).

* Wed Jul 21 2010 David Malcolm <dmalcolm@redhat.com> - 0.9-7
- Rebuilt for https://fedoraproject.org/wiki/Features/Python_2.7/MassRebuild

* Thu Jun 24 2010 Matthew Barnes <mbarnes@redhat.com> - 0.9-6
- Disable python and server subpackages until they're needed.

* Wed Jun 23 2010 Matthew Barnes <mbarnes@redhat.com> - 0.9-5
- More spec file cleanups.

* Fri Jun 18 2010 Matthew Barnes <mbarnes@redhat.com> - 0.9-4
- Spec file cleanups.

* Mon May 24 2010 Matthew Barnes <mbarnes@redhat.com> - 0.9-3
- Avoid a file conflict with man-pages package.

* Sat Jan 09 2010 Matthew Barnes <mbarnes@redhat.com> - 0.9-2
- Add a devel-docs subpackage (RH bug #552984).

* Sat Dec 26 2009 Matthew Barnes <mbarnes@redhat.com> - 0.9-1
- Update to 0.9 (COCHRANE)
- Bump samba4 requirement to alpha10.

* Wed Sep 23 2009 Matthew Barnes <mbarnes@redhat.com> - 0.8.2-5
- Rebuild.

* Sat Jul 25 2009 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.8.2-4
- Rebuilt for https://fedoraproject.org/wiki/Fedora_12_Mass_Rebuild

* Mon Jun 29 2009 Matthew Barnes <mbarnes@redhat.com> - 0.8.2-3
- Rename libmapi so as not to conflict with Zarafa (RH bug #505783).

* Thu May 07 2009 Matthew Barnes <mbarnes@redhat.com> - 0.8.2-2
- Do not own the pkgconfig directory (RH bug #499655).

* Tue Mar 31 2009 Matthew Barnes <mbarnes@redhat.com> - 0.8.2-1
- Update to 0.8.2
- Add a server subpackage.
- Add BuildRequires: sqlite-devel (for server)

* Sun Mar 08 2009 Matthew Barnes <mbarnes@redhat.com> - 0.8-6
- Fix build breakage.
- Explicitly require libldb-devel.
- Bump samba4 requirement to alpha7.

* Wed Feb 25 2009 Matthew Barnes <mbarnes@redhat.com> - 0.8-5
- Rebuild with correct tarball.

* Wed Feb 25 2009 Matthew Barnes <mbarnes@redhat.com> - 0.8-4
- Formal package review cleanups.

* Wed Feb 25 2009 Matthew Barnes <mbarnes@redhat.com> - 0.8-3
- Add documentation files.

* Thu Feb 19 2009 Matthew Barnes <mbarnes@redhat.com> - 0.8-2
- Add some missing build requirements.

* Tue Jan 20 2009 Matthew Barnes <mbarnes@redhat.com> - 0.8-1
- Update to 0.8 (ROMULUS)

* Sat Jan 17 2009 Matthew Barnes <mbarnes@redhat.com> - 0.8-0.7.svn949
- Add missing BuildRequires: zlib-devel

* Sat Dec 27 2008 Matthew Barnes <mbarnes@redhat.com> - 0.8-0.6.svn949
- Update to SVN revision 949.

* Mon Dec 15 2008 Matthew Barnes <mbarnes@redhat.com> - 0.8-0.5.svn909
- Package review feedback (RH bug #453395).

* Fri Dec 12 2008 Matthew Barnes <mbarnes@redhat.com> - 0.8-0.4.svn909
- Update to SVN revision 909.
- Bump the samba4 requirement.

* Fri Aug 29 2008 Andrew Bartlett <abartlet@samba.org> - 0:0.8-0.3.svn960.fc9
- Bump version
- Don't make the Samba4 version distro-dependent

* Sat Jul 26 2008 Brad Hards <bradh@frogmouth.net> - 0:0.8-0.2.svnr674.fc10
- Bump version
- Install documentation / man pages correctly
- Remove epoch (per https://bugzilla.redhat.com/show_bug.cgi?id=453395)
- Remove %%post and %%postun (per https://bugzilla.redhat.com/show_bug.cgi?id=453395)
- Remove talloc dependency (per https://bugzilla.redhat.com/show_bug.cgi?id=453395)
- Take out libmapiproxy, because we aren't up to server side yet.

* Sat Jul 12 2008 Andrew Bartlett <abartlet@samba.org> - 0:0.7-0.2.svnr627.fc9
- Add popt-devel BR

* Mon Jun 30 2008 Andrew Bartlett <abartlet@samba.org> - 0:0.7-0.1.svnr627.fc9
- Initial package of OpenChange for Fedora
