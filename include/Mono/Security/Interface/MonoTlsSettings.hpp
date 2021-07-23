// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: Mono.Security.Interface.TlsProtocols
#include "Mono/Security/Interface/TlsProtocols.hpp"
// Including type: Mono.Security.Interface.CipherSuiteCode
#include "Mono/Security/Interface/CipherSuiteCode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoRemoteCertificateValidationCallback
  class MonoRemoteCertificateValidationCallback;
  // Forward declaring type: MonoLocalCertificateSelectionCallback
  class MonoLocalCertificateSelectionCallback;
  // Forward declaring type: ICertificateValidator
  class ICertificateValidator;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Completed forward declares
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // WARNING Size may be invalid!
  // Autogenerated type: Mono.Security.Interface.MonoTlsSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoTlsSettings : public ::Il2CppObject {
    public:
    // private Mono.Security.Interface.MonoRemoteCertificateValidationCallback <RemoteCertificateValidationCallback>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    Mono::Security::Interface::MonoRemoteCertificateValidationCallback* RemoteCertificateValidationCallback;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoRemoteCertificateValidationCallback*) == 0x8);
    // private Mono.Security.Interface.MonoLocalCertificateSelectionCallback <ClientCertificateSelectionCallback>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    Mono::Security::Interface::MonoLocalCertificateSelectionCallback* ClientCertificateSelectionCallback;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoLocalCertificateSelectionCallback*) == 0x8);
    // private System.Nullable`1<System.DateTime> <CertificateValidationTime>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    System::Nullable_1<System::DateTime> CertificateValidationTime;
    // private System.Security.Cryptography.X509Certificates.X509CertificateCollection <TrustAnchors>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    System::Security::Cryptography::X509Certificates::X509CertificateCollection* TrustAnchors;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509CertificateCollection*) == 0x8);
    // private System.Object <UserSettings>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* UserSettings;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.String[] <CertificateSearchPaths>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::Array<::Il2CppString*>* CertificateSearchPaths;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.Boolean <SendCloseNotify>k__BackingField
    // Size: 0x1
    // Offset: 0x48
    bool SendCloseNotify;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Nullable`1<Mono.Security.Interface.TlsProtocols> <EnabledProtocols>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x4C
    System::Nullable_1<Mono::Security::Interface::TlsProtocols> EnabledProtocols;
    // private Mono.Security.Interface.CipherSuiteCode[] <EnabledCiphers>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::Array<Mono::Security::Interface::CipherSuiteCode>* EnabledCiphers;
    // Field size check
    static_assert(sizeof(::Array<Mono::Security::Interface::CipherSuiteCode>*) == 0x8);
    // private System.Boolean cloned
    // Size: 0x1
    // Offset: 0x60
    bool cloned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean checkCertName
    // Size: 0x1
    // Offset: 0x61
    bool checkCertName;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean checkCertRevocationStatus
    // Size: 0x1
    // Offset: 0x62
    bool checkCertRevocationStatus;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Nullable`1<System.Boolean> useServicePointManagerCallback
    // Size: 0xFFFFFFFF
    // Offset: 0x63
    System::Nullable_1<bool> useServicePointManagerCallback;
    // private System.Boolean skipSystemValidators
    // Size: 0x1
    // Offset: 0x65
    bool skipSystemValidators;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean callbackNeedsChain
    // Size: 0x1
    // Offset: 0x66
    bool callbackNeedsChain;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private Mono.Security.Interface.ICertificateValidator certificateValidator
    // Size: 0x8
    // Offset: 0x68
    Mono::Security::Interface::ICertificateValidator* certificateValidator;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::ICertificateValidator*) == 0x8);
    // Creating value type constructor for type: MonoTlsSettings
    MonoTlsSettings(Mono::Security::Interface::MonoRemoteCertificateValidationCallback* RemoteCertificateValidationCallback_ = {}, Mono::Security::Interface::MonoLocalCertificateSelectionCallback* ClientCertificateSelectionCallback_ = {}, System::Nullable_1<System::DateTime> CertificateValidationTime_ = {}, System::Security::Cryptography::X509Certificates::X509CertificateCollection* TrustAnchors_ = {}, ::Il2CppObject* UserSettings_ = {}, ::Array<::Il2CppString*>* CertificateSearchPaths_ = {}, bool SendCloseNotify_ = {}, System::Nullable_1<Mono::Security::Interface::TlsProtocols> EnabledProtocols_ = {}, ::Array<Mono::Security::Interface::CipherSuiteCode>* EnabledCiphers_ = {}, bool cloned_ = {}, bool checkCertName_ = {}, bool checkCertRevocationStatus_ = {}, System::Nullable_1<bool> useServicePointManagerCallback_ = {}, bool skipSystemValidators_ = {}, bool callbackNeedsChain_ = {}, Mono::Security::Interface::ICertificateValidator* certificateValidator_ = {}) noexcept : RemoteCertificateValidationCallback{RemoteCertificateValidationCallback_}, ClientCertificateSelectionCallback{ClientCertificateSelectionCallback_}, CertificateValidationTime{CertificateValidationTime_}, TrustAnchors{TrustAnchors_}, UserSettings{UserSettings_}, CertificateSearchPaths{CertificateSearchPaths_}, SendCloseNotify{SendCloseNotify_}, EnabledProtocols{EnabledProtocols_}, EnabledCiphers{EnabledCiphers_}, cloned{cloned_}, checkCertName{checkCertName_}, checkCertRevocationStatus{checkCertRevocationStatus_}, useServicePointManagerCallback{useServicePointManagerCallback_}, skipSystemValidators{skipSystemValidators_}, callbackNeedsChain{callbackNeedsChain_}, certificateValidator{certificateValidator_} {}
    // Get static field: static private Mono.Security.Interface.MonoTlsSettings defaultSettings
    static Mono::Security::Interface::MonoTlsSettings* _get_defaultSettings();
    // Set static field: static private Mono.Security.Interface.MonoTlsSettings defaultSettings
    static void _set_defaultSettings(Mono::Security::Interface::MonoTlsSettings* value);
    // Get instance field: private Mono.Security.Interface.MonoRemoteCertificateValidationCallback <RemoteCertificateValidationCallback>k__BackingField
    Mono::Security::Interface::MonoRemoteCertificateValidationCallback* _get_$RemoteCertificateValidationCallback$k__BackingField();
    // Set instance field: private Mono.Security.Interface.MonoRemoteCertificateValidationCallback <RemoteCertificateValidationCallback>k__BackingField
    void _set_$RemoteCertificateValidationCallback$k__BackingField(Mono::Security::Interface::MonoRemoteCertificateValidationCallback* value);
    // Get instance field: private Mono.Security.Interface.MonoLocalCertificateSelectionCallback <ClientCertificateSelectionCallback>k__BackingField
    Mono::Security::Interface::MonoLocalCertificateSelectionCallback* _get_$ClientCertificateSelectionCallback$k__BackingField();
    // Set instance field: private Mono.Security.Interface.MonoLocalCertificateSelectionCallback <ClientCertificateSelectionCallback>k__BackingField
    void _set_$ClientCertificateSelectionCallback$k__BackingField(Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value);
    // Get instance field: private System.Nullable`1<System.DateTime> <CertificateValidationTime>k__BackingField
    System::Nullable_1<System::DateTime> _get_$CertificateValidationTime$k__BackingField();
    // Set instance field: private System.Nullable`1<System.DateTime> <CertificateValidationTime>k__BackingField
    void _set_$CertificateValidationTime$k__BackingField(System::Nullable_1<System::DateTime> value);
    // Get instance field: private System.Security.Cryptography.X509Certificates.X509CertificateCollection <TrustAnchors>k__BackingField
    System::Security::Cryptography::X509Certificates::X509CertificateCollection* _get_$TrustAnchors$k__BackingField();
    // Set instance field: private System.Security.Cryptography.X509Certificates.X509CertificateCollection <TrustAnchors>k__BackingField
    void _set_$TrustAnchors$k__BackingField(System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);
    // Get instance field: private System.Object <UserSettings>k__BackingField
    ::Il2CppObject* _get_$UserSettings$k__BackingField();
    // Set instance field: private System.Object <UserSettings>k__BackingField
    void _set_$UserSettings$k__BackingField(::Il2CppObject* value);
    // Get instance field: private System.String[] <CertificateSearchPaths>k__BackingField
    ::Array<::Il2CppString*>* _get_$CertificateSearchPaths$k__BackingField();
    // Set instance field: private System.String[] <CertificateSearchPaths>k__BackingField
    void _set_$CertificateSearchPaths$k__BackingField(::Array<::Il2CppString*>* value);
    // Get instance field: private System.Boolean <SendCloseNotify>k__BackingField
    bool _get_$SendCloseNotify$k__BackingField();
    // Set instance field: private System.Boolean <SendCloseNotify>k__BackingField
    void _set_$SendCloseNotify$k__BackingField(bool value);
    // Get instance field: private System.Nullable`1<Mono.Security.Interface.TlsProtocols> <EnabledProtocols>k__BackingField
    System::Nullable_1<Mono::Security::Interface::TlsProtocols> _get_$EnabledProtocols$k__BackingField();
    // Set instance field: private System.Nullable`1<Mono.Security.Interface.TlsProtocols> <EnabledProtocols>k__BackingField
    void _set_$EnabledProtocols$k__BackingField(System::Nullable_1<Mono::Security::Interface::TlsProtocols> value);
    // Get instance field: private Mono.Security.Interface.CipherSuiteCode[] <EnabledCiphers>k__BackingField
    ::Array<Mono::Security::Interface::CipherSuiteCode>* _get_$EnabledCiphers$k__BackingField();
    // Set instance field: private Mono.Security.Interface.CipherSuiteCode[] <EnabledCiphers>k__BackingField
    void _set_$EnabledCiphers$k__BackingField(::Array<Mono::Security::Interface::CipherSuiteCode>* value);
    // Get instance field: private System.Boolean cloned
    bool _get_cloned();
    // Set instance field: private System.Boolean cloned
    void _set_cloned(bool value);
    // Get instance field: private System.Boolean checkCertName
    bool _get_checkCertName();
    // Set instance field: private System.Boolean checkCertName
    void _set_checkCertName(bool value);
    // Get instance field: private System.Boolean checkCertRevocationStatus
    bool _get_checkCertRevocationStatus();
    // Set instance field: private System.Boolean checkCertRevocationStatus
    void _set_checkCertRevocationStatus(bool value);
    // Get instance field: private System.Nullable`1<System.Boolean> useServicePointManagerCallback
    System::Nullable_1<bool> _get_useServicePointManagerCallback();
    // Set instance field: private System.Nullable`1<System.Boolean> useServicePointManagerCallback
    void _set_useServicePointManagerCallback(System::Nullable_1<bool> value);
    // Get instance field: private System.Boolean skipSystemValidators
    bool _get_skipSystemValidators();
    // Set instance field: private System.Boolean skipSystemValidators
    void _set_skipSystemValidators(bool value);
    // Get instance field: private System.Boolean callbackNeedsChain
    bool _get_callbackNeedsChain();
    // Set instance field: private System.Boolean callbackNeedsChain
    void _set_callbackNeedsChain(bool value);
    // Get instance field: private Mono.Security.Interface.ICertificateValidator certificateValidator
    Mono::Security::Interface::ICertificateValidator* _get_certificateValidator();
    // Set instance field: private Mono.Security.Interface.ICertificateValidator certificateValidator
    void _set_certificateValidator(Mono::Security::Interface::ICertificateValidator* value);
    // public Mono.Security.Interface.MonoRemoteCertificateValidationCallback get_RemoteCertificateValidationCallback()
    // Offset: 0x1DDE9D8
    Mono::Security::Interface::MonoRemoteCertificateValidationCallback* get_RemoteCertificateValidationCallback();
    // public System.Void set_RemoteCertificateValidationCallback(Mono.Security.Interface.MonoRemoteCertificateValidationCallback value)
    // Offset: 0x1DDE9E0
    void set_RemoteCertificateValidationCallback(Mono::Security::Interface::MonoRemoteCertificateValidationCallback* value);
    // public Mono.Security.Interface.MonoLocalCertificateSelectionCallback get_ClientCertificateSelectionCallback()
    // Offset: 0x1DDE9E8
    Mono::Security::Interface::MonoLocalCertificateSelectionCallback* get_ClientCertificateSelectionCallback();
    // public System.Void set_ClientCertificateSelectionCallback(Mono.Security.Interface.MonoLocalCertificateSelectionCallback value)
    // Offset: 0x1DDE9F0
    void set_ClientCertificateSelectionCallback(Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value);
    // public System.Nullable`1<System.Boolean> get_UseServicePointManagerCallback()
    // Offset: 0x1DDE9F8
    System::Nullable_1<bool> get_UseServicePointManagerCallback();
    // public System.Void set_UseServicePointManagerCallback(System.Nullable`1<System.Boolean> value)
    // Offset: 0x1DDEA00
    void set_UseServicePointManagerCallback(System::Nullable_1<bool> value);
    // public System.Boolean get_CallbackNeedsCertificateChain()
    // Offset: 0x1DDEA08
    bool get_CallbackNeedsCertificateChain();
    // public System.Nullable`1<System.DateTime> get_CertificateValidationTime()
    // Offset: 0x1DDEA10
    System::Nullable_1<System::DateTime> get_CertificateValidationTime();
    // public System.Void set_CertificateValidationTime(System.Nullable`1<System.DateTime> value)
    // Offset: 0x1DDEA1C
    void set_CertificateValidationTime(System::Nullable_1<System::DateTime> value);
    // public System.Security.Cryptography.X509Certificates.X509CertificateCollection get_TrustAnchors()
    // Offset: 0x1DDEA24
    System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_TrustAnchors();
    // public System.Void set_TrustAnchors(System.Security.Cryptography.X509Certificates.X509CertificateCollection value)
    // Offset: 0x1DDEA2C
    void set_TrustAnchors(System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);
    // public System.Object get_UserSettings()
    // Offset: 0x1DDEA34
    ::Il2CppObject* get_UserSettings();
    // public System.Void set_UserSettings(System.Object value)
    // Offset: 0x1DDEA3C
    void set_UserSettings(::Il2CppObject* value);
    // System.String[] get_CertificateSearchPaths()
    // Offset: 0x1DDEA44
    ::Array<::Il2CppString*>* get_CertificateSearchPaths();
    // System.Void set_CertificateSearchPaths(System.String[] value)
    // Offset: 0x1DDEA4C
    void set_CertificateSearchPaths(::Array<::Il2CppString*>* value);
    // System.Boolean get_SendCloseNotify()
    // Offset: 0x1DDEA54
    bool get_SendCloseNotify();
    // System.Void set_SendCloseNotify(System.Boolean value)
    // Offset: 0x1DDEA5C
    void set_SendCloseNotify(bool value);
    // public System.Nullable`1<Mono.Security.Interface.TlsProtocols> get_EnabledProtocols()
    // Offset: 0x1DDEA68
    System::Nullable_1<Mono::Security::Interface::TlsProtocols> get_EnabledProtocols();
    // public System.Void set_EnabledProtocols(System.Nullable`1<Mono.Security.Interface.TlsProtocols> value)
    // Offset: 0x1DDEA70
    void set_EnabledProtocols(System::Nullable_1<Mono::Security::Interface::TlsProtocols> value);
    // public Mono.Security.Interface.CipherSuiteCode[] get_EnabledCiphers()
    // Offset: 0x1DDEA78
    ::Array<Mono::Security::Interface::CipherSuiteCode>* get_EnabledCiphers();
    // public System.Void set_EnabledCiphers(Mono.Security.Interface.CipherSuiteCode[] value)
    // Offset: 0x1DDEA80
    void set_EnabledCiphers(::Array<Mono::Security::Interface::CipherSuiteCode>* value);
    // static public Mono.Security.Interface.MonoTlsSettings get_DefaultSettings()
    // Offset: 0x1DDEA9C
    static Mono::Security::Interface::MonoTlsSettings* get_DefaultSettings();
    // public Mono.Security.Interface.ICertificateValidator get_CertificateValidator()
    // Offset: 0x1DDEBAC
    Mono::Security::Interface::ICertificateValidator* get_CertificateValidator();
    // private System.Void .ctor(Mono.Security.Interface.MonoTlsSettings other)
    // Offset: 0x1DDEC44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoTlsSettings* New_ctor(Mono::Security::Interface::MonoTlsSettings* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Interface::MonoTlsSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoTlsSettings*, creationType>(other)));
    }
    // static public Mono.Security.Interface.MonoTlsSettings CopyDefaultSettings()
    // Offset: 0x1DDEB30
    static Mono::Security::Interface::MonoTlsSettings* CopyDefaultSettings();
    // public Mono.Security.Interface.MonoTlsSettings CloneWithValidator(Mono.Security.Interface.ICertificateValidator validator)
    // Offset: 0x1DDEBB4
    Mono::Security::Interface::MonoTlsSettings* CloneWithValidator(Mono::Security::Interface::ICertificateValidator* validator);
    // public Mono.Security.Interface.MonoTlsSettings Clone()
    // Offset: 0x1DDEB4C
    Mono::Security::Interface::MonoTlsSettings* Clone();
    // public System.Void .ctor()
    // Offset: 0x1DDEA88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoTlsSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Interface::MonoTlsSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoTlsSettings*, creationType>()));
    }
  }; // Mono.Security.Interface.MonoTlsSettings
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::MonoTlsSettings*, "Mono.Security.Interface", "MonoTlsSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_RemoteCertificateValidationCallback
// Il2CppName: get_RemoteCertificateValidationCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::MonoRemoteCertificateValidationCallback* (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_RemoteCertificateValidationCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_RemoteCertificateValidationCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_RemoteCertificateValidationCallback
// Il2CppName: set_RemoteCertificateValidationCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(Mono::Security::Interface::MonoRemoteCertificateValidationCallback*)>(&Mono::Security::Interface::MonoTlsSettings::set_RemoteCertificateValidationCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoRemoteCertificateValidationCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_RemoteCertificateValidationCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateSelectionCallback
// Il2CppName: get_ClientCertificateSelectionCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::MonoLocalCertificateSelectionCallback* (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateSelectionCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_ClientCertificateSelectionCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateSelectionCallback
// Il2CppName: set_ClientCertificateSelectionCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(Mono::Security::Interface::MonoLocalCertificateSelectionCallback*)>(&Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateSelectionCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoLocalCertificateSelectionCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_ClientCertificateSelectionCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_UseServicePointManagerCallback
// Il2CppName: get_UseServicePointManagerCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<bool> (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_UseServicePointManagerCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_UseServicePointManagerCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_UseServicePointManagerCallback
// Il2CppName: set_UseServicePointManagerCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(System::Nullable_1<bool>)>(&Mono::Security::Interface::MonoTlsSettings::set_UseServicePointManagerCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_UseServicePointManagerCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_CallbackNeedsCertificateChain
// Il2CppName: get_CallbackNeedsCertificateChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_CallbackNeedsCertificateChain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_CallbackNeedsCertificateChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_CertificateValidationTime
// Il2CppName: get_CertificateValidationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::DateTime> (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_CertificateValidationTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_CertificateValidationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_CertificateValidationTime
// Il2CppName: set_CertificateValidationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(System::Nullable_1<System::DateTime>)>(&Mono::Security::Interface::MonoTlsSettings::set_CertificateValidationTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "DateTime")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_CertificateValidationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_TrustAnchors
// Il2CppName: get_TrustAnchors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateCollection* (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_TrustAnchors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_TrustAnchors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_TrustAnchors
// Il2CppName: set_TrustAnchors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(&Mono::Security::Interface::MonoTlsSettings::set_TrustAnchors)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_TrustAnchors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_UserSettings
// Il2CppName: get_UserSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_UserSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_UserSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_UserSettings
// Il2CppName: set_UserSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(::Il2CppObject*)>(&Mono::Security::Interface::MonoTlsSettings::set_UserSettings)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_UserSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_CertificateSearchPaths
// Il2CppName: get_CertificateSearchPaths
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_CertificateSearchPaths)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_CertificateSearchPaths", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_CertificateSearchPaths
// Il2CppName: set_CertificateSearchPaths
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(::Array<::Il2CppString*>*)>(&Mono::Security::Interface::MonoTlsSettings::set_CertificateSearchPaths)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_CertificateSearchPaths", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_SendCloseNotify
// Il2CppName: get_SendCloseNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_SendCloseNotify)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_SendCloseNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_SendCloseNotify
// Il2CppName: set_SendCloseNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(bool)>(&Mono::Security::Interface::MonoTlsSettings::set_SendCloseNotify)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_SendCloseNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_EnabledProtocols
// Il2CppName: get_EnabledProtocols
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<Mono::Security::Interface::TlsProtocols> (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_EnabledProtocols)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_EnabledProtocols", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_EnabledProtocols
// Il2CppName: set_EnabledProtocols
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(System::Nullable_1<Mono::Security::Interface::TlsProtocols>)>(&Mono::Security::Interface::MonoTlsSettings::set_EnabledProtocols)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "TlsProtocols")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_EnabledProtocols", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_EnabledCiphers
// Il2CppName: get_EnabledCiphers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<Mono::Security::Interface::CipherSuiteCode>* (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_EnabledCiphers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_EnabledCiphers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::set_EnabledCiphers
// Il2CppName: set_EnabledCiphers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::MonoTlsSettings::*)(::Array<Mono::Security::Interface::CipherSuiteCode>*)>(&Mono::Security::Interface::MonoTlsSettings::set_EnabledCiphers)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "CipherSuiteCode"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "set_EnabledCiphers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_DefaultSettings
// Il2CppName: get_DefaultSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::MonoTlsSettings* (*)()>(&Mono::Security::Interface::MonoTlsSettings::get_DefaultSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_DefaultSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::get_CertificateValidator
// Il2CppName: get_CertificateValidator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::ICertificateValidator* (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::get_CertificateValidator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "get_CertificateValidator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::CopyDefaultSettings
// Il2CppName: CopyDefaultSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::MonoTlsSettings* (*)()>(&Mono::Security::Interface::MonoTlsSettings::CopyDefaultSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "CopyDefaultSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::CloneWithValidator
// Il2CppName: CloneWithValidator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::MonoTlsSettings* (Mono::Security::Interface::MonoTlsSettings::*)(Mono::Security::Interface::ICertificateValidator*)>(&Mono::Security::Interface::MonoTlsSettings::CloneWithValidator)> {
  static const MethodInfo* get() {
    static auto* validator = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "ICertificateValidator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "CloneWithValidator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{validator});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::MonoTlsSettings* (Mono::Security::Interface::MonoTlsSettings::*)()>(&Mono::Security::Interface::MonoTlsSettings::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsSettings*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
