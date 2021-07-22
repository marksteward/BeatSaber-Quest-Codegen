// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.SegmentedControl
#include "HMUI/SegmentedControl.hpp"
// Including type: HMUI.SegmentedControl/HMUI.IDataSource
#include "HMUI/SegmentedControl_IDataSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: IconSegmentedControlCell
  class IconSegmentedControlCell;
  // Forward declaring type: SegmentedControlCell
  class SegmentedControlCell;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x99
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.IconSegmentedControl
  // [TokenAttribute] Offset: FFFFFFFF
  class IconSegmentedControl : public HMUI::SegmentedControl/*, public HMUI::SegmentedControl::IDataSource*/ {
    public:
    // Nested type: HMUI::IconSegmentedControl::DataItem
    class DataItem;
    // private System.Single _iconSize
    // Size: 0x4
    // Offset: 0x58
    float iconSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _overrideCellSize
    // Size: 0x1
    // Offset: 0x5C
    bool overrideCellSize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideCellSize and: padding
    char __padding1[0x3] = {};
    // [DrawIfAttribute] Offset: 0xDE2DE0
    // private System.Single _padding
    // Size: 0x4
    // Offset: 0x60
    float padding;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _hideCellBackground
    // Size: 0x1
    // Offset: 0x64
    bool hideCellBackground;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hideCellBackground and: firstCellPrefab
    char __padding3[0x3] = {};
    // [SpaceAttribute] Offset: 0xDE2E98
    // private HMUI.IconSegmentedControlCell _firstCellPrefab
    // Size: 0x8
    // Offset: 0x68
    HMUI::IconSegmentedControlCell* firstCellPrefab;
    // Field size check
    static_assert(sizeof(HMUI::IconSegmentedControlCell*) == 0x8);
    // private HMUI.IconSegmentedControlCell _lastCellPrefab
    // Size: 0x8
    // Offset: 0x70
    HMUI::IconSegmentedControlCell* lastCellPrefab;
    // Field size check
    static_assert(sizeof(HMUI::IconSegmentedControlCell*) == 0x8);
    // private HMUI.IconSegmentedControlCell _middleCellPrefab
    // Size: 0x8
    // Offset: 0x78
    HMUI::IconSegmentedControlCell* middleCellPrefab;
    // Field size check
    static_assert(sizeof(HMUI::IconSegmentedControlCell*) == 0x8);
    // private HMUI.IconSegmentedControlCell _singleCellPrefab
    // Size: 0x8
    // Offset: 0x80
    HMUI::IconSegmentedControlCell* singleCellPrefab;
    // Field size check
    static_assert(sizeof(HMUI::IconSegmentedControlCell*) == 0x8);
    // [InjectAttribute] Offset: 0xDE2F00
    // private Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x88
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private HMUI.IconSegmentedControl/HMUI.DataItem[] _dataItems
    // Size: 0x8
    // Offset: 0x90
    ::Array<HMUI::IconSegmentedControl::DataItem*>* dataItems;
    // Field size check
    static_assert(sizeof(::Array<HMUI::IconSegmentedControl::DataItem*>*) == 0x8);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x98
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: IconSegmentedControl
    IconSegmentedControl(float iconSize_ = {}, bool overrideCellSize_ = {}, float padding_ = {}, bool hideCellBackground_ = {}, HMUI::IconSegmentedControlCell* firstCellPrefab_ = {}, HMUI::IconSegmentedControlCell* lastCellPrefab_ = {}, HMUI::IconSegmentedControlCell* middleCellPrefab_ = {}, HMUI::IconSegmentedControlCell* singleCellPrefab_ = {}, Zenject::DiContainer* container_ = {}, ::Array<HMUI::IconSegmentedControl::DataItem*>* dataItems_ = {}, bool isInitialized_ = {}) noexcept : iconSize{iconSize_}, overrideCellSize{overrideCellSize_}, padding{padding_}, hideCellBackground{hideCellBackground_}, firstCellPrefab{firstCellPrefab_}, lastCellPrefab{lastCellPrefab_}, middleCellPrefab{middleCellPrefab_}, singleCellPrefab{singleCellPrefab_}, container{container_}, dataItems{dataItems_}, isInitialized{isInitialized_} {}
    // Creating interface conversion operator: operator HMUI::SegmentedControl::IDataSource
    operator HMUI::SegmentedControl::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::SegmentedControl::IDataSource*>(this);
    }
    // protected System.Void Init()
    // Offset: 0x131179C
    void Init();
    // public System.Void SetData(HMUI.IconSegmentedControl/HMUI.DataItem[] dataItems)
    // Offset: 0x13117BC
    void SetData(::Array<HMUI::IconSegmentedControl::DataItem*>* dataItems);
    // public System.Int32 NumberOfCells()
    // Offset: 0x1311808
    int NumberOfCells();
    // public HMUI.SegmentedControlCell CellForCellNumber(System.Int32 cellNumber)
    // Offset: 0x1311820
    HMUI::SegmentedControlCell* CellForCellNumber(int cellNumber);
    // private HMUI.IconSegmentedControlCell InstantiateCell(UnityEngine.Object prefab)
    // Offset: 0x13119CC
    HMUI::IconSegmentedControlCell* InstantiateCell(UnityEngine::Object* prefab);
    // public System.Void .ctor()
    // Offset: 0x1311C7C
    // Implemented from: HMUI.SegmentedControl
    // Base method: System.Void SegmentedControl::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IconSegmentedControl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::IconSegmentedControl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IconSegmentedControl*, creationType>()));
    }
  }; // HMUI.IconSegmentedControl
  #pragma pack(pop)
  static check_size<sizeof(IconSegmentedControl), 152 + sizeof(bool)> __HMUI_IconSegmentedControlSizeCheck;
  static_assert(sizeof(IconSegmentedControl) == 0x99);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::IconSegmentedControl*, "HMUI", "IconSegmentedControl");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::IconSegmentedControl::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::IconSegmentedControl::*)()>(&HMUI::IconSegmentedControl::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControl*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControl::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::IconSegmentedControl::*)(::Array<HMUI::IconSegmentedControl::DataItem*>*)>(&HMUI::IconSegmentedControl::SetData)> {
  static const MethodInfo* get() {
    static auto* dataItems = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HMUI", "IconSegmentedControl/DataItem"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControl*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataItems});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControl::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::IconSegmentedControl::*)()>(&HMUI::IconSegmentedControl::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControl*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControl::CellForCellNumber
// Il2CppName: CellForCellNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::SegmentedControlCell* (HMUI::IconSegmentedControl::*)(int)>(&HMUI::IconSegmentedControl::CellForCellNumber)> {
  static const MethodInfo* get() {
    static auto* cellNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControl*), "CellForCellNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cellNumber});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControl::InstantiateCell
// Il2CppName: InstantiateCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::IconSegmentedControlCell* (HMUI::IconSegmentedControl::*)(UnityEngine::Object*)>(&HMUI::IconSegmentedControl::InstantiateCell)> {
  static const MethodInfo* get() {
    static auto* prefab = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControl*), "InstantiateCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefab});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
