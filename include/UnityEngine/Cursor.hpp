// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CursorLockMode
  struct CursorLockMode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Cursor
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D4C848
  class Cursor : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Cursor
    Cursor() noexcept {}
    // static public System.Boolean get_visible()
    // Offset: 0x16841DC
    static bool get_visible();
    // static public System.Void set_visible(System.Boolean value)
    // Offset: 0x1684210
    static void set_visible(bool value);
    // static public UnityEngine.CursorLockMode get_lockState()
    // Offset: 0x1684250
    static UnityEngine::CursorLockMode get_lockState();
    // static public System.Void set_lockState(UnityEngine.CursorLockMode value)
    // Offset: 0x1684284
    static void set_lockState(UnityEngine::CursorLockMode value);
  }; // UnityEngine.Cursor
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Cursor*, "UnityEngine", "Cursor");
