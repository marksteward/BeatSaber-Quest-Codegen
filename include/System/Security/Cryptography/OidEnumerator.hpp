// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: OidCollection
  class OidCollection;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x1C
  // Autogenerated type: System.Security.Cryptography.OidEnumerator
  // [] Offset: FFFFFFFF
  class OidEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // private System.Security.Cryptography.OidCollection m_oids
    // Size: 0x8
    // Offset: 0x10
    System::Security::Cryptography::OidCollection* m_oids;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::OidCollection*) == 0x8);
    // private System.Int32 m_current
    // Size: 0x4
    // Offset: 0x18
    int m_current;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: OidEnumerator
    OidEnumerator(System::Security::Cryptography::OidCollection* m_oids_ = {}, int m_current_ = {}) noexcept : m_oids{m_oids_}, m_current{m_current_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // System.Void .ctor(System.Security.Cryptography.OidCollection oids)
    // Offset: 0x145C12C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OidEnumerator* New_ctor(System::Security::Cryptography::OidCollection* oids) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::OidEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OidEnumerator*, creationType>(oids)));
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x145C364
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x145C384
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // public System.Void Reset()
    // Offset: 0x145C3EC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
  }; // System.Security.Cryptography.OidEnumerator
  static check_size<sizeof(OidEnumerator), 24 + sizeof(int)> __System_Security_Cryptography_OidEnumeratorSizeCheck;
  static_assert(sizeof(OidEnumerator) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::OidEnumerator*, "System.Security.Cryptography", "OidEnumerator");
#pragma pack(pop)
