// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Vector3Serializable
  struct Vector3Serializable/*, public System::ValueType, public LiteNetLib::Utils::INetSerializable, public System::IEquatable_1<GlobalNamespace::Vector3Serializable>*/ {
    public:
    // private System.Int32 _x
    // Size: 0x4
    // Offset: 0x0
    int x;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _y
    // Size: 0x4
    // Offset: 0x4
    int y;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _z
    // Size: 0x4
    // Offset: 0x8
    int z;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Vector3Serializable
    constexpr Vector3Serializable(int x_ = {}, int y_ = {}, int z_ = {}) noexcept : x{x_}, y{y_}, z{z_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::Vector3Serializable>
    operator System::IEquatable_1<GlobalNamespace::Vector3Serializable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::Vector3Serializable>*>(this);
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xE2BE68
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xE2BE70
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(Vector3Serializable other)
    // Offset: 0xE2BE78
    bool Equals(GlobalNamespace::Vector3Serializable other);
    // public System.Boolean Approximately(Vector3Serializable other)
    // Offset: 0xE2BEAC
    bool Approximately(GlobalNamespace::Vector3Serializable other);
    // public System.Int32 GetSize()
    // Offset: 0xE2BEF0
    int GetSize();
    // public System.Void .ctor(UnityEngine.Vector3 v)
    // Offset: 0xE2BEF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Vector3Serializable(UnityEngine::Vector3 v) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::Vector3Serializable::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(v)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, v);
    }
    // public System.Void .ctor(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xE2BF00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Vector3Serializable(LiteNetLib::Utils::NetDataReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::Vector3Serializable::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, reader);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xE2BEB8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE2BEC0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xE2BEE8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // Vector3Serializable
  #pragma pack(pop)
  static check_size<sizeof(Vector3Serializable), 8 + sizeof(int)> __GlobalNamespace_Vector3SerializableSizeCheck;
  static_assert(sizeof(Vector3Serializable) == 0xC);
  // static public Vector3Serializable op_Addition(Vector3Serializable a, Vector3Serializable b)
  // Offset: 0x213C428
  GlobalNamespace::Vector3Serializable operator+(const GlobalNamespace::Vector3Serializable& a, const GlobalNamespace::Vector3Serializable& b);
  // static public Vector3Serializable op_Subtraction(Vector3Serializable a, Vector3Serializable b)
  // Offset: 0x213C4C4
  GlobalNamespace::Vector3Serializable operator-(const GlobalNamespace::Vector3Serializable& a, const GlobalNamespace::Vector3Serializable& b);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Vector3Serializable, "", "Vector3Serializable");
