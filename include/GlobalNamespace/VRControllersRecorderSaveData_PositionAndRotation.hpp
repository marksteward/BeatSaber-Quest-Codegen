// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRControllersRecorderSaveData
#include "GlobalNamespace/VRControllersRecorderSaveData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorderSaveData/PositionAndRotation
  // [TokenAttribute] Offset: FFFFFFFF
  class VRControllersRecorderSaveData::PositionAndRotation : public ::Il2CppObject {
    public:
    // public System.Single posX
    // Size: 0x4
    // Offset: 0x10
    float posX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single posY
    // Size: 0x4
    // Offset: 0x14
    float posY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single posZ
    // Size: 0x4
    // Offset: 0x18
    float posZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotX
    // Size: 0x4
    // Offset: 0x1C
    float rotX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotY
    // Size: 0x4
    // Offset: 0x20
    float rotY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotZ
    // Size: 0x4
    // Offset: 0x24
    float rotZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotW
    // Size: 0x4
    // Offset: 0x28
    float rotW;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: PositionAndRotation
    PositionAndRotation(float posX_ = {}, float posY_ = {}, float posZ_ = {}, float rotX_ = {}, float rotY_ = {}, float rotZ_ = {}, float rotW_ = {}) noexcept : posX{posX_}, posY{posY_}, posZ{posZ_}, rotX{rotX_}, rotY{rotY_}, rotZ{rotZ_}, rotW{rotW_} {}
    // Get instance field: public System.Single posX
    float _get_posX();
    // Set instance field: public System.Single posX
    void _set_posX(float value);
    // Get instance field: public System.Single posY
    float _get_posY();
    // Set instance field: public System.Single posY
    void _set_posY(float value);
    // Get instance field: public System.Single posZ
    float _get_posZ();
    // Set instance field: public System.Single posZ
    void _set_posZ(float value);
    // Get instance field: public System.Single rotX
    float _get_rotX();
    // Set instance field: public System.Single rotX
    void _set_rotX(float value);
    // Get instance field: public System.Single rotY
    float _get_rotY();
    // Set instance field: public System.Single rotY
    void _set_rotY(float value);
    // Get instance field: public System.Single rotZ
    float _get_rotZ();
    // Set instance field: public System.Single rotZ
    void _set_rotZ(float value);
    // Get instance field: public System.Single rotW
    float _get_rotW();
    // Set instance field: public System.Single rotW
    void _set_rotW(float value);
    // public System.Void .ctor()
    // Offset: 0x127A394
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorderSaveData::PositionAndRotation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorderSaveData::PositionAndRotation*, creationType>()));
    }
  }; // VRControllersRecorderSaveData/PositionAndRotation
  #pragma pack(pop)
  static check_size<sizeof(VRControllersRecorderSaveData::PositionAndRotation), 40 + sizeof(float)> __GlobalNamespace_VRControllersRecorderSaveData_PositionAndRotationSizeCheck;
  static_assert(sizeof(VRControllersRecorderSaveData::PositionAndRotation) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation*, "", "VRControllersRecorderSaveData/PositionAndRotation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
