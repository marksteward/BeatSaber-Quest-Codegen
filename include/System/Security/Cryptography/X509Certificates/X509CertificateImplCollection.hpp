// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateImpl
  class X509CertificateImpl;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D455C4
  class X509CertificateImplCollection : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl> list
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509CertificateImpl*>* list;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509CertificateImpl*>*) == 0x8);
    // Creating value type constructor for type: X509CertificateImplCollection
    X509CertificateImplCollection(System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509CertificateImpl*>* list_ = {}) noexcept : list{list_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating conversion operator: operator System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509CertificateImpl*>*
    constexpr operator System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509CertificateImpl*>*() const noexcept {
      return list;
    }
    // private System.Void .ctor(System.Security.Cryptography.X509Certificates.X509CertificateImplCollection other)
    // Offset: 0x1464FE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateImplCollection* New_ctor(System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateImplCollection*, creationType>(other)));
    }
    // public System.Int32 get_Count()
    // Offset: 0x1465158
    int get_Count();
    // public System.Security.Cryptography.X509Certificates.X509CertificateImpl get_Item(System.Int32 index)
    // Offset: 0x14651A8
    System::Security::Cryptography::X509Certificates::X509CertificateImpl* get_Item(int index);
    // public System.Void Add(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl, System.Boolean takeOwnership)
    // Offset: 0x14639FC
    void Add(System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl, bool takeOwnership);
    // public System.Security.Cryptography.X509Certificates.X509CertificateImplCollection Clone()
    // Offset: 0x14618DC
    System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* Clone();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1465220
    void Dispose(bool disposing);
    // public System.Void .ctor()
    // Offset: 0x1463980
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateImplCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateImplCollection*, creationType>()));
    }
    // public System.Void Dispose()
    // Offset: 0x1463DA4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // protected override System.Void Finalize()
    // Offset: 0x14653D4
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
  static check_size<sizeof(X509CertificateImplCollection), 16 + sizeof(System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509CertificateImpl*>*)> __System_Security_Cryptography_X509Certificates_X509CertificateImplCollectionSizeCheck;
  static_assert(sizeof(X509CertificateImplCollection) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*, "System.Security.Cryptography.X509Certificates", "X509CertificateImplCollection");
