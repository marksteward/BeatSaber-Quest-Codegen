// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Extension
  class X509Extension;
  // Forward declaring type: X509ExtensionEnumerator
  class X509ExtensionEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ExtensionCollection
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D45634
  class X509ExtensionCollection : public ::Il2CppObject/*, public System::Collections::ICollection*/ {
    public:
    // private System.Collections.ArrayList _list
    // Size: 0x8
    // Offset: 0x10
    System::Collections::ArrayList* list;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // Creating value type constructor for type: X509ExtensionCollection
    X509ExtensionCollection(System::Collections::ArrayList* list_ = {}) noexcept : list{list_} {}
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // Creating conversion operator: operator System::Collections::ArrayList*
    constexpr operator System::Collections::ArrayList*() const noexcept {
      return list;
    }
    // Get static field: static private System.Byte[] Empty
    static ::Array<uint8_t>* _get_Empty();
    // Set static field: static private System.Byte[] Empty
    static void _set_Empty(::Array<uint8_t>* value);
    // System.Void .ctor(Mono.Security.X509.X509Certificate cert)
    // Offset: 0x1461DA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ExtensionCollection* New_ctor(Mono::Security::X509::X509Certificate* cert) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509ExtensionCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ExtensionCollection*, creationType>(cert)));
    }
    // public System.Security.Cryptography.X509Certificates.X509Extension get_Item(System.String oid)
    // Offset: 0x1460DBC
    System::Security::Cryptography::X509Certificates::X509Extension* get_Item(::Il2CppString* oid);
    // public System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator GetEnumerator()
    // Offset: 0x1468C50
    System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator* GetEnumerator();
    // static private System.Void .cctor()
    // Offset: 0x146AD84
    static void _cctor();
    // public System.Int32 get_Count()
    // Offset: 0x14611C0
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x146ABC0
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x146AD20
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Security.Cryptography.X509Certificates.X509ExtensionCollection
  static check_size<sizeof(X509ExtensionCollection), 16 + sizeof(System::Collections::ArrayList*)> __System_Security_Cryptography_X509Certificates_X509ExtensionCollectionSizeCheck;
  static_assert(sizeof(X509ExtensionCollection) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ExtensionCollection*, "System.Security.Cryptography.X509Certificates", "X509ExtensionCollection");
