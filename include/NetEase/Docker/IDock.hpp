// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: NetEase.Docker.InitializeData
#include "NetEase/Docker/InitializeData.hpp"
// Including type: NetEase.Docker.LoginData
#include "NetEase/Docker/LoginData.hpp"
// Including type: NetEase.Docker.LogoutData
#include "NetEase/Docker/LogoutData.hpp"
// Including type: NetEase.Docker.ReceivedHighscoreData
#include "NetEase/Docker/ReceivedHighscoreData.hpp"
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
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: NetEase.Docker.IDock
  class IDock {
    public:
    // Creating value type constructor for type: IDock
    IDock() noexcept {}
    // public System.Void SetInitializeCallback(System.Action`1<NetEase.Docker.InitializeData> callbackAction)
    // Offset: 0xFFFFFFFF
    void SetInitializeCallback(System::Action_1<NetEase::Docker::InitializeData>* callbackAction);
    // public System.Void Initialize()
    // Offset: 0xFFFFFFFF
    void Initialize();
    // public System.Void SetLoginCallback(System.Action`1<NetEase.Docker.LoginData> callbackAction)
    // Offset: 0xFFFFFFFF
    void SetLoginCallback(System::Action_1<NetEase::Docker::LoginData>* callbackAction);
    // public System.Void Login()
    // Offset: 0xFFFFFFFF
    void Login();
    // public System.Void SetLogoutCallback(System.Action`1<NetEase.Docker.LogoutData> callbackAction)
    // Offset: 0xFFFFFFFF
    void SetLogoutCallback(System::Action_1<NetEase::Docker::LogoutData>* callbackAction);
    // public System.Void Logout()
    // Offset: 0xFFFFFFFF
    void Logout();
    // public System.Void UploadScore(NetEase.Docker.UploadScoreData scoreData)
    // Offset: 0xFFFFFFFF
    void UploadScore(NetEase::Docker::UploadScoreData scoreData);
    // public System.Boolean WillProvideHighscore()
    // Offset: 0xFFFFFFFF
    bool WillProvideHighscore();
    // public System.Void SetHighscoreReceivedCallback(System.Action`1<NetEase.Docker.ReceivedHighscoreData> callbackAction)
    // Offset: 0xFFFFFFFF
    void SetHighscoreReceivedCallback(System::Action_1<NetEase::Docker::ReceivedHighscoreData>* callbackAction);
    // public System.Void RequestHighscoreList(NetEase.Docker.RequestHighscoreData highscoreRequest)
    // Offset: 0xFFFFFFFF
    void RequestHighscoreList(NetEase::Docker::RequestHighscoreData highscoreRequest);
    // public System.Void UpdateLoop()
    // Offset: 0xFFFFFFFF
    void UpdateLoop();
  }; // NetEase.Docker.IDock
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::IDock*, "NetEase.Docker", "IDock");
// Writing MetadataGetter for method: NetEase::Docker::IDock::SetInitializeCallback
// Il2CppName: SetInitializeCallback
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NetEase::Docker::IDock::Initialize
// Il2CppName: Initialize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NetEase::Docker::IDock::SetLoginCallback
// Il2CppName: SetLoginCallback
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NetEase::Docker::IDock::Login
// Il2CppName: Login
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NetEase::Docker::IDock::SetLogoutCallback
// Il2CppName: SetLogoutCallback
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NetEase::Docker::IDock::Logout
// Il2CppName: Logout
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NetEase::Docker::IDock::UploadScore
// Il2CppName: UploadScore
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NetEase::Docker::IDock::WillProvideHighscore
// Il2CppName: WillProvideHighscore
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NetEase::Docker::IDock::SetHighscoreReceivedCallback
// Il2CppName: SetHighscoreReceivedCallback
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NetEase::Docker::IDock::RequestHighscoreList
// Il2CppName: RequestHighscoreList
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NetEase::Docker::IDock::UpdateLoop
// Il2CppName: UpdateLoop
// Cannot perform method pointer template specialization from operators!
