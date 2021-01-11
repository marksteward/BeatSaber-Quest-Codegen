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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
  // Forward declaring type: SimpleColorSO
  class SimpleColorSO;
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: ColorType
  struct ColorType;
  // Forward declaring type: SaberType
  struct SaberType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: ColorManager
  // [] Offset: FFFFFFFF
  class ColorManager : public UnityEngine::MonoBehaviour {
    public:
    // private ColorSchemeSO _defaultColorScheme
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSchemeSO* defaultColorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xDD25E0
    // private SimpleColorSO _saberAColor
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::SimpleColorSO* saberAColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleColorSO*) == 0x8);
    // private SimpleColorSO _saberBColor
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SimpleColorSO* saberBColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleColorSO*) == 0x8);
    // private SimpleColorSO _environmentColor0
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SimpleColorSO* environmentColor0;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleColorSO*) == 0x8);
    // private SimpleColorSO _environmentColor1
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::SimpleColorSO* environmentColor1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleColorSO*) == 0x8);
    // private SimpleColorSO _environmentColor0Boost
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::SimpleColorSO* environmentColor0Boost;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleColorSO*) == 0x8);
    // private SimpleColorSO _environmentColor1Boost
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::SimpleColorSO* environmentColor1Boost;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleColorSO*) == 0x8);
    // private SimpleColorSO _obstaclesColor
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::SimpleColorSO* obstaclesColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleColorSO*) == 0x8);
    // [InjectOptionalAttribute] Offset: 0xDD2678
    // private ColorScheme _colorScheme
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::ColorScheme* colorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorScheme*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD2688
    // private System.Action colorsDidChangeEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action* colorsDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: ColorManager
    ColorManager(GlobalNamespace::ColorSchemeSO* defaultColorScheme_ = {}, GlobalNamespace::SimpleColorSO* saberAColor_ = {}, GlobalNamespace::SimpleColorSO* saberBColor_ = {}, GlobalNamespace::SimpleColorSO* environmentColor0_ = {}, GlobalNamespace::SimpleColorSO* environmentColor1_ = {}, GlobalNamespace::SimpleColorSO* environmentColor0Boost_ = {}, GlobalNamespace::SimpleColorSO* environmentColor1Boost_ = {}, GlobalNamespace::SimpleColorSO* obstaclesColor_ = {}, GlobalNamespace::ColorScheme* colorScheme_ = {}, System::Action* colorsDidChangeEvent_ = {}) noexcept : defaultColorScheme{defaultColorScheme_}, saberAColor{saberAColor_}, saberBColor{saberBColor_}, environmentColor0{environmentColor0_}, environmentColor1{environmentColor1_}, environmentColor0Boost{environmentColor0Boost_}, environmentColor1Boost{environmentColor1Boost_}, obstaclesColor{obstaclesColor_}, colorScheme{colorScheme_}, colorsDidChangeEvent{colorsDidChangeEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_colorsDidChangeEvent(System.Action value)
    // Offset: 0x1A4F784
    void add_colorsDidChangeEvent(System::Action* value);
    // public System.Void remove_colorsDidChangeEvent(System.Action value)
    // Offset: 0x1A4F828
    void remove_colorsDidChangeEvent(System::Action* value);
    // protected System.Void Awake()
    // Offset: 0x1A4F8CC
    void Awake();
    // protected System.Void Start()
    // Offset: 0x1A4F8FC
    void Start();
    // public UnityEngine.Color ColorForType(ColorType type)
    // Offset: 0x1A4FA18
    UnityEngine::Color ColorForType(GlobalNamespace::ColorType type);
    // public UnityEngine.Color ColorForSaberType(SaberType type)
    // Offset: 0x1A4FA68
    UnityEngine::Color ColorForSaberType(GlobalNamespace::SaberType type);
    // public UnityEngine.Color EffectsColorForSaberType(SaberType type)
    // Offset: 0x1A4FABC
    UnityEngine::Color EffectsColorForSaberType(GlobalNamespace::SaberType type);
    // public UnityEngine.Color GetObstacleEffectColor()
    // Offset: 0x1A4FB54
    UnityEngine::Color GetObstacleEffectColor();
    // public System.Void .ctor()
    // Offset: 0x1A4FBB8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorManager*, creationType>()));
    }
  }; // ColorManager
  static check_size<sizeof(ColorManager), 96 + sizeof(System::Action*)> __GlobalNamespace_ColorManagerSizeCheck;
  static_assert(sizeof(ColorManager) == 0x68);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorManager*, "", "ColorManager");
