// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.CollectionBase
#include "System/Collections/CollectionBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509CertificateCollection
  // [DefaultMemberAttribute] Offset: D87D84
  class X509CertificateCollection : public System::Collections::CollectionBase {
    public:
    // Nested type: System::Security::Cryptography::X509Certificates::X509CertificateCollection::X509CertificateEnumerator
    class X509CertificateEnumerator;
    // Creating value type constructor for type: X509CertificateCollection
    X509CertificateCollection() noexcept {}
    // public System.Void .ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection value)
    // Offset: 0x184BC20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateCollection* New_ctor(System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509CertificateCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateCollection*, creationType>(value)));
    }
    // public System.Security.Cryptography.X509Certificates.X509Certificate get_Item(System.Int32 index)
    // Offset: 0x184BD58
    System::Security::Cryptography::X509Certificates::X509Certificate* get_Item(int index);
    // public System.Int32 Add(System.Security.Cryptography.X509Certificates.X509Certificate value)
    // Offset: 0x184BE08
    int Add(System::Security::Cryptography::X509Certificates::X509Certificate* value);
    // public System.Void AddRange(System.Security.Cryptography.X509Certificates.X509CertificateCollection value)
    // Offset: 0x184BC50
    void AddRange(System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);
    // public System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator GetEnumerator()
    // Offset: 0x184BEB8
    System::Security::Cryptography::X509Certificates::X509CertificateCollection::X509CertificateEnumerator* GetEnumerator();
    // public System.Void .ctor()
    // Offset: 0x1846D84
    // Implemented from: System.Collections.CollectionBase
    // Base method: System.Void CollectionBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509CertificateCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateCollection*, creationType>()));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x184BFE4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Security.Cryptography.X509Certificates.X509CertificateCollection
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509CertificateCollection*, "System.Security.Cryptography.X509Certificates", "X509CertificateCollection");
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate* (System::Security::Cryptography::X509Certificates::X509CertificateCollection::*)(int)>(&System::Security::Cryptography::X509Certificates::X509CertificateCollection::get_Item)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::X509Certificates::X509CertificateCollection::*)(System::Security::Cryptography::X509Certificates::X509Certificate*)>(&System::Security::Cryptography::X509Certificates::X509CertificateCollection::Add)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateCollection::AddRange
// Il2CppName: AddRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509CertificateCollection::*)(System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(&System::Security::Cryptography::X509Certificates::X509CertificateCollection::AddRange)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateCollection*), "AddRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateCollection::X509CertificateEnumerator* (System::Security::Cryptography::X509Certificates::X509CertificateCollection::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateCollection::GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateCollection::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::X509Certificates::X509CertificateCollection::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateCollection::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateCollection*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
