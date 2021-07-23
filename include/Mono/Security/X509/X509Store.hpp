// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509Crl
  class X509Crl;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x2A
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X509Store
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Store : public ::Il2CppObject {
    public:
    // private System.String _storePath
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* storePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private Mono.Security.X509.X509CertificateCollection _certificates
    // Size: 0x8
    // Offset: 0x18
    Mono::Security::X509::X509CertificateCollection* certificates;
    // Field size check
    static_assert(sizeof(Mono::Security::X509::X509CertificateCollection*) == 0x8);
    // private System.Collections.ArrayList _crls
    // Size: 0x8
    // Offset: 0x20
    System::Collections::ArrayList* crls;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Boolean _crl
    // Size: 0x1
    // Offset: 0x28
    bool crl;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _newFormat
    // Size: 0x1
    // Offset: 0x29
    bool newFormat;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: X509Store
    X509Store(::Il2CppString* storePath_ = {}, Mono::Security::X509::X509CertificateCollection* certificates_ = {}, System::Collections::ArrayList* crls_ = {}, bool crl_ = {}, bool newFormat_ = {}) noexcept : storePath{storePath_}, certificates{certificates_}, crls{crls_}, crl{crl_}, newFormat{newFormat_} {}
    // Get instance field: private System.String _storePath
    ::Il2CppString* _get__storePath();
    // Set instance field: private System.String _storePath
    void _set__storePath(::Il2CppString* value);
    // Get instance field: private Mono.Security.X509.X509CertificateCollection _certificates
    Mono::Security::X509::X509CertificateCollection* _get__certificates();
    // Set instance field: private Mono.Security.X509.X509CertificateCollection _certificates
    void _set__certificates(Mono::Security::X509::X509CertificateCollection* value);
    // Get instance field: private System.Collections.ArrayList _crls
    System::Collections::ArrayList* _get__crls();
    // Set instance field: private System.Collections.ArrayList _crls
    void _set__crls(System::Collections::ArrayList* value);
    // Get instance field: private System.Boolean _crl
    bool _get__crl();
    // Set instance field: private System.Boolean _crl
    void _set__crl(bool value);
    // Get instance field: private System.Boolean _newFormat
    bool _get__newFormat();
    // Set instance field: private System.Boolean _newFormat
    void _set__newFormat(bool value);
    // public Mono.Security.X509.X509CertificateCollection get_Certificates()
    // Offset: 0x23828E4
    Mono::Security::X509::X509CertificateCollection* get_Certificates();
    // public System.Collections.ArrayList get_Crls()
    // Offset: 0x2382AE8
    System::Collections::ArrayList* get_Crls();
    // System.Void .ctor(System.String path, System.Boolean crl, System.Boolean newFormat)
    // Offset: 0x2382898
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Store* New_ctor(::Il2CppString* path, bool crl, bool newFormat) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::X509::X509Store::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Store*, creationType>(path, crl, newFormat)));
    }
    // private System.Byte[] Load(System.String filename)
    // Offset: 0x2382D40
    ::Array<uint8_t>* Load(::Il2CppString* filename);
    // private Mono.Security.X509.X509Certificate LoadCertificate(System.String filename)
    // Offset: 0x2382EB8
    Mono::Security::X509::X509Certificate* LoadCertificate(::Il2CppString* filename);
    // private Mono.Security.X509.X509Crl LoadCrl(System.String filename)
    // Offset: 0x2382F28
    Mono::Security::X509::X509Crl* LoadCrl(::Il2CppString* filename);
    // private System.Boolean CheckStore(System.String path, System.Boolean throwException)
    // Offset: 0x2382F98
    bool CheckStore(::Il2CppString* path, bool throwException);
    // private Mono.Security.X509.X509CertificateCollection BuildCertificatesCollection(System.String storeName)
    // Offset: 0x2382918
    Mono::Security::X509::X509CertificateCollection* BuildCertificatesCollection(::Il2CppString* storeName);
    // private System.Collections.ArrayList BuildCrlsCollection(System.String storeName)
    // Offset: 0x2382B78
    System::Collections::ArrayList* BuildCrlsCollection(::Il2CppString* storeName);
  }; // Mono.Security.X509.X509Store
  #pragma pack(pop)
  static check_size<sizeof(X509Store), 41 + sizeof(bool)> __Mono_Security_X509_X509StoreSizeCheck;
  static_assert(sizeof(X509Store) == 0x2A);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509Store*, "Mono.Security.X509", "X509Store");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::X509Store::get_Certificates
// Il2CppName: get_Certificates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509CertificateCollection* (Mono::Security::X509::X509Store::*)()>(&Mono::Security::X509::X509Store::get_Certificates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Store*), "get_Certificates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Store::get_Crls
// Il2CppName: get_Crls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ArrayList* (Mono::Security::X509::X509Store::*)()>(&Mono::Security::X509::X509Store::get_Crls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Store*), "get_Crls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Store::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::X509Store::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Mono::Security::X509::X509Store::*)(::Il2CppString*)>(&Mono::Security::X509::X509Store::Load)> {
  static const MethodInfo* get() {
    static auto* filename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Store*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filename});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Store::LoadCertificate
// Il2CppName: LoadCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Certificate* (Mono::Security::X509::X509Store::*)(::Il2CppString*)>(&Mono::Security::X509::X509Store::LoadCertificate)> {
  static const MethodInfo* get() {
    static auto* filename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Store*), "LoadCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filename});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Store::LoadCrl
// Il2CppName: LoadCrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Crl* (Mono::Security::X509::X509Store::*)(::Il2CppString*)>(&Mono::Security::X509::X509Store::LoadCrl)> {
  static const MethodInfo* get() {
    static auto* filename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Store*), "LoadCrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filename});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Store::CheckStore
// Il2CppName: CheckStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::X509::X509Store::*)(::Il2CppString*, bool)>(&Mono::Security::X509::X509Store::CheckStore)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* throwException = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Store*), "CheckStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, throwException});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Store::BuildCertificatesCollection
// Il2CppName: BuildCertificatesCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509CertificateCollection* (Mono::Security::X509::X509Store::*)(::Il2CppString*)>(&Mono::Security::X509::X509Store::BuildCertificatesCollection)> {
  static const MethodInfo* get() {
    static auto* storeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Store*), "BuildCertificatesCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{storeName});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Store::BuildCrlsCollection
// Il2CppName: BuildCrlsCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ArrayList* (Mono::Security::X509::X509Store::*)(::Il2CppString*)>(&Mono::Security::X509::X509Store::BuildCrlsCollection)> {
  static const MethodInfo* get() {
    static auto* storeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Store*), "BuildCrlsCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{storeName});
  }
};
