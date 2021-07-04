// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberTypeObject
  class SaberTypeObject;
  // Forward declaring type: Parametric3SliceSpriteController
  class Parametric3SliceSpriteController;
  // Forward declaring type: ColorManager
  class ColorManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: SetSaberFakeGlowColor
  class SetSaberFakeGlowColor : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Color _tintColor
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Color tintColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [SpaceAttribute] Offset: 0xE1F7C4
    // [NullAllowed] Offset: 0xE1F7C4
    // private SaberTypeObject _saberTypeObject
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SaberTypeObject* saberTypeObject;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberTypeObject*) == 0x8);
    // private Parametric3SliceSpriteController _parametric3SliceSprite
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::Parametric3SliceSpriteController* parametric3SliceSprite;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Parametric3SliceSpriteController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1F81C
    // private ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // private SaberType _saberType
    // Size: 0x4
    // Offset: 0x40
    GlobalNamespace::SaberType saberType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberType) == 0x4);
    // Creating value type constructor for type: SetSaberFakeGlowColor
    SetSaberFakeGlowColor(UnityEngine::Color tintColor_ = {}, GlobalNamespace::SaberTypeObject* saberTypeObject_ = {}, GlobalNamespace::Parametric3SliceSpriteController* parametric3SliceSprite_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}, GlobalNamespace::SaberType saberType_ = {}) noexcept : tintColor{tintColor_}, saberTypeObject{saberTypeObject_}, parametric3SliceSprite{parametric3SliceSprite_}, colorManager{colorManager_}, saberType{saberType_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_saberType(SaberType value)
    // Offset: 0x10DC344
    void set_saberType(GlobalNamespace::SaberType value);
    // protected System.Void Start()
    // Offset: 0x10DC3B0
    void Start();
    // private System.Void SetColors()
    // Offset: 0x10DC350
    void SetColors();
    // public System.Void .ctor()
    // Offset: 0x10DC440
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetSaberFakeGlowColor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SetSaberFakeGlowColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetSaberFakeGlowColor*, creationType>()));
    }
  }; // SetSaberFakeGlowColor
  #pragma pack(pop)
  static check_size<sizeof(SetSaberFakeGlowColor), 64 + sizeof(GlobalNamespace::SaberType)> __GlobalNamespace_SetSaberFakeGlowColorSizeCheck;
  static_assert(sizeof(SetSaberFakeGlowColor) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetSaberFakeGlowColor*, "", "SetSaberFakeGlowColor");
// Writing MetadataGetter for method: GlobalNamespace::SetSaberFakeGlowColor::set_saberType
// Il2CppName: set_saberType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SetSaberFakeGlowColor::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SetSaberFakeGlowColor::SetColors
// Il2CppName: SetColors
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SetSaberFakeGlowColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
