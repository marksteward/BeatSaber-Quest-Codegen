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
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D75518
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
    // Get instance field: private System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl> list
    System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509CertificateImpl*>* _get_list();
    // Set instance field: private System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl> list
    void _set_list(System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509CertificateImpl*>* value);
    // public System.Int32 get_Count()
    // Offset: 0x182D400
    int get_Count();
    // public System.Security.Cryptography.X509Certificates.X509CertificateImpl get_Item(System.Int32 index)
    // Offset: 0x182D450
    System::Security::Cryptography::X509Certificates::X509CertificateImpl* get_Item(int index);
    // private System.Void .ctor(System.Security.Cryptography.X509Certificates.X509CertificateImplCollection other)
    // Offset: 0x182D298
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateImplCollection* New_ctor(System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateImplCollection*, creationType>(other)));
    }
    // public System.Void Add(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl, System.Boolean takeOwnership)
    // Offset: 0x182BD38
    void Add(System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl, bool takeOwnership);
    // public System.Security.Cryptography.X509Certificates.X509CertificateImplCollection Clone()
    // Offset: 0x1829C80
    System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* Clone();
    // public System.Void Dispose()
    // Offset: 0x182C078
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x182D4C8
    void Dispose(bool disposing);
    // public System.Void .ctor()
    // Offset: 0x182BCC4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateImplCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateImplCollection*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x182D67C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
  #pragma pack(pop)
  static check_size<sizeof(X509CertificateImplCollection), 16 + sizeof(System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509CertificateImpl*>*)> __System_Security_Cryptography_X509Certificates_X509CertificateImplCollectionSizeCheck;
  static_assert(sizeof(X509CertificateImplCollection) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*, "System.Security.Cryptography.X509Certificates", "X509CertificateImplCollection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImpl* (System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::*)(int)>(&System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::*)(System::Security::Cryptography::X509Certificates::X509CertificateImpl*, bool)>(&System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::Add)> {
  static const MethodInfo* get() {
    static auto* impl = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateImpl")->byval_arg;
    static auto* takeOwnership = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{impl, takeOwnership});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* (System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImplCollection::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
