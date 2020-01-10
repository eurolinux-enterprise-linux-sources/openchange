#ifndef __UTILS_MAPITEST_PROTO_H__
#define __UTILS_MAPITEST_PROTO_H__

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

_PUBLIC_ struct mapitest_suite *mapitest_suite_init(struct mapitest *, 						    const char *name,
						    const char *description,
bool);
_PUBLIC_ uint32_t mapitest_suite_register(struct mapitest *, struct mapitest_suite *);
_PUBLIC_ uint32_t mapitest_suite_add_test(struct mapitest_suite *,					  const char *name, const char *description,
bool (*) (struct mapitest *));
_PUBLIC_ uint32_t mapitest_suite_add_test_flagged(struct mapitest_suite *,						  const char *name, const char *description,
						  bool (*run) (struct mapitest *test),
enum TestApplicabilityFlags);
_PUBLIC_ struct mapitest_suite *mapitest_suite_find(struct mapitest *, const char *);
_PUBLIC_ bool mapitest_suite_run_test(struct mapitest *,				      struct mapitest_suite *suite, 
const char *);
_PUBLIC_ bool mapitest_run_test(struct mapitest *, const char *);
_PUBLIC_ bool mapitest_run_all(struct mapitest *);
_PUBLIC_ void mapitest_indent(void);
_PUBLIC_ void mapitest_deindent(void);
_PUBLIC_ void mapitest_print_tab(struct mapitest *);
_PUBLIC_ void mapitest_print(struct mapitest *, const char *, ...);
_PUBLIC_ void mapitest_print_newline(struct mapitest *, int);
_PUBLIC_ void mapitest_print_line(struct mapitest *, int, char);
_PUBLIC_ void mapitest_underline(struct mapitest *, const char *, char);
_PUBLIC_ void mapitest_print_title(struct mapitest *, const char *, char);
_PUBLIC_ void mapitest_print_module_title_start(struct mapitest *, const char *);
_PUBLIC_ void mapitest_print_module_title_end(struct mapitest *);
_PUBLIC_ void mapitest_print_test_title_start(struct mapitest *, const char *);
_PUBLIC_ void mapitest_print_test_title_end(struct mapitest *);
_PUBLIC_ void mapitest_print_headers_info(struct mapitest *);
_PUBLIC_ void mapitest_print_headers_server_info(struct mapitest *);
_PUBLIC_ void mapitest_print_headers(struct mapitest *);
_PUBLIC_ void mapitest_print_test_result(struct mapitest *, char *, bool);
_PUBLIC_ void mapitest_print_retval(struct mapitest *, char *);
_PUBLIC_ void mapitest_print_retval_fmt(struct mapitest *, char *, const char *, ...);
_PUBLIC_ void mapitest_print_retval_step(struct mapitest *, char *, char *);
_PUBLIC_ void mapitest_print_retval_step_fmt(struct mapitest *, char *, char *, const char *, ...);
_PUBLIC_ struct mapitest_stat *mapitest_stat_init(TALLOC_CTX *);
_PUBLIC_ uint32_t mapitest_stat_add_result(struct mapitest_suite *,					   const char *name,
bool);
_PUBLIC_ uint32_t mapitest_stat_add_skipped_test(struct mapitest_suite *,						 const char *name,
enum TestApplicabilityFlags);
_PUBLIC_ int32_t mapitest_stat_dump(struct mapitest *);
_PUBLIC_ bool mapitest_common_folder_open(struct mapitest *,					  mapi_object_t *obj_parent, 
					  mapi_object_t *obj_child,
uint32_t);
_PUBLIC_ bool mapitest_common_message_delete_by_subject(struct mapitest *,							mapi_object_t *obj_folder,
const char *);
_PUBLIC_ bool mapitest_common_find_folder(struct mapitest *,					  mapi_object_t *obj_parent,
					  mapi_object_t *obj_child,
const char *);
_PUBLIC_ bool mapitest_common_message_create(struct mapitest *,					     mapi_object_t *obj_folder, 
					     mapi_object_t *obj_message,
const char *);
_PUBLIC_ bool mapitest_common_message_fill(struct mapitest *,					   mapi_object_t *obj_message,
const char *);
_PUBLIC_ char *mapitest_common_genblob(TALLOC_CTX *, size_t);
_PUBLIC_ bool mapitest_common_create_filled_test_folder(struct mapitest *);
_PUBLIC_ bool mapitest_common_setup(struct mapitest *, mapi_object_t *, uint32_t *);
_PUBLIC_ void mapitest_common_cleanup(struct mapitest *);
_PUBLIC_ uint32_t mapitest_register_modules(struct mapitest *);
_PUBLIC_ uint32_t module_oxcstor_init(struct mapitest *);
_PUBLIC_ uint32_t module_oxcfold_init(struct mapitest *);
_PUBLIC_ uint32_t module_oxomsg_init(struct mapitest *);
_PUBLIC_ uint32_t module_oxcmsg_init(struct mapitest *);
_PUBLIC_ uint32_t module_oxctable_init(struct mapitest *);
_PUBLIC_ uint32_t module_oxcprpt_init(struct mapitest *);
_PUBLIC_ uint32_t module_oxorule_init(struct mapitest *);
_PUBLIC_ uint32_t module_oxcnotif_init(struct mapitest *);
_PUBLIC_ uint32_t module_oxcfxics_init(struct mapitest *);
_PUBLIC_ uint32_t module_nspi_init(struct mapitest *);
_PUBLIC_ uint32_t module_noserver_init(struct mapitest *);
_PUBLIC_ uint32_t module_errorchecks_init(struct mapitest *);
_PUBLIC_ uint32_t module_lcid_init(struct mapitest *);
_PUBLIC_ uint32_t module_mapidump_init(struct mapitest *);
_PUBLIC_ bool mapitest_oxcstor_Logon(struct mapitest *);
_PUBLIC_ bool mapitest_oxcstor_GetReceiveFolder(struct mapitest *);
_PUBLIC_ bool mapitest_oxcstor_SetReceiveFolder(struct mapitest *);
_PUBLIC_ bool mapitest_oxcstor_GetOwningServers(struct mapitest *);
_PUBLIC_ bool mapitest_oxcstor_PublicFolderIsGhosted(struct mapitest *);
_PUBLIC_ bool mapitest_oxcstor_GetReceiveFolderTable(struct mapitest *);
_PUBLIC_ bool mapitest_oxcstor_LongTermId(struct mapitest *);
_PUBLIC_ bool mapitest_oxcstor_GetStoreState(struct mapitest *);
_PUBLIC_ bool mapitest_oxcfold_OpenFolder(struct mapitest *);
_PUBLIC_ bool mapitest_oxcfold_CreateFolder(struct mapitest *);
_PUBLIC_ bool mapitest_oxcfold_GetHierarchyTable(struct mapitest *);
_PUBLIC_ bool mapitest_oxcfold_GetContentsTable(struct mapitest *);
_PUBLIC_ bool mapitest_oxcfold_SetSearchCriteria(struct mapitest *);
_PUBLIC_ bool mapitest_oxcfold_GetSearchCriteria(struct mapitest *);
_PUBLIC_ bool mapitest_oxcfold_MoveCopyMessages(struct mapitest *);
_PUBLIC_ bool mapitest_oxcfold_MoveFolder(struct mapitest *);
_PUBLIC_ bool mapitest_oxcfold_CopyFolder(struct mapitest *);
_PUBLIC_ bool mapitest_oxcfold_HardDeleteMessages(struct mapitest *);
_PUBLIC_ bool mapitest_oxcfold_HardDeleteMessagesAndSubfolders(struct mapitest *);
_PUBLIC_ bool mapitest_oxomsg_AddressTypes(struct mapitest *);
_PUBLIC_ bool mapitest_oxomsg_SubmitMessage(struct mapitest *);
_PUBLIC_ bool mapitest_oxomsg_AbortSubmit(struct mapitest *);
_PUBLIC_ bool mapitest_oxomsg_SetSpooler(struct mapitest *);
_PUBLIC_ bool mapitest_oxomsg_SpoolerLockMessage(struct mapitest *);
_PUBLIC_ bool mapitest_oxomsg_TransportSend(struct mapitest *);
_PUBLIC_ bool mapitest_oxomsg_TransportNewMail(struct mapitest *);
_PUBLIC_ bool mapitest_oxomsg_GetTransportFolder(struct mapitest *);
_PUBLIC_ bool mapitest_oxcmsg_CreateMessage(struct mapitest *);
_PUBLIC_ bool mapitest_oxcmsg_SetMessageReadFlag(struct mapitest *);
_PUBLIC_ bool mapitest_oxcmsg_ModifyRecipients(struct mapitest *);
_PUBLIC_ bool mapitest_oxcmsg_RemoveAllRecipients(struct mapitest *);
_PUBLIC_ bool mapitest_oxcmsg_ReadRecipients(struct mapitest *);
_PUBLIC_ bool mapitest_oxcmsg_SaveChangesMessage(struct mapitest *);
_PUBLIC_ bool mapitest_oxcmsg_GetMessageStatus(struct mapitest *);
_PUBLIC_ bool mapitest_oxcmsg_SetMessageStatus(struct mapitest *);
_PUBLIC_ bool mapitest_oxcmsg_SetReadFlags(struct mapitest *);
_PUBLIC_ bool mapitest_oxcmsg_OpenEmbeddedMessage(struct mapitest *);
_PUBLIC_ bool mapitest_oxcmsg_GetValidAttachments(struct mapitest *);
_PUBLIC_ bool mapitest_oxcmsg_ReloadCachedInformation(struct mapitest *);
_PUBLIC_ bool mapitest_oxcprpt_GetProps(struct mapitest *);
_PUBLIC_ bool mapitest_oxcprpt_GetPropsAll(struct mapitest *);
_PUBLIC_ bool mapitest_oxcprpt_GetPropList(struct mapitest *);
_PUBLIC_ bool mapitest_oxcprpt_SetProps(struct mapitest *);
_PUBLIC_ bool mapitest_oxcprpt_DeleteProps(struct mapitest *);
_PUBLIC_ bool mapitest_oxcprpt_CopyProps(struct mapitest *);
_PUBLIC_ bool mapitest_oxcprpt_Stream(struct mapitest *);
_PUBLIC_ bool mapitest_oxcprpt_CopyToStream(struct mapitest *);
_PUBLIC_ bool mapitest_oxcprpt_CopyTo(struct mapitest *);
_PUBLIC_ bool mapitest_oxcprpt_NameId(struct mapitest *);
_PUBLIC_ bool mapitest_oxcprpt_NoReplicate(struct mapitest *);
_PUBLIC_ bool mapitest_oxcprpt_WriteAndCommitStream(struct mapitest *);
_PUBLIC_ bool mapitest_oxctable_SetColumns(struct mapitest *);
_PUBLIC_ bool mapitest_oxctable_QueryColumns(struct mapitest *);
_PUBLIC_ bool mapitest_oxctable_Restrict(struct mapitest *);
_PUBLIC_ bool mapitest_oxctable_QueryRows(struct mapitest *);
_PUBLIC_ bool mapitest_oxctable_GetStatus(struct mapitest *);
_PUBLIC_ bool mapitest_oxctable_SeekRow(struct mapitest *);
_PUBLIC_ bool mapitest_oxctable_SeekRowApprox(struct mapitest *);
_PUBLIC_ bool mapitest_oxctable_CreateBookmark(struct mapitest *);
_PUBLIC_ bool mapitest_oxctable_SeekRowBookmark(struct mapitest *);
_PUBLIC_ bool mapitest_oxctable_Category(struct mapitest *);
_PUBLIC_ bool mapitest_oxorule_GetRulesTable(struct mapitest *);
_PUBLIC_ bool mapitest_oxcnotif_RegisterNotification(struct mapitest *);
_PUBLIC_ bool mapitest_oxcfxics_GetLocalReplicaIds(struct mapitest *);
_PUBLIC_ bool mapitest_nspi_UpdateStat(struct mapitest *);
_PUBLIC_ bool mapitest_nspi_QueryRows(struct mapitest *);
_PUBLIC_ bool mapitest_nspi_SeekEntries(struct mapitest *);
_PUBLIC_ bool mapitest_nspi_GetMatches(struct mapitest *);
_PUBLIC_ bool mapitest_nspi_ResortRestriction(struct mapitest *);
_PUBLIC_ bool mapitest_nspi_DNToMId(struct mapitest *);
_PUBLIC_ bool mapitest_nspi_GetPropList(struct mapitest *);
_PUBLIC_ bool mapitest_nspi_GetProps(struct mapitest *);
_PUBLIC_ bool mapitest_nspi_CompareMIds(struct mapitest *);
_PUBLIC_ bool mapitest_nspi_ModProps(struct mapitest *);
_PUBLIC_ bool mapitest_nspi_GetSpecialTable(struct mapitest *);
_PUBLIC_ bool mapitest_nspi_GetTemplateInfo(struct mapitest *);
_PUBLIC_ bool mapitest_nspi_ModLinkAtt(struct mapitest *);
_PUBLIC_ bool mapitest_nspi_QueryColumns(struct mapitest *);
_PUBLIC_ bool mapitest_nspi_GetNamesFromIDs(struct mapitest *);
_PUBLIC_ bool mapitest_nspi_GetIDsFromNames(struct mapitest *);
_PUBLIC_ bool mapitest_nspi_ResolveNames(struct mapitest *);
_PUBLIC_ bool mapitest_noserver_lzfu(struct mapitest *);
_PUBLIC_ bool mapitest_noserver_srowset(struct mapitest *) ;
_PUBLIC_ bool mapitest_noserver_properties(struct mapitest *) ;
_PUBLIC_ bool mapitest_noserver_mapi_properties(struct mapitest *) ;
_PUBLIC_ bool mapitest_noserver_proptagvalue(struct mapitest *) ;
_PUBLIC_ bool mapitest_errorchecks_simplemapi_c(struct mapitest *);
_PUBLIC_ bool mapitest_lcid_langcode2langtag(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_spropvalue(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_sproptagarray(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_srowset(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_pabentry(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_note(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_task(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_contact(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_appointment(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_message(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_newmail(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_freebusy(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_recipients(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_folderdeleted(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_foldermoved(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_foldercopied(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_foldercreated(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_messagedeleted(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_messagecreated(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_messagemoved(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_messagecopied(struct mapitest *);
_PUBLIC_ bool mapitest_mapidump_messagemodified(struct mapitest *);

__END_DECLS

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __UTILS_MAPITEST_PROTO_H__ */

