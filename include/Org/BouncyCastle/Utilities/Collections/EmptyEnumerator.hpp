// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Utilities.Collections
namespace Org::BouncyCastle::Utilities::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Collections.EmptyEnumerator
  // [] Offset: FFFFFFFF
  class EmptyEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // Creating value type constructor for type: EmptyEnumerator
    EmptyEnumerator() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Get static field: static public readonly System.Collections.IEnumerator Instance
    static System::Collections::IEnumerator* _get_Instance();
    // Set static field: static public readonly System.Collections.IEnumerator Instance
    static void _set_Instance(System::Collections::IEnumerator* value);
    // static private System.Void .cctor()
    // Offset: 0x10E15FC
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x10E157C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyEnumerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Utilities::Collections::EmptyEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyEnumerator*, creationType>()));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x10E1584
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // public System.Void Reset()
    // Offset: 0x10E158C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
    // public System.Object get_Current()
    // Offset: 0x10E1590
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Org.BouncyCastle.Utilities.Collections.EmptyEnumerator
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::EmptyEnumerator*, "Org.BouncyCastle.Utilities.Collections", "EmptyEnumerator");
