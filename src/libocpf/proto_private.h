#ifndef __LIBOCPF_PROTO_PRIVATE_H__
#define __LIBOCPF_PROTO_PRIVATE_H__

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

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from libocpf/ocpf_public.c  */


/* The following definitions come from libocpf/ocpf_dump.c  */


/* The following definitions come from libocpf/ocpf_api.c  */

void ocpf_do_debug(const char *, ...);
const char *ocpf_get_filename(void);
int ocpf_propvalue_var(const char *, uint32_t, const char *, bool);
int ocpf_set_propvalue(TALLOC_CTX *, const void **, uint16_t, uint16_t, union SPropValue_CTR, bool);
int ocpf_propvalue_free(union SPropValue_CTR, uint16_t);
int ocpf_propvalue(uint32_t, union SPropValue_CTR, uint16_t, bool);
void ocpf_propvalue_s(const char *, union SPropValue_CTR, uint16_t, bool);
int ocpf_nproperty_add(struct ocpf_nprop *, union SPropValue_CTR,const char *, uint16_t, bool);
int ocpf_type_add(const char *);
int ocpf_folder_add(const char *, uint64_t, const char *);
int ocpf_oleguid_add(const char *, const char *);
int ocpf_oleguid_check(const char *, const char **);
int ocpf_add_filetime(const char *, struct FILETIME *);
int ocpf_variable_add(const char *, union SPropValue_CTR, uint16_t, bool);
int ocpf_binary_add(const char *, struct Binary_r *);
int ocpf_recipient_add(uint8_t, char *);

/* The following definitions come from libocpf/ocpf_write.c  */

char *ocpf_write_unescape_string(const char *);

__END_DECLS

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __LIBOCPF_PROTO_PRIVATE_H__ */

