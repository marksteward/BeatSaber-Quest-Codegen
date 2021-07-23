// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.InteractionTrigger/RootMotion.FinalIK.Range
#include "RootMotion/FinalIK/InteractionTrigger_Range.hpp"
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
  // Forward declaring type: InteractionObject
  class InteractionObject;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionTrigger/RootMotion.FinalIK.Range/RootMotion.FinalIK.Interaction
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractionTrigger::Range::Interaction : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xDF8CD0
    // public RootMotion.FinalIK.InteractionObject interactionObject
    // Size: 0x8
    // Offset: 0x10
    RootMotion::FinalIK::InteractionObject* interactionObject;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::InteractionObject*) == 0x8);
    // [TooltipAttribute] Offset: 0xDF8D08
    // public RootMotion.FinalIK.FullBodyBipedEffector[] effectors
    // Size: 0x8
    // Offset: 0x18
    ::Array<RootMotion::FinalIK::FullBodyBipedEffector>* effectors;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::FullBodyBipedEffector>*) == 0x8);
    // Creating value type constructor for type: Interaction
    Interaction(RootMotion::FinalIK::InteractionObject* interactionObject_ = {}, ::Array<RootMotion::FinalIK::FullBodyBipedEffector>* effectors_ = {}) noexcept : interactionObject{interactionObject_}, effectors{effectors_} {}
    // Get instance field: public RootMotion.FinalIK.InteractionObject interactionObject
    RootMotion::FinalIK::InteractionObject* _get_interactionObject();
    // Set instance field: public RootMotion.FinalIK.InteractionObject interactionObject
    void _set_interactionObject(RootMotion::FinalIK::InteractionObject* value);
    // Get instance field: public RootMotion.FinalIK.FullBodyBipedEffector[] effectors
    ::Array<RootMotion::FinalIK::FullBodyBipedEffector>* _get_effectors();
    // Set instance field: public RootMotion.FinalIK.FullBodyBipedEffector[] effectors
    void _set_effectors(::Array<RootMotion::FinalIK::FullBodyBipedEffector>* value);
    // public System.Void .ctor()
    // Offset: 0x1AB4A8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionTrigger::Range::Interaction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::InteractionTrigger::Range::Interaction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionTrigger::Range::Interaction*, creationType>()));
    }
  }; // RootMotion.FinalIK.InteractionTrigger/RootMotion.FinalIK.Range/RootMotion.FinalIK.Interaction
  #pragma pack(pop)
  static check_size<sizeof(InteractionTrigger::Range::Interaction), 24 + sizeof(::Array<RootMotion::FinalIK::FullBodyBipedEffector>*)> __RootMotion_FinalIK_InteractionTrigger_Range_InteractionSizeCheck;
  static_assert(sizeof(InteractionTrigger::Range::Interaction) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionTrigger::Range::Interaction*, "RootMotion.FinalIK", "InteractionTrigger/Range/Interaction");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::Range::Interaction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
