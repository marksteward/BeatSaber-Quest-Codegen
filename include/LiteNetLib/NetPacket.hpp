// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.PacketProperty
#include "LiteNetLib/PacketProperty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetPacket
  // [] Offset: FFFFFFFF
  class NetPacket : public ::Il2CppObject {
    public:
    // public System.Byte[] RawData
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* RawData;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Int32 Size
    // Size: 0x4
    // Offset: 0x18
    int Size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Size and: UserData
    char __padding1[0x4] = {};
    // public System.Object UserData
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* UserData;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: NetPacket
    NetPacket(::Array<uint8_t>* RawData_ = {}, int Size_ = {}, ::Il2CppObject* UserData_ = {}) noexcept : RawData{RawData_}, Size{Size_}, UserData{UserData_} {}
    // Get static field: static private readonly System.Int32 LastProperty
    static int _get_LastProperty();
    // Set static field: static private readonly System.Int32 LastProperty
    static void _set_LastProperty(int value);
    // public LiteNetLib.PacketProperty get_Property()
    // Offset: 0x1DCA51C
    LiteNetLib::PacketProperty get_Property();
    // public System.Void set_Property(LiteNetLib.PacketProperty value)
    // Offset: 0x1DCBE48
    void set_Property(LiteNetLib::PacketProperty value);
    // public System.Byte get_ConnectionNumber()
    // Offset: 0x1DC64C4
    uint8_t get_ConnectionNumber();
    // public System.Void set_ConnectionNumber(System.Byte value)
    // Offset: 0x1DC9A8C
    void set_ConnectionNumber(uint8_t value);
    // public System.UInt16 get_Sequence()
    // Offset: 0x1DCD358
    uint16_t get_Sequence();
    // public System.Void set_Sequence(System.UInt16 value)
    // Offset: 0x1DCD3C8
    void set_Sequence(uint16_t value);
    // public System.Boolean get_IsFragmented()
    // Offset: 0x1DCD3DC
    bool get_IsFragmented();
    // public System.Void MarkFragmented()
    // Offset: 0x1DCD418
    void MarkFragmented();
    // public System.Byte get_ChannelId()
    // Offset: 0x1DCD454
    uint8_t get_ChannelId();
    // public System.Void set_ChannelId(System.Byte value)
    // Offset: 0x1DCD48C
    void set_ChannelId(uint8_t value);
    // public System.UInt16 get_FragmentId()
    // Offset: 0x1DCD4C4
    uint16_t get_FragmentId();
    // public System.Void set_FragmentId(System.UInt16 value)
    // Offset: 0x1DCD534
    void set_FragmentId(uint16_t value);
    // public System.UInt16 get_FragmentPart()
    // Offset: 0x1DCD544
    uint16_t get_FragmentPart();
    // public System.Void set_FragmentPart(System.UInt16 value)
    // Offset: 0x1DCD5B4
    void set_FragmentPart(uint16_t value);
    // public System.UInt16 get_FragmentsTotal()
    // Offset: 0x1DCD5C4
    uint16_t get_FragmentsTotal();
    // public System.Void set_FragmentsTotal(System.UInt16 value)
    // Offset: 0x1DCD634
    void set_FragmentsTotal(uint16_t value);
    // public System.Void .ctor(System.Int32 size)
    // Offset: 0x1DCD644
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPacket* New_ctor(int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NetPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPacket*, creationType>(size)));
    }
    // public System.Void .ctor(LiteNetLib.PacketProperty property, System.Int32 size)
    // Offset: 0x1DC6144
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPacket* New_ctor(LiteNetLib::PacketProperty property, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NetPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPacket*, creationType>(property, size)));
    }
    // static public System.Int32 GetHeaderSize(LiteNetLib.PacketProperty property)
    // Offset: 0x1DCBE1C
    static int GetHeaderSize(LiteNetLib::PacketProperty property);
    // public System.Int32 GetHeaderSize()
    // Offset: 0x1DCD6C4
    int GetHeaderSize();
    // public System.Boolean FromBytes(System.Byte[] data, System.Int32 start, System.Int32 packetSize)
    // Offset: 0x1DCA3D0
    bool FromBytes(::Array<uint8_t>* data, int start, int packetSize);
    // static private System.Void .cctor()
    // Offset: 0x1DCD75C
    static void _cctor();
  }; // LiteNetLib.NetPacket
  static check_size<sizeof(NetPacket), 32 + sizeof(::Il2CppObject*)> __LiteNetLib_NetPacketSizeCheck;
  static_assert(sizeof(NetPacket) == 0x28);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetPacket*, "LiteNetLib", "NetPacket");
