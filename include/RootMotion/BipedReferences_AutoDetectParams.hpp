// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.BipedReferences
#include "RootMotion/BipedReferences.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x2
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: RootMotion.BipedReferences/AutoDetectParams
  struct BipedReferences::AutoDetectParams/*, public System::ValueType*/ {
    public:
    // public System.Boolean legsParentInSpine
    // Size: 0x1
    // Offset: 0x0
    bool legsParentInSpine;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean includeEyes
    // Size: 0x1
    // Offset: 0x1
    bool includeEyes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AutoDetectParams
    constexpr AutoDetectParams(bool legsParentInSpine_ = {}, bool includeEyes_ = {}) noexcept : legsParentInSpine{legsParentInSpine_}, includeEyes{includeEyes_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.Boolean legsParentInSpine, System.Boolean includeEyes)
    // Offset: 0xF0C4AC
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  AutoDetectParams(bool legsParentInSpine, bool includeEyes)
    // static public RootMotion.BipedReferences/AutoDetectParams get_Default()
    // Offset: 0x1CAC5D8
    static RootMotion::BipedReferences::AutoDetectParams get_Default();
  }; // RootMotion.BipedReferences/AutoDetectParams
  #pragma pack(pop)
  static check_size<sizeof(BipedReferences::AutoDetectParams), 1 + sizeof(bool)> __RootMotion_BipedReferences_AutoDetectParamsSizeCheck;
  static_assert(sizeof(BipedReferences::AutoDetectParams) == 0x2);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BipedReferences::AutoDetectParams, "RootMotion", "BipedReferences/AutoDetectParams");
// Writing MetadataGetter for method: RootMotion::BipedReferences::AutoDetectParams::AutoDetectParams
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::BipedReferences::AutoDetectParams::get_Default
// Il2CppName: get_Default
// Cannot perform method pointer template specialization from operators!
