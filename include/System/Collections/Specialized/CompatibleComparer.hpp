// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IEqualityComparer
#include "System/Collections/IEqualityComparer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
  // Forward declaring type: IHashCodeProvider
  class IHashCodeProvider;
}
// Completed forward declares
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Autogenerated type: System.Collections.Specialized.CompatibleComparer
  class CompatibleComparer : public ::Il2CppObject/*, public System::Collections::IEqualityComparer*/ {
    public:
    // private System.Collections.IComparer _comparer
    // Offset: 0x10
    System::Collections::IComparer* comparer;
    // private System.Collections.IHashCodeProvider _hcp
    // Offset: 0x18
    System::Collections::IHashCodeProvider* hcp;
    // Creating interface conversion operator: operator System::Collections::IEqualityComparer
    operator System::Collections::IEqualityComparer() noexcept {
      return *reinterpret_cast<System::Collections::IEqualityComparer*>(this);
    }
    // Get static field: static private System.Collections.IComparer defaultComparer
    static System::Collections::IComparer* _get_defaultComparer();
    // Set static field: static private System.Collections.IComparer defaultComparer
    static void _set_defaultComparer(System::Collections::IComparer* value);
    // Get static field: static private System.Collections.IHashCodeProvider defaultHashProvider
    static System::Collections::IHashCodeProvider* _get_defaultHashProvider();
    // Set static field: static private System.Collections.IHashCodeProvider defaultHashProvider
    static void _set_defaultHashProvider(System::Collections::IHashCodeProvider* value);
    // System.Void .ctor(System.Collections.IComparer comparer, System.Collections.IHashCodeProvider hashCodeProvider)
    // Offset: 0x14DC148
    static CompatibleComparer* New_ctor(System::Collections::IComparer* comparer, System::Collections::IHashCodeProvider* hashCodeProvider);
    // public System.Collections.IComparer get_Comparer()
    // Offset: 0x14DC4BC
    System::Collections::IComparer* get_Comparer();
    // public System.Collections.IHashCodeProvider get_HashCodeProvider()
    // Offset: 0x14DC4C4
    System::Collections::IHashCodeProvider* get_HashCodeProvider();
    // static public System.Collections.IComparer get_DefaultComparer()
    // Offset: 0x14DC4CC
    static System::Collections::IComparer* get_DefaultComparer();
    // static public System.Collections.IHashCodeProvider get_DefaultHashCodeProvider()
    // Offset: 0x14DC5A8
    static System::Collections::IHashCodeProvider* get_DefaultHashCodeProvider();
    // public System.Boolean Equals(System.Object a, System.Object b)
    // Offset: 0x14DC198
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object a, System.Object b)
    // Base method: System.Boolean IEqualityComparer::Equals(System.Object a, System.Object b)
    bool Equals(::Il2CppObject* a, ::Il2CppObject* b);
    // Creating proxy method: System_Collections_IEqualityComparer_Equals
    // Maps to method: Equals
    bool System_Collections_IEqualityComparer_Equals(::Il2CppObject* a, ::Il2CppObject* b);
    // public System.Int32 GetHashCode(System.Object obj)
    // Offset: 0x14DC3A4
    // Implemented from: System.Collections.IEqualityComparer
    // Base method: System.Int32 IEqualityComparer::GetHashCode(System.Object obj)
    int GetHashCode(::Il2CppObject* obj);
    // Creating proxy method: System_Collections_IEqualityComparer_GetHashCode
    // Maps to method: GetHashCode
    int System_Collections_IEqualityComparer_GetHashCode(::Il2CppObject* obj);
  }; // System.Collections.Specialized.CompatibleComparer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::CompatibleComparer*, "System.Collections.Specialized", "CompatibleComparer");
#pragma pack(pop)
