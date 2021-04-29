// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: SimpleTextDropdown
  class SimpleTextDropdown;
  // Forward declaring type: DropdownWithTableView
  class DropdownWithTableView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: DropdownSettingsController
  class DropdownSettingsController : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.SimpleTextDropdown _dropdown
    // Size: 0x8
    // Offset: 0x18
    HMUI::SimpleTextDropdown* dropdown;
    // Field size check
    static_assert(sizeof(HMUI::SimpleTextDropdown*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD43474
    // private System.Action dropDownValueDidChangeEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action* dropDownValueDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Int32 _idx
    // Size: 0x4
    // Offset: 0x28
    int idx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _numberOfElements
    // Size: 0x4
    // Offset: 0x2C
    int numberOfElements;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DropdownSettingsController
    DropdownSettingsController(HMUI::SimpleTextDropdown* dropdown_ = {}, System::Action* dropDownValueDidChangeEvent_ = {}, int idx_ = {}, int numberOfElements_ = {}) noexcept : dropdown{dropdown_}, dropDownValueDidChangeEvent{dropDownValueDidChangeEvent_}, idx{idx_}, numberOfElements{numberOfElements_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_dropDownValueDidChangeEvent(System.Action value)
    // Offset: 0x106F6F0
    void add_dropDownValueDidChangeEvent(System::Action* value);
    // public System.Void remove_dropDownValueDidChangeEvent(System.Action value)
    // Offset: 0x106F794
    void remove_dropDownValueDidChangeEvent(System::Action* value);
    // protected System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0xFFFFFFFF
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected System.Void ApplyValue(System.Int32 idx)
    // Offset: 0xFFFFFFFF
    void ApplyValue(int idx);
    // protected System.String TextForValue(System.Int32 idx)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* TextForValue(int idx);
    // protected System.Void OnEnable()
    // Offset: 0x106F838
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x106F9E8
    void OnDisable();
    // private System.Void HandleDropdownValueDidChange(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x106FAC0
    void HandleDropdownValueDidChange(HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // private System.Void RefreshUI()
    // Offset: 0x106F900
    void RefreshUI();
    // public System.Void Refresh(System.Boolean applyValue)
    // Offset: 0x106FB08
    void Refresh(bool applyValue);
    // protected System.Void .ctor()
    // Offset: 0x106FB68
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DropdownSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DropdownSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DropdownSettingsController*, creationType>()));
    }
  }; // DropdownSettingsController
  #pragma pack(pop)
  static check_size<sizeof(DropdownSettingsController), 44 + sizeof(int)> __GlobalNamespace_DropdownSettingsControllerSizeCheck;
  static_assert(sizeof(DropdownSettingsController) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DropdownSettingsController*, "", "DropdownSettingsController");
