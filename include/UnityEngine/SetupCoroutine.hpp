// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SetupCoroutine
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: D4D5BC
  class SetupCoroutine : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SetupCoroutine
    SetupCoroutine() noexcept {}
    // static public System.Void InvokeMoveNext(System.Collections.IEnumerator enumerator, System.IntPtr returnValueAddress)
    // Offset: 0x16C0604
    static void InvokeMoveNext(System::Collections::IEnumerator* enumerator, System::IntPtr returnValueAddress);
    // static public System.Object InvokeMember(System.Object behaviour, System.String name, System.Object variable)
    // Offset: 0x16C0734
    static ::Il2CppObject* InvokeMember(::Il2CppObject* behaviour, ::Il2CppString* name, ::Il2CppObject* variable);
  }; // UnityEngine.SetupCoroutine
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SetupCoroutine*, "UnityEngine", "SetupCoroutine");
