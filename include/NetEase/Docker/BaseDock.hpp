// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetEase.Docker.IDock
#include "NetEase/Docker/IDock.hpp"
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
  // Autogenerated type: NetEase.Docker.BaseDock
  class BaseDock : public ::Il2CppObject/*, public NetEase::Docker::IDock*/ {
    public:
    // private System.Action`1<NetEase.Docker.InitializeData> OnInitFinished
    // Offset: 0x10
    System::Action_1<NetEase::Docker::InitializeData>* OnInitFinished;
    // private System.Action`1<NetEase.Docker.LoginData> OnLoginFinished
    // Offset: 0x18
    System::Action_1<NetEase::Docker::LoginData>* OnLoginFinished;
    // private System.Action`1<NetEase.Docker.LogoutData> OnLogoutFinished
    // Offset: 0x20
    System::Action_1<NetEase::Docker::LogoutData>* OnLogoutFinished;
    // private System.Action`1<NetEase.Docker.ReceivedHighscoreData> OnHighscoreReceived
    // Offset: 0x28
    System::Action_1<NetEase::Docker::ReceivedHighscoreData>* OnHighscoreReceived;
    // Creating interface conversion operator: operator NetEase::Docker::IDock
    operator NetEase::Docker::IDock() noexcept {
      return *reinterpret_cast<NetEase::Docker::IDock*>(this);
    }
    // public System.Void SetInitializeCallback(System.Action`1<NetEase.Docker.InitializeData> callbackAction)
    // Offset: 0x1F74714
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::SetInitializeCallback(System.Action`1<NetEase.Docker.InitializeData> callbackAction)
    void SetInitializeCallback(System::Action_1<NetEase::Docker::InitializeData>* callbackAction);
    // public System.Void Initialize()
    // Offset: 0x1F7471C
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::Initialize()
    void Initialize();
    // public System.Void SetLoginCallback(System.Action`1<NetEase.Docker.LoginData> callbackAction)
    // Offset: 0x1F74780
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::SetLoginCallback(System.Action`1<NetEase.Docker.LoginData> callbackAction)
    void SetLoginCallback(System::Action_1<NetEase::Docker::LoginData>* callbackAction);
    // public System.Void Login()
    // Offset: 0x1F74788
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::Login()
    void Login();
    // public System.Void SetLogoutCallback(System.Action`1<NetEase.Docker.LogoutData> callbackAction)
    // Offset: 0x1F74818
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::SetLogoutCallback(System.Action`1<NetEase.Docker.LogoutData> callbackAction)
    void SetLogoutCallback(System::Action_1<NetEase::Docker::LogoutData>* callbackAction);
    // public System.Void Logout()
    // Offset: 0x1F74820
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::Logout()
    void Logout();
    // public System.Void UploadScore(NetEase.Docker.UploadScoreData scoreData)
    // Offset: 0x1F74884
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::UploadScore(NetEase.Docker.UploadScoreData scoreData)
    void UploadScore(NetEase::Docker::UploadScoreData scoreData);
    // public System.Boolean WillProvideHighscore()
    // Offset: 0x1F74888
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Boolean IDock::WillProvideHighscore()
    bool WillProvideHighscore();
    // public System.Void SetHighscoreReceivedCallback(System.Action`1<NetEase.Docker.ReceivedHighscoreData> callbackAction)
    // Offset: 0x1F74890
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::SetHighscoreReceivedCallback(System.Action`1<NetEase.Docker.ReceivedHighscoreData> callbackAction)
    void SetHighscoreReceivedCallback(System::Action_1<NetEase::Docker::ReceivedHighscoreData>* callbackAction);
    // public System.Void RequestHighscoreList(NetEase.Docker.RequestHighscoreData highscoreRequest)
    // Offset: 0x1F74898
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::RequestHighscoreList(NetEase.Docker.RequestHighscoreData highscoreRequest)
    void RequestHighscoreList(NetEase::Docker::RequestHighscoreData highscoreRequest);
    // public System.Void UpdateLoop()
    // Offset: 0x1F74B10
    // Implemented from: NetEase.Docker.IDock
    // Base method: System.Void IDock::UpdateLoop()
    void UpdateLoop();
    // public System.Void .ctor()
    // Offset: 0x1F74B14
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BaseDock* New_ctor();
  }; // NetEase.Docker.BaseDock
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::BaseDock*, "NetEase.Docker", "BaseDock");
#pragma pack(pop)
