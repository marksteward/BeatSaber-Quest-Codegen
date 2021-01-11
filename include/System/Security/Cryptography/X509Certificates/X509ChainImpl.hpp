// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509ChainStatus
#include "System/Security/Cryptography/X509Certificates/X509ChainStatus.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509ChainElementCollection
  class X509ChainElementCollection;
  // Forward declaring type: X509ChainPolicy
  class X509ChainPolicy;
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ChainImpl
  // [] Offset: FFFFFFFF
  class X509ChainImpl : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: X509ChainImpl
    X509ChainImpl() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Boolean get_IsValid()
    // Offset: 0xFFFFFFFF
    bool get_IsValid();
    // public System.Security.Cryptography.X509Certificates.X509ChainElementCollection get_ChainElements()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements();
    // public System.Security.Cryptography.X509Certificates.X509ChainPolicy get_ChainPolicy()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::X509ChainPolicy* get_ChainPolicy();
    // public System.Void set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy value)
    // Offset: 0xFFFFFFFF
    void set_ChainPolicy(System::Security::Cryptography::X509Certificates::X509ChainPolicy* value);
    // public System.Security.Cryptography.X509Certificates.X509ChainStatus[] get_ChainStatus()
    // Offset: 0xFFFFFFFF
    ::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* get_ChainStatus();
    // public System.Boolean Build(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0xFFFFFFFF
    bool Build(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
    // public System.Void Reset()
    // Offset: 0xFFFFFFFF
    void Reset();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x146656C
    void Dispose(bool disposing);
    // public System.Void Dispose()
    // Offset: 0x1465724
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // protected override System.Void Finalize()
    // Offset: 0x1466570
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected System.Void .ctor()
    // Offset: 0x14665E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ChainImpl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509ChainImpl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ChainImpl*, creationType>()));
    }
  }; // System.Security.Cryptography.X509Certificates.X509ChainImpl
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ChainImpl*, "System.Security.Cryptography.X509Certificates", "X509ChainImpl");
