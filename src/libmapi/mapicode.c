/* parser auto-generated by mparse */
#include "libmapi/libmapi.h"
#include "libmapi/libmapi_private.h"
#include "gen_ndr/ndr_exchange.h"

void set_errno(enum MAPISTATUS status)
{
	errno = status;
}

struct mapi_retval {
	enum MAPISTATUS		err;
	const char		*name;
};

static const struct mapi_retval mapi_retval[] = {
	{ MAPI_E_SUCCESS, "MAPI_E_SUCCESS" },
	{ MAPI_E_INTERFACE_NO_SUPPORT, "MAPI_E_INTERFACE_NO_SUPPORT" },
	{ MAPI_E_CALL_FAILED, "MAPI_E_CALL_FAILED" },
	{ MAPI_E_NO_SUPPORT, "MAPI_E_NO_SUPPORT" },
	{ MAPI_E_BAD_CHARWIDTH, "MAPI_E_BAD_CHARWIDTH" },
	{ MAPI_E_STRING_TOO_LONG, "MAPI_E_STRING_TOO_LONG" },
	{ MAPI_E_UNKNOWN_FLAGS, "MAPI_E_UNKNOWN_FLAGS" },
	{ MAPI_E_INVALID_ENTRYID, "MAPI_E_INVALID_ENTRYID" },
	{ MAPI_E_INVALID_OBJECT, "MAPI_E_INVALID_OBJECT" },
	{ MAPI_E_OBJECT_CHANGED, "MAPI_E_OBJECT_CHANGED" },
	{ MAPI_E_OBJECT_DELETED, "MAPI_E_OBJECT_DELETED" },
	{ MAPI_E_BUSY, "MAPI_E_BUSY" },
	{ MAPI_E_NOT_ENOUGH_DISK, "MAPI_E_NOT_ENOUGH_DISK" },
	{ MAPI_E_NOT_ENOUGH_RESOURCES, "MAPI_E_NOT_ENOUGH_RESOURCES" },
	{ MAPI_E_NOT_FOUND, "MAPI_E_NOT_FOUND" },
	{ MAPI_E_VERSION, "MAPI_E_VERSION" },
	{ MAPI_E_LOGON_FAILED, "MAPI_E_LOGON_FAILED" },
	{ MAPI_E_SESSION_LIMIT, "MAPI_E_SESSION_LIMIT" },
	{ MAPI_E_USER_CANCEL, "MAPI_E_USER_CANCEL" },
	{ MAPI_E_UNABLE_TO_ABORT, "MAPI_E_UNABLE_TO_ABORT" },
	{ MAPI_E_NETWORK_ERROR, "MAPI_E_NETWORK_ERROR" },
	{ MAPI_E_DISK_ERROR, "MAPI_E_DISK_ERROR" },
	{ MAPI_E_TOO_COMPLEX, "MAPI_E_TOO_COMPLEX" },
	{ MAPI_E_BAD_COLUMN, "MAPI_E_BAD_COLUMN" },
	{ MAPI_E_EXTENDED_ERROR, "MAPI_E_EXTENDED_ERROR" },
	{ MAPI_E_COMPUTED, "MAPI_E_COMPUTED" },
	{ MAPI_E_CORRUPT_DATA, "MAPI_E_CORRUPT_DATA" },
	{ MAPI_E_UNCONFIGURED, "MAPI_E_UNCONFIGURED" },
	{ MAPI_E_FAILONEPROVIDER, "MAPI_E_FAILONEPROVIDER" },
	{ MAPI_E_UNKNOWN_CPID, "MAPI_E_UNKNOWN_CPID" },
	{ MAPI_E_UNKNOWN_LCID, "MAPI_E_UNKNOWN_LCID" },
	{ MAPI_E_PASSWORD_CHANGE_REQUIRED, "MAPI_E_PASSWORD_CHANGE_REQUIRED" },
	{ MAPI_E_PASSWORD_EXPIRED, "MAPI_E_PASSWORD_EXPIRED" },
	{ MAPI_E_INVALID_WORKSTATION_ACCOUNT, "MAPI_E_INVALID_WORKSTATION_ACCOUNT" },
	{ MAPI_E_INVALID_ACCESS_TIME, "MAPI_E_INVALID_ACCESS_TIME" },
	{ MAPI_E_ACCOUNT_DISABLED, "MAPI_E_ACCOUNT_DISABLED" },
	{ MAPI_E_END_OF_SESSION, "MAPI_E_END_OF_SESSION" },
	{ MAPI_E_UNKNOWN_ENTRYID, "MAPI_E_UNKNOWN_ENTRYID" },
	{ MAPI_E_MISSING_REQUIRED_COLUMN, "MAPI_E_MISSING_REQUIRED_COLUMN" },
	{ MAPI_W_NO_SERVICE, "MAPI_W_NO_SERVICE" },
	{ MAPI_E_BAD_VALUE, "MAPI_E_BAD_VALUE" },
	{ MAPI_E_INVALID_TYPE, "MAPI_E_INVALID_TYPE" },
	{ MAPI_E_TYPE_NO_SUPPORT, "MAPI_E_TYPE_NO_SUPPORT" },
	{ MAPI_E_UNEXPECTED_TYPE, "MAPI_E_UNEXPECTED_TYPE" },
	{ MAPI_E_TOO_BIG, "MAPI_E_TOO_BIG" },
	{ MAPI_E_DECLINE_COPY, "MAPI_E_DECLINE_COPY" },
	{ MAPI_E_UNEXPECTED_ID, "MAPI_E_UNEXPECTED_ID" },
	{ MAPI_W_ERRORS_RETURNED, "MAPI_W_ERRORS_RETURNED" },
	{ MAPI_E_UNABLE_TO_COMPLETE, "MAPI_E_UNABLE_TO_COMPLETE" },
	{ MAPI_E_TIMEOUT, "MAPI_E_TIMEOUT" },
	{ MAPI_E_TABLE_EMPTY, "MAPI_E_TABLE_EMPTY" },
	{ MAPI_E_TABLE_TOO_BIG, "MAPI_E_TABLE_TOO_BIG" },
	{ MAPI_E_INVALID_BOOKMARK, "MAPI_E_INVALID_BOOKMARK" },
	{ MAPI_W_POSITION_CHANGED, "MAPI_W_POSITION_CHANGED" },
	{ MAPI_W_APPROX_COUNT, "MAPI_W_APPROX_COUNT" },
	{ MAPI_E_WAIT, "MAPI_E_WAIT" },
	{ MAPI_E_CANCEL, "MAPI_E_CANCEL" },
	{ MAPI_E_NOT_ME, "MAPI_E_NOT_ME" },
	{ MAPI_W_CANCEL_MESSAGE, "MAPI_W_CANCEL_MESSAGE" },
	{ MAPI_E_CORRUPT_STORE, "MAPI_E_CORRUPT_STORE" },
	{ MAPI_E_NOT_IN_QUEUE, "MAPI_E_NOT_IN_QUEUE" },
	{ MAPI_E_NO_SUPPRESS, "MAPI_E_NO_SUPPRESS" },
	{ MAPI_E_COLLISION, "MAPI_E_COLLISION" },
	{ MAPI_E_NOT_INITIALIZED, "MAPI_E_NOT_INITIALIZED" },
	{ MAPI_E_NON_STANDARD, "MAPI_E_NON_STANDARD" },
	{ MAPI_E_NO_RECIPIENTS, "MAPI_E_NO_RECIPIENTS" },
	{ MAPI_E_SUBMITTED, "MAPI_E_SUBMITTED" },
	{ MAPI_E_HAS_FOLDERS, "MAPI_E_HAS_FOLDERS" },
	{ MAPI_E_HAS_MESAGES, "MAPI_E_HAS_MESAGES" },
	{ MAPI_E_FOLDER_CYCLE, "MAPI_E_FOLDER_CYCLE" },
	{ MAPI_E_LOCKID_LIMIT, "MAPI_E_LOCKID_LIMIT" },
	{ MAPI_W_PARTIAL_COMPLETION, "MAPI_W_PARTIAL_COMPLETION" },
	{ MAPI_E_AMBIGUOUS_RECIP, "MAPI_E_AMBIGUOUS_RECIP" },
	{ SYNC_E_OBJECT_DELETED, "SYNC_E_OBJECT_DELETED" },
	{ SYNC_E_IGNORE, "SYNC_E_IGNORE" },
	{ SYNC_E_CONFLICT, "SYNC_E_CONFLICT" },
	{ SYNC_E_NO_PARENT, "SYNC_E_NO_PARENT" },
	{ SYNC_E_CYCLE_DETECTED, "SYNC_E_CYCLE_DETECTED" },
	{ SYNC_E_UNSYNCHRONIZED, "SYNC_E_UNSYNCHRONIZED" },
	{ SYNC_W_PROGRESS, "SYNC_W_PROGRESS" },
	{ SYNC_W_CLIENT_CHANGE_NEWER, "SYNC_W_CLIENT_CHANGE_NEWER" },
	{ MAPI_E_NAMED_PROP_QUOTA_EXCEEDED, "MAPI_E_NAMED_PROP_QUOTA_EXCEEDED" },
	{ MAPI_E_NOT_IMPLEMENTED, "MAPI_E_NOT_IMPLEMENTED" },
	{ MAPI_E_NO_ACCESS, "MAPI_E_NO_ACCESS" },
	{ MAPI_E_NOT_ENOUGH_MEMORY, "MAPI_E_NOT_ENOUGH_MEMORY" },
	{ MAPI_E_INVALID_PARAMETER, "MAPI_E_INVALID_PARAMETER" },
	{ ecJetError, "ecJetError" },
	{ ecUnknownUser, "ecUnknownUser" },
	{ ecExiting, "ecExiting" },
	{ ecBadConfig, "ecBadConfig" },
	{ ecUnknownCodePage, "ecUnknownCodePage" },
	{ ecMemory, "ecMemory" },
	{ ecLoginPerm, "ecLoginPerm" },
	{ ecDatabaseRolledBack, "ecDatabaseRolledBack" },
	{ ecDatabaseCopiedError, "ecDatabaseCopiedError" },
	{ ecAuditNotAllowed, "ecAuditNotAllowed" },
	{ ecZombieUser, "ecZombieUser" },
	{ ecUnconvertableACL, "ecUnconvertableACL" },
	{ ecNoFreeJses, "ecNoFreeJses" },
	{ ecDifferentJses, "ecDifferentJses" },
	{ ecFileRemove, "ecFileRemove" },
	{ ecParameterOverflow, "ecParameterOverflow" },
	{ ecBadVersion, "ecBadVersion" },
	{ ecTooManyCols, "ecTooManyCols" },
	{ ecHaveMore, "ecHaveMore" },
	{ ecDatabaseError, "ecDatabaseError" },
	{ ecIndexNameTooBig, "ecIndexNameTooBig" },
	{ ecUnsupportedProp, "ecUnsupportedProp" },
	{ ecMsgNotSaved, "ecMsgNotSaved" },
	{ ecUnpubNotif, "ecUnpubNotif" },
	{ ecDifferentRoot, "ecDifferentRoot" },
	{ ecBadFolderName, "ecBadFolderName" },
	{ ecAttachOpen, "ecAttachOpen" },
	{ ecInvClpsState, "ecInvClpsState" },
	{ ecSkipMyChildren, "ecSkipMyChildren" },
	{ ecSearchFolder, "ecSearchFolder" },
	{ ecNotSearchFolder, "ecNotSearchFolder" },
	{ ecFolderSetReceive, "ecFolderSetReceive" },
	{ ecNoReceiveFolder, "ecNoReceiveFolder" },
	{ ecNoDelSubmitMsg, "ecNoDelSubmitMsg" },
	{ ecInvalidRecips, "ecInvalidRecips" },
	{ ecNoReplicaHere, "ecNoReplicaHere" },
	{ ecNoReplicaAvailable, "ecNoReplicaAvailable" },
	{ ecPublicMDB, "ecPublicMDB" },
	{ ecNotPublicMDB, "ecNotPublicMDB" },
	{ ecRecordNotFound, "ecRecordNotFound" },
	{ ecReplConflict, "ecReplConflict" },
	{ ecFxBufferOverrun, "ecFxBufferOverrun" },
	{ ecFxBufferEmpty, "ecFxBufferEmpty" },
	{ ecFxPartialValue, "ecFxPartialValue" },
	{ ecFxNoRoom, "ecFxNoRoom" },
	{ ecMaxTimeExpired, "ecMaxTimeExpired" },
	{ ecDstError, "ecDstError" },
	{ ecMDBNotInit, "ecMDBNotInit" },
	{ ecWrongServer, "ecWrongServer" },
	{ ecBufferTooSmall, "ecBufferTooSmall" },
	{ ecRequiresRefResolve, "ecRequiresRefResolve" },
	{ ecServerPaused, "ecServerPaused" },
	{ ecServerBusy, "ecServerBusy" },
	{ ecNoSuchLogon, "ecNoSuchLogon" },
	{ ecLoadLibFailed, "ecLoadLibFailed" },
	{ ecObjAlreadyConfig, "ecObjAlreadyConfig" },
	{ ecObjNotConfig, "ecObjNotConfig" },
	{ ecDataLoss, "ecDataLoss" },
	{ ecMaxSendThreadExceeded, "ecMaxSendThreadExceeded" },
	{ ecFxErrorMarker, "ecFxErrorMarker" },
	{ ecNoFreeJtabs, "ecNoFreeJtabs" },
	{ ecNotPrivateMDB, "ecNotPrivateMDB" },
	{ ecIsintegMDB, "ecIsintegMDB" },
	{ ecRecoveryMDBMismatch, "ecRecoveryMDBMismatch" },
	{ ecTableMayNotBeDeleted, "ecTableMayNotBeDeleted" },
	{ ecRpcRegisterIf, "ecRpcRegisterIf" },
	{ ecRpcListen, "ecRpcListen" },
	{ ecRpcFormat, "ecRpcFormat" },
	{ ecNoCopyTo, "ecNoCopyTo" },
	{ ecNullObject, "ecNullObject" },
	{ ecRpcAuthentication, "ecRpcAuthentication" },
	{ ecRpcBadAuthenticationLevel, "ecRpcBadAuthenticationLevel" },
	{ ecNullCommentRestriction, "ecNullCommentRestriction" },
	{ ecRulesLoadError, "ecRulesLoadError" },
	{ ecRulesDelivErr, "ecRulesDelivErr" },
	{ ecRulesParsingErr, "ecRulesParsingErr" },
	{ ecRulesCreateDaeErr, "ecRulesCreateDaeErr" },
	{ ecRulesCreateDamErr, "ecRulesCreateDamErr" },
	{ ecRulesNoMoveCopyFolder, "ecRulesNoMoveCopyFolder" },
	{ ecRulesNoFolderRights, "ecRulesNoFolderRights" },
	{ ecMessageTooBig, "ecMessageTooBig" },
	{ ecFormNotValid, "ecFormNotValid" },
	{ ecNotAuthorized, "ecNotAuthorized" },
	{ ecDeleteMessage, "ecDeleteMessage" },
	{ ecBounceMessage, "ecBounceMessage" },
	{ ecQuotaExceeded, "ecQuotaExceeded" },
	{ ecMaxSubmissionExceeded, "ecMaxSubmissionExceeded" },
	{ ecMaxAttachmentExceeded, "ecMaxAttachmentExceeded" },
	{ ecSendAsDenied, "ecSendAsDenied" },
	{ ecShutoffQuotaExceeded, "ecShutoffQuotaExceeded" },
	{ ecMaxObjsExceeded, "ecMaxObjsExceeded" },
	{ ecClientVerDisallowed, "ecClientVerDisallowed" },
	{ ecRpcHttpDisallowed, "ecRpcHttpDisallowed" },
	{ ecCachedModeRequired, "ecCachedModeRequired" },
	{ ecFolderNotCleanedUp, "ecFolderNotCleanedUp" },
	{ ecFmtError, "ecFmtError" },
	{ ecNotExpanded, "ecNotExpanded" },
	{ ecNotCollapsed, "ecNotCollapsed" },
	{   ecLeaf, "ecLeaf" },
	{ ecUnregisteredNamedProp, "ecUnregisteredNamedProp" },
	{ ecFolderDisabled, "ecFolderDisabled" },
	{ ecDomainError, "ecDomainError" },
	{ ecNoCreateRight, "ecNoCreateRight" },
	{ ecPublicRoot, "ecPublicRoot" },
	{ ecNoReadRight, "ecNoReadRight" },
	{ ecNoCreateSubfolderRight, "ecNoCreateSubfolderRight" },
	{ ecDstNullObject, "ecDstNullObject" },
	{ ecMsgCycle, "ecMsgCycle" },
	{ ecTooManyRecips, "ecTooManyRecips" },
	{ ecVirusScanInProgress, "ecVirusScanInProgress" },
	{ ecVirusDetected, "ecVirusDetected" },
	{ ecMailboxInTransit, "ecMailboxInTransit" },
	{ ecBackupInProgress, "ecBackupInProgress" },
	{ ecVirusMessageDeleted, "ecVirusMessageDeleted" },
	{ ecInvalidBackupSequence, "ecInvalidBackupSequence" },
	{ ecInvalidBackupSize, "ecInvalidBackupSize" },
	{ ecTooManyBackupsInProgress, "ecTooManyBackupsInProgress" },
	{ ecRestoreInProgress, "ecRestoreInProgress" },
	{ ecDuplicateObject, "ecDuplicateObject" },
	{ ecObjectNotFound, "ecObjectNotFound" },
	{ ecFixupReplyRule, "ecFixupReplyRule" },
	{ ecTemplateNotFound, "ecTemplateNotFound" },
	{ ecRuleException, "ecRuleException" },
	{ ecDSNoSuchObject, "ecDSNoSuchObject" },
	{ ecMessageAlreadyTombstoned, "ecMessageAlreadyTombstoned" },
	{ ecRequiresRWTransaction, "ecRequiresRWTransaction" },
	{ ecPaused, "ecPaused" },
	{ ecWrongMailbox, "ecWrongMailbox" },
	{ ecChgPassword, "ecChgPassword" },
	{ ecPwdExpired, "ecPwdExpired" },
	{ ecInvWkstn, "ecInvWkstn" },
	{ ecInvLogonHrs, "ecInvLogonHrs" },
	{ ecAcctDisabled, "ecAcctDisabled" },
	{ ecRuleVersion, "ecRuleVersion" },
	{ ecRuleFormat, "ecRuleFormat" },
	{ ecRuleSendAsDenied, "ecRuleSendAsDenied" },
	{ ecNoServerSupport, "ecNoServerSupport" },
	{ ecLockTimedOut, "ecLockTimedOut" },
	{ ecObjectLocked, "ecObjectLocked" },
	{ ecInvalidLockNamespace, "ecInvalidLockNamespace" },
	{ ecMessageDeleted, "ecMessageDeleted" },
	{ ecProtocolDisabled, "ecProtocolDisabled" },
	{ ecClearTextLogonDisabled, "ecClearTextLogonDisabled" },
	{ ecRejected, "ecRejected" },
	{ ecAmbiguousAlias, "ecAmbiguousAlias" },
	{ ecUnknownMailbox, "ecUnknownMailbox" },
	{ ecExpReserved, "ecExpReserved" },
	{ ecExpParseDepth, "ecExpParseDepth" },
	{ ecExpFuncArgType, "ecExpFuncArgType" },
	{ ecExpSyntax, "ecExpSyntax" },
	{ ecExpBadStrToken, "ecExpBadStrToken" },
	{ ecExpBadColToken, "ecExpBadColToken" },
	{ ecExpTypeMismatch, "ecExpTypeMismatch" },
	{ ecExpOpNotSupported, "ecExpOpNotSupported" },
	{ ecExpDivByZero, "ecExpDivByZero" },
	{ ecExpUnaryArgType, "ecExpUnaryArgType" },
	{ ecNotLocked, "ecNotLocked" },
	{ ecClientEvent, "ecClientEvent" },
	{ ecCorruptEvent, "ecCorruptEvent" },
	{ ecCorruptWatermark, "ecCorruptWatermark" },
	{ ecEventError, "ecEventError" },
	{ ecWatermarkError, "ecWatermarkError" },
	{ ecNonCanonicalACL, "ecNonCanonicalACL" },
	{ ecMailboxDisabled, "ecMailboxDisabled" },
	{ ecRulesFolderOverQuota, "ecRulesFolderOverQuota" },
	{ ecADUnavailable, "ecADUnavailable" },
	{ ecADError, "ecADError" },
	{ ecADNotFound, "ecADNotFound" },
	{ ecADPropertyError, "ecADPropertyError" },
	{ ecNotEncrypted, "ecNotEncrypted" },
	{ ecRpcServerTooBusy, "ecRpcServerTooBusy" },
	{ ecRpcOutOfMemory, "ecRpcOutOfMemory" },
	{ ecRpcServerOutOfMemory, "ecRpcServerOutOfMemory" },
	{ ecRpcOutOfResources, "ecRpcOutOfResources" },
	{ ecRpcServerUnavailable, "ecRpcServerUnavailable" },
	{ ecSecureSubmitError, "ecSecureSubmitError" },
	{ ecEventsDeleted, "ecEventsDeleted" },
	{ ecSubsystemStopping, "ecSubsystemStopping" },
	{ ecSAUnavailable, "ecSAUnavailable" },
	{ ecCIStopping, "ecCIStopping" },
	{ ecFxInvalidState, "ecFxInvalidState" },
	{ ecFxUnexpectedMarker, "ecFxUnexpectedMarker" },
	{ ecDuplicateDelivery, "ecDuplicateDelivery" },
	{ ecConditionViolation, "ecConditionViolation" },
	{ ecRpcInvalidHandle, "ecRpcInvalidHandle" },
	{ ecEventNotFound, "ecEventNotFound" },
	 { MAPI_E_RESERVED, NULL }
};

_PUBLIC_ void mapi_errstr(const char *function, enum MAPISTATUS mapi_code)
{
	struct ndr_print	ndr_print;
	
	ndr_print.depth = 1;
	ndr_print.print = ndr_print_debug_helper;
	ndr_print.no_newline = false;
	ndr_print_MAPISTATUS(&ndr_print, function, mapi_code);
}

_PUBLIC_ const char *mapi_get_errstr(enum MAPISTATUS mapi_code)
{
	uint32_t i;
	
	for (i = 0; mapi_retval[i].name; i++) {
		if (mapi_retval[i].err == mapi_code) {
			return mapi_retval[i].name;
		}
	}
	
	return NULL;
}
