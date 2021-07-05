// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: NetEase.Docker.ReceivedHighscoreData
#include "NetEase/Docker/ReceivedHighscoreData.hpp"
// Including type: NetEase.Docker.InitializeData
#include "NetEase/Docker/InitializeData.hpp"
// Including type: NetEase.Docker.LoginData
#include "NetEase/Docker/LoginData.hpp"
// Including type: NetEase.Docker.LogoutData
#include "NetEase/Docker/LogoutData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: NetEaseManager
  class NetEaseManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::NetEaseManager::$InitAsync$d__11
    struct $InitAsync$d__11;
    // Nested type: GlobalNamespace::NetEaseManager::$LoginAsync$d__13
    struct $LoginAsync$d__13;
    // Nested type: GlobalNamespace::NetEaseManager::$LogoutAsync$d__15
    struct $LogoutAsync$d__15;
    // Nested type: GlobalNamespace::NetEaseManager::$RequestHighscoreDataAsync$d__17
    struct $RequestHighscoreDataAsync$d__17;
    // private System.String _userName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Threading.Tasks.TaskCompletionSource`1<NetEase.Docker.ReceivedHighscoreData> _requestHighscoreDataTaskCompletionSource
    // Size: 0x8
    // Offset: 0x20
    System::Threading::Tasks::TaskCompletionSource_1<NetEase::Docker::ReceivedHighscoreData>* requestHighscoreDataTaskCompletionSource;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<NetEase::Docker::ReceivedHighscoreData>*) == 0x8);
    // private System.Threading.Tasks.TaskCompletionSource`1<NetEase.Docker.InitializeData> _initTaskCompletionSource
    // Size: 0x8
    // Offset: 0x28
    System::Threading::Tasks::TaskCompletionSource_1<NetEase::Docker::InitializeData>* initTaskCompletionSource;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<NetEase::Docker::InitializeData>*) == 0x8);
    // private System.Threading.Tasks.TaskCompletionSource`1<NetEase.Docker.LoginData> _loginTaskCompletionSource
    // Size: 0x8
    // Offset: 0x30
    System::Threading::Tasks::TaskCompletionSource_1<NetEase::Docker::LoginData>* loginTaskCompletionSource;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<NetEase::Docker::LoginData>*) == 0x8);
    // private System.Threading.Tasks.TaskCompletionSource`1<NetEase.Docker.LogoutData> _logoutTaskCompletionSource
    // Size: 0x8
    // Offset: 0x38
    System::Threading::Tasks::TaskCompletionSource_1<NetEase::Docker::LogoutData>* logoutTaskCompletionSource;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<NetEase::Docker::LogoutData>*) == 0x8);
    // Creating value type constructor for type: NetEaseManager
    NetEaseManager(::Il2CppString* userName_ = {}, System::Threading::Tasks::TaskCompletionSource_1<NetEase::Docker::ReceivedHighscoreData>* requestHighscoreDataTaskCompletionSource_ = {}, System::Threading::Tasks::TaskCompletionSource_1<NetEase::Docker::InitializeData>* initTaskCompletionSource_ = {}, System::Threading::Tasks::TaskCompletionSource_1<NetEase::Docker::LoginData>* loginTaskCompletionSource_ = {}, System::Threading::Tasks::TaskCompletionSource_1<NetEase::Docker::LogoutData>* logoutTaskCompletionSource_ = {}) noexcept : userName{userName_}, requestHighscoreDataTaskCompletionSource{requestHighscoreDataTaskCompletionSource_}, initTaskCompletionSource{initTaskCompletionSource_}, loginTaskCompletionSource{loginTaskCompletionSource_}, logoutTaskCompletionSource{logoutTaskCompletionSource_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_supportsLeaderboards()
    // Offset: 0x1015F18
    bool get_supportsLeaderboards();
    // public System.String get_userName()
    // Offset: 0x1018378
    ::Il2CppString* get_userName();
    // protected System.Void Awake()
    // Offset: 0x1018380
    void Awake();
    // protected System.Void Update()
    // Offset: 0x10184AC
    void Update();
    // public System.Threading.Tasks.Task`1<NetEase.Docker.InitializeData> InitAsync()
    // Offset: 0x1018084
    System::Threading::Tasks::Task_1<NetEase::Docker::InitializeData>* InitAsync();
    // private System.Void HandleDidInitialize(NetEase.Docker.InitializeData initializeData)
    // Offset: 0x10184B0
    void HandleDidInitialize(NetEase::Docker::InitializeData initializeData);
    // public System.Threading.Tasks.Task`1<NetEase.Docker.LoginData> LoginAsync()
    // Offset: 0x1018184
    System::Threading::Tasks::Task_1<NetEase::Docker::LoginData>* LoginAsync();
    // private System.Void HandleDidLogin(NetEase.Docker.LoginData loginData)
    // Offset: 0x1018524
    void HandleDidLogin(NetEase::Docker::LoginData loginData);
    // public System.Threading.Tasks.Task`1<NetEase.Docker.LogoutData> LogoutAsync()
    // Offset: 0x1016E58
    System::Threading::Tasks::Task_1<NetEase::Docker::LogoutData>* LogoutAsync();
    // private System.Void HandleDidLogout(NetEase.Docker.LogoutData logoutData)
    // Offset: 0x10185AC
    void HandleDidLogout(NetEase::Docker::LogoutData logoutData);
    // public System.Threading.Tasks.Task`1<NetEase.Docker.ReceivedHighscoreData> RequestHighscoreDataAsync(System.String leaderboardId)
    // Offset: 0x10179A0
    System::Threading::Tasks::Task_1<NetEase::Docker::ReceivedHighscoreData>* RequestHighscoreDataAsync(::Il2CppString* leaderboardId);
    // private System.Void HandleDidReceiveHighscore(NetEase.Docker.ReceivedHighscoreData highscoreData)
    // Offset: 0x1018620
    void HandleDidReceiveHighscore(NetEase::Docker::ReceivedHighscoreData highscoreData);
    // public System.Void UploadHighscore(System.String leaderboardId, System.Int32 score)
    // Offset: 0x1016908
    void UploadHighscore(::Il2CppString* leaderboardId, int score);
    // static public System.Void Log(System.String message)
    // Offset: 0x10186AC
    static void Log(::Il2CppString* message);
    // public System.Void .ctor()
    // Offset: 0x1018714
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetEaseManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetEaseManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetEaseManager*, creationType>()));
    }
  }; // NetEaseManager
  #pragma pack(pop)
  static check_size<sizeof(NetEaseManager), 56 + sizeof(System::Threading::Tasks::TaskCompletionSource_1<NetEase::Docker::LogoutData>*)> __GlobalNamespace_NetEaseManagerSizeCheck;
  static_assert(sizeof(NetEaseManager) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseManager*, "", "NetEaseManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::get_supportsLeaderboards
// Il2CppName: get_supportsLeaderboards
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NetEaseManager::*)()>(&GlobalNamespace::NetEaseManager::get_supportsLeaderboards)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "get_supportsLeaderboards", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::NetEaseManager::*)()>(&GlobalNamespace::NetEaseManager::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::*)()>(&GlobalNamespace::NetEaseManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::*)()>(&GlobalNamespace::NetEaseManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::InitAsync
// Il2CppName: InitAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<NetEase::Docker::InitializeData>* (GlobalNamespace::NetEaseManager::*)()>(&GlobalNamespace::NetEaseManager::InitAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "InitAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::HandleDidInitialize
// Il2CppName: HandleDidInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::*)(NetEase::Docker::InitializeData)>(&GlobalNamespace::NetEaseManager::HandleDidInitialize)> {
  static const MethodInfo* get() {
    static auto* initializeData = &::il2cpp_utils::GetClassFromName("NetEase.Docker", "InitializeData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "HandleDidInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initializeData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::LoginAsync
// Il2CppName: LoginAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<NetEase::Docker::LoginData>* (GlobalNamespace::NetEaseManager::*)()>(&GlobalNamespace::NetEaseManager::LoginAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "LoginAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::HandleDidLogin
// Il2CppName: HandleDidLogin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::*)(NetEase::Docker::LoginData)>(&GlobalNamespace::NetEaseManager::HandleDidLogin)> {
  static const MethodInfo* get() {
    static auto* loginData = &::il2cpp_utils::GetClassFromName("NetEase.Docker", "LoginData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "HandleDidLogin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loginData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::LogoutAsync
// Il2CppName: LogoutAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<NetEase::Docker::LogoutData>* (GlobalNamespace::NetEaseManager::*)()>(&GlobalNamespace::NetEaseManager::LogoutAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "LogoutAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::HandleDidLogout
// Il2CppName: HandleDidLogout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::*)(NetEase::Docker::LogoutData)>(&GlobalNamespace::NetEaseManager::HandleDidLogout)> {
  static const MethodInfo* get() {
    static auto* logoutData = &::il2cpp_utils::GetClassFromName("NetEase.Docker", "LogoutData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "HandleDidLogout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logoutData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::RequestHighscoreDataAsync
// Il2CppName: RequestHighscoreDataAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<NetEase::Docker::ReceivedHighscoreData>* (GlobalNamespace::NetEaseManager::*)(::Il2CppString*)>(&GlobalNamespace::NetEaseManager::RequestHighscoreDataAsync)> {
  static const MethodInfo* get() {
    static auto* leaderboardId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "RequestHighscoreDataAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::HandleDidReceiveHighscore
// Il2CppName: HandleDidReceiveHighscore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::*)(NetEase::Docker::ReceivedHighscoreData)>(&GlobalNamespace::NetEaseManager::HandleDidReceiveHighscore)> {
  static const MethodInfo* get() {
    static auto* highscoreData = &::il2cpp_utils::GetClassFromName("NetEase.Docker", "ReceivedHighscoreData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "HandleDidReceiveHighscore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{highscoreData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::UploadHighscore
// Il2CppName: UploadHighscore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::*)(::Il2CppString*, int)>(&GlobalNamespace::NetEaseManager::UploadHighscore)> {
  static const MethodInfo* get() {
    static auto* leaderboardId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* score = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "UploadHighscore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardId, score});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&GlobalNamespace::NetEaseManager::Log)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
