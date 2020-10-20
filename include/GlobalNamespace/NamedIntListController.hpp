// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
// Including type: HMUI.IValueChanger`1
#include "HMUI/IValueChanger_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NamedIntListController
  class NamedIntListController : public GlobalNamespace::ListSettingsController/*, public HMUI::IValueChanger_1<int>*/ {
    public:
    // Nested type: GlobalNamespace::NamedIntListController::TextValuePair
    class TextValuePair;
    // private NamedIntListController/TextValuePair[] _textValuePairs
    // Offset: 0x28
    ::Array<GlobalNamespace::NamedIntListController::TextValuePair*>* textValuePairs;
    // private System.Int32 _value
    // Offset: 0x30
    int value;
    // private System.Action`1<System.Int32> valueChangedEvent
    // Offset: 0x38
    System::Action_1<int>* valueChangedEvent;
    // Creating interface conversion operator: operator HMUI::IValueChanger_1<int>
    operator HMUI::IValueChanger_1<int>() noexcept {
      return *reinterpret_cast<HMUI::IValueChanger_1<int>*>(this);
    }
    // public System.Void add_valueChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1FDD410
    void add_valueChangedEvent(System::Action_1<int>* value);
    // public System.Void remove_valueChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1FDD4B4
    void remove_valueChangedEvent(System::Action_1<int>* value);
    // public System.Void InitValues(NamedIntListController/TextValuePair[] values)
    // Offset: 0x1FDD558
    void InitValues(::Array<GlobalNamespace::NamedIntListController::TextValuePair*>* values);
    // public System.Void SetValue(System.Int32 value)
    // Offset: 0x1FDD588
    void SetValue(int value);
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0x1FDD598
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0x1FDD634
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0x1FDD6AC
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::Il2CppString* TextForValue(int idx);
    // public System.Void .ctor()
    // Offset: 0x1FDD700
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NamedIntListController* New_ctor();
  }; // NamedIntListController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NamedIntListController*, "", "NamedIntListController");
#pragma pack(pop)
