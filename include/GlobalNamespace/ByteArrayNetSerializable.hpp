// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ByteArrayNetSerializable
  class ByteArrayNetSerializable : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable*/ {
    public:
    // private System.Byte[] _data
    // Offset: 0x10
    ::Array<uint8_t>* data;
    // private readonly System.String _name
    // Offset: 0x18
    ::Il2CppString* name;
    // private readonly System.Boolean _allowNull
    // Offset: 0x20
    bool allowNull;
    // private readonly System.Int32 _minLength
    // Offset: 0x24
    int minLength;
    // private readonly System.Int32 _maxLength
    // Offset: 0x28
    int maxLength;
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // public System.Void .ctor(System.String name, System.Boolean allowNull, System.Int32 minLength, System.Int32 maxLength)
    // Offset: 0x2155D3C
    static ByteArrayNetSerializable* New_ctor(::Il2CppString* name, bool allowNull, int minLength, int maxLength);
    // public System.Void .ctor(System.String name, System.Int32 size)
    // Offset: 0x2155D9C
    static ByteArrayNetSerializable* New_ctor(::Il2CppString* name, int size);
    // public System.Byte[] get_data()
    // Offset: 0x2155DE8
    ::Array<uint8_t>* get_data();
    // public System.Void set_data(System.Byte[] value)
    // Offset: 0x2155DF0
    void set_data(::Array<uint8_t>* value);
    // public System.Void Clear()
    // Offset: 0x2156338
    void Clear();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2156004
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2156114
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
  }; // ByteArrayNetSerializable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ByteArrayNetSerializable*, "", "ByteArrayNetSerializable");
#pragma pack(pop)
