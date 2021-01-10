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
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC
  // Autogenerated type: UnitVector3Serializable
  // [] Offset: FFFFFFFF
  struct UnitVector3Serializable/*, public System::ValueType, public LiteNetLib::Utils::INetSerializable, public System::IEquatable_1<GlobalNamespace::UnitVector3Serializable>*/ {
    public:
    // private UnityEngine.Vector3 _v
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 v;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: UnitVector3Serializable
    constexpr UnitVector3Serializable(UnityEngine::Vector3 v_ = {}) noexcept : v{v_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::UnitVector3Serializable>
    operator System::IEquatable_1<GlobalNamespace::UnitVector3Serializable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::UnitVector3Serializable>*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Vector3
    constexpr operator UnityEngine::Vector3() const noexcept {
      return v;
    }
    // public System.Void .ctor(UnityEngine.Vector3 v)
    // Offset: 0xCB6604
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  UnitVector3Serializable(UnityEngine::Vector3 v)
    // public System.Void .ctor(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xCB6610
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    UnitVector3Serializable(LiteNetLib::Utils::NetDataReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnitVector3Serializable::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(reader)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, reader);
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xCB65CC
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xCB65D4
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(UnitVector3Serializable other)
    // Offset: 0xCB65DC
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnitVector3Serializable other)
    bool Equals(GlobalNamespace::UnitVector3Serializable other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xCB65E4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCB65EC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xCB65F8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnitVector3Serializable
  static check_size<sizeof(UnitVector3Serializable), 0 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_UnitVector3SerializableSizeCheck;
  static_assert(sizeof(UnitVector3Serializable) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnitVector3Serializable, "", "UnitVector3Serializable");
#pragma pack(pop)
