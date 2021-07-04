// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VarIntExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class VarIntExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: VarIntExtensions
    VarIntExtensions() noexcept {}
    // static public System.Void PutVarInt(LiteNetLib.Utils.NetDataWriter writer, System.Int32 val)
    // Offset: 0x2348248
    static void PutVarInt(LiteNetLib::Utils::NetDataWriter* writer, int val);
    // static public System.Int32 GetVarInt(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x23485C0
    static int GetVarInt(LiteNetLib::Utils::NetDataReader* reader);
    // static public System.Void PutVarUInt(LiteNetLib.Utils.NetDataWriter writer, System.UInt32 val)
    // Offset: 0x2344AD8
    static void PutVarUInt(LiteNetLib::Utils::NetDataWriter* writer, uint val);
    // static public System.UInt32 GetVarUInt(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2344A74
    static uint GetVarUInt(LiteNetLib::Utils::NetDataReader* reader);
    // static public System.Void PutVarLong(LiteNetLib.Utils.NetDataWriter writer, System.Int64 val)
    // Offset: 0x234B9F4
    static void PutVarLong(LiteNetLib::Utils::NetDataWriter* writer, int64_t val);
    // static public System.Int64 GetVarLong(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x234BA10
    static int64_t GetVarLong(LiteNetLib::Utils::NetDataReader* reader);
    // static public System.Void PutVarULong(LiteNetLib.Utils.NetDataWriter writer, System.UInt64 val)
    // Offset: 0x234BA2C
    static void PutVarULong(LiteNetLib::Utils::NetDataWriter* writer, uint64_t val);
    // static public System.UInt64 GetVarULong(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x234BA78
    static uint64_t GetVarULong(LiteNetLib::Utils::NetDataReader* reader);
    // static public System.Boolean TryGetVarUInt(LiteNetLib.Utils.NetDataReader reader, out System.UInt32 value)
    // Offset: 0x234BAF8
    static bool TryGetVarUInt(LiteNetLib::Utils::NetDataReader* reader, uint& value);
    // static public System.Boolean TryGetVarULong(LiteNetLib.Utils.NetDataReader reader, out System.UInt64 value)
    // Offset: 0x234BB48
    static bool TryGetVarULong(LiteNetLib::Utils::NetDataReader* reader, uint64_t& value);
    // static public System.Int32 GetSize(System.Int32 val)
    // Offset: 0x234B16C
    static int GetSize(int val);
    // static public System.Int32 GetSize(System.UInt32 val)
    // Offset: 0x234BC04
    static int GetSize(uint val);
    // static public System.Int32 GetSize(System.Int64 val)
    // Offset: 0x234BBD4
    static int GetSize(int64_t val);
    // static public System.Int32 GetSize(System.UInt64 val)
    // Offset: 0x234BC20
    static int GetSize(uint64_t val);
  }; // VarIntExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VarIntExtensions*, "", "VarIntExtensions");
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::PutVarInt
// Il2CppName: PutVarInt
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::GetVarInt
// Il2CppName: GetVarInt
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::PutVarUInt
// Il2CppName: PutVarUInt
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::GetVarUInt
// Il2CppName: GetVarUInt
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::PutVarLong
// Il2CppName: PutVarLong
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::GetVarLong
// Il2CppName: GetVarLong
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::PutVarULong
// Il2CppName: PutVarULong
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::GetVarULong
// Il2CppName: GetVarULong
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::TryGetVarUInt
// Il2CppName: TryGetVarUInt
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::TryGetVarULong
// Il2CppName: TryGetVarULong
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::GetSize
// Il2CppName: GetSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::GetSize
// Il2CppName: GetSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::GetSize
// Il2CppName: GetSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::VarIntExtensions::GetSize
// Il2CppName: GetSize
// Cannot perform method pointer template specialization from operators!
