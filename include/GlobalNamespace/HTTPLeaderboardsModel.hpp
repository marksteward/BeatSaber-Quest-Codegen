// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnlineServices.ILeaderboardsModel
#include "OnlineServices/ILeaderboardsModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: OnlineServices::API
namespace OnlineServices::API {
  // Forward declaring type: IUserLoginDtoDataSource
  class IUserLoginDtoDataSource;
  // Forward declaring type: IApiLeaderboardsModel
  class IApiLeaderboardsModel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: GetLeaderboardFilterData
  struct GetLeaderboardFilterData;
  // Forward declaring type: LevelScoreResultsData
  struct LevelScoreResultsData;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: HTTPLeaderboardsModel
  // [TokenAttribute] Offset: FFFFFFFF
  class HTTPLeaderboardsModel : public ::Il2CppObject/*, public OnlineServices::ILeaderboardsModel*/ {
    public:
    // Nested type: GlobalNamespace::HTTPLeaderboardsModel::$$c
    class $$c;
    // Nested type: GlobalNamespace::HTTPLeaderboardsModel::$GetLeaderboardEntriesAsync$d__10
    struct $GetLeaderboardEntriesAsync$d__10;
    // Nested type: GlobalNamespace::HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__11
    struct $SendLevelScoreResultAsync$d__11;
    // [InjectAttribute] Offset: 0xEAF1E8
    // private readonly OnlineServices.API.IUserLoginDtoDataSource _userLoginDataSource
    // Size: 0x8
    // Offset: 0x10
    OnlineServices::API::IUserLoginDtoDataSource* userLoginDataSource;
    // Field size check
    static_assert(sizeof(OnlineServices::API::IUserLoginDtoDataSource*) == 0x8);
    // [InjectAttribute] Offset: 0xEAF1F8
    // private readonly OnlineServices.API.IApiLeaderboardsModel _apiLeaderboardsModel
    // Size: 0x8
    // Offset: 0x18
    OnlineServices::API::IApiLeaderboardsModel* apiLeaderboardsModel;
    // Field size check
    static_assert(sizeof(OnlineServices::API::IApiLeaderboardsModel*) == 0x8);
    // private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<::Il2CppString*>* scoreForLeaderboardDidUploadEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // private readonly System.String _guid
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* guid;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String[] _friendsUserIds
    // Size: 0x8
    // Offset: 0x30
    ::Array<::Il2CppString*>* friendsUserIds;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.String _platformUserId
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* platformUserId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: HTTPLeaderboardsModel
    HTTPLeaderboardsModel(OnlineServices::API::IUserLoginDtoDataSource* userLoginDataSource_ = {}, OnlineServices::API::IApiLeaderboardsModel* apiLeaderboardsModel_ = {}, System::Action_1<::Il2CppString*>* scoreForLeaderboardDidUploadEvent_ = {}, ::Il2CppString* guid_ = {}, ::Array<::Il2CppString*>* friendsUserIds_ = {}, ::Il2CppString* platformUserId_ = {}) noexcept : userLoginDataSource{userLoginDataSource_}, apiLeaderboardsModel{apiLeaderboardsModel_}, scoreForLeaderboardDidUploadEvent{scoreForLeaderboardDidUploadEvent_}, guid{guid_}, friendsUserIds{friendsUserIds_}, platformUserId{platformUserId_} {}
    // Creating interface conversion operator: operator OnlineServices::ILeaderboardsModel
    operator OnlineServices::ILeaderboardsModel() noexcept {
      return *reinterpret_cast<OnlineServices::ILeaderboardsModel*>(this);
    }
    // Get instance field: private readonly OnlineServices.API.IUserLoginDtoDataSource _userLoginDataSource
    OnlineServices::API::IUserLoginDtoDataSource* _get__userLoginDataSource();
    // Set instance field: private readonly OnlineServices.API.IUserLoginDtoDataSource _userLoginDataSource
    void _set__userLoginDataSource(OnlineServices::API::IUserLoginDtoDataSource* value);
    // Get instance field: private readonly OnlineServices.API.IApiLeaderboardsModel _apiLeaderboardsModel
    OnlineServices::API::IApiLeaderboardsModel* _get__apiLeaderboardsModel();
    // Set instance field: private readonly OnlineServices.API.IApiLeaderboardsModel _apiLeaderboardsModel
    void _set__apiLeaderboardsModel(OnlineServices::API::IApiLeaderboardsModel* value);
    // Get instance field: private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    System::Action_1<::Il2CppString*>* _get_scoreForLeaderboardDidUploadEvent();
    // Set instance field: private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    void _set_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // Get instance field: private readonly System.String _guid
    ::Il2CppString* _get__guid();
    // Set instance field: private readonly System.String _guid
    void _set__guid(::Il2CppString* value);
    // Get instance field: private System.String[] _friendsUserIds
    ::Array<::Il2CppString*>* _get__friendsUserIds();
    // Set instance field: private System.String[] _friendsUserIds
    void _set__friendsUserIds(::Array<::Il2CppString*>* value);
    // Get instance field: private System.String _platformUserId
    ::Il2CppString* _get__platformUserId();
    // Set instance field: private System.String _platformUserId
    void _set__platformUserId(::Il2CppString* value);
    // public System.Void add_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0x1F3A644
    void add_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0x1F3A6E8
    void remove_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void LogoutAsync()
    // Offset: 0x1F3A78C
    void LogoutAsync();
    // public System.String GetLeaderboardId(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x1F3A840
    ::Il2CppString* GetLeaderboardId(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Threading.Tasks.Task`1<OnlineServices.GetLeaderboardEntriesResult> GetLeaderboardEntriesAsync(OnlineServices.GetLeaderboardFilterData leaderboardFilterData, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1F3AB20
    System::Threading::Tasks::Task_1<OnlineServices::GetLeaderboardEntriesResult>* GetLeaderboardEntriesAsync(OnlineServices::GetLeaderboardFilterData leaderboardFilterData, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<OnlineServices.SendLeaderboardEntryResult> SendLevelScoreResultAsync(OnlineServices.LevelScoreResultsData levelResultsData, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1F3AC50
    System::Threading::Tasks::Task_1<OnlineServices::SendLeaderboardEntryResult>* SendLevelScoreResultAsync(OnlineServices::LevelScoreResultsData levelResultsData, System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x1F3AD88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HTTPLeaderboardsModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HTTPLeaderboardsModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HTTPLeaderboardsModel*, creationType>()));
    }
  }; // HTTPLeaderboardsModel
  #pragma pack(pop)
  static check_size<sizeof(HTTPLeaderboardsModel), 56 + sizeof(::Il2CppString*)> __GlobalNamespace_HTTPLeaderboardsModelSizeCheck;
  static_assert(sizeof(HTTPLeaderboardsModel) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HTTPLeaderboardsModel*, "", "HTTPLeaderboardsModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::add_scoreForLeaderboardDidUploadEvent
// Il2CppName: add_scoreForLeaderboardDidUploadEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HTTPLeaderboardsModel::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::HTTPLeaderboardsModel::add_scoreForLeaderboardDidUploadEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel*), "add_scoreForLeaderboardDidUploadEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::remove_scoreForLeaderboardDidUploadEvent
// Il2CppName: remove_scoreForLeaderboardDidUploadEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HTTPLeaderboardsModel::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::HTTPLeaderboardsModel::remove_scoreForLeaderboardDidUploadEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel*), "remove_scoreForLeaderboardDidUploadEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::LogoutAsync
// Il2CppName: LogoutAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HTTPLeaderboardsModel::*)()>(&GlobalNamespace::HTTPLeaderboardsModel::LogoutAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel*), "LogoutAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::GetLeaderboardId
// Il2CppName: GetLeaderboardId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::HTTPLeaderboardsModel::*)(GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::HTTPLeaderboardsModel::GetLeaderboardId)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel*), "GetLeaderboardId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::GetLeaderboardEntriesAsync
// Il2CppName: GetLeaderboardEntriesAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<OnlineServices::GetLeaderboardEntriesResult>* (GlobalNamespace::HTTPLeaderboardsModel::*)(OnlineServices::GetLeaderboardFilterData, System::Threading::CancellationToken)>(&GlobalNamespace::HTTPLeaderboardsModel::GetLeaderboardEntriesAsync)> {
  static const MethodInfo* get() {
    static auto* leaderboardFilterData = &::il2cpp_utils::GetClassFromName("OnlineServices", "GetLeaderboardFilterData")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel*), "GetLeaderboardEntriesAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardFilterData, cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::SendLevelScoreResultAsync
// Il2CppName: SendLevelScoreResultAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<OnlineServices::SendLeaderboardEntryResult>* (GlobalNamespace::HTTPLeaderboardsModel::*)(OnlineServices::LevelScoreResultsData, System::Threading::CancellationToken)>(&GlobalNamespace::HTTPLeaderboardsModel::SendLevelScoreResultAsync)> {
  static const MethodInfo* get() {
    static auto* levelResultsData = &::il2cpp_utils::GetClassFromName("OnlineServices", "LevelScoreResultsData")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel*), "SendLevelScoreResultAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelResultsData, cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
