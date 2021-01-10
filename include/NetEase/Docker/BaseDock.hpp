// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetEase.Docker.IDock
#include "NetEase/Docker/IDock.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: NetEase::Docker
namespace NetEase::Docker {
  // Forward declaring type: UploadScoreData
  struct UploadScoreData;
  // Forward declaring type: RequestHighscoreData
  struct RequestHighscoreData;
}
// Completed forward declares
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Size: 0x30
  // Autogenerated type: NetEase.Docker.BaseDock
  // [] Offset: FFFFFFFF
  class BaseDock : public ::Il2CppObject/*, public NetEase::Docker::IDock*/ {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xDB2960
    // [CompilerGeneratedAttribute] Offset: 0xDB2960
    // private System.Action`1<NetEase.Docker.InitializeData> OnInitFinished
    // Size: 0x8
    // Offset: 0x10
    System::Action_1<NetEase::Docker::InitializeData>* OnInitFinished;
    // Field size check
    static_assert(sizeof(System::Action_1<NetEase::Docker::InitializeData>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xDB299C
    // [CompilerGeneratedAttribute] Offset: 0xDB299C
    // private System.Action`1<NetEase.Docker.LoginData> OnLoginFinished
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<NetEase::Docker::LoginData>* OnLoginFinished;
    // Field size check
    static_assert(sizeof(System::Action_1<NetEase::Docker::LoginData>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xDB29D8
    // [CompilerGeneratedAttribute] Offset: 0xDB29D8
    // private System.Action`1<NetEase.Docker.LogoutData> OnLogoutFinished
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<NetEase::Docker::LogoutData>* OnLogoutFinished;
    // Field size check
    static_assert(sizeof(System::Action_1<NetEase::Docker::LogoutData>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xDB2A14
    // [CompilerGeneratedAttribute] Offset: 0xDB2A14
    // private System.Action`1<NetEase.Docker.ReceivedHighscoreData> OnHighscoreReceived
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<NetEase::Docker::ReceivedHighscoreData>* OnHighscoreReceived;
    // Field size check
    static_assert(sizeof(System::Action_1<NetEase::Docker::ReceivedHighscoreData>*) == 0x8);
    // Creating value type constructor for type: BaseDock
    BaseDock(System::Action_1<NetEase::Docker::InitializeData>* OnInitFinished_ = {}, System::Action_1<NetEase::Docker::LoginData>* OnLoginFinished_ = {}, System::Action_1<NetEase::Docker::LogoutData>* OnLogoutFinished_ = {}, System::Action_1<NetEase::Docker::ReceivedHighscoreData>* OnHighscoreReceived_ = {}) noexcept : OnInitFinished{OnInitFinished_}, OnLoginFinished{OnLoginFinished_}, OnLogoutFinished{OnLogoutFinished_}, OnHighscoreReceived{OnHighscoreReceived_} {}
    // Creating interface conversion operator: operator NetEase::Docker::IDock
    operator NetEase::Docker::IDock() noexcept {
      return *reinterpret_cast<NetEase::Docker::IDock*>(this);
    }
    // public System.Void SetInitializeCallback(System.Action`1<NetEase.Docker.InitializeData> callbackAction)
    // Offset: 0x1A04A50
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::SetInitializeCallback(System.Action`1<NetEase.Docker.InitializeData> callbackAction)
    void SetInitializeCallback(System::Action_1<NetEase::Docker::InitializeData>* callbackAction);
    // public System.Void Initialize()
    // Offset: 0x1A04A58
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::Initialize()
    void Initialize();
    // public System.Void SetLoginCallback(System.Action`1<NetEase.Docker.LoginData> callbackAction)
    // Offset: 0x1A04ABC
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::SetLoginCallback(System.Action`1<NetEase.Docker.LoginData> callbackAction)
    void SetLoginCallback(System::Action_1<NetEase::Docker::LoginData>* callbackAction);
    // public System.Void Login()
    // Offset: 0x1A04AC4
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::Login()
    void Login();
    // public System.Void SetLogoutCallback(System.Action`1<NetEase.Docker.LogoutData> callbackAction)
    // Offset: 0x1A04B54
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::SetLogoutCallback(System.Action`1<NetEase.Docker.LogoutData> callbackAction)
    void SetLogoutCallback(System::Action_1<NetEase::Docker::LogoutData>* callbackAction);
    // public System.Void Logout()
    // Offset: 0x1A04B5C
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::Logout()
    void Logout();
    // public System.Void UploadScore(NetEase.Docker.UploadScoreData scoreData)
    // Offset: 0x1A04BC0
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::UploadScore(NetEase.Docker.UploadScoreData scoreData)
    void UploadScore(NetEase::Docker::UploadScoreData scoreData);
    // public System.Boolean WillProvideHighscore()
    // Offset: 0x1A04BC4
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Boolean IDock::WillProvideHighscore()
    bool WillProvideHighscore();
    // public System.Void SetHighscoreReceivedCallback(System.Action`1<NetEase.Docker.ReceivedHighscoreData> callbackAction)
    // Offset: 0x1A04BCC
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::SetHighscoreReceivedCallback(System.Action`1<NetEase.Docker.ReceivedHighscoreData> callbackAction)
    void SetHighscoreReceivedCallback(System::Action_1<NetEase::Docker::ReceivedHighscoreData>* callbackAction);
    // public System.Void RequestHighscoreList(NetEase.Docker.RequestHighscoreData highscoreRequest)
    // Offset: 0x1A04BD4
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::RequestHighscoreList(NetEase.Docker.RequestHighscoreData highscoreRequest)
    void RequestHighscoreList(NetEase::Docker::RequestHighscoreData highscoreRequest);
    // public System.Void UpdateLoop()
    // Offset: 0x1A04E4C
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::UpdateLoop()
    void UpdateLoop();
    // public System.Void .ctor()
    // Offset: 0x1A04E50
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseDock* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NetEase::Docker::BaseDock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseDock*, creationType>()));
    }
  }; // NetEase.Docker.BaseDock
  static check_size<sizeof(BaseDock), 40 + sizeof(System::Action_1<NetEase::Docker::ReceivedHighscoreData>*)> __NetEase_Docker_BaseDockSizeCheck;
  static_assert(sizeof(BaseDock) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::BaseDock*, "NetEase.Docker", "BaseDock");
#pragma pack(pop)
