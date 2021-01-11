// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SetSaberBladeParams
#include "GlobalNamespace/SetSaberBladeParams.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: SetSaberBladeParams/PropertyTintColorPair
  // [] Offset: FFFFFFFF
  class SetSaberBladeParams::PropertyTintColorPair : public ::Il2CppObject {
    public:
    // public UnityEngine.Color tintColor
    // Size: 0x10
    // Offset: 0x10
    UnityEngine::Color tintColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public System.String property
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* property;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: PropertyTintColorPair
    PropertyTintColorPair(UnityEngine::Color tintColor_ = {}, ::Il2CppString* property_ = {}) noexcept : tintColor{tintColor_}, property{property_} {}
    // public System.Void .ctor()
    // Offset: 0xFCC2E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetSaberBladeParams::PropertyTintColorPair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetSaberBladeParams::PropertyTintColorPair*, creationType>()));
    }
  }; // SetSaberBladeParams/PropertyTintColorPair
  static check_size<sizeof(SetSaberBladeParams::PropertyTintColorPair), 32 + sizeof(::Il2CppString*)> __GlobalNamespace_SetSaberBladeParams_PropertyTintColorPairSizeCheck;
  static_assert(sizeof(SetSaberBladeParams::PropertyTintColorPair) == 0x28);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair*, "", "SetSaberBladeParams/PropertyTintColorPair");
