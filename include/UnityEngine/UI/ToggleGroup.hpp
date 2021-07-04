// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.ToggleGroup
  // [AddComponentMenu] Offset: DC5994
  // [DisallowMultipleComponent] Offset: DC5994
  class ToggleGroup : public UnityEngine::EventSystems::UIBehaviour {
    public:
    // Nested type: UnityEngine::UI::ToggleGroup::$$c
    class $$c;
    // private System.Boolean m_AllowSwitchOff
    // Size: 0x1
    // Offset: 0x18
    bool m_AllowSwitchOff;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_AllowSwitchOff and: m_Toggles
    char __padding0[0x7] = {};
    // protected System.Collections.Generic.List`1<UnityEngine.UI.Toggle> m_Toggles
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::UI::Toggle*>* m_Toggles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::UI::Toggle*>*) == 0x8);
    // Creating value type constructor for type: ToggleGroup
    ToggleGroup(bool m_AllowSwitchOff_ = {}, System::Collections::Generic::List_1<UnityEngine::UI::Toggle*>* m_Toggles_ = {}) noexcept : m_AllowSwitchOff{m_AllowSwitchOff_}, m_Toggles{m_Toggles_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_allowSwitchOff()
    // Offset: 0x23A2B1C
    bool get_allowSwitchOff();
    // public System.Void set_allowSwitchOff(System.Boolean value)
    // Offset: 0x23A2B24
    void set_allowSwitchOff(bool value);
    // private System.Void ValidateToggleIsInGroup(UnityEngine.UI.Toggle toggle)
    // Offset: 0x23A2BC8
    void ValidateToggleIsInGroup(UnityEngine::UI::Toggle* toggle);
    // public System.Void NotifyToggleOn(UnityEngine.UI.Toggle toggle, System.Boolean sendCallback)
    // Offset: 0x23A2808
    void NotifyToggleOn(UnityEngine::UI::Toggle* toggle, bool sendCallback);
    // public System.Void UnregisterToggle(UnityEngine.UI.Toggle toggle)
    // Offset: 0x23A26D8
    void UnregisterToggle(UnityEngine::UI::Toggle* toggle);
    // public System.Void RegisterToggle(UnityEngine.UI.Toggle toggle)
    // Offset: 0x23A2770
    void RegisterToggle(UnityEngine::UI::Toggle* toggle);
    // public System.Void EnsureValidState()
    // Offset: 0x23A2348
    void EnsureValidState();
    // public System.Boolean AnyTogglesOn()
    // Offset: 0x23A2954
    bool AnyTogglesOn();
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle> ActiveToggles()
    // Offset: 0x23A2D1C
    System::Collections::Generic::IEnumerable_1<UnityEngine::UI::Toggle*>* ActiveToggles();
    // public System.Void SetAllTogglesOff(System.Boolean sendCallback)
    // Offset: 0x23A2E0C
    void SetAllTogglesOff(bool sendCallback);
    // protected System.Void .ctor()
    // Offset: 0x23A2B30
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToggleGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ToggleGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToggleGroup*, creationType>()));
    }
    // protected override System.Void Start()
    // Offset: 0x23A2BA0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
  }; // UnityEngine.UI.ToggleGroup
  #pragma pack(pop)
  static check_size<sizeof(ToggleGroup), 32 + sizeof(System::Collections::Generic::List_1<UnityEngine::UI::Toggle*>*)> __UnityEngine_UI_ToggleGroupSizeCheck;
  static_assert(sizeof(ToggleGroup) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ToggleGroup*, "UnityEngine.UI", "ToggleGroup");
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::get_allowSwitchOff
// Il2CppName: get_allowSwitchOff
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::set_allowSwitchOff
// Il2CppName: set_allowSwitchOff
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::ValidateToggleIsInGroup
// Il2CppName: ValidateToggleIsInGroup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::NotifyToggleOn
// Il2CppName: NotifyToggleOn
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::UnregisterToggle
// Il2CppName: UnregisterToggle
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::RegisterToggle
// Il2CppName: RegisterToggle
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::EnsureValidState
// Il2CppName: EnsureValidState
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::AnyTogglesOn
// Il2CppName: AnyTogglesOn
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::ActiveToggles
// Il2CppName: ActiveToggles
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::SetAllTogglesOff
// Il2CppName: SetAllTogglesOff
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
