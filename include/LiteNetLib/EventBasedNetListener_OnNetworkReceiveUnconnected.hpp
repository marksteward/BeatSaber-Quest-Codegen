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
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPacketReader
  class NetPacketReader;
  // Forward declaring type: UnconnectedMessageType
  struct UnconnectedMessageType;
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
  // Autogenerated type: LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected
  class EventBasedNetListener::OnNetworkReceiveUnconnected : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: OnNetworkReceiveUnconnected
    OnNetworkReceiveUnconnected() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B3D1E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventBasedNetListener::OnNetworkReceiveUnconnected* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventBasedNetListener::OnNetworkReceiveUnconnected*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Net.IPEndPoint remoteEndPoint, LiteNetLib.NetPacketReader reader, LiteNetLib.UnconnectedMessageType messageType)
    // Offset: 0x1B3BF5C
    void Invoke(System::Net::IPEndPoint* remoteEndPoint, LiteNetLib::NetPacketReader* reader, LiteNetLib::UnconnectedMessageType messageType);
    // public System.IAsyncResult BeginInvoke(System.Net.IPEndPoint remoteEndPoint, LiteNetLib.NetPacketReader reader, LiteNetLib.UnconnectedMessageType messageType, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B3D1F4
    System::IAsyncResult* BeginInvoke(System::Net::IPEndPoint* remoteEndPoint, LiteNetLib::NetPacketReader* reader, LiteNetLib::UnconnectedMessageType messageType, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1B3D294
    void EndInvoke(System::IAsyncResult* result);
  }; // LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected*, "LiteNetLib", "EventBasedNetListener/OnNetworkReceiveUnconnected");
// Writing MetadataGetter for method: LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected::*)(System::Net::IPEndPoint*, LiteNetLib::NetPacketReader*, LiteNetLib::UnconnectedMessageType)>(&LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected::Invoke)> {
  const MethodInfo* get() {
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPacketReader")->byval_arg;
    static auto* messageType = &::il2cpp_utils::GetClassFromName("LiteNetLib", "UnconnectedMessageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEndPoint, reader, messageType});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected::*)(System::Net::IPEndPoint*, LiteNetLib::NetPacketReader*, LiteNetLib::UnconnectedMessageType, System::AsyncCallback*, ::Il2CppObject*)>(&LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPacketReader")->byval_arg;
    static auto* messageType = &::il2cpp_utils::GetClassFromName("LiteNetLib", "UnconnectedMessageType")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEndPoint, reader, messageType, callback, object});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected::*)(System::IAsyncResult*)>(&LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
