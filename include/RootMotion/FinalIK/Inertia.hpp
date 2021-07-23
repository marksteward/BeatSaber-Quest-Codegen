// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.OffsetModifier
#include "RootMotion/FinalIK/OffsetModifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Inertia
  // [TokenAttribute] Offset: FFFFFFFF
  class Inertia : public RootMotion::FinalIK::OffsetModifier {
    public:
    // Writing base type padding for base size: 0x2C to desired offset: 0x30
    char ___base_padding[0x4] = {};
    // Nested type: RootMotion::FinalIK::Inertia::Body
    class Body;
    // [TooltipAttribute] Offset: 0xDF557C
    // public RootMotion.FinalIK.Inertia/RootMotion.FinalIK.Body[] bodies
    // Size: 0x8
    // Offset: 0x30
    ::Array<RootMotion::FinalIK::Inertia::Body*>* bodies;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::Inertia::Body*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xDF55B4
    // public RootMotion.FinalIK.OffsetModifier/RootMotion.FinalIK.OffsetLimits[] limits
    // Size: 0x8
    // Offset: 0x38
    ::Array<RootMotion::FinalIK::OffsetModifier::OffsetLimits*>* limits;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::OffsetModifier::OffsetLimits*>*) == 0x8);
    // Creating value type constructor for type: Inertia
    Inertia(::Array<RootMotion::FinalIK::Inertia::Body*>* bodies_ = {}, ::Array<RootMotion::FinalIK::OffsetModifier::OffsetLimits*>* limits_ = {}) noexcept : bodies{bodies_}, limits{limits_} {}
    // Get instance field: public RootMotion.FinalIK.Inertia/RootMotion.FinalIK.Body[] bodies
    ::Array<RootMotion::FinalIK::Inertia::Body*>* _get_bodies();
    // Set instance field: public RootMotion.FinalIK.Inertia/RootMotion.FinalIK.Body[] bodies
    void _set_bodies(::Array<RootMotion::FinalIK::Inertia::Body*>* value);
    // Get instance field: public RootMotion.FinalIK.OffsetModifier/RootMotion.FinalIK.OffsetLimits[] limits
    ::Array<RootMotion::FinalIK::OffsetModifier::OffsetLimits*>* _get_limits();
    // Set instance field: public RootMotion.FinalIK.OffsetModifier/RootMotion.FinalIK.OffsetLimits[] limits
    void _set_limits(::Array<RootMotion::FinalIK::OffsetModifier::OffsetLimits*>* value);
    // public System.Void ResetBodies()
    // Offset: 0x1E31B9C
    void ResetBodies();
    // public System.Void .ctor()
    // Offset: 0x1E32124
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Inertia* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Inertia::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Inertia*, creationType>()));
    }
    // protected override System.Void OnModifyOffset()
    // Offset: 0x1E31CF0
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::OnModifyOffset()
    void OnModifyOffset();
  }; // RootMotion.FinalIK.Inertia
  #pragma pack(pop)
  static check_size<sizeof(Inertia), 56 + sizeof(::Array<RootMotion::FinalIK::OffsetModifier::OffsetLimits*>*)> __RootMotion_FinalIK_InertiaSizeCheck;
  static_assert(sizeof(Inertia) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Inertia*, "RootMotion.FinalIK", "Inertia");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::Inertia::ResetBodies
// Il2CppName: ResetBodies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Inertia::*)()>(&RootMotion::FinalIK::Inertia::ResetBodies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Inertia*), "ResetBodies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Inertia::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::Inertia::OnModifyOffset
// Il2CppName: OnModifyOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Inertia::*)()>(&RootMotion::FinalIK::Inertia::OnModifyOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Inertia*), "OnModifyOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
