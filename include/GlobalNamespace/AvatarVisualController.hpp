// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: EditAvatarViewController/AvatarEditPart
#include "GlobalNamespace/EditAvatarViewController.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MulticolorAvatarPartPropertyBlockSetter
  class MulticolorAvatarPartPropertyBlockSetter;
  // Forward declaring type: AvatarPropertyBlockColorSetter
  class AvatarPropertyBlockColorSetter;
  // Forward declaring type: AvatarPartsModel
  class AvatarPartsModel;
  // Forward declaring type: AvatarData
  class AvatarData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC0
  // Autogenerated type: AvatarVisualController
  // [] Offset: FFFFFFFF
  class AvatarVisualController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::AvatarVisualController::HighlighterDelegate
    class HighlighterDelegate;
    // private UnityEngine.MeshFilter _headTopMeshFilter
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::MeshFilter* headTopMeshFilter;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshFilter*) == 0x8);
    // private UnityEngine.MeshFilter _glassesMeshFilter
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::MeshFilter* glassesMeshFilter;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshFilter*) == 0x8);
    // private UnityEngine.MeshFilter _facialHairMeshFilter
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::MeshFilter* facialHairMeshFilter;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshFilter*) == 0x8);
    // private UnityEngine.MeshFilter _leftHandsHairMeshFilter
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::MeshFilter* leftHandsHairMeshFilter;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshFilter*) == 0x8);
    // private UnityEngine.MeshFilter _rightHandsHairMeshFilter
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::MeshFilter* rightHandsHairMeshFilter;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshFilter*) == 0x8);
    // private UnityEngine.SpriteRenderer _eyesSprite
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::SpriteRenderer* eyesSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::SpriteRenderer*) == 0x8);
    // private UnityEngine.SpriteRenderer _mouthSprite
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::SpriteRenderer* mouthSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::SpriteRenderer*) == 0x8);
    // private UnityEngine.MeshFilter _bodyMeshFilter
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::MeshFilter* bodyMeshFilter;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshFilter*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC22D4
    // private MulticolorAvatarPartPropertyBlockSetter _headTopPropertyBlockColorSetter
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* headTopPropertyBlockColorSetter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*) == 0x8);
    // private AvatarPropertyBlockColorSetter _glassesPropertyBlockColorSetter
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::AvatarPropertyBlockColorSetter* glassesPropertyBlockColorSetter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPropertyBlockColorSetter*) == 0x8);
    // private AvatarPropertyBlockColorSetter _facialHairPropertyBlockColorSetter
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::AvatarPropertyBlockColorSetter* facialHairPropertyBlockColorSetter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPropertyBlockColorSetter*) == 0x8);
    // private AvatarPropertyBlockColorSetter _skinPropertyBlockColorSetter
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::AvatarPropertyBlockColorSetter* skinPropertyBlockColorSetter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPropertyBlockColorSetter*) == 0x8);
    // private MulticolorAvatarPartPropertyBlockSetter _clothesPropertyBlockSetter
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* clothesPropertyBlockSetter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*) == 0x8);
    // private MulticolorAvatarPartPropertyBlockSetter _leftHandPropertyBlockSetter
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* leftHandPropertyBlockSetter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*) == 0x8);
    // private MulticolorAvatarPartPropertyBlockSetter _rightHandPropertyBlockSetter
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* rightHandPropertyBlockSetter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter*) == 0x8);
    // [InjectAttribute] Offset: 0xDC236C
    // private readonly AvatarPartsModel _avatarPartsModel
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::AvatarPartsModel* avatarPartsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartsModel*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<EditAvatarViewController/AvatarEditPart,AvatarVisualController/HighlighterDelegate> _avatarPartHighlightSetters
    // Size: 0x8
    // Offset: 0x98
    System::Collections::Generic::Dictionary_2<GlobalNamespace::EditAvatarViewController::AvatarEditPart, GlobalNamespace::AvatarVisualController::HighlighterDelegate*>* avatarPartHighlightSetters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::EditAvatarViewController::AvatarEditPart, GlobalNamespace::AvatarVisualController::HighlighterDelegate*>*) == 0x8);
    // private UnityEngine.Color _lightColor
    // Size: 0x10
    // Offset: 0xA0
    UnityEngine::Color lightColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private AvatarData _avatarData
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::AvatarData* avatarData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarData*) == 0x8);
    // private AvatarVisualController/HighlighterDelegate _currentHighlighter
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::AvatarVisualController::HighlighterDelegate* currentHighlighter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarVisualController::HighlighterDelegate*) == 0x8);
    // Creating value type constructor for type: AvatarVisualController
    AvatarVisualController(UnityEngine::MeshFilter* headTopMeshFilter_ = {}, UnityEngine::MeshFilter* glassesMeshFilter_ = {}, UnityEngine::MeshFilter* facialHairMeshFilter_ = {}, UnityEngine::MeshFilter* leftHandsHairMeshFilter_ = {}, UnityEngine::MeshFilter* rightHandsHairMeshFilter_ = {}, UnityEngine::SpriteRenderer* eyesSprite_ = {}, UnityEngine::SpriteRenderer* mouthSprite_ = {}, UnityEngine::MeshFilter* bodyMeshFilter_ = {}, GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* headTopPropertyBlockColorSetter_ = {}, GlobalNamespace::AvatarPropertyBlockColorSetter* glassesPropertyBlockColorSetter_ = {}, GlobalNamespace::AvatarPropertyBlockColorSetter* facialHairPropertyBlockColorSetter_ = {}, GlobalNamespace::AvatarPropertyBlockColorSetter* skinPropertyBlockColorSetter_ = {}, GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* clothesPropertyBlockSetter_ = {}, GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* leftHandPropertyBlockSetter_ = {}, GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter* rightHandPropertyBlockSetter_ = {}, GlobalNamespace::AvatarPartsModel* avatarPartsModel_ = {}, System::Collections::Generic::Dictionary_2<GlobalNamespace::EditAvatarViewController::AvatarEditPart, GlobalNamespace::AvatarVisualController::HighlighterDelegate*>* avatarPartHighlightSetters_ = {}, UnityEngine::Color lightColor_ = {}, GlobalNamespace::AvatarData* avatarData_ = {}, GlobalNamespace::AvatarVisualController::HighlighterDelegate* currentHighlighter_ = {}) noexcept : headTopMeshFilter{headTopMeshFilter_}, glassesMeshFilter{glassesMeshFilter_}, facialHairMeshFilter{facialHairMeshFilter_}, leftHandsHairMeshFilter{leftHandsHairMeshFilter_}, rightHandsHairMeshFilter{rightHandsHairMeshFilter_}, eyesSprite{eyesSprite_}, mouthSprite{mouthSprite_}, bodyMeshFilter{bodyMeshFilter_}, headTopPropertyBlockColorSetter{headTopPropertyBlockColorSetter_}, glassesPropertyBlockColorSetter{glassesPropertyBlockColorSetter_}, facialHairPropertyBlockColorSetter{facialHairPropertyBlockColorSetter_}, skinPropertyBlockColorSetter{skinPropertyBlockColorSetter_}, clothesPropertyBlockSetter{clothesPropertyBlockSetter_}, leftHandPropertyBlockSetter{leftHandPropertyBlockSetter_}, rightHandPropertyBlockSetter{rightHandPropertyBlockSetter_}, avatarPartsModel{avatarPartsModel_}, avatarPartHighlightSetters{avatarPartHighlightSetters_}, lightColor{lightColor_}, avatarData{avatarData_}, currentHighlighter{currentHighlighter_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Color get_lightColor()
    // Offset: 0x1A489A0
    UnityEngine::Color get_lightColor();
    // protected System.Void Awake()
    // Offset: 0x1A489AC
    void Awake();
    // public System.Void UpdateAvatarVisual(AvatarData avatarData)
    // Offset: 0x1A48C74
    void UpdateAvatarVisual(GlobalNamespace::AvatarData* avatarData);
    // public System.Void SetLightColor(UnityEngine.Color color)
    // Offset: 0x1A49440
    void SetLightColor(UnityEngine::Color color);
    // private System.Void UpdateAvatarColors()
    // Offset: 0x1A490D0
    void UpdateAvatarColors();
    // public System.Void HighlightEditedPart(EditAvatarViewController/AvatarEditPart editPart, System.Int32 uvSegment)
    // Offset: 0x1A4944C
    void HighlightEditedPart(GlobalNamespace::EditAvatarViewController::AvatarEditPart editPart, int uvSegment);
    // public System.Void DisableEditedPartHighlight()
    // Offset: 0x1A4978C
    void DisableEditedPartHighlight();
    // private System.Void SetHandsHighlight(System.Boolean highlighted, System.Int32 uvSegment)
    // Offset: 0x1A497C8
    void SetHandsHighlight(bool highlighted, int uvSegment);
    // public System.Void .ctor()
    // Offset: 0x1A49814
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarVisualController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarVisualController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarVisualController*, creationType>()));
    }
  }; // AvatarVisualController
  static check_size<sizeof(AvatarVisualController), 184 + sizeof(GlobalNamespace::AvatarVisualController::HighlighterDelegate*)> __GlobalNamespace_AvatarVisualControllerSizeCheck;
  static_assert(sizeof(AvatarVisualController) == 0xC0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarVisualController*, "", "AvatarVisualController");
#pragma pack(pop)
