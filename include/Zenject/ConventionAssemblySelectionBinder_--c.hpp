// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ConventionAssemblySelectionBinder
#include "Zenject/ConventionAssemblySelectionBinder.hpp"
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
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConventionAssemblySelectionBinder/<>c
  // [CompilerGeneratedAttribute] Offset: D02CFC
  class ConventionAssemblySelectionBinder::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly Zenject.ConventionAssemblySelectionBinder/<>c <>9
    static Zenject::ConventionAssemblySelectionBinder::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.ConventionAssemblySelectionBinder/<>c <>9
    static void _set_$$9(Zenject::ConventionAssemblySelectionBinder::$$c* value);
    // Get static field: static public System.Func`2<System.Type,System.Reflection.Assembly> <>9__8_0
    static System::Func_2<System::Type*, System::Reflection::Assembly*>* _get_$$9__8_0();
    // Set static field: static public System.Func`2<System.Type,System.Reflection.Assembly> <>9__8_0
    static void _set_$$9__8_0(System::Func_2<System::Type*, System::Reflection::Assembly*>* value);
    // static private System.Void .cctor()
    // Offset: 0x12C7898
    static void _cctor();
    // System.Reflection.Assembly <FromAssembliesContaining>b__8_0(System.Type t)
    // Offset: 0x12C7904
    System::Reflection::Assembly* $FromAssembliesContaining$b__8_0(System::Type* t);
    // public System.Void .ctor()
    // Offset: 0x12C78FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionAssemblySelectionBinder::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionAssemblySelectionBinder::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionAssemblySelectionBinder::$$c*, creationType>()));
    }
  }; // Zenject.ConventionAssemblySelectionBinder/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionAssemblySelectionBinder::$$c*, "Zenject", "ConventionAssemblySelectionBinder/<>c");
