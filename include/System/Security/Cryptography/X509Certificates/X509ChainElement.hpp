// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ChainElement
  // [TokenAttribute] Offset: FFFFFFFF
  class X509ChainElement : public ::Il2CppObject {
    public:
    // private System.Security.Cryptography.X509Certificates.X509Certificate2 certificate
    // Size: 0x8
    // Offset: 0x10
    System::Security::Cryptography::X509Certificates::X509Certificate2* certificate;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509Certificate2*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509ChainStatus[] status
    // Size: 0x8
    // Offset: 0x18
    ::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* status;
    // Field size check
    static_assert(sizeof(::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>*) == 0x8);
    // private System.String info
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* info;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509ChainStatusFlags compressed_status_flags
    // Size: 0x4
    // Offset: 0x28
    System::Security::Cryptography::X509Certificates::X509ChainStatusFlags compressed_status_flags;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags) == 0x4);
    // Creating value type constructor for type: X509ChainElement
    X509ChainElement(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate_ = {}, ::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* status_ = {}, ::Il2CppString* info_ = {}, System::Security::Cryptography::X509Certificates::X509ChainStatusFlags compressed_status_flags_ = {}) noexcept : certificate{certificate_}, status{status_}, info{info_}, compressed_status_flags{compressed_status_flags_} {}
    // Get instance field: private System.Security.Cryptography.X509Certificates.X509Certificate2 certificate
    System::Security::Cryptography::X509Certificates::X509Certificate2* _get_certificate();
    // Set instance field: private System.Security.Cryptography.X509Certificates.X509Certificate2 certificate
    void _set_certificate(System::Security::Cryptography::X509Certificates::X509Certificate2* value);
    // Get instance field: private System.Security.Cryptography.X509Certificates.X509ChainStatus[] status
    ::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* _get_status();
    // Set instance field: private System.Security.Cryptography.X509Certificates.X509ChainStatus[] status
    void _set_status(::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* value);
    // Get instance field: private System.String info
    ::Il2CppString* _get_info();
    // Set instance field: private System.String info
    void _set_info(::Il2CppString* value);
    // Get instance field: private System.Security.Cryptography.X509Certificates.X509ChainStatusFlags compressed_status_flags
    System::Security::Cryptography::X509Certificates::X509ChainStatusFlags _get_compressed_status_flags();
    // Set instance field: private System.Security.Cryptography.X509Certificates.X509ChainStatusFlags compressed_status_flags
    void _set_compressed_status_flags(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // public System.Security.Cryptography.X509Certificates.X509Certificate2 get_Certificate()
    // Offset: 0x182DB3C
    System::Security::Cryptography::X509Certificates::X509Certificate2* get_Certificate();
    // public System.Security.Cryptography.X509Certificates.X509ChainStatus[] get_ChainElementStatus()
    // Offset: 0x182DB44
    ::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* get_ChainElementStatus();
    // System.Security.Cryptography.X509Certificates.X509ChainStatusFlags get_StatusFlags()
    // Offset: 0x182DB4C
    System::Security::Cryptography::X509Certificates::X509ChainStatusFlags get_StatusFlags();
    // System.Void set_StatusFlags(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags value)
    // Offset: 0x182DB54
    void set_StatusFlags(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // System.Void .ctor(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x182DAC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ChainElement* New_ctor(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509ChainElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ChainElement*, creationType>(certificate)));
    }
    // private System.Int32 Count(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags flags)
    // Offset: 0x182DB5C
    int Count(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags);
    // private System.Void Set(System.Security.Cryptography.X509Certificates.X509ChainStatus[] status, ref System.Int32 position, System.Security.Cryptography.X509Certificates.X509ChainStatusFlags flags, System.Security.Cryptography.X509Certificates.X509ChainStatusFlags mask)
    // Offset: 0x182DB80
    void Set(::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* status, int& position, System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags, System::Security::Cryptography::X509Certificates::X509ChainStatusFlags mask);
    // System.Void UncompressFlags()
    // Offset: 0x182DDC0
    void UncompressFlags();
  }; // System.Security.Cryptography.X509Certificates.X509ChainElement
  #pragma pack(pop)
  static check_size<sizeof(X509ChainElement), 40 + sizeof(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)> __System_Security_Cryptography_X509Certificates_X509ChainElementSizeCheck;
  static_assert(sizeof(X509ChainElement) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ChainElement*, "System.Security.Cryptography.X509Certificates", "X509ChainElement");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElement::get_Certificate
// Il2CppName: get_Certificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate2* (System::Security::Cryptography::X509Certificates::X509ChainElement::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainElement::get_Certificate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElement*), "get_Certificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElement::get_ChainElementStatus
// Il2CppName: get_ChainElementStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* (System::Security::Cryptography::X509Certificates::X509ChainElement::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainElement::get_ChainElementStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElement*), "get_ChainElementStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElement::get_StatusFlags
// Il2CppName: get_StatusFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags (System::Security::Cryptography::X509Certificates::X509ChainElement::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainElement::get_StatusFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElement*), "get_StatusFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElement::set_StatusFlags
// Il2CppName: set_StatusFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainElement::*)(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&System::Security::Cryptography::X509Certificates::X509ChainElement::set_StatusFlags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509ChainStatusFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElement*), "set_StatusFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElement::Count
// Il2CppName: Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::X509Certificates::X509ChainElement::*)(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&System::Security::Cryptography::X509Certificates::X509ChainElement::Count)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509ChainStatusFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElement*), "Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElement::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainElement::*)(::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>*, int&, System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&System::Security::Cryptography::X509Certificates::X509ChainElement::Set)> {
  static const MethodInfo* get() {
    static auto* status = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509ChainStatus"), 1)->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509ChainStatusFlags")->byval_arg;
    static auto* mask = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509ChainStatusFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElement*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{status, position, flags, mask});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainElement::UncompressFlags
// Il2CppName: UncompressFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainElement::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainElement::UncompressFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainElement*), "UncompressFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
