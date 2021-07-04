// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.InputField
#include "UnityEngine/UI/InputField.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.InputField/<MouseDragOutsideRect>d__179
  // [CompilerGeneratedAttribute] Offset: DC5E5C
  class InputField::$MouseDragOutsideRect$d__179 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public UnityEngine.EventSystems.PointerEventData eventData
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::EventSystems::PointerEventData* eventData;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::PointerEventData*) == 0x8);
    // public UnityEngine.UI.InputField <>4__this
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::InputField* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::InputField*) == 0x8);
    // Creating value type constructor for type: $MouseDragOutsideRect$d__179
    $MouseDragOutsideRect$d__179(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, UnityEngine::EventSystems::PointerEventData* eventData_ = {}, UnityEngine::UI::InputField* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, eventData{eventData_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x19A772C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputField::$MouseDragOutsideRect$d__179* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::InputField::$MouseDragOutsideRect$d__179::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputField::$MouseDragOutsideRect$d__179*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x19A7758
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x19A775C
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x19A7B4C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x19A7B54
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x19A7BB4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // UnityEngine.UI.InputField/<MouseDragOutsideRect>d__179
  #pragma pack(pop)
  static check_size<sizeof(InputField::$MouseDragOutsideRect$d__179), 40 + sizeof(UnityEngine::UI::InputField*)> __UnityEngine_UI_InputField_$MouseDragOutsideRect$d__179SizeCheck;
  static_assert(sizeof(InputField::$MouseDragOutsideRect$d__179) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::InputField::$MouseDragOutsideRect$d__179*, "UnityEngine.UI", "InputField/<MouseDragOutsideRect>d__179");
// Writing MetadataGetter for method: UnityEngine::UI::InputField::$MouseDragOutsideRect$d__179::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::InputField::$MouseDragOutsideRect$d__179::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::InputField::$MouseDragOutsideRect$d__179::MoveNext
// Il2CppName: MoveNext
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::InputField::$MouseDragOutsideRect$d__179::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::InputField::$MouseDragOutsideRect$d__179::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::InputField::$MouseDragOutsideRect$d__179::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
// Cannot perform method pointer template specialization from operators!
