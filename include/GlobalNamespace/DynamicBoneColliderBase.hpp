// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: DynamicBoneColliderBase
  class DynamicBoneColliderBase : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::DynamicBoneColliderBase::Direction
    struct Direction;
    // Nested type: GlobalNamespace::DynamicBoneColliderBase::Bound
    struct Bound;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: DynamicBoneColliderBase/Direction
    struct Direction/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Direction
      constexpr Direction(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public DynamicBoneColliderBase/Direction X
      static constexpr const int X = 0;
      // Get static field: static public DynamicBoneColliderBase/Direction X
      static GlobalNamespace::DynamicBoneColliderBase::Direction _get_X();
      // Set static field: static public DynamicBoneColliderBase/Direction X
      static void _set_X(GlobalNamespace::DynamicBoneColliderBase::Direction value);
      // static field const value: static public DynamicBoneColliderBase/Direction Y
      static constexpr const int Y = 1;
      // Get static field: static public DynamicBoneColliderBase/Direction Y
      static GlobalNamespace::DynamicBoneColliderBase::Direction _get_Y();
      // Set static field: static public DynamicBoneColliderBase/Direction Y
      static void _set_Y(GlobalNamespace::DynamicBoneColliderBase::Direction value);
      // static field const value: static public DynamicBoneColliderBase/Direction Z
      static constexpr const int Z = 2;
      // Get static field: static public DynamicBoneColliderBase/Direction Z
      static GlobalNamespace::DynamicBoneColliderBase::Direction _get_Z();
      // Set static field: static public DynamicBoneColliderBase/Direction Z
      static void _set_Z(GlobalNamespace::DynamicBoneColliderBase::Direction value);
    }; // DynamicBoneColliderBase/Direction
    #pragma pack(pop)
    static check_size<sizeof(DynamicBoneColliderBase::Direction), 0 + sizeof(int)> __GlobalNamespace_DynamicBoneColliderBase_DirectionSizeCheck;
    static_assert(sizeof(DynamicBoneColliderBase::Direction) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: DynamicBoneColliderBase/Bound
    struct Bound/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Bound
      constexpr Bound(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public DynamicBoneColliderBase/Bound Outside
      static constexpr const int Outside = 0;
      // Get static field: static public DynamicBoneColliderBase/Bound Outside
      static GlobalNamespace::DynamicBoneColliderBase::Bound _get_Outside();
      // Set static field: static public DynamicBoneColliderBase/Bound Outside
      static void _set_Outside(GlobalNamespace::DynamicBoneColliderBase::Bound value);
      // static field const value: static public DynamicBoneColliderBase/Bound Inside
      static constexpr const int Inside = 1;
      // Get static field: static public DynamicBoneColliderBase/Bound Inside
      static GlobalNamespace::DynamicBoneColliderBase::Bound _get_Inside();
      // Set static field: static public DynamicBoneColliderBase/Bound Inside
      static void _set_Inside(GlobalNamespace::DynamicBoneColliderBase::Bound value);
    }; // DynamicBoneColliderBase/Bound
    #pragma pack(pop)
    static check_size<sizeof(DynamicBoneColliderBase::Bound), 0 + sizeof(int)> __GlobalNamespace_DynamicBoneColliderBase_BoundSizeCheck;
    static_assert(sizeof(DynamicBoneColliderBase::Bound) == 0x4);
    // public DynamicBoneColliderBase/Direction m_Direction
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::DynamicBoneColliderBase::Direction m_Direction;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DynamicBoneColliderBase::Direction) == 0x4);
    // public UnityEngine.Vector3 m_Center
    // Size: 0xC
    // Offset: 0x1C
    UnityEngine::Vector3 m_Center;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public DynamicBoneColliderBase/Bound m_Bound
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::DynamicBoneColliderBase::Bound m_Bound;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DynamicBoneColliderBase::Bound) == 0x4);
    // Creating value type constructor for type: DynamicBoneColliderBase
    DynamicBoneColliderBase(GlobalNamespace::DynamicBoneColliderBase::Direction m_Direction_ = {}, UnityEngine::Vector3 m_Center_ = {}, GlobalNamespace::DynamicBoneColliderBase::Bound m_Bound_ = {}) noexcept : m_Direction{m_Direction_}, m_Center{m_Center_}, m_Bound{m_Bound_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Collide(ref UnityEngine.Vector3 particlePosition, System.Single particleRadius)
    // Offset: 0x23CF5C0
    void Collide(UnityEngine::Vector3& particlePosition, float particleRadius);
    // public System.Void .ctor()
    // Offset: 0x23CF540
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicBoneColliderBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DynamicBoneColliderBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicBoneColliderBase*, creationType>()));
    }
  }; // DynamicBoneColliderBase
  #pragma pack(pop)
  static check_size<sizeof(DynamicBoneColliderBase), 40 + sizeof(GlobalNamespace::DynamicBoneColliderBase::Bound)> __GlobalNamespace_DynamicBoneColliderBaseSizeCheck;
  static_assert(sizeof(DynamicBoneColliderBase) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBoneColliderBase*, "", "DynamicBoneColliderBase");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBoneColliderBase::Direction, "", "DynamicBoneColliderBase/Direction");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBoneColliderBase::Bound, "", "DynamicBoneColliderBase/Bound");
// Writing MetadataGetter for method: GlobalNamespace::DynamicBoneColliderBase::Collide
// Il2CppName: Collide
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::DynamicBoneColliderBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
