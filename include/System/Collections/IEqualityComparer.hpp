// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.IEqualityComparer
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3C9B0
  class IEqualityComparer {
    public:
    // Creating value type constructor for type: IEqualityComparer
    IEqualityComparer() noexcept {}
    // public System.Boolean Equals(System.Object x, System.Object y)
    // Offset: 0xFFFFFFFF
    bool System_Collections_IEqualityComparer_Equals(::Il2CppObject* x, ::Il2CppObject* y);
    // public System.Int32 GetHashCode(System.Object obj)
    // Offset: 0xFFFFFFFF
    int System_Collections_IEqualityComparer_GetHashCode(::Il2CppObject* obj);
  }; // System.Collections.IEqualityComparer
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::IEqualityComparer*, "System.Collections", "IEqualityComparer");
