// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AnnotatedBeatmapLevelCollectionsTableView
  class AnnotatedBeatmapLevelCollectionsTableView;
  // Forward declaring type: LoadingControl
  class LoadingControl;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: AnnotatedBeatmapLevelCollectionsViewController
  class AnnotatedBeatmapLevelCollectionsViewController : public HMUI::ViewController {
    public:
    // private AnnotatedBeatmapLevelCollectionsTableView _annotatedBeatmapLevelCollectionsTableView
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView* annotatedBeatmapLevelCollectionsTableView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*) == 0x8);
    // private LoadingControl _loadingControl
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::LoadingControl* loadingControl;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LoadingControl*) == 0x8);
    // [InjectAttribute] Offset: 0xD44164
    // private AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD44174
    // private System.Action`1<IAnnotatedBeatmapLevelCollection> didSelectAnnotatedBeatmapLevelCollectionEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* didSelectAnnotatedBeatmapLevelCollectionEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*) == 0x8);
    // private System.Int32 _selectedItemIndex
    // Size: 0x4
    // Offset: 0x90
    int selectedItemIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: selectedItemIndex and: annotatedBeatmapLevelCollections
    char __padding4[0x4] = {};
    // private System.Collections.Generic.IReadOnlyList`1<IAnnotatedBeatmapLevelCollection> _annotatedBeatmapLevelCollections
    // Size: 0x8
    // Offset: 0x98
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* annotatedBeatmapLevelCollections;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*) == 0x8);
    // Creating value type constructor for type: AnnotatedBeatmapLevelCollectionsViewController
    AnnotatedBeatmapLevelCollectionsViewController(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView* annotatedBeatmapLevelCollectionsTableView_ = {}, GlobalNamespace::LoadingControl* loadingControl_ = {}, GlobalNamespace::AdditionalContentModel* additionalContentModel_ = {}, System::Action_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* didSelectAnnotatedBeatmapLevelCollectionEvent_ = {}, int selectedItemIndex_ = {}, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* annotatedBeatmapLevelCollections_ = {}) noexcept : annotatedBeatmapLevelCollectionsTableView{annotatedBeatmapLevelCollectionsTableView_}, loadingControl{loadingControl_}, additionalContentModel{additionalContentModel_}, didSelectAnnotatedBeatmapLevelCollectionEvent{didSelectAnnotatedBeatmapLevelCollectionEvent_}, selectedItemIndex{selectedItemIndex_}, annotatedBeatmapLevelCollections{annotatedBeatmapLevelCollections_} {}
    // public System.Void add_didSelectAnnotatedBeatmapLevelCollectionEvent(System.Action`1<IAnnotatedBeatmapLevelCollection> value)
    // Offset: 0x101816C
    void add_didSelectAnnotatedBeatmapLevelCollectionEvent(System::Action_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);
    // public System.Void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(System.Action`1<IAnnotatedBeatmapLevelCollection> value)
    // Offset: 0x1018210
    void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(System::Action_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);
    // public IAnnotatedBeatmapLevelCollection get_selectedAnnotatedBeatmapLevelCollection()
    // Offset: 0x10182B4
    GlobalNamespace::IAnnotatedBeatmapLevelCollection* get_selectedAnnotatedBeatmapLevelCollection();
    // public System.Int32 get_selectedItemIndex()
    // Offset: 0x10183F4
    int get_selectedItemIndex();
    // public System.Void RefreshAvailability()
    // Offset: 0x10184F0
    void RefreshAvailability();
    // public System.Void SetData(System.Collections.Generic.IReadOnlyList`1<IAnnotatedBeatmapLevelCollection> annotatedBeatmapLevelCollections, System.Int32 selectedItemIndex, System.Boolean hideIfOneOrNoPacks)
    // Offset: 0x10185EC
    void SetData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* annotatedBeatmapLevelCollections, int selectedItemIndex, bool hideIfOneOrNoPacks);
    // public System.Void ShowLoading()
    // Offset: 0x101873C
    void ShowLoading();
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0x10187B0
    void HandleAdditionalContentModelDidInvalidateData();
    // private System.Void HandleDidSelectAnnotatedBeatmapLevelCollection(AnnotatedBeatmapLevelCollectionsTableView levelPacksTableView, IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection)
    // Offset: 0x10187C8
    void HandleDidSelectAnnotatedBeatmapLevelCollection(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView* levelPacksTableView, GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10183FC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1018508
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x1018954
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnnotatedBeatmapLevelCollectionsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnnotatedBeatmapLevelCollectionsViewController*, creationType>()));
    }
  }; // AnnotatedBeatmapLevelCollectionsViewController
  #pragma pack(pop)
  static check_size<sizeof(AnnotatedBeatmapLevelCollectionsViewController), 152 + sizeof(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*)> __GlobalNamespace_AnnotatedBeatmapLevelCollectionsViewControllerSizeCheck;
  static_assert(sizeof(AnnotatedBeatmapLevelCollectionsViewController) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*, "", "AnnotatedBeatmapLevelCollectionsViewController");
