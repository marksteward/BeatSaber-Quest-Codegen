// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Context
#include "Zenject/Context.hpp"
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
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Context/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D93CF8
  class Context::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly Zenject.Context/<>c <>9
    static Zenject::Context::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.Context/<>c <>9
    static void _set_$$9(Zenject::Context::$$c* value);
    // Get static field: static public System.Func`2<System.Type,System.Boolean> <>9__16_0
    static System::Func_2<System::Type*, bool>* _get_$$9__16_0();
    // Set static field: static public System.Func`2<System.Type,System.Boolean> <>9__16_0
    static void _set_$$9__16_0(System::Func_2<System::Type*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x10F1458
    static void _cctor();
    // System.Boolean <set_NormalInstallerTypes>b__16_0(System.Type x)
    // Offset: 0x10F14C8
    bool $set_NormalInstallerTypes$b__16_0(System::Type* x);
    // public System.Void .ctor()
    // Offset: 0x10F14C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Context::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Context::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Context::$$c*, creationType>()));
    }
  }; // Zenject.Context/<>c
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Zenject::Context::$$c*, "Zenject", "Context/<>c");
