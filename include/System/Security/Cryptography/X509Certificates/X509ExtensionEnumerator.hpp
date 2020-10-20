// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Extension
  class X509Extension;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
  class X509ExtensionEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // private System.Collections.IEnumerator enumerator
    // Offset: 0x10
    System::Collections::IEnumerator* enumerator;
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Creating conversion operator: operator System::Collections::IEnumerator*
    constexpr operator System::Collections::IEnumerator*() const noexcept {
      return enumerator;
    }
    // System.Void .ctor(System.Collections.ArrayList list)
    // Offset: 0x1480818
    static X509ExtensionEnumerator* New_ctor(System::Collections::ArrayList* list);
    // public System.Security.Cryptography.X509Certificates.X509Extension get_Current()
    // Offset: 0x147E7FC
    System::Security::Cryptography::X509Certificates::X509Extension* get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1480938
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x147E8F0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // public System.Void Reset()
    // Offset: 0x14809EC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
  }; // System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator*, "System.Security.Cryptography.X509Certificates", "X509ExtensionEnumerator");
#pragma pack(pop)
