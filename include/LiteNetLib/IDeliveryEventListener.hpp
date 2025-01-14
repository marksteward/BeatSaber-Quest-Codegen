// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.IDeliveryEventListener
  // [TokenAttribute] Offset: FFFFFFFF
  class IDeliveryEventListener {
    public:
    // Creating value type constructor for type: IDeliveryEventListener
    IDeliveryEventListener() noexcept {}
    // public System.Void OnMessageDelivered(LiteNetLib.NetPeer peer, System.Object userData)
    // Offset: 0xFFFFFFFF
    void OnMessageDelivered(LiteNetLib::NetPeer* peer, ::Il2CppObject* userData);
  }; // LiteNetLib.IDeliveryEventListener
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::IDeliveryEventListener*, "LiteNetLib", "IDeliveryEventListener");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::IDeliveryEventListener::OnMessageDelivered
// Il2CppName: OnMessageDelivered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::IDeliveryEventListener::*)(LiteNetLib::NetPeer*, ::Il2CppObject*)>(&LiteNetLib::IDeliveryEventListener::OnMessageDelivered)> {
  static const MethodInfo* get() {
    static auto* peer = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPeer")->byval_arg;
    static auto* userData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::IDeliveryEventListener*), "OnMessageDelivered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, userData});
  }
};
