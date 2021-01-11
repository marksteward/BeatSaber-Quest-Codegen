// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.SelectableCell
#include "HMUI/SelectableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: SegmentedControlCell
  class SegmentedControlCell;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.SegmentedControl
  // [] Offset: FFFFFFFF
  class SegmentedControl : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::SegmentedControl::IDataSource
    class IDataSource;
    // [NullAllowed] Offset: 0xDA6A18
    // private UnityEngine.Transform _separatorPrefab
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* separatorPrefab;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDA6A50
    // private System.Action`2<HMUI.SegmentedControl,System.Int32> didSelectCellEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_2<HMUI::SegmentedControl*, int>* didSelectCellEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<HMUI::SegmentedControl*, int>*) == 0x8);
    // private System.Int32 _numberOfCells
    // Size: 0x4
    // Offset: 0x28
    int numberOfCells;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numberOfCells and: cells
    char __padding2[0x4] = {};
    // private readonly System.Collections.Generic.List`1<HMUI.SegmentedControlCell> _cells
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<HMUI::SegmentedControlCell*>* cells;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<HMUI::SegmentedControlCell*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.GameObject> _separators
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<UnityEngine::GameObject*>* separators;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::GameObject*>*) == 0x8);
    // private HMUI.SegmentedControl/IDataSource _dataSource
    // Size: 0x8
    // Offset: 0x40
    HMUI::SegmentedControl::IDataSource* dataSource;
    // Field size check
    static_assert(sizeof(HMUI::SegmentedControl::IDataSource*) == 0x8);
    // private System.Int32 _selectedCellNumber
    // Size: 0x4
    // Offset: 0x48
    int selectedCellNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: selectedCellNumber and: callbacks
    char __padding6[0x4] = {};
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Action`1<System.Int32>> _callbacks
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::Dictionary_2<int, System::Action_1<int>*>* callbacks;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, System::Action_1<int>*>*) == 0x8);
    // Creating value type constructor for type: SegmentedControl
    SegmentedControl(UnityEngine::Transform* separatorPrefab_ = {}, System::Action_2<HMUI::SegmentedControl*, int>* didSelectCellEvent_ = {}, int numberOfCells_ = {}, System::Collections::Generic::List_1<HMUI::SegmentedControlCell*>* cells_ = {}, System::Collections::Generic::List_1<UnityEngine::GameObject*>* separators_ = {}, HMUI::SegmentedControl::IDataSource* dataSource_ = {}, int selectedCellNumber_ = {}, System::Collections::Generic::Dictionary_2<int, System::Action_1<int>*>* callbacks_ = {}) noexcept : separatorPrefab{separatorPrefab_}, didSelectCellEvent{didSelectCellEvent_}, numberOfCells{numberOfCells_}, cells{cells_}, separators{separators_}, dataSource{dataSource_}, selectedCellNumber{selectedCellNumber_}, callbacks{callbacks_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didSelectCellEvent(System.Action`2<HMUI.SegmentedControl,System.Int32> value)
    // Offset: 0x1083358
    void add_didSelectCellEvent(System::Action_2<HMUI::SegmentedControl*, int>* value);
    // public System.Void remove_didSelectCellEvent(System.Action`2<HMUI.SegmentedControl,System.Int32> value)
    // Offset: 0x10833FC
    void remove_didSelectCellEvent(System::Action_2<HMUI::SegmentedControl*, int>* value);
    // public HMUI.SegmentedControl/IDataSource get_dataSource()
    // Offset: 0x10834A0
    HMUI::SegmentedControl::IDataSource* get_dataSource();
    // public System.Void set_dataSource(HMUI.SegmentedControl/IDataSource value)
    // Offset: 0x10834A8
    void set_dataSource(HMUI::SegmentedControl::IDataSource* value);
    // public System.Int32 get_selectedCellNumber()
    // Offset: 0x10837F4
    int get_selectedCellNumber();
    // private System.Void CreateCells()
    // Offset: 0x10837FC
    void CreateCells();
    // private System.Void HandleCellSelectionDidChange(HMUI.SelectableCell selectableCell, HMUI.SelectableCell/TransitionType transitionType, System.Object changeOwner)
    // Offset: 0x1083E30
    void HandleCellSelectionDidChange(HMUI::SelectableCell* selectableCell, HMUI::SelectableCell::TransitionType transitionType, ::Il2CppObject* changeOwner);
    // public System.Void SetCallbackForCell(System.Int32 cellNumber, System.Action`1<System.Int32> callback)
    // Offset: 0x1083F88
    void SetCallbackForCell(int cellNumber, System::Action_1<int>* callback);
    // public System.Void ReloadData()
    // Offset: 0x10834D0
    void ReloadData();
    // public System.Void SelectCellWithNumber(System.Int32 selectCellNumber)
    // Offset: 0x1083FF8
    void SelectCellWithNumber(int selectCellNumber);
    // public System.Void .ctor()
    // Offset: 0x10840B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SegmentedControl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::SegmentedControl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SegmentedControl*, creationType>()));
    }
  }; // HMUI.SegmentedControl
  static check_size<sizeof(SegmentedControl), 80 + sizeof(System::Collections::Generic::Dictionary_2<int, System::Action_1<int>*>*)> __HMUI_SegmentedControlSizeCheck;
  static_assert(sizeof(SegmentedControl) == 0x58);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(HMUI::SegmentedControl*, "HMUI", "SegmentedControl");
