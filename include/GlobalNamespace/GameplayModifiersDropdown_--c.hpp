// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayModifiersDropdown
#include "GlobalNamespace/GameplayModifiersDropdown.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifiersDropdown/<>c
  // [CompilerGeneratedAttribute] Offset: E12678
  class GameplayModifiersDropdown::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly GameplayModifiersDropdown/<>c <>9
    static GlobalNamespace::GameplayModifiersDropdown::$$c* _get_$$9();
    // Set static field: static public readonly GameplayModifiersDropdown/<>c <>9
    static void _set_$$9(GlobalNamespace::GameplayModifiersDropdown::$$c* value);
    // Get static field: static public System.Func`2<System.Tuple`2<GameplayModifierMask,System.String>,System.String> <>9__8_0
    static System::Func_2<System::Tuple_2<GlobalNamespace::GameplayModifierMask, ::Il2CppString*>*, ::Il2CppString*>* _get_$$9__8_0();
    // Set static field: static public System.Func`2<System.Tuple`2<GameplayModifierMask,System.String>,System.String> <>9__8_0
    static void _set_$$9__8_0(System::Func_2<System::Tuple_2<GlobalNamespace::GameplayModifierMask, ::Il2CppString*>*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x108A354
    static void _cctor();
    // System.String <Start>b__8_0(System.Tuple`2<GameplayModifierMask,System.String> x)
    // Offset: 0x108A3C0
    ::Il2CppString* $Start$b__8_0(System::Tuple_2<GlobalNamespace::GameplayModifierMask, ::Il2CppString*>* x);
    // public System.Void .ctor()
    // Offset: 0x108A3B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayModifiersDropdown::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayModifiersDropdown::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayModifiersDropdown::$$c*, creationType>()));
    }
  }; // GameplayModifiersDropdown/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiersDropdown::$$c*, "", "GameplayModifiersDropdown/<>c");
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersDropdown::$$c::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersDropdown::$$c::$Start$b__8_0
// Il2CppName: <Start>b__8_0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersDropdown::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
