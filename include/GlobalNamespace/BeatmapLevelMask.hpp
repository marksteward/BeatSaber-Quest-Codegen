// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BitMaskSparse
  class BitMaskSparse;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelMask
  class BeatmapLevelMask : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable, public System::IEquatable_1<GlobalNamespace::BeatmapLevelMask*>*/ {
    public:
    // private readonly BitMaskSparse _bloomFilter
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BitMaskSparse* bloomFilter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BitMaskSparse*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelMask
    BeatmapLevelMask(GlobalNamespace::BitMaskSparse* bloomFilter_ = {}) noexcept : bloomFilter{bloomFilter_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::BeatmapLevelMask*>
    operator System::IEquatable_1<GlobalNamespace::BeatmapLevelMask*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::BeatmapLevelMask*>*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::BitMaskSparse*
    constexpr operator GlobalNamespace::BitMaskSparse*() const noexcept {
      return bloomFilter;
    }
    // static field const value: static private System.Int32 kBitCount
    static constexpr const int kBitCount = 16384;
    // Get static field: static private System.Int32 kBitCount
    static int _get_kBitCount();
    // Set static field: static private System.Int32 kBitCount
    static void _set_kBitCount(int value);
    // static field const value: static private System.Int32 kHashCount
    static constexpr const int kHashCount = 1;
    // Get static field: static private System.Int32 kHashCount
    static int _get_kHashCount();
    // Set static field: static private System.Int32 kHashCount
    static void _set_kHashCount(int value);
    // static field const value: static private System.Int32 kHashBits
    static constexpr const int kHashBits = 14;
    // Get static field: static private System.Int32 kHashBits
    static int _get_kHashBits();
    // Set static field: static private System.Int32 kHashBits
    static void _set_kHashBits(int value);
    // static field const value: static private System.String kToStringPrefix
    static constexpr const char* kToStringPrefix = "[BeatmapLevelMask ";
    // Get static field: static private System.String kToStringPrefix
    static ::Il2CppString* _get_kToStringPrefix();
    // Set static field: static private System.String kToStringPrefix
    static void _set_kToStringPrefix(::Il2CppString* value);
    // static field const value: static private System.String kToStringSuffix
    static constexpr const char* kToStringSuffix = "]";
    // Get static field: static private System.String kToStringSuffix
    static ::Il2CppString* _get_kToStringSuffix();
    // Set static field: static private System.String kToStringSuffix
    static void _set_kToStringSuffix(::Il2CppString* value);
    // public System.Void .ctor(System.String level)
    // Offset: 0x232B0E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelMask* New_ctor(::Il2CppString* level) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelMask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelMask*, creationType>(level)));
    }
    // public System.Void .ctor(System.Collections.Generic.HashSet`1<System.String> levelSet)
    // Offset: 0x232B17C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelMask* New_ctor(System::Collections::Generic::HashSet_1<::Il2CppString*>* levelSet) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelMask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelMask*, creationType>(levelSet)));
    }
    // public System.Boolean Contains(System.String state)
    // Offset: 0x232B2B4
    bool Contains(::Il2CppString* state);
    // public System.Void AddLevel(System.String state)
    // Offset: 0x232B31C
    void AddLevel(::Il2CppString* state);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x232B384
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x232B4E8
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(BeatmapLevelMask other)
    // Offset: 0x232B620
    bool Equals(GlobalNamespace::BeatmapLevelMask* other);
    // public System.Void .ctor()
    // Offset: 0x232AFFC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelMask* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelMask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelMask*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x232B5A0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x232B600
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x232B640
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // BeatmapLevelMask
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelMask), 16 + sizeof(GlobalNamespace::BitMaskSparse*)> __GlobalNamespace_BeatmapLevelMaskSizeCheck;
  static_assert(sizeof(BeatmapLevelMask) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelMask*, "", "BeatmapLevelMask");