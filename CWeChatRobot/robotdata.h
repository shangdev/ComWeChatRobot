#pragma once
#include "InjertDll.h"
#include "SendImage.h"
#include "SendText.h"
#include "SendFile.h"
#include "SendArticle.h"
#include "SendCard.h"
#include "SendAtText.h"
#include "FriendList.h"
#include "SearchContact.h"
#include "SelfInfo.h"
#include "CheckFriendStatus.h"
#include "ReceiveMessage.h"
#include "GetChatRoomMembers.h"
#include "GetDbHandles.h"
#include "DbExecuteSql.h"
#include "DbBackup.h"
#include "VerifyFriendApply.h"
#include "AddFriend.h"
#include "wechatver.h"

extern HANDLE hProcess;
extern DWORD SendImageOffset;
extern DWORD SendTextOffset;
extern DWORD SendFileOffset;
extern DWORD SendArticleOffset;
extern DWORD SendCardOffset;
extern DWORD SendAtTextOffset;

extern DWORD GetFriendListInitOffset;
extern DWORD GetFriendListRemoteOffset;
extern DWORD GetFriendListFinishOffset;

extern DWORD GetWxUserInfoOffset;
extern DWORD DeleteUserInfoCacheOffset;
extern DWORD SearchContactByNetRemoteOffset;

extern DWORD VerifyFriendApplyOffset;

extern DWORD GetSelfInfoOffset;
extern DWORD DeleteSelfInfoCacheOffset;
extern wstring SelfInfoString;

extern DWORD CheckFriendStatusInitRemoteOffset;
extern DWORD CheckFriendStatusRemoteOffset;
extern DWORD CheckFriendStatusFinishRemoteOffset;

extern DWORD HookReceiveMessageRemoteOffset;
extern DWORD UnHookReceiveMessageRemoteOffset;
extern DWORD GetHeadMessageRemoteOffset;
extern DWORD PopHeadMessageRemoteOffset;

extern DWORD GetChatRoomMembersRemoteOffset;

extern DWORD GetDbHandlesRemoteOffset;
extern DWORD ExecuteSQLRemoteOffset;
extern DWORD SelectDataRemoteOffset;
extern DWORD BackupSQLiteDBRemoteOffset;

extern DWORD AddFriendByWxidRemoteOffset;
extern DWORD AddFriendByV3RemoteOffset;
extern DWORD AddBrandContactRemoteOffset;

extern DWORD HookImageMsgRemoteOffset;
extern DWORD UnHookImageMsgRemoteOffset;
extern DWORD HookVoiceMsgRemoteOffset;
extern DWORD UnHookVoiceMsgRemoteOffset;

extern DWORD ChangeWeChatVerRemoteOffset;


#define dllname L"DWeChatRobot.dll"

#define SendTextRemote "SendTextRemote"
#define SendImageRemote "SendImageRemote"
#define SendFileRemote "SendFileRemote"
#define SendArticleRemote "SendArticleRemote"
#define SendCardRemote "SendCardRemote"
#define SendAtTextRemote "SendAtTextRemote"

#define GetFriendListInit "GetFriendListInit"
#define GetFriendListRemote "GetFriendListRemote"
#define GetFriendListFinish "GetFriendListFinish"

#define GetWxUserInfoRemote "GetWxUserInfoRemote"
#define DeleteUserInfoCacheRemote "DeleteUserInfoCacheRemote"

#define GetSelfInfoRemote "GetSelfInfoRemote"
#define DeleteSelfInfoCacheRemote "DeleteSelfInfoCacheRemote"
#define SearchContactByNetRemote "SearchContactByNetRemote"

#define VerifyFriendApplyRemote "VerifyFriendApplyRemote"

#define CheckFriendStatusInitRemote "CheckFriendStatusInitRemote"
#define CheckFriendStatusRemote "CheckFriendStatusRemote"
#define CheckFriendStatusFinishRemote "CheckFriendStatusFinishRemote"

#define HookReceiveMessageRemote "HookReceiveMessage"
#define UnHookReceiveMessageRemote "UnHookReceiveMessage"
#define GetHeadMessageRemote "GetHeadMessage"
#define PopHeadMessageRemote "PopHeadMessage"

#define GetChatRoomMembersRemote "GetChatRoomMembersRemote"

#define GetDbHandlesRemote "GetDbHandlesRemote"
#define ExecuteSQLRemote "ExecuteSQLRemote"
#define SelectDataRemote "SelectDataRemote"
#define BackupSQLiteDBRemote "BackupSQLiteDBRemote"

#define AddFriendByWxidRemote "AddFriendByWxidRemote"
#define AddFriendByV3Remote "AddFriendByV3Remote"
#define AddBrandContactRemote "AddBrandContactRemote"

#define HookImageMsgRemote "HookImageMsgRemote"
#define UnHookImageMsgRemote "UnHookImageMsg"
#define HookVoiceMsgRemote "HookVoiceMsgRemote"
#define UnHookVoiceMsgRemote "UnHookVoiceMsg"

#define ChangeWeChatVerRemote "ChangeWeChatVerRemote"