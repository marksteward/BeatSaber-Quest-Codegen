// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Size: 0x20
  // Autogenerated type: LiteNetLib.Layers.XorEncryptLayer
  // [] Offset: FFFFFFFF
  class XorEncryptLayer : public LiteNetLib::Layers::PacketLayerBase {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // private System.Byte[] _byteKey
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* byteKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: XorEncryptLayer
    XorEncryptLayer(::Array<uint8_t>* byteKey_ = {}) noexcept : byteKey{byteKey_} {}
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // public System.Void .ctor(System.Byte[] key)
    // Offset: 0x1DC47B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XorEncryptLayer* New_ctor(::Array<uint8_t>* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Layers::XorEncryptLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XorEncryptLayer*, creationType>(key)));
    }
    // public System.Void .ctor(System.String key)
    // Offset: 0x1DC4894
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XorEncryptLayer* New_ctor(::Il2CppString* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Layers::XorEncryptLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XorEncryptLayer*, creationType>(key)));
    }
    // public System.Void SetKey(System.String key)
    // Offset: 0x1DC48C8
    void SetKey(::Il2CppString* key);
    // public System.Void SetKey(System.Byte[] key)
    // Offset: 0x1DC47E4
    void SetKey(::Array<uint8_t>* key);
    // public System.Void .ctor()
    // Offset: 0x1DC4788
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XorEncryptLayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Layers::XorEncryptLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XorEncryptLayer*, creationType>()));
    }
    // public override System.Void ProcessInboundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0x1DC4918
    // Implemented from: LiteNetLib.Layers.PacketLayerBase
    // Base method: System.Void PacketLayerBase::ProcessInboundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    void ProcessInboundPacket(System::Net::IPEndPoint* remoteEndPoint, ::Array<uint8_t>*& data, int& offset, int& length);
    // public override System.Void ProcessOutBoundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0x1DC49B4
    // Implemented from: LiteNetLib.Layers.PacketLayerBase
    // Base method: System.Void PacketLayerBase::ProcessOutBoundPacket(System.Net.IPEndPoint remoteEndPoint, ref System.Byte[] data, ref System.Int32 offset, ref System.Int32 length)
    void ProcessOutBoundPacket(System::Net::IPEndPoint* remoteEndPoint, ::Array<uint8_t>*& data, int& offset, int& length);
  }; // LiteNetLib.Layers.XorEncryptLayer
  static check_size<sizeof(XorEncryptLayer), 24 + sizeof(::Array<uint8_t>*)> __LiteNetLib_Layers_XorEncryptLayerSizeCheck;
  static_assert(sizeof(XorEncryptLayer) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Layers::XorEncryptLayer*, "LiteNetLib.Layers", "XorEncryptLayer");
#pragma pack(pop)
