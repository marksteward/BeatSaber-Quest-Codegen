// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: ColorType
  struct ColorType;
  // Forward declaring type: SaberType
  struct SaberType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ColorManager
  class ColorManager : public ::Il2CppObject {
    public:
    // [InjectAttribute] Offset: 0xD46DF4
    // private readonly ColorScheme _colorScheme
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::ColorScheme* colorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorScheme*) == 0x8);
    // Creating value type constructor for type: ColorManager
    ColorManager(GlobalNamespace::ColorScheme* colorScheme_ = {}) noexcept : colorScheme{colorScheme_} {}
    // Creating conversion operator: operator GlobalNamespace::ColorScheme*
    constexpr operator GlobalNamespace::ColorScheme*() const noexcept {
      return colorScheme;
    }
    // public UnityEngine.Color get_obstaclesColor()
    // Offset: 0x1060F28
    UnityEngine::Color get_obstaclesColor();
    // public UnityEngine.Color ColorForType(ColorType type)
    // Offset: 0x1060F48
    UnityEngine::Color ColorForType(GlobalNamespace::ColorType type);
    // public UnityEngine.Color ColorForSaberType(SaberType type)
    // Offset: 0x1060F98
    UnityEngine::Color ColorForSaberType(GlobalNamespace::SaberType type);
    // public UnityEngine.Color EffectsColorForSaberType(SaberType type)
    // Offset: 0x1060FEC
    UnityEngine::Color EffectsColorForSaberType(GlobalNamespace::SaberType type);
    // public UnityEngine.Color GetObstacleEffectColor()
    // Offset: 0x1061084
    UnityEngine::Color GetObstacleEffectColor();
    // public System.Void .ctor()
    // Offset: 0x10610E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorManager*, creationType>()));
    }
  }; // ColorManager
  #pragma pack(pop)
  static check_size<sizeof(ColorManager), 16 + sizeof(GlobalNamespace::ColorScheme*)> __GlobalNamespace_ColorManagerSizeCheck;
  static_assert(sizeof(ColorManager) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorManager*, "", "ColorManager");
