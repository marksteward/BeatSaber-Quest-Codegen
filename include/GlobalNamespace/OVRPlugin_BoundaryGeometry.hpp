// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/BoundaryType
#include "GlobalNamespace/OVRPlugin_BoundaryType.hpp"
// Including type: OVRPlugin/Vector3f
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/BoundaryGeometry
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::BoundaryGeometry/*, public System::ValueType*/ {
    public:
    // public OVRPlugin/BoundaryType BoundaryType
    // Size: 0x4
    // Offset: 0x0
    GlobalNamespace::OVRPlugin::BoundaryType BoundaryType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::BoundaryType) == 0x4);
    // Padding between fields: BoundaryType and: Points
    char __padding0[0x4] = {};
    // public OVRPlugin/Vector3f[] Points
    // Size: 0x8
    // Offset: 0x8
    ::Array<GlobalNamespace::OVRPlugin::Vector3f>* Points;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::OVRPlugin::Vector3f>*) == 0x8);
    // public System.Int32 PointsCount
    // Size: 0x4
    // Offset: 0x10
    int PointsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BoundaryGeometry
    constexpr BoundaryGeometry(GlobalNamespace::OVRPlugin::BoundaryType BoundaryType_ = {}, ::Array<GlobalNamespace::OVRPlugin::Vector3f>* Points_ = {}, int PointsCount_ = {}) noexcept : BoundaryType{BoundaryType_}, Points{Points_}, PointsCount{PointsCount_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: public OVRPlugin/BoundaryType BoundaryType
    GlobalNamespace::OVRPlugin::BoundaryType _get_BoundaryType();
    // Set instance field: public OVRPlugin/BoundaryType BoundaryType
    void _set_BoundaryType(GlobalNamespace::OVRPlugin::BoundaryType value);
    // Get instance field: public OVRPlugin/Vector3f[] Points
    ::Array<GlobalNamespace::OVRPlugin::Vector3f>* _get_Points();
    // Set instance field: public OVRPlugin/Vector3f[] Points
    void _set_Points(::Array<GlobalNamespace::OVRPlugin::Vector3f>* value);
    // Get instance field: public System.Int32 PointsCount
    int _get_PointsCount();
    // Set instance field: public System.Int32 PointsCount
    void _set_PointsCount(int value);
  }; // OVRPlugin/BoundaryGeometry
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::BoundaryGeometry), 16 + sizeof(int)> __GlobalNamespace_OVRPlugin_BoundaryGeometrySizeCheck;
  static_assert(sizeof(OVRPlugin::BoundaryGeometry) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::BoundaryGeometry, "", "OVRPlugin/BoundaryGeometry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
