// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: BloomFilter
  // [] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct BloomFilter/*, public System::ValueType, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::BloomFilter>, public System::IEquatable_1<GlobalNamespace::BloomFilter>*/ {
    public:
    // private readonly System.UInt64 _top
    // Size: 0x8
    // Offset: 0x0
    uint64_t top;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private readonly System.UInt64 _bottom
    // Size: 0x8
    // Offset: 0x8
    uint64_t bottom;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: BloomFilter
    constexpr BloomFilter(uint64_t top_ = {}, uint64_t bottom_ = {}) noexcept : top{top_}, bottom{bottom_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::BloomFilter>
    operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::BloomFilter>() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::BloomFilter>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::BloomFilter>
    operator System::IEquatable_1<GlobalNamespace::BloomFilter>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::BloomFilter>*>(this);
    }
    // static field const value: static private System.Int32 kHashCount
    static constexpr const int kHashCount = 3;
    // Get static field: static private System.Int32 kHashCount
    static int _get_kHashCount();
    // Set static field: static private System.Int32 kHashCount
    static void _set_kHashCount(int value);
    // static field const value: static public System.Int32 shortStringLength
    static constexpr const int shortStringLength = 22;
    // Get static field: static public System.Int32 shortStringLength
    static int _get_shortStringLength();
    // Set static field: static public System.Int32 shortStringLength
    static void _set_shortStringLength(int value);
    // static field const value: static public System.Int32 longStringLength
    static constexpr const int longStringLength = 32;
    // Get static field: static public System.Int32 longStringLength
    static int _get_longStringLength();
    // Set static field: static public System.Int32 longStringLength
    static void _set_longStringLength(int value);
    // [ThreadStaticAttribute] Offset: 0xDA3A10
    // Get static field: static private System.Char[] _tempBuffer
    static ::Array<::Il2CppChar>* _get__tempBuffer();
    // Set static field: static private System.Char[] _tempBuffer
    static void _set__tempBuffer(::Array<::Il2CppChar>* value);
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x19A2E0C
    static void NoDomainReloadInit();
    // public System.Void .ctor(System.String packId)
    // Offset: 0xCB5E4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    BloomFilter(::Il2CppString* packId) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomFilter::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(packId)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, packId);
    }
    // public System.Void .ctor(System.UInt64 top, System.UInt64 bottom)
    // Offset: 0xCB5E54
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  BloomFilter(uint64_t top, uint64_t bottom)
    // static public BloomFilter get_all()
    // Offset: 0x19A3074
    static GlobalNamespace::BloomFilter get_all();
    // static private System.UInt32 MurmurHash2(System.String key)
    // Offset: 0x19A2ED8
    static uint MurmurHash2(::Il2CppString* key);
    // public System.Boolean Contains(BloomFilter other)
    // Offset: 0xCB5E5C
    bool Contains(GlobalNamespace::BloomFilter other);
    // public System.Int32 DifferenceFrom(BloomFilter other)
    // Offset: 0xCB5E78
    int DifferenceFrom(GlobalNamespace::BloomFilter other);
    // static public BloomFilter Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x19A31AC
    static GlobalNamespace::BloomFilter Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.String ToShortString()
    // Offset: 0xCB5EE0
    ::Il2CppString* ToShortString();
    // public System.Byte[] ToBytes()
    // Offset: 0xCB5EE8
    ::Array<uint8_t>* ToBytes();
    // static public System.Boolean TryParse(System.String stringSerializedMask, out BloomFilter bloomFilter)
    // Offset: 0x19A36F4
    static bool TryParse(::Il2CppString* stringSerializedMask, GlobalNamespace::BloomFilter& bloomFilter);
    // static public System.Boolean TryParse(System.String stringSerializedMask, System.Int32 offset, System.Int32 length, out BloomFilter bloomFilter)
    // Offset: 0x19A3714
    static bool TryParse(::Il2CppString* stringSerializedMask, int offset, int length, GlobalNamespace::BloomFilter& bloomFilter);
    // static public BloomFilter FromBytes(System.Byte[] bytes, System.Int32 offset)
    // Offset: 0x19A3960
    static GlobalNamespace::BloomFilter FromBytes(::Array<uint8_t>* bytes, int offset);
    // static private System.UInt32 GetHexDigit(System.Char c)
    // Offset: 0x19A38A0
    static uint GetHexDigit(::Il2CppChar c);
    // static private System.UInt32 GetBase64Digit(System.Char c)
    // Offset: 0x19A38F0
    static uint GetBase64Digit(::Il2CppChar c);
    // static private System.Char GetBase64Char(System.UInt64 digit)
    // Offset: 0x19A3524
    static ::Il2CppChar GetBase64Char(uint64_t digit);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xCB5EC8
    // Implemented from: LiteNetLib.Utils.INetImmutableSerializable`1
    // Base method: System.Void INetImmutableSerializable_1::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public BloomFilter CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xCB5ED0
    // Implemented from: LiteNetLib.Utils.INetImmutableSerializable`1
    // Base method: T INetImmutableSerializable_1::CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    GlobalNamespace::BloomFilter CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetImmutableSerializable_1_CreateFromSerializedData
    // Maps to method: CreateFromSerializedData
    GlobalNamespace::BloomFilter LiteNetLib_Utils_INetImmutableSerializable_1_CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.String ToString()
    // Offset: 0xCB5ED8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.Boolean Equals(BloomFilter other)
    // Offset: 0xCB5EF0
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(BloomFilter other)
    bool Equals(GlobalNamespace::BloomFilter other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xCB5F14
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCB5F1C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // BloomFilter
  static check_size<sizeof(BloomFilter), 8 + sizeof(uint64_t)> __GlobalNamespace_BloomFilterSizeCheck;
  static_assert(sizeof(BloomFilter) == 0x10);
  // static public BloomFilter op_BitwiseOr(BloomFilter a, BloomFilter b)
  // Offset: 0x19A3080
  GlobalNamespace::BloomFilter operator|(const GlobalNamespace::BloomFilter& a, const GlobalNamespace::BloomFilter& b);
  // static public BloomFilter op_BitwiseAnd(BloomFilter a, BloomFilter b)
  // Offset: 0x19A308C
  GlobalNamespace::BloomFilter operator&(const GlobalNamespace::BloomFilter& a, const GlobalNamespace::BloomFilter& b);
  // static public System.Boolean op_Equality(BloomFilter a, BloomFilter b)
  // Offset: 0x19A3098
  bool operator ==(const GlobalNamespace::BloomFilter& a, const GlobalNamespace::BloomFilter& b);
  // static public System.Boolean op_Inequality(BloomFilter a, BloomFilter b)
  // Offset: 0x19A30B0
  bool operator !=(const GlobalNamespace::BloomFilter& a, const GlobalNamespace::BloomFilter& b);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFilter, "", "BloomFilter");
#pragma pack(pop)
