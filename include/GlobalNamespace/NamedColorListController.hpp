// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ListColorController
#include "GlobalNamespace/ListColorController.hpp"
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NamedColorListController
  class NamedColorListController : public GlobalNamespace::ListColorController/*, public HMUI::IValueChanger_1<int>*/ {
    public:
    // Nested type: GlobalNamespace::NamedColorListController::ColorValuePair
    class ColorValuePair;
    // private NamedColorListController/ColorValuePair[] _textValuePairs
    // Offset: 0x28
    ::Array<GlobalNamespace::NamedColorListController::ColorValuePair*>* textValuePairs;
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
    // Offset: 0x1FDD118
    void add_valueChangedEvent(System::Action_1<int>* value);
    // public System.Void remove_valueChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1FDD1BC
    void remove_valueChangedEvent(System::Action_1<int>* value);
    // public System.Void Init(NamedColorListController/ColorValuePair[] values, System.Int32 value)
    // Offset: 0x1FDD260
    void Init(::Array<GlobalNamespace::NamedColorListController::ColorValuePair*>* values, int value);
    // public System.Void SetValue(System.Int32 value)
    // Offset: 0x1FDD294
    void SetValue(int value);
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0x1FDD2A4
    // Implemented from: ListColorController
    // Base method: System.Boolean ListColorController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0x1FDD340
    // Implemented from: ListColorController
    // Base method: System.Void ListColorController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override UnityEngine.Color ColorForValue(System.Int32 idx)
    // Offset: 0x1FDD3B8
    // Implemented from: ListColorController
    // Base method: UnityEngine.Color ListColorController::ColorForValue(System.Int32 idx)
    UnityEngine::Color ColorForValue(int idx);
    // public System.Void .ctor()
    // Offset: 0x1FDD400
    // Implemented from: ListColorController
    // Base method: System.Void ListColorController::.ctor()
    // Base method: System.Void IncDecColorController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NamedColorListController* New_ctor();
  }; // NamedColorListController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NamedColorListController*, "", "NamedColorListController");
#pragma pack(pop)
