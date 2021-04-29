// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
// Including type: System.Collections.IEqualityComparer
#include "System/Collections/IEqualityComparer.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
// Including type: System.Collections.Generic.IEqualityComparer`1
#include "System/Collections/Generic/IEqualityComparer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.FastResourceComparer
  class FastResourceComparer : public ::Il2CppObject/*, public System::Collections::IComparer, public System::Collections::IEqualityComparer, public System::Collections::Generic::IComparer_1<::Il2CppString*>, public System::Collections::Generic::IEqualityComparer_1<::Il2CppString*>*/ {
    public:
    // Creating value type constructor for type: FastResourceComparer
    FastResourceComparer() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IComparer
    operator System::Collections::IComparer() noexcept {
      return *reinterpret_cast<System::Collections::IComparer*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::IEqualityComparer
    operator System::Collections::IEqualityComparer() noexcept {
      return *reinterpret_cast<System::Collections::IEqualityComparer*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IComparer_1<::Il2CppString*>
    operator System::Collections::Generic::IComparer_1<::Il2CppString*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IComparer_1<::Il2CppString*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEqualityComparer_1<::Il2CppString*>
    operator System::Collections::Generic::IEqualityComparer_1<::Il2CppString*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEqualityComparer_1<::Il2CppString*>*>(this);
    }
    // Get static field: static readonly System.Resources.FastResourceComparer Default
    static System::Resources::FastResourceComparer* _get_Default();
    // Set static field: static readonly System.Resources.FastResourceComparer Default
    static void _set_Default(System::Resources::FastResourceComparer* value);
    // public System.Int32 GetHashCode(System.Object key)
    // Offset: 0x1318558
    int GetHashCode(::Il2CppObject* key);
    // public System.Int32 GetHashCode(System.String key)
    // Offset: 0x1318660
    int GetHashCode(::Il2CppString* key);
    // static System.Int32 HashFunction(System.String key)
    // Offset: 0x13185E8
    static int HashFunction(::Il2CppString* key);
    // public System.Int32 Compare(System.Object a, System.Object b)
    // Offset: 0x13186C4
    int Compare(::Il2CppObject* a, ::Il2CppObject* b);
    // public System.Int32 Compare(System.String a, System.String b)
    // Offset: 0x1318774
    int Compare(::Il2CppString* a, ::Il2CppString* b);
    // public System.Boolean Equals(System.String a, System.String b)
    // Offset: 0x1318784
    bool Equals(::Il2CppString* a, ::Il2CppString* b);
    // public System.Boolean Equals(System.Object a, System.Object b)
    // Offset: 0x1318794
    bool Equals(::Il2CppObject* a, ::Il2CppObject* b);
    // static public System.Int32 CompareOrdinal(System.String a, System.Byte[] bytes, System.Int32 bCharLength)
    // Offset: 0x1318844
    static int CompareOrdinal(::Il2CppString* a, ::Array<uint8_t>* bytes, int bCharLength);
    // static public System.Int32 CompareOrdinal(System.Byte[] bytes, System.Int32 aCharLength, System.String b)
    // Offset: 0x1318904
    static int CompareOrdinal(::Array<uint8_t>* bytes, int aCharLength, ::Il2CppString* b);
    // static System.Int32 CompareOrdinal(System.Byte* a, System.Int32 byteLen, System.String b)
    // Offset: 0x1318988
    static int CompareOrdinal(uint8_t* a, int byteLen, ::Il2CppString* b);
    // static private System.Void .cctor()
    // Offset: 0x1318A30
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1318A28
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FastResourceComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Resources::FastResourceComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FastResourceComparer*, creationType>()));
    }
  }; // System.Resources.FastResourceComparer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Resources::FastResourceComparer*, "System.Resources", "FastResourceComparer");
