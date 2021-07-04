// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.OffsetModifier
#include "RootMotion/FinalIK/OffsetModifier.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKEffector
  class IKEffector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.OffsetModifier/OffsetLimits
  class OffsetModifier::OffsetLimits : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xE0D98C
    // public RootMotion.FinalIK.FullBodyBipedEffector effector
    // Size: 0x4
    // Offset: 0x10
    RootMotion::FinalIK::FullBodyBipedEffector effector;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::FullBodyBipedEffector) == 0x4);
    // [TooltipAttribute] Offset: 0xE0D9C4
    // public System.Single spring
    // Size: 0x4
    // Offset: 0x14
    float spring;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE0D9FC
    // public System.Boolean x
    // Size: 0x1
    // Offset: 0x18
    bool x;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xE0DA34
    // public System.Boolean y
    // Size: 0x1
    // Offset: 0x19
    bool y;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xE0DA6C
    // public System.Boolean z
    // Size: 0x1
    // Offset: 0x1A
    bool z;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: z and: minX
    char __padding4[0x1] = {};
    // [TooltipAttribute] Offset: 0xE0DAA4
    // public System.Single minX
    // Size: 0x4
    // Offset: 0x1C
    float minX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE0DADC
    // public System.Single maxX
    // Size: 0x4
    // Offset: 0x20
    float maxX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE0DB14
    // public System.Single minY
    // Size: 0x4
    // Offset: 0x24
    float minY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE0DB4C
    // public System.Single maxY
    // Size: 0x4
    // Offset: 0x28
    float maxY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE0DB84
    // public System.Single minZ
    // Size: 0x4
    // Offset: 0x2C
    float minZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE0DBBC
    // public System.Single maxZ
    // Size: 0x4
    // Offset: 0x30
    float maxZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: OffsetLimits
    OffsetLimits(RootMotion::FinalIK::FullBodyBipedEffector effector_ = {}, float spring_ = {}, bool x_ = {}, bool y_ = {}, bool z_ = {}, float minX_ = {}, float maxX_ = {}, float minY_ = {}, float maxY_ = {}, float minZ_ = {}, float maxZ_ = {}) noexcept : effector{effector_}, spring{spring_}, x{x_}, y{y_}, z{z_}, minX{minX_}, maxX{maxX_}, minY{minY_}, maxY{maxY_}, minZ{minZ_}, maxZ{maxZ_} {}
    // public System.Void Apply(RootMotion.FinalIK.IKEffector e, UnityEngine.Quaternion rootRotation)
    // Offset: 0x1AA1094
    void Apply(RootMotion::FinalIK::IKEffector* e, UnityEngine::Quaternion rootRotation);
    // private System.Single SpringAxis(System.Single value, System.Single min, System.Single max)
    // Offset: 0x1AA15AC
    float SpringAxis(float value, float min, float max);
    // private System.Single Spring(System.Single value, System.Single limit, System.Boolean negative)
    // Offset: 0x1AA15DC
    float Spring(float value, float limit, bool negative);
    // public System.Void .ctor()
    // Offset: 0x1AA16B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OffsetModifier::OffsetLimits* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::OffsetModifier::OffsetLimits::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OffsetModifier::OffsetLimits*, creationType>()));
    }
  }; // RootMotion.FinalIK.OffsetModifier/OffsetLimits
  #pragma pack(pop)
  static check_size<sizeof(OffsetModifier::OffsetLimits), 48 + sizeof(float)> __RootMotion_FinalIK_OffsetModifier_OffsetLimitsSizeCheck;
  static_assert(sizeof(OffsetModifier::OffsetLimits) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::OffsetModifier::OffsetLimits*, "RootMotion.FinalIK", "OffsetModifier/OffsetLimits");
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifier::OffsetLimits::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetModifier::OffsetLimits::*)(RootMotion::FinalIK::IKEffector*, UnityEngine::Quaternion)>(&RootMotion::FinalIK::OffsetModifier::OffsetLimits::Apply)> {
  const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKEffector")->byval_arg;
    static auto* rootRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifier::OffsetLimits*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e, rootRotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifier::OffsetLimits::SpringAxis
// Il2CppName: SpringAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::OffsetModifier::OffsetLimits::*)(float, float, float)>(&RootMotion::FinalIK::OffsetModifier::OffsetLimits::SpringAxis)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifier::OffsetLimits*), "SpringAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifier::OffsetLimits::Spring
// Il2CppName: Spring
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::OffsetModifier::OffsetLimits::*)(float, float, bool)>(&RootMotion::FinalIK::OffsetModifier::OffsetLimits::Spring)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* limit = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* negative = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetModifier::OffsetLimits*), "Spring", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, limit, negative});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetModifier::OffsetLimits::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
