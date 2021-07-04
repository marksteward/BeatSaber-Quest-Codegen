// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.ToggleGroup
#include "UnityEngine/UI/ToggleGroup.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.ToggleGroup/<>c
  // [CompilerGeneratedAttribute] Offset: DC5EBC
  class ToggleGroup::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.UI.ToggleGroup/<>c <>9
    static UnityEngine::UI::ToggleGroup::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UI.ToggleGroup/<>c <>9
    static void _set_$$9(UnityEngine::UI::ToggleGroup::$$c* value);
    // Get static field: static public System.Predicate`1<UnityEngine.UI.Toggle> <>9__12_0
    static System::Predicate_1<UnityEngine::UI::Toggle*>* _get_$$9__12_0();
    // Set static field: static public System.Predicate`1<UnityEngine.UI.Toggle> <>9__12_0
    static void _set_$$9__12_0(System::Predicate_1<UnityEngine::UI::Toggle*>* value);
    // Get static field: static public System.Func`2<UnityEngine.UI.Toggle,System.Boolean> <>9__13_0
    static System::Func_2<UnityEngine::UI::Toggle*, bool>* _get_$$9__13_0();
    // Set static field: static public System.Func`2<UnityEngine.UI.Toggle,System.Boolean> <>9__13_0
    static void _set_$$9__13_0(System::Func_2<UnityEngine::UI::Toggle*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x23A2F10
    static void _cctor();
    // System.Boolean <AnyTogglesOn>b__12_0(UnityEngine.UI.Toggle x)
    // Offset: 0x23A2F7C
    bool $AnyTogglesOn$b__12_0(UnityEngine::UI::Toggle* x);
    // System.Boolean <ActiveToggles>b__13_0(UnityEngine.UI.Toggle x)
    // Offset: 0x23A2F94
    bool $ActiveToggles$b__13_0(UnityEngine::UI::Toggle* x);
    // public System.Void .ctor()
    // Offset: 0x23A2F74
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToggleGroup::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ToggleGroup::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToggleGroup::$$c*, creationType>()));
    }
  }; // UnityEngine.UI.ToggleGroup/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ToggleGroup::$$c*, "UnityEngine.UI", "ToggleGroup/<>c");
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::$$c::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::$$c::$AnyTogglesOn$b__12_0
// Il2CppName: <AnyTogglesOn>b__12_0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::$$c::$ActiveToggles$b__13_0
// Il2CppName: <ActiveToggles>b__13_0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
