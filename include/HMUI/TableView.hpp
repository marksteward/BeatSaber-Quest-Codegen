// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.ITableCellOwner
#include "HMUI/ITableCellOwner.hpp"
// Including type: HMUI.TableViewSelectionType
#include "HMUI/TableViewSelectionType.hpp"
// Including type: HMUI.TableViewScroller
#include "HMUI/TableViewScroller.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
  // Skipping declaration: TableType because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.TableView
  class TableView : public UnityEngine::MonoBehaviour, public HMUI::ITableCellOwner {
    public:
    // Nested type: HMUI::TableView::TableType
    struct TableType;
    // Nested type: HMUI::TableView::CellsGroup
    class CellsGroup;
    // Nested type: HMUI::TableView::IDataSource
    class IDataSource;
    // Nested type: HMUI::TableView::$RefreshScrollButtonsCoroutine$d__55
    class $RefreshScrollButtonsCoroutine$d__55;
    // Autogenerated type: HMUI.TableView/TableType
    struct TableType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: TableType
      constexpr TableType(int value_ = {}) : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const {
        return value;
      }
      // static field const value: static public HMUI.TableView/TableType Vertical
      static constexpr const int Vertical = 0;
      // Get static field: static public HMUI.TableView/TableType Vertical
      static HMUI::TableView::TableType _get_Vertical();
      // Set static field: static public HMUI.TableView/TableType Vertical
      static void _set_Vertical(HMUI::TableView::TableType value);
      // static field const value: static public HMUI.TableView/TableType Horizontal
      static constexpr const int Horizontal = 1;
      // Get static field: static public HMUI.TableView/TableType Horizontal
      static HMUI::TableView::TableType _get_Horizontal();
      // Set static field: static public HMUI.TableView/TableType Horizontal
      static void _set_Horizontal(HMUI::TableView::TableType value);
    }; // HMUI.TableView/TableType
    // private System.Boolean _hideScrollButtonsIfNotNeeded
    // Offset: 0x18
    bool hideScrollButtonsIfNotNeeded;
    // private UnityEngine.UI.Button _pageUpButton
    // Offset: 0x20
    UnityEngine::UI::Button* pageUpButton;
    // private UnityEngine.UI.Button _pageDownButton
    // Offset: 0x28
    UnityEngine::UI::Button* pageDownButton;
    // private System.Boolean _alignToCenter
    // Offset: 0x30
    bool alignToCenter;
    // private HMUI.TableView/TableType _tableType
    // Offset: 0x34
    HMUI::TableView::TableType tableType;
    // private HMUI.TableViewSelectionType _selectionType
    // Offset: 0x38
    HMUI::TableViewSelectionType selectionType;
    // private HMUI.TableView/CellsGroup[] _preallocatedCells
    // Offset: 0x40
    ::Array<HMUI::TableView::CellsGroup*>* preallocatedCells;
    // private System.Action`2<HMUI.TableView,System.Int32> didSelectCellWithIdxEvent
    // Offset: 0x48
    System::Action_2<HMUI::TableView*, int>* didSelectCellWithIdxEvent;
    // private System.Action`2<HMUI.TableView,HMUI.TableCell> cellWasPressedEvent
    // Offset: 0x50
    System::Action_2<HMUI::TableView*, HMUI::TableCell*>* cellWasPressedEvent;
    // private UnityEngine.RectTransform _scrollRectTransform
    // Offset: 0x58
    UnityEngine::RectTransform* scrollRectTransform;
    // private UnityEngine.RectTransform _contentTransform
    // Offset: 0x60
    UnityEngine::RectTransform* contentTransform;
    // protected HMUI.TableView/IDataSource _dataSource
    // Offset: 0x68
    HMUI::TableView::IDataSource* dataSource;
    // private System.Int32 _numberOfCells
    // Offset: 0x70
    int numberOfCells;
    // private System.Single _cellSize
    // Offset: 0x74
    float cellSize;
    // private System.Collections.Generic.List`1<HMUI.TableCell> _visibleCells
    // Offset: 0x78
    System::Collections::Generic::List_1<HMUI::TableCell*>* visibleCells;
    // private System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<HMUI.TableCell>> _reusableCells
    // Offset: 0x80
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::List_1<HMUI::TableCell*>*>* reusableCells;
    // private System.Collections.Generic.HashSet`1<System.Int32> _selectedCellIdxs
    // Offset: 0x88
    System::Collections::Generic::HashSet_1<int>* selectedCellIdxs;
    // private System.Int32 _prevMinIdx
    // Offset: 0x90
    int prevMinIdx;
    // private System.Int32 _prevMaxIdx
    // Offset: 0x94
    int prevMaxIdx;
    // private System.Boolean _isInitialized
    // Offset: 0x98
    bool isInitialized;
    // private HMUI.ButtonBinder _buttonBinder
    // Offset: 0xA0
    HMUI::ButtonBinder* buttonBinder;
    // private HMUI.TableViewScroller _scroller
    // Offset: 0xA8
    HMUI::TableViewScroller* scroller;
    // private System.Boolean _refreshScrollButtonsIsScheduled
    // Offset: 0xB0
    bool refreshScrollButtonsIsScheduled;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public System.Void set_selectionType(HMUI.TableViewSelectionType value)
    // Offset: 0x10E6E28
    void set_selectionType(HMUI::TableViewSelectionType value);
    // public System.Void add_didSelectCellWithIdxEvent(System.Action`2<HMUI.TableView,System.Int32> value)
    // Offset: 0x10E6E30
    void add_didSelectCellWithIdxEvent(System::Action_2<HMUI::TableView*, int>* value);
    // public System.Void remove_didSelectCellWithIdxEvent(System.Action`2<HMUI.TableView,System.Int32> value)
    // Offset: 0x10E6ED4
    void remove_didSelectCellWithIdxEvent(System::Action_2<HMUI::TableView*, int>* value);
    // public System.Void add_cellWasPressedEvent(System.Action`2<HMUI.TableView,HMUI.TableCell> value)
    // Offset: 0x10E6F78
    void add_cellWasPressedEvent(System::Action_2<HMUI::TableView*, HMUI::TableCell*>* value);
    // public System.Void remove_cellWasPressedEvent(System.Action`2<HMUI.TableView,HMUI.TableCell> value)
    // Offset: 0x10E701C
    void remove_cellWasPressedEvent(System::Action_2<HMUI::TableView*, HMUI::TableCell*>* value);
    // public HMUI.TableView/IDataSource get_dataSource()
    // Offset: 0x10E70C0
    HMUI::TableView::IDataSource* get_dataSource();
    // public System.Void set_dataSource(HMUI.TableView/IDataSource value)
    // Offset: 0x10E70C8
    void set_dataSource(HMUI::TableView::IDataSource* value);
    // public System.Collections.Generic.IEnumerable`1<HMUI.TableCell> get_visibleCells()
    // Offset: 0x10E7110
    System::Collections::Generic::IEnumerable_1<HMUI::TableCell*>* get_visibleCells();
    // public UnityEngine.RectTransform get_scrollRectTransform()
    // Offset: 0x10E7118
    UnityEngine::RectTransform* get_scrollRectTransform();
    // public UnityEngine.RectTransform get_contentTransform()
    // Offset: 0x10E7120
    UnityEngine::RectTransform* get_contentTransform();
    // public System.Int32 get_numberOfCells()
    // Offset: 0x10E7128
    int get_numberOfCells();
    // public System.Single get_cellSize()
    // Offset: 0x10E7130
    float get_cellSize();
    // public HMUI.TableView/TableType get_tableType()
    // Offset: 0x10E7138
    HMUI::TableView::TableType get_tableType();
    // protected System.Void Awake()
    // Offset: 0x10E7140
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x10E78A8
    void OnEnable();
    // private System.Void Init()
    // Offset: 0x10E7150
    void Init();
    // protected System.Void OnDestroy()
    // Offset: 0x10E79E8
    void OnDestroy();
    // public System.Void Hide()
    // Offset: 0x10E7A04
    void Hide();
    // public System.Void Show()
    // Offset: 0x10E7B54
    void Show();
    // private System.Void RefreshScrollButtons(System.Boolean instant)
    // Offset: 0x10E7B9C
    void RefreshScrollButtons(bool instant);
    // private System.Collections.IEnumerator RefreshScrollButtonsCoroutine()
    // Offset: 0x10E7EF4
    System::Collections::IEnumerator* RefreshScrollButtonsCoroutine();
    // private System.Void RefreshContentSize()
    // Offset: 0x10E7F9C
    void RefreshContentSize();
    // public System.Void RefreshCellsContent()
    // Offset: 0x10E8014
    void RefreshCellsContent();
    // private System.Void RefreshCells(System.Boolean forcedVisualsRefresh, System.Boolean forcedContentRefresh)
    // Offset: 0x10E8020
    void RefreshCells(bool forcedVisualsRefresh, bool forcedContentRefresh);
    // private System.Void LayoutCellForIdx(HMUI.TableCell cell, System.Int32 idx, System.Single offset)
    // Offset: 0x10E86B4
    void LayoutCellForIdx(HMUI::TableCell* cell, int idx, float offset);
    // private System.Void AddCellToReusableCells(HMUI.TableCell cell)
    // Offset: 0x10E85C4
    void AddCellToReusableCells(HMUI::TableCell* cell);
    // private System.Void HandleScrollRectValueChanged(UnityEngine.Vector2 pos)
    // Offset: 0x10E88FC
    void HandleScrollRectValueChanged(UnityEngine::Vector2 pos);
    // protected System.Void DidSelectCellWithIdx(System.Int32 idx)
    // Offset: 0x10E8B78
    void DidSelectCellWithIdx(int idx);
    // public System.Void ReloadData()
    // Offset: 0x10E396C
    void ReloadData();
    // public System.Void InsertCells(System.Int32 idx, System.Int32 count)
    // Offset: 0x10E3F1C
    void InsertCells(int idx, int count);
    // public System.Void DeleteCells(System.Int32 idx, System.Int32 count)
    // Offset: 0x10E42F8
    void DeleteCells(int idx, int count);
    // public HMUI.TableCell DequeueReusableCellForIdentifier(System.String identifier)
    // Offset: 0x10E8BF0
    HMUI::TableCell* DequeueReusableCellForIdentifier(::Il2CppString* identifier);
    // public System.Void SelectCellWithIdx(System.Int32 idx, System.Boolean callbackTable)
    // Offset: 0x10E8CA4
    void SelectCellWithIdx(int idx, bool callbackTable);
    // public System.Void ClearSelection()
    // Offset: 0x10E8E14
    void ClearSelection();
    // public System.Void ClearHighlights()
    // Offset: 0x10E78AC
    void ClearHighlights();
    // public System.Void ScrollToCellWithIdx(System.Int32 idx, HMUI.TableViewScroller/ScrollPositionType scrollPositionType, System.Boolean animated)
    // Offset: 0x10E4648
    void ScrollToCellWithIdx(int idx, HMUI::TableViewScroller::ScrollPositionType scrollPositionType, bool animated);
    // private System.Void <Init>b__50_0()
    // Offset: 0x10E9114
    void $Init$b__50_0();
    // private System.Void <Init>b__50_1()
    // Offset: 0x10E925C
    void $Init$b__50_1();
    // public HMUI.TableViewSelectionType get_selectionType()
    // Offset: 0x10E6E20
    // Implemented from: HMUI.ITableCellOwner
    // Base method: HMUI.TableViewSelectionType ITableCellOwner::get_selectionType()
    HMUI::TableViewSelectionType get_selectionType();
    // public System.Void CellWasPressed(HMUI.TableCell cell)
    // Offset: 0x10E8908
    // Implemented from: HMUI.ITableCellOwner
    // Base method: System.Void ITableCellOwner::CellWasPressed(HMUI.TableCell cell)
    void CellWasPressed(HMUI::TableCell* cell);
    // public System.Void CellSelectionStateDidChange(HMUI.TableCell changedCell)
    // Offset: 0x10E8980
    // Implemented from: HMUI.ITableCellOwner
    // Base method: System.Void ITableCellOwner::CellSelectionStateDidChange(HMUI.TableCell changedCell)
    void CellSelectionStateDidChange(HMUI::TableCell* changedCell);
    // public System.Void .ctor()
    // Offset: 0x10E469C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TableView* New_ctor();
  }; // HMUI.TableView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::TableView*, "HMUI", "TableView");
DEFINE_IL2CPP_ARG_TYPE(HMUI::TableView::TableType, "HMUI", "TableView/TableType");
#pragma pack(pop)
