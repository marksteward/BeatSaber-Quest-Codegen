// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapSelectionView
#include "GlobalNamespace/BeatmapSelectionView.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x49
  // Autogenerated type: EditableBeatmapSelectionView
  // [] Offset: FFFFFFFF
  class EditableBeatmapSelectionView : public GlobalNamespace::BeatmapSelectionView {
    public:
    // [SpaceAttribute] Offset: 0xDD1A6C
    // private UnityEngine.UI.Button _editButton
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Button* editButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _clearButton
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::UI::Button* clearButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private System.Boolean _showClearButton
    // Size: 0x1
    // Offset: 0x38
    bool showClearButton;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showClearButton and: levelBarCanvasGroup
    char __padding2[0x7] = {};
    // private UnityEngine.CanvasGroup _levelBarCanvasGroup
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::CanvasGroup* levelBarCanvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // private System.Boolean _interactable
    // Size: 0x1
    // Offset: 0x48
    bool interactable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EditableBeatmapSelectionView
    EditableBeatmapSelectionView(UnityEngine::UI::Button* editButton_ = {}, UnityEngine::UI::Button* clearButton_ = {}, bool showClearButton_ = {}, UnityEngine::CanvasGroup* levelBarCanvasGroup_ = {}, bool interactable_ = {}) noexcept : editButton{editButton_}, clearButton{clearButton_}, showClearButton{showClearButton_}, levelBarCanvasGroup{levelBarCanvasGroup_}, interactable{interactable_} {}
    // public UnityEngine.UI.Button get_editButton()
    // Offset: 0x1A5F2C4
    UnityEngine::UI::Button* get_editButton();
    // public UnityEngine.UI.Button get_clearButton()
    // Offset: 0x1A5F2CC
    UnityEngine::UI::Button* get_clearButton();
    // public System.Boolean get_interactable()
    // Offset: 0x1A5F2D4
    bool get_interactable();
    // public System.Void set_interactable(System.Boolean value)
    // Offset: 0x1A4ECC4
    void set_interactable(bool value);
    // public override System.Void SetBeatmap(IPreviewBeatmapLevel beatmapLevel, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty beatmapDifficulty)
    // Offset: 0x1A5F2DC
    // Implemented from: BeatmapSelectionView
    // Base method: System.Void BeatmapSelectionView::SetBeatmap(IPreviewBeatmapLevel beatmapLevel, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty beatmapDifficulty)
    void SetBeatmap(GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty);
    // public System.Void .ctor()
    // Offset: 0x1A5F338
    // Implemented from: BeatmapSelectionView
    // Base method: System.Void BeatmapSelectionView::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditableBeatmapSelectionView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EditableBeatmapSelectionView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditableBeatmapSelectionView*, creationType>()));
    }
  }; // EditableBeatmapSelectionView
  static check_size<sizeof(EditableBeatmapSelectionView), 72 + sizeof(bool)> __GlobalNamespace_EditableBeatmapSelectionViewSizeCheck;
  static_assert(sizeof(EditableBeatmapSelectionView) == 0x49);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EditableBeatmapSelectionView*, "", "EditableBeatmapSelectionView");
#pragma pack(pop)
