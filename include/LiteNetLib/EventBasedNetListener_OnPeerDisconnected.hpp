// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.EventBasedNetListener
#include "LiteNetLib/EventBasedNetListener.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
  // Forward declaring type: DisconnectInfo
  struct DisconnectInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.EventBasedNetListener/OnPeerDisconnected
  class EventBasedNetListener::OnPeerDisconnected : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: OnPeerDisconnected
    OnPeerDisconnected() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B3D2E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventBasedNetListener::OnPeerDisconnected* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::EventBasedNetListener::OnPeerDisconnected::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventBasedNetListener::OnPeerDisconnected*, creationType>(object, method)));
    }
    // public System.Void Invoke(LiteNetLib.NetPeer peer, LiteNetLib.DisconnectInfo disconnectInfo)
    // Offset: 0x1B3B2F0
    void Invoke(LiteNetLib::NetPeer* peer, LiteNetLib::DisconnectInfo disconnectInfo);
    // public System.IAsyncResult BeginInvoke(LiteNetLib.NetPeer peer, LiteNetLib.DisconnectInfo disconnectInfo, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B3D2F0
    System::IAsyncResult* BeginInvoke(LiteNetLib::NetPeer* peer, LiteNetLib::DisconnectInfo disconnectInfo, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1B3D38C
    void EndInvoke(System::IAsyncResult* result);
  }; // LiteNetLib.EventBasedNetListener/OnPeerDisconnected
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::EventBasedNetListener::OnPeerDisconnected*, "LiteNetLib", "EventBasedNetListener/OnPeerDisconnected");
// Writing MetadataGetter for method: LiteNetLib::EventBasedNetListener::OnPeerDisconnected::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::EventBasedNetListener::OnPeerDisconnected::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::OnPeerDisconnected::*)(LiteNetLib::NetPeer*, LiteNetLib::DisconnectInfo)>(&LiteNetLib::EventBasedNetListener::OnPeerDisconnected::Invoke)> {
  const MethodInfo* get() {
    static auto* peer = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPeer")->byval_arg;
    static auto* disconnectInfo = &::il2cpp_utils::GetClassFromName("LiteNetLib", "DisconnectInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNetListener::OnPeerDisconnected*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, disconnectInfo});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNetListener::OnPeerDisconnected::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (LiteNetLib::EventBasedNetListener::OnPeerDisconnected::*)(LiteNetLib::NetPeer*, LiteNetLib::DisconnectInfo, System::AsyncCallback*, ::Il2CppObject*)>(&LiteNetLib::EventBasedNetListener::OnPeerDisconnected::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* peer = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPeer")->byval_arg;
    static auto* disconnectInfo = &::il2cpp_utils::GetClassFromName("LiteNetLib", "DisconnectInfo")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNetListener::OnPeerDisconnected*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, disconnectInfo, callback, object});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNetListener::OnPeerDisconnected::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::OnPeerDisconnected::*)(System::IAsyncResult*)>(&LiteNetLib::EventBasedNetListener::OnPeerDisconnected::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNetListener::OnPeerDisconnected*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
