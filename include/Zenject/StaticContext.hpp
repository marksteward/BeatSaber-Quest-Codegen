// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.StaticContext
  // [] Offset: FFFFFFFF
  class StaticContext : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: StaticContext
    StaticContext() noexcept {}
    // Get static field: static private Zenject.DiContainer _container
    static Zenject::DiContainer* _get__container();
    // Set static field: static private Zenject.DiContainer _container
    static void _set__container(Zenject::DiContainer* value);
    // static public System.Void Clear()
    // Offset: 0x13530D4
    static void Clear();
    // static public System.Boolean get_HasContainer()
    // Offset: 0x1353128
    static bool get_HasContainer();
    // static public Zenject.DiContainer get_Container()
    // Offset: 0x134D708
    static Zenject::DiContainer* get_Container();
  }; // Zenject.StaticContext
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::StaticContext*, "Zenject", "StaticContext");
