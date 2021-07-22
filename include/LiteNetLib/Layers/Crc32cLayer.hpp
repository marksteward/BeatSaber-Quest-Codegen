// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Layers.PacketLayerBase
#include "LiteNetLib/Layers/PacketLayerBase.hpp"
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
// Completed forward declares
// Type namespace: LiteNetLib.Layers
namespace LiteNetLib::Layers {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Layers.Crc32cLayer
  // [TokenAttribute] Offset: FFFFFFFF
  class Crc32cLayer : public LiteNetLib::Layers::PacketLayerBase {
    public:
    // Creating value type constructor for type: Crc32cLayer
    Crc32cLayer() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1BAFAC4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Crc32cLayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Layers::Crc32cLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Crc32cLayer*, creationType>()));
    }
    // public override System.Void ProcessInboundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0x1BAFB1C
    // Implemented from: LiteNetLib.Layers.PacketLayerBase
    // Base method: System.Void PacketLayerBase::ProcessInboundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    void ProcessInboundPacket(System::Net::IPEndPoint* remoteEndPoint, ::Array<uint8_t>*& data, int& offset, int& length);
    // public override System.Void ProcessOutBoundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0x1BB017C
    // Implemented from: LiteNetLib.Layers.PacketLayerBase
    // Base method: System.Void PacketLayerBase::ProcessOutBoundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    void ProcessOutBoundPacket(System::Net::IPEndPoint* remoteEndPoint, ::Array<uint8_t>*& data, int& offset, int& length);
  }; // LiteNetLib.Layers.Crc32cLayer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Layers::Crc32cLayer*, "LiteNetLib.Layers", "Crc32cLayer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::Layers::Crc32cLayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::Layers::Crc32cLayer::ProcessInboundPacket
// Il2CppName: ProcessInboundPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Layers::Crc32cLayer::*)(System::Net::IPEndPoint*, ::Array<uint8_t>*&, int&, int&)>(&LiteNetLib::Layers::Crc32cLayer::ProcessInboundPacket)> {
  static const MethodInfo* get() {
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Layers::Crc32cLayer*), "ProcessInboundPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEndPoint, data, offset, length});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Layers::Crc32cLayer::ProcessOutBoundPacket
// Il2CppName: ProcessOutBoundPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Layers::Crc32cLayer::*)(System::Net::IPEndPoint*, ::Array<uint8_t>*&, int&, int&)>(&LiteNetLib::Layers::Crc32cLayer::ProcessOutBoundPacket)> {
  static const MethodInfo* get() {
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Layers::Crc32cLayer*), "ProcessOutBoundPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEndPoint, data, offset, length});
  }
};
