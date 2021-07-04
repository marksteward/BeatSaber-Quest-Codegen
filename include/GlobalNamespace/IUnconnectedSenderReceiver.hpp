// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketEncryptionLayer
  class PacketEncryptionLayer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IUnconnectedSenderReceiver
  class IUnconnectedSenderReceiver/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: IUnconnectedSenderReceiver
    IUnconnectedSenderReceiver() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Byte[] get_unconnectedPacketHeader()
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* get_unconnectedPacketHeader();
    // public PacketEncryptionLayer get_encryptionLayer()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::PacketEncryptionLayer* get_encryptionLayer();
    // public System.Int32 get_port()
    // Offset: 0xFFFFFFFF
    int get_port();
    // public System.Void add_onReceiveUnconnectedDataEvent(System.Action`2<System.Net.IPEndPoint,LiteNetLib.Utils.NetDataReader> value)
    // Offset: 0xFFFFFFFF
    void add_onReceiveUnconnectedDataEvent(System::Action_2<System::Net::IPEndPoint*, LiteNetLib::Utils::NetDataReader*>* value);
    // public System.Void remove_onReceiveUnconnectedDataEvent(System.Action`2<System.Net.IPEndPoint,LiteNetLib.Utils.NetDataReader> value)
    // Offset: 0xFFFFFFFF
    void remove_onReceiveUnconnectedDataEvent(System::Action_2<System::Net::IPEndPoint*, LiteNetLib::Utils::NetDataReader*>* value);
    // public System.Void SendUnconnected(System.Net.IPEndPoint remoteEndPoint, LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xFFFFFFFF
    void SendUnconnected(System::Net::IPEndPoint* remoteEndPoint, LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void PollUpdate()
    // Offset: 0xFFFFFFFF
    void PollUpdate();
  }; // IUnconnectedSenderReceiver
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IUnconnectedSenderReceiver*, "", "IUnconnectedSenderReceiver");
// Writing MetadataGetter for method: GlobalNamespace::IUnconnectedSenderReceiver::get_unconnectedPacketHeader
// Il2CppName: get_unconnectedPacketHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (GlobalNamespace::IUnconnectedSenderReceiver::*)()>(&GlobalNamespace::IUnconnectedSenderReceiver::get_unconnectedPacketHeader)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnconnectedSenderReceiver*), "get_unconnectedPacketHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnconnectedSenderReceiver::get_encryptionLayer
// Il2CppName: get_encryptionLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketEncryptionLayer* (GlobalNamespace::IUnconnectedSenderReceiver::*)()>(&GlobalNamespace::IUnconnectedSenderReceiver::get_encryptionLayer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnconnectedSenderReceiver*), "get_encryptionLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnconnectedSenderReceiver::get_port
// Il2CppName: get_port
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IUnconnectedSenderReceiver::*)()>(&GlobalNamespace::IUnconnectedSenderReceiver::get_port)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnconnectedSenderReceiver*), "get_port", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnconnectedSenderReceiver::add_onReceiveUnconnectedDataEvent
// Il2CppName: add_onReceiveUnconnectedDataEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnconnectedSenderReceiver::*)(System::Action_2<System::Net::IPEndPoint*, LiteNetLib::Utils::NetDataReader*>*)>(&GlobalNamespace::IUnconnectedSenderReceiver::add_onReceiveUnconnectedDataEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint"), ::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnconnectedSenderReceiver*), "add_onReceiveUnconnectedDataEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnconnectedSenderReceiver::remove_onReceiveUnconnectedDataEvent
// Il2CppName: remove_onReceiveUnconnectedDataEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnconnectedSenderReceiver::*)(System::Action_2<System::Net::IPEndPoint*, LiteNetLib::Utils::NetDataReader*>*)>(&GlobalNamespace::IUnconnectedSenderReceiver::remove_onReceiveUnconnectedDataEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint"), ::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnconnectedSenderReceiver*), "remove_onReceiveUnconnectedDataEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnconnectedSenderReceiver::SendUnconnected
// Il2CppName: SendUnconnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnconnectedSenderReceiver::*)(System::Net::IPEndPoint*, LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::IUnconnectedSenderReceiver::SendUnconnected)> {
  const MethodInfo* get() {
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnconnectedSenderReceiver*), "SendUnconnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEndPoint, writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IUnconnectedSenderReceiver::PollUpdate
// Il2CppName: PollUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnconnectedSenderReceiver::*)()>(&GlobalNamespace::IUnconnectedSenderReceiver::PollUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IUnconnectedSenderReceiver*), "PollUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
