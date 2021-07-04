// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
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
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: AnnotatedBeatmapLevelCollectionTableCell
  class AnnotatedBeatmapLevelCollectionTableCell : public HMUI::TableCell {
    public:
    // Nested type: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::$RefreshAvailabilityAsync$d__18
    struct $RefreshAvailabilityAsync$d__18;
    // private TMPro.TextMeshProUGUI _infoText
    // Size: 0x8
    // Offset: 0x50
    TMPro::TextMeshProUGUI* infoText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _coverImage
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::UI::Image* coverImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private HMUI.ImageView _selectionImage
    // Size: 0x8
    // Offset: 0x60
    HMUI::ImageView* selectionImage;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private UnityEngine.GameObject[] _newPromoRibbonObjects
    // Size: 0x8
    // Offset: 0x68
    ::Array<UnityEngine::GameObject*>* newPromoRibbonObjects;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GameObject*>*) == 0x8);
    // [SpaceAttribute] Offset: 0xE21294
    // private UnityEngine.Color _selectedColor0
    // Size: 0x10
    // Offset: 0x70
    UnityEngine::Color selectedColor0;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _selectedColor1
    // Size: 0x10
    // Offset: 0x80
    UnityEngine::Color selectedColor1;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _highlightedColor0
    // Size: 0x10
    // Offset: 0x90
    UnityEngine::Color highlightedColor0;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _highlightedColor1
    // Size: 0x10
    // Offset: 0xA0
    UnityEngine::Color highlightedColor1;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private IAnnotatedBeatmapLevelCollection _annotatedBeatmapLevelCollection
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAnnotatedBeatmapLevelCollection*) == 0x8);
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0xB8
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // Creating value type constructor for type: AnnotatedBeatmapLevelCollectionTableCell
    AnnotatedBeatmapLevelCollectionTableCell(TMPro::TextMeshProUGUI* infoText_ = {}, UnityEngine::UI::Image* coverImage_ = {}, HMUI::ImageView* selectionImage_ = {}, ::Array<UnityEngine::GameObject*>* newPromoRibbonObjects_ = {}, UnityEngine::Color selectedColor0_ = {}, UnityEngine::Color selectedColor1_ = {}, UnityEngine::Color highlightedColor0_ = {}, UnityEngine::Color highlightedColor1_ = {}, GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection_ = {}, System::Threading::CancellationTokenSource* cancellationTokenSource_ = {}) noexcept : infoText{infoText_}, coverImage{coverImage_}, selectionImage{selectionImage_}, newPromoRibbonObjects{newPromoRibbonObjects_}, selectedColor0{selectedColor0_}, selectedColor1{selectedColor1_}, highlightedColor0{highlightedColor0_}, highlightedColor1{highlightedColor1_}, annotatedBeatmapLevelCollection{annotatedBeatmapLevelCollection_}, cancellationTokenSource{cancellationTokenSource_} {}
    // public System.Void set_showNewRibbon(System.Boolean value)
    // Offset: 0x112D248
    void set_showNewRibbon(bool value);
    // public System.Void SetData(IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection)
    // Offset: 0x112D2C4
    void SetData(GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection);
    // private System.Void RefreshVisuals()
    // Offset: 0x112D5F4
    void RefreshVisuals();
    // private System.String GetInfoText(System.String name, System.Int32 songs, System.Int32 purchased)
    // Offset: 0x112D508
    ::Il2CppString* GetInfoText(::Il2CppString* name, int songs, int purchased);
    // public System.Void RefreshAvailabilityAsync(AdditionalContentModel contentModel)
    // Offset: 0x112D71C
    void RefreshAvailabilityAsync(GlobalNamespace::AdditionalContentModel* contentModel);
    // public System.Void CancelAsyncOperations()
    // Offset: 0x112D708
    void CancelAsyncOperations();
    // protected override System.Void SelectionDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x112D5F0
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::SelectionDidChange(HMUI.SelectableCell/TransitionType transitionType)
    void SelectionDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x112D6F0
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::HighlightDidChange(HMUI.SelectableCell/TransitionType transitionType)
    void HighlightDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void WasPreparedForReuse()
    // Offset: 0x112D6F4
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::WasPreparedForReuse()
    void WasPreparedForReuse();
    // public System.Void .ctor()
    // Offset: 0x112D7E4
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnnotatedBeatmapLevelCollectionTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnnotatedBeatmapLevelCollectionTableCell*, creationType>()));
    }
  }; // AnnotatedBeatmapLevelCollectionTableCell
  #pragma pack(pop)
  static check_size<sizeof(AnnotatedBeatmapLevelCollectionTableCell), 184 + sizeof(System::Threading::CancellationTokenSource*)> __GlobalNamespace_AnnotatedBeatmapLevelCollectionTableCellSizeCheck;
  static_assert(sizeof(AnnotatedBeatmapLevelCollectionTableCell) == 0xC0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell*, "", "AnnotatedBeatmapLevelCollectionTableCell");
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::set_showNewRibbon
// Il2CppName: set_showNewRibbon
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::SetData
// Il2CppName: SetData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::RefreshVisuals
// Il2CppName: RefreshVisuals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::GetInfoText
// Il2CppName: GetInfoText
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::RefreshAvailabilityAsync
// Il2CppName: RefreshAvailabilityAsync
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::CancelAsyncOperations
// Il2CppName: CancelAsyncOperations
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::SelectionDidChange
// Il2CppName: SelectionDidChange
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::HighlightDidChange
// Il2CppName: HighlightDidChange
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::WasPreparedForReuse
// Il2CppName: WasPreparedForReuse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
