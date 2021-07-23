// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/HMUI.IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AnnotatedBeatmapLevelCollectionTableCell
  class AnnotatedBeatmapLevelCollectionTableCell;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: AnnotatedBeatmapLevelCollectionsTableView
  // [TokenAttribute] Offset: FFFFFFFF
  class AnnotatedBeatmapLevelCollectionsTableView : public UnityEngine::MonoBehaviour/*, public HMUI::TableView::IDataSource*/ {
    public:
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x18
    HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(HMUI::TableView*) == 0x8);
    // private AnnotatedBeatmapLevelCollectionTableCell _cellPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell* cellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell*) == 0x8);
    // private System.String _cellReuseIdentifier
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* cellReuseIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single _cellWidth
    // Size: 0x4
    // Offset: 0x30
    float cellWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: cellWidth and: promoPackIDStrings
    char __padding3[0x4] = {};
    // [SpaceAttribute] Offset: 0xE10C74
    // private System.String[] _promoPackIDStrings
    // Size: 0x8
    // Offset: 0x38
    ::Array<::Il2CppString*>* promoPackIDStrings;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // [InjectAttribute] Offset: 0xE10CAC
    // private readonly AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel*) == 0x8);
    // private System.Action`2<AnnotatedBeatmapLevelCollectionsTableView,IAnnotatedBeatmapLevelCollection> didSelectAnnotatedBeatmapLevelCollectionEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action_2<GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* didSelectAnnotatedBeatmapLevelCollectionEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.String> _promoPackIDs
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::HashSet_1<::Il2CppString*>* promoPackIDs;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.IReadOnlyList`1<IAnnotatedBeatmapLevelCollection> _annotatedBeatmapLevelCollections
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* annotatedBeatmapLevelCollections;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*) == 0x8);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x60
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInitialized and: selectedColumn
    char __padding9[0x3] = {};
    // private System.Int32 _selectedColumn
    // Size: 0x4
    // Offset: 0x64
    int selectedColumn;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AnnotatedBeatmapLevelCollectionsTableView
    AnnotatedBeatmapLevelCollectionsTableView(HMUI::TableView* tableView_ = {}, GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell* cellPrefab_ = {}, ::Il2CppString* cellReuseIdentifier_ = {}, float cellWidth_ = {}, ::Array<::Il2CppString*>* promoPackIDStrings_ = {}, GlobalNamespace::AdditionalContentModel* additionalContentModel_ = {}, System::Action_2<GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* didSelectAnnotatedBeatmapLevelCollectionEvent_ = {}, System::Collections::Generic::HashSet_1<::Il2CppString*>* promoPackIDs_ = {}, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* annotatedBeatmapLevelCollections_ = {}, bool isInitialized_ = {}, int selectedColumn_ = {}) noexcept : tableView{tableView_}, cellPrefab{cellPrefab_}, cellReuseIdentifier{cellReuseIdentifier_}, cellWidth{cellWidth_}, promoPackIDStrings{promoPackIDStrings_}, additionalContentModel{additionalContentModel_}, didSelectAnnotatedBeatmapLevelCollectionEvent{didSelectAnnotatedBeatmapLevelCollectionEvent_}, promoPackIDs{promoPackIDs_}, annotatedBeatmapLevelCollections{annotatedBeatmapLevelCollections_}, isInitialized{isInitialized_}, selectedColumn{selectedColumn_} {}
    // Creating interface conversion operator: operator HMUI::TableView::IDataSource
    operator HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::TableView::IDataSource*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private HMUI.TableView _tableView
    HMUI::TableView* _get__tableView();
    // Set instance field: private HMUI.TableView _tableView
    void _set__tableView(HMUI::TableView* value);
    // Get instance field: private AnnotatedBeatmapLevelCollectionTableCell _cellPrefab
    GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell* _get__cellPrefab();
    // Set instance field: private AnnotatedBeatmapLevelCollectionTableCell _cellPrefab
    void _set__cellPrefab(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell* value);
    // Get instance field: private System.String _cellReuseIdentifier
    ::Il2CppString* _get__cellReuseIdentifier();
    // Set instance field: private System.String _cellReuseIdentifier
    void _set__cellReuseIdentifier(::Il2CppString* value);
    // Get instance field: private System.Single _cellWidth
    float _get__cellWidth();
    // Set instance field: private System.Single _cellWidth
    void _set__cellWidth(float value);
    // Get instance field: private System.String[] _promoPackIDStrings
    ::Array<::Il2CppString*>* _get__promoPackIDStrings();
    // Set instance field: private System.String[] _promoPackIDStrings
    void _set__promoPackIDStrings(::Array<::Il2CppString*>* value);
    // Get instance field: private readonly AdditionalContentModel _additionalContentModel
    GlobalNamespace::AdditionalContentModel* _get__additionalContentModel();
    // Set instance field: private readonly AdditionalContentModel _additionalContentModel
    void _set__additionalContentModel(GlobalNamespace::AdditionalContentModel* value);
    // Get instance field: private System.Action`2<AnnotatedBeatmapLevelCollectionsTableView,IAnnotatedBeatmapLevelCollection> didSelectAnnotatedBeatmapLevelCollectionEvent
    System::Action_2<GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* _get_didSelectAnnotatedBeatmapLevelCollectionEvent();
    // Set instance field: private System.Action`2<AnnotatedBeatmapLevelCollectionsTableView,IAnnotatedBeatmapLevelCollection> didSelectAnnotatedBeatmapLevelCollectionEvent
    void _set_didSelectAnnotatedBeatmapLevelCollectionEvent(System::Action_2<GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);
    // Get instance field: private System.Collections.Generic.HashSet`1<System.String> _promoPackIDs
    System::Collections::Generic::HashSet_1<::Il2CppString*>* _get__promoPackIDs();
    // Set instance field: private System.Collections.Generic.HashSet`1<System.String> _promoPackIDs
    void _set__promoPackIDs(System::Collections::Generic::HashSet_1<::Il2CppString*>* value);
    // Get instance field: private System.Collections.Generic.IReadOnlyList`1<IAnnotatedBeatmapLevelCollection> _annotatedBeatmapLevelCollections
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* _get__annotatedBeatmapLevelCollections();
    // Set instance field: private System.Collections.Generic.IReadOnlyList`1<IAnnotatedBeatmapLevelCollection> _annotatedBeatmapLevelCollections
    void _set__annotatedBeatmapLevelCollections(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);
    // Get instance field: private System.Boolean _isInitialized
    bool _get__isInitialized();
    // Set instance field: private System.Boolean _isInitialized
    void _set__isInitialized(bool value);
    // Get instance field: private System.Int32 _selectedColumn
    int _get__selectedColumn();
    // Set instance field: private System.Int32 _selectedColumn
    void _set__selectedColumn(int value);
    // public System.Void add_didSelectAnnotatedBeatmapLevelCollectionEvent(System.Action`2<AnnotatedBeatmapLevelCollectionsTableView,IAnnotatedBeatmapLevelCollection> value)
    // Offset: 0x10D8404
    void add_didSelectAnnotatedBeatmapLevelCollectionEvent(System::Action_2<GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);
    // public System.Void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(System.Action`2<AnnotatedBeatmapLevelCollectionsTableView,IAnnotatedBeatmapLevelCollection> value)
    // Offset: 0x10D84A8
    void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(System::Action_2<GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* value);
    // private System.Void Init()
    // Offset: 0x10D854C
    void Init();
    // public System.Void SetData(System.Collections.Generic.IReadOnlyList`1<IAnnotatedBeatmapLevelCollection> annotatedBeatmapLevelCollections)
    // Offset: 0x10D86AC
    void SetData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>* annotatedBeatmapLevelCollections);
    // protected System.Void OnEnable()
    // Offset: 0x10D8704
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x10D878C
    void OnDisable();
    // protected System.Void OnDestroy()
    // Offset: 0x10D8814
    void OnDestroy();
    // public System.Void Hide()
    // Offset: 0x10D88A8
    void Hide();
    // public System.Void Show()
    // Offset: 0x10D88C4
    void Show();
    // public System.Single CellSize()
    // Offset: 0x10D88E0
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x10D88E8
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0x10D89A4
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int idx);
    // private System.Void HandleDidSelectColumnEvent(HMUI.TableView tableView, System.Int32 column)
    // Offset: 0x10D8C38
    void HandleDidSelectColumnEvent(HMUI::TableView* tableView, int column);
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0x10D8D30
    void HandleAdditionalContentModelDidInvalidateData();
    // public System.Void CancelAsyncOperations()
    // Offset: 0x10D8DEC
    void CancelAsyncOperations();
    // public System.Void RefreshAvailability()
    // Offset: 0x10D9090
    void RefreshAvailability();
    // public System.Void SelectAndScrollToCellWithIdx(System.Int32 idx)
    // Offset: 0x10D9340
    void SelectAndScrollToCellWithIdx(int idx);
    // public System.Void .ctor()
    // Offset: 0x10D9394
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnnotatedBeatmapLevelCollectionsTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnnotatedBeatmapLevelCollectionsTableView*, creationType>()));
    }
  }; // AnnotatedBeatmapLevelCollectionsTableView
  #pragma pack(pop)
  static check_size<sizeof(AnnotatedBeatmapLevelCollectionsTableView), 100 + sizeof(int)> __GlobalNamespace_AnnotatedBeatmapLevelCollectionsTableViewSizeCheck;
  static_assert(sizeof(AnnotatedBeatmapLevelCollectionsTableView) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*, "", "AnnotatedBeatmapLevelCollectionsTableView");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::add_didSelectAnnotatedBeatmapLevelCollectionEvent
