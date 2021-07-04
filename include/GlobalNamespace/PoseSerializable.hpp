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
// Including type: Vector3Serializable
#include "GlobalNamespace/Vector3Serializable.hpp"
// Including type: QuaternionSerializable
#include "GlobalNamespace/QuaternionSerializable.hpp"
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Pose
  struct Pose;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: PoseSerializable
  struct PoseSerializable/*, public System::ValueType, public LiteNetLib::Utils::INetSerializable, public System::IEquatable_1<GlobalNamespace::PoseSerializable>*/ {
    public:
    // public Vector3Serializable position
    // Size: 0xC
    // Offset: 0x0
    GlobalNamespace::Vector3Serializable position;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3Serializable) == 0xC);
    // public QuaternionSerializable rotation
    // Size: 0xC
    // Offset: 0xC
    GlobalNamespace::QuaternionSerializable rotation;
    // Field size check
    static_assert(sizeof(GlobalNamespace::QuaternionSerializable) == 0xC);
    // Creating value type constructor for type: PoseSerializable
    constexpr PoseSerializable(GlobalNamespace::Vector3Serializable position_ = {}, GlobalNamespace::QuaternionSerializable rotation_ = {}) noexcept : position{position_}, rotation{rotation_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::PoseSerializable>
    operator System::IEquatable_1<GlobalNamespace::PoseSerializable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::PoseSerializable>*>(this);
    }
    // public System.Void .ctor(Vector3Serializable position, QuaternionSerializable rotation)
    // Offset: 0xF212C0
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  PoseSerializable(GlobalNamespace::Vector3Serializable position, GlobalNamespace::QuaternionSerializable rotation)
    // static public PoseSerializable get_identity()
    // Offset: 0x2349F24
    static GlobalNamespace::PoseSerializable get_identity();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xF212D4
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xF21304
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(PoseSerializable other)
    // Offset: 0xF21334
    bool Equals(GlobalNamespace::PoseSerializable other);
    // public System.Int32 GetSize()
    // Offset: 0xF21384
    int GetSize();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF2136C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF21374
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xF2137C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // PoseSerializable
  #pragma pack(pop)
  static check_size<sizeof(PoseSerializable), 12 + sizeof(GlobalNamespace::QuaternionSerializable)> __GlobalNamespace_PoseSerializableSizeCheck;
  static_assert(sizeof(PoseSerializable) == 0x18);
  // static public PoseSerializable op_Addition(PoseSerializable a, PoseSerializable b)
  // Offset: 0x234A590
  GlobalNamespace::PoseSerializable operator+(const GlobalNamespace::PoseSerializable& a, const GlobalNamespace::PoseSerializable& b);
  // static public PoseSerializable op_Subtraction(PoseSerializable a, PoseSerializable b)
  // Offset: 0x234A62C
  GlobalNamespace::PoseSerializable operator-(const GlobalNamespace::PoseSerializable& a, const GlobalNamespace::PoseSerializable& b);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PoseSerializable, "", "PoseSerializable");
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::PoseSerializable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::get_identity
// Il2CppName: get_identity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PoseSerializable (*)()>(&GlobalNamespace::PoseSerializable::get_identity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseSerializable), "get_identity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PoseSerializable::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::PoseSerializable::Serialize)> {
  const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseSerializable), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PoseSerializable::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::PoseSerializable::Deserialize)> {
  const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseSerializable), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PoseSerializable::*)(GlobalNamespace::PoseSerializable)>(&GlobalNamespace::PoseSerializable::Equals)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "PoseSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseSerializable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::GetSize
// Il2CppName: GetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PoseSerializable::*)()>(&GlobalNamespace::PoseSerializable::GetSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseSerializable), "GetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PoseSerializable::*)(::Il2CppObject*)>(&GlobalNamespace::PoseSerializable::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseSerializable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PoseSerializable::*)()>(&GlobalNamespace::PoseSerializable::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseSerializable), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PoseSerializable::*)()>(&GlobalNamespace::PoseSerializable::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoseSerializable), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PoseSerializable::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
