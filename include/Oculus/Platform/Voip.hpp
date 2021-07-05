// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.CAPI
#include "Oculus/Platform/CAPI.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: VoipMuteState
  struct VoipMuteState;
  // Forward declaring type: SystemVoipStatus
  struct SystemVoipStatus;
  // Forward declaring type: VoipDtxState
  struct VoipDtxState;
  // Forward declaring type: VoipBitrate
  struct VoipBitrate;
  // Forward declaring type: VoipOptions
  class VoipOptions;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: SystemVoipState
  class SystemVoipState;
  // Forward declaring type: NetworkingPeer
  class NetworkingPeer;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Voip
  class Voip : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Voip
    Voip() noexcept {}
    // static public System.Void Start(System.UInt64 userID)
    // Offset: 0x23B1718
    static void Start(uint64_t userID);
    // static public System.Void Accept(System.UInt64 userID)
    // Offset: 0x23B1804
    static void Accept(uint64_t userID);
    // static public System.Void Stop(System.UInt64 userID)
    // Offset: 0x23B18F0
    static void Stop(uint64_t userID);
    // static public System.Void SetMicrophoneFilterCallback(Oculus.Platform.CAPI/FilterCallback callback)
    // Offset: 0x23B19DC
    static void SetMicrophoneFilterCallback(Oculus::Platform::CAPI::FilterCallback* callback);
    // static public System.Void SetMicrophoneMuted(Oculus.Platform.VoipMuteState state)
    // Offset: 0x23B1B00
    static void SetMicrophoneMuted(Oculus::Platform::VoipMuteState state);
    // static public Oculus.Platform.VoipMuteState GetSystemVoipMicrophoneMuted()
    // Offset: 0x23B1BEC
    static Oculus::Platform::VoipMuteState GetSystemVoipMicrophoneMuted();
    // static public Oculus.Platform.SystemVoipStatus GetSystemVoipStatus()
    // Offset: 0x23B1CC8
    static Oculus::Platform::SystemVoipStatus GetSystemVoipStatus();
    // static public Oculus.Platform.VoipDtxState GetIsConnectionUsingDtx(System.UInt64 peerID)
    // Offset: 0x23B1DA4
    static Oculus::Platform::VoipDtxState GetIsConnectionUsingDtx(uint64_t peerID);
    // static public Oculus.Platform.VoipBitrate GetLocalBitrate(System.UInt64 peerID)
    // Offset: 0x23B1E94
    static Oculus::Platform::VoipBitrate GetLocalBitrate(uint64_t peerID);
    // static public Oculus.Platform.VoipBitrate GetRemoteBitrate(System.UInt64 peerID)
    // Offset: 0x23B1F84
    static Oculus::Platform::VoipBitrate GetRemoteBitrate(uint64_t peerID);
    // static public System.Void SetNewConnectionOptions(Oculus.Platform.VoipOptions voipOptions)
    // Offset: 0x23B2074
    static void SetNewConnectionOptions(Oculus::Platform::VoipOptions* voipOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.SystemVoipState> SetSystemVoipSuppressed(System.Boolean suppressed)
    // Offset: 0x23B21DC
    static Oculus::Platform::Request_1<Oculus::Platform::Models::SystemVoipState*>* SetSystemVoipSuppressed(bool suppressed);
    // static public System.Void SetVoipConnectRequestCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetworkingPeer> callback)
    // Offset: 0x23B22F8
    static void SetVoipConnectRequestCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::NetworkingPeer*>::Callback* callback);
    // static public System.Void SetVoipStateChangeCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetworkingPeer> callback)
    // Offset: 0x23B2370
    static void SetVoipStateChangeCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::NetworkingPeer*>::Callback* callback);
    // static public System.Void SetSystemVoipStateNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SystemVoipState> callback)
    // Offset: 0x23B23E8
    static void SetSystemVoipStateNotificationCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::SystemVoipState*>::Callback* callback);
  }; // Oculus.Platform.Voip
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Voip*, "Oculus.Platform", "Voip");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Voip::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t)>(&Oculus::Platform::Voip::Start)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Voip*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Voip::Accept
// Il2CppName: Accept
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t)>(&Oculus::Platform::Voip::Accept)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Voip*), "Accept", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Voip::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t)>(&Oculus::Platform::Voip::Stop)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Voip*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Voip::SetMicrophoneFilterCallback
// Il2CppName: SetMicrophoneFilterCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Oculus::Platform::CAPI::FilterCallback*)>(&Oculus::Platform::Voip::SetMicrophoneFilterCallback)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "CAPI/FilterCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Voip*), "SetMicrophoneFilterCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Voip::SetMicrophoneMuted
// Il2CppName: SetMicrophoneMuted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Oculus::Platform::VoipMuteState)>(&Oculus::Platform::Voip::SetMicrophoneMuted)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "VoipMuteState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Voip*), "SetMicrophoneMuted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Voip::GetSystemVoipMicrophoneMuted
// Il2CppName: GetSystemVoipMicrophoneMuted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::VoipMuteState (*)()>(&Oculus::Platform::Voip::GetSystemVoipMicrophoneMuted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Voip*), "GetSystemVoipMicrophoneMuted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Voip::GetSystemVoipStatus
// Il2CppName: GetSystemVoipStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::SystemVoipStatus (*)()>(&Oculus::Platform::Voip::GetSystemVoipStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Voip*), "GetSystemVoipStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Voip::GetIsConnectionUsingDtx
// Il2CppName: GetIsConnectionUsingDtx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::VoipDtxState (*)(uint64_t)>(&Oculus::Platform::Voip::GetIsConnectionUsingDtx)> {
  static const MethodInfo* get() {
    static auto* peerID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Voip*), "GetIsConnectionUsingDtx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peerID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Voip::GetLocalBitrate
// Il2CppName: GetLocalBitrate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::VoipBitrate (*)(uint64_t)>(&Oculus::Platform::Voip::GetLocalBitrate)> {
  static const MethodInfo* get() {
    static auto* peerID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Voip*), "GetLocalBitrate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peerID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Voip::GetRemoteBitrate
// Il2CppName: GetRemoteBitrate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::VoipBitrate (*)(uint64_t)>(&Oculus::Platform::Voip::GetRemoteBitrate)> {
  static const MethodInfo* get() {
    static auto* peerID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Voip*), "GetRemoteBitrate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peerID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Voip::SetNewConnectionOptions
// Il2CppName: SetNewConnectionOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Oculus::Platform::VoipOptions*)>(&Oculus::Platform::Voip::SetNewConnectionOptions)> {
  static const MethodInfo* get() {
    static auto* voipOptions = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "VoipOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Voip*), "SetNewConnectionOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{voipOptions});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Voip::SetSystemVoipSuppressed
// Il2CppName: SetSystemVoipSuppressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::SystemVoipState*>* (*)(bool)>(&Oculus::Platform::Voip::SetSystemVoipSuppressed)> {
  static const MethodInfo* get() {
    static auto* suppressed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Voip*), "SetSystemVoipSuppressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{suppressed});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Voip::SetVoipConnectRequestCallback
// Il2CppName: SetVoipConnectRequestCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: Oculus::Platform::Voip::SetVoipStateChangeCallback
// Il2CppName: SetVoipStateChangeCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: Oculus::Platform::Voip::SetSystemVoipStateNotificationCallback
// Il2CppName: SetSystemVoipStateNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
