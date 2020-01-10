#ifndef __LIBOCPF_PROTO_H__
#define __LIBOCPF_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)

#ifndef __BEGIN_DECLS
#ifdef __cplusplus
#define __BEGIN_DECLS		extern "C" {
#define __END_DECLS		}
#else
#define __BEGIN_DECLS
#define __END_DECLS
#endif
#endif

__BEGIN_DECLS

/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are part of 
 * the public API of this subsystem or library. */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif

_PUBLIC_ int ocpf_init(void);
_PUBLIC_ int ocpf_release(void);
_PUBLIC_ int ocpf_parse(const char *);
_PUBLIC_ enum MAPISTATUS ocpf_set_SPropValue(TALLOC_CTX *, 					     mapi_object_t *obj_folder,
mapi_object_t *);
_PUBLIC_ struct SPropValue *ocpf_get_SPropValue(uint32_t *);
_PUBLIC_ enum MAPISTATUS ocpf_OpenFolder(mapi_object_t *,mapi_object_t *);
_PUBLIC_ enum MAPISTATUS ocpf_set_Recipients(TALLOC_CTX *,mapi_object_t *);
_PUBLIC_ void ocpf_dump_type(void);
_PUBLIC_ void ocpf_dump_folder(void);
_PUBLIC_ void ocpf_dump_recipients(void);
_PUBLIC_ void ocpf_dump_oleguid(void);
_PUBLIC_ void ocpf_dump_variable(void);
_PUBLIC_ void ocpf_dump_property(void);
_PUBLIC_ void ocpf_dump_named_property(void);
_PUBLIC_ void ocpf_dump(void);
_PUBLIC_ int ocpf_write_init(const char *, mapi_id_t);
_PUBLIC_ int ocpf_write_auto(mapi_object_t *,struct mapi_SPropValue_array *);
_PUBLIC_ int ocpf_write_commit(void);

__END_DECLS

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __LIBOCPF_PROTO_H__ */

