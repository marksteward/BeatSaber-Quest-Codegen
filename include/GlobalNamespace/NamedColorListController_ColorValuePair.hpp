// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NamedColorListController
#include "GlobalNamespace/NamedColorListController.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  // Autogenerated type: NamedColorListController/ColorValuePair
  // [] Offset: FFFFFFFF
  class NamedColorListController::ColorValuePair : public ::Il2CppObject {
    public:
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x10
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public System.Int32 value
    // Size: 0x4
    // Offset: 0x20
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ColorValuePair
    ColorValuePair(UnityEngine::Color color_ = {}, int value_ = {}) noexcept : color{color_}, value{value_} {}
    // public System.Void .ctor()
    // Offset: 0xFD5DA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NamedColorListController::ColorValuePair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NamedColorListController::ColorValuePair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NamedColorListController::ColorValuePair*, creationType>()));
    }
  }; // NamedColorListController/ColorValuePair
  static check_size<sizeof(NamedColorListController::ColorValuePair), 32 + sizeof(int)> __GlobalNamespace_NamedColorListController_ColorValuePairSizeCheck;
  static_assert(sizeof(NamedColorListController::ColorValuePair) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NamedColorListController::ColorValuePair*, "", "NamedColorListController/ColorValuePair");
#pragma pack(pop)