// Il2CppName: add_didSelectAnnotatedBeatmapLevelCollectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::*)(System::Action_2<GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::add_didSelectAnnotatedBeatmapLevelCollectionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "AnnotatedBeatmapLevelCollectionsTableView"), ::il2cpp_utils::GetClassFromName("", "IAnnotatedBeatmapLevelCollection")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*), "add_didSelectAnnotatedBeatmapLevelCollectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::remove_didSelectAnnotatedBeatmapLevelCollectionEvent
// Il2CppName: remove_didSelectAnnotatedBeatmapLevelCollectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::*)(System::Action_2<GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::remove_didSelectAnnotatedBeatmapLevelCollectionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "AnnotatedBeatmapLevelCollectionsTableView"), ::il2cpp_utils::GetClassFromName("", "IAnnotatedBeatmapLevelCollection")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*), "remove_didSelectAnnotatedBeatmapLevelCollectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::*)(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection*>*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::SetData)> {
  static const MethodInfo* get() {
    static auto* annotatedBeatmapLevelCollections = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IAnnotatedBeatmapLevelCollection")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{annotatedBeatmapLevelCollections});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::Hide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::Show
// Il2CppName: Show
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::Show)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*), "Show", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::CellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TableCell* (GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::*)(HMUI::TableView*, int)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::CellForIdx)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::HandleDidSelectColumnEvent
// Il2CppName: HandleDidSelectColumnEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::*)(HMUI::TableView*, int)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::HandleDidSelectColumnEvent)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* column = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*), "HandleDidSelectColumnEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, column});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::HandleAdditionalContentModelDidInvalidateData
// Il2CppName: HandleAdditionalContentModelDidInvalidateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::HandleAdditionalContentModelDidInvalidateData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*), "HandleAdditionalContentModelDidInvalidateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::CancelAsyncOperations
// Il2CppName: CancelAsyncOperations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::CancelAsyncOperations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*), "CancelAsyncOperations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::RefreshAvailability
// Il2CppName: RefreshAvailability
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::RefreshAvailability)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*), "RefreshAvailability", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::SelectAndScrollToCellWithIdx
// Il2CppName: SelectAndScrollToCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::*)(int)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::SelectAndScrollToCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView*), "SelectAndScrollToCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionsTableView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
