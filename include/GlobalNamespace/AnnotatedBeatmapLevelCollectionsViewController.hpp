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
    // [InjectAttribute] Offset: 0xE24DFC
    // private readonly AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE24E0C
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
    // Offset: 0x112F1D4
    void add_didSelectAnnotatedBeatmapLevelCollectionEvent(System::Action_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);
    // public System.Void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(System.Action`1<IAnnotatedBeatmapLevelCollection> value)
    // Offset: 0x112F278
    void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(System::Action_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);
    // public IAnnotatedBeatmapLevelCollection get_selectedAnnotatedBeatmapLevelCollection()
    // Offset: 0x112F31C
    GlobalNamespace::IAnnotatedBeatmapLevelCollection* get_selectedAnnotatedBeatmapLevelCollection();
    // public System.Int32 get_selectedItemIndex()
    // Offset: 0x112F45C
    int get_selectedItemIndex();
    // public System.Void RefreshAvailability()
    // Offset: 0x112F558
    void RefreshAvailability();
    // public System.Void SetData(System.Collections.Generic.IReadOnlyList`1<IAnnotatedBeatmapLevelCollection> annotatedBeatmapLevelCollections, System.Int32 selectedItemIndex, System.Boolean hideIfOneOrNoPacks)
    // Offset: 0x112F654
    void SetData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* annotatedBeatmapLevelCollections, int selectedItemIndex, bool hideIfOneOrNoPacks);
    // public System.Void ShowLoading()
    // Offset: 0x112F7A4
    void ShowLoading();
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0x112F818
    void HandleAdditionalContentModelDidInvalidateData();
    // private System.Void HandleDidSelectAnnotatedBeatmapLevelCollection(AnnotatedBeatmapLevelCollectionsTableView levelPacksTableView, IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection)
    // Offset: 0x112F830
    void HandleDidSelectAnnotatedBeatmapLevelCollection(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView* levelPacksTableView, GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x112F464
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x112F570
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x112F9BC
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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::add_didSelectAnnotatedBeatmapLevelCollectionEvent
// Il2CppName: add_didSelectAnnotatedBeatmapLevelCollectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)(System::Action_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::add_didSelectAnnotatedBeatmapLevelCollectionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IAnnotatedBeatmapLevelCollection")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "add_didSelectAnnotatedBeatmapLevelCollectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::remove_didSelectAnnotatedBeatmapLevelCollectionEvent
// Il2CppName: remove_didSelectAnnotatedBeatmapLevelCollectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)(System::Action_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::remove_didSelectAnnotatedBeatmapLevelCollectionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IAnnotatedBeatmapLevelCollection")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "remove_didSelectAnnotatedBeatmapLevelCollectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::get_selectedAnnotatedBeatmapLevelCollection
// Il2CppName: get_selectedAnnotatedBeatmapLevelCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IAnnotatedBeatmapLevelCollection* (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::get_selectedAnnotatedBeatmapLevelCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "get_selectedAnnotatedBeatmapLevelCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::get_selectedItemIndex
// Il2CppName: get_selectedItemIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::get_selectedItemIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "get_selectedItemIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::RefreshAvailability
// Il2CppName: RefreshAvailability
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::RefreshAvailability)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "RefreshAvailability", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*, int, bool)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::SetData)> {
  static const MethodInfo* get() {
    static auto* annotatedBeatmapLevelCollections = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IAnnotatedBeatmapLevelCollection")})->byval_arg;
    static auto* selectedItemIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hideIfOneOrNoPacks = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{annotatedBeatmapLevelCollections, selectedItemIndex, hideIfOneOrNoPacks});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::ShowLoading
// Il2CppName: ShowLoading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::ShowLoading)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "ShowLoading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::HandleAdditionalContentModelDidInvalidateData
// Il2CppName: HandleAdditionalContentModelDidInvalidateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::HandleAdditionalContentModelDidInvalidateData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "HandleAdditionalContentModelDidInvalidateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::HandleDidSelectAnnotatedBeatmapLevelCollection
// Il2CppName: HandleDidSelectAnnotatedBeatmapLevelCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::HandleDidSelectAnnotatedBeatmapLevelCollection)> {
  static const MethodInfo* get() {
    static auto* levelPacksTableView = &::il2cpp_utils::GetClassFromName("", "AnnotatedBeatmapLevelCollectionsTableView")->byval_arg;
    static auto* annotatedBeatmapLevelCollection = &::il2cpp_utils::GetClassFromName("", "IAnnotatedBeatmapLevelCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "HandleDidSelectAnnotatedBeatmapLevelCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelPacksTableView, annotatedBeatmapLevelCollection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)(bool, bool, bool)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::*)(bool, bool)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
