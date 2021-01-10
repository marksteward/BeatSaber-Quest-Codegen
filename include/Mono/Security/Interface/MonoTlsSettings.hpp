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
  // [] Offset: FFFFFFFF
  class MonoTlsSettings : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD43F10
    // private Mono.Security.Interface.MonoRemoteCertificateValidationCallback <RemoteCertificateValidationCallback>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    Mono::Security::Interface::MonoRemoteCertificateValidationCallback* RemoteCertificateValidationCallback;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoRemoteCertificateValidationCallback*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD43F20
    // private Mono.Security.Interface.MonoLocalCertificateSelectionCallback <ClientCertificateSelectionCallback>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    Mono::Security::Interface::MonoLocalCertificateSelectionCallback* ClientCertificateSelectionCallback;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoLocalCertificateSelectionCallback*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD43F30
    // private System.Nullable`1<System.DateTime> <CertificateValidationTime>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    System::Nullable_1<System::DateTime> CertificateValidationTime;
    // [CompilerGeneratedAttribute] Offset: 0xD43F40
    // private System.Security.Cryptography.X509Certificates.X509CertificateCollection <TrustAnchors>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    System::Security::Cryptography::X509Certificates::X509CertificateCollection* TrustAnchors;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509CertificateCollection*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD43F50
    // private System.Object <UserSettings>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* UserSettings;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD43F60
    // private System.String[] <CertificateSearchPaths>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::Array<::Il2CppString*>* CertificateSearchPaths;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD43F70
    // private System.Boolean <SendCloseNotify>k__BackingField
    // Size: 0x1
    // Offset: 0x48
    bool SendCloseNotify;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xD43F80
    // private System.Nullable`1<Mono.Security.Interface.TlsProtocols> <EnabledProtocols>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x4C
    System::Nullable_1<Mono::Security::Interface::TlsProtocols> EnabledProtocols;
    // [CompilerGeneratedAttribute] Offset: 0xD43F90
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
    // public Mono.Security.Interface.MonoRemoteCertificateValidationCallback get_RemoteCertificateValidationCallback()
    // Offset: 0x17B8284
    Mono::Security::Interface::MonoRemoteCertificateValidationCallback* get_RemoteCertificateValidationCallback();
    // public System.Void set_RemoteCertificateValidationCallback(Mono.Security.Interface.MonoRemoteCertificateValidationCallback value)
    // Offset: 0x17B828C
    void set_RemoteCertificateValidationCallback(Mono::Security::Interface::MonoRemoteCertificateValidationCallback* value);
    // public Mono.Security.Interface.MonoLocalCertificateSelectionCallback get_ClientCertificateSelectionCallback()
    // Offset: 0x17B8294
    Mono::Security::Interface::MonoLocalCertificateSelectionCallback* get_ClientCertificateSelectionCallback();
    // public System.Void set_ClientCertificateSelectionCallback(Mono.Security.Interface.MonoLocalCertificateSelectionCallback value)
    // Offset: 0x17B829C
    void set_ClientCertificateSelectionCallback(Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value);
    // public System.Nullable`1<System.Boolean> get_UseServicePointManagerCallback()
    // Offset: 0x17B82A4
    System::Nullable_1<bool> get_UseServicePointManagerCallback();
    // public System.Void set_UseServicePointManagerCallback(System.Nullable`1<System.Boolean> value)
    // Offset: 0x17B82AC
    void set_UseServicePointManagerCallback(System::Nullable_1<bool> value);
    // public System.Boolean get_CallbackNeedsCertificateChain()
    // Offset: 0x17B82B4
    bool get_CallbackNeedsCertificateChain();
    // public System.Nullable`1<System.DateTime> get_CertificateValidationTime()
    // Offset: 0x17B82BC
    System::Nullable_1<System::DateTime> get_CertificateValidationTime();
    // public System.Void set_CertificateValidationTime(System.Nullable`1<System.DateTime> value)
    // Offset: 0x17B82C8
    void set_CertificateValidationTime(System::Nullable_1<System::DateTime> value);
    // public System.Security.Cryptography.X509Certificates.X509CertificateCollection get_TrustAnchors()
    // Offset: 0x17B82D0
    System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_TrustAnchors();
    // public System.Void set_TrustAnchors(System.Security.Cryptography.X509Certificates.X509CertificateCollection value)
    // Offset: 0x17B82D8
    void set_TrustAnchors(System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);
    // public System.Object get_UserSettings()
    // Offset: 0x17B82E0
    ::Il2CppObject* get_UserSettings();
    // public System.Void set_UserSettings(System.Object value)
    // Offset: 0x17B82E8
    void set_UserSettings(::Il2CppObject* value);
    // System.String[] get_CertificateSearchPaths()
    // Offset: 0x17B82F0
    ::Array<::Il2CppString*>* get_CertificateSearchPaths();
    // System.Void set_CertificateSearchPaths(System.String[] value)
    // Offset: 0x17B82F8
    void set_CertificateSearchPaths(::Array<::Il2CppString*>* value);
    // System.Boolean get_SendCloseNotify()
    // Offset: 0x17B8300
    bool get_SendCloseNotify();
    // System.Void set_SendCloseNotify(System.Boolean value)
    // Offset: 0x17B8308
    void set_SendCloseNotify(bool value);
    // public System.Nullable`1<Mono.Security.Interface.TlsProtocols> get_EnabledProtocols()
    // Offset: 0x17B8314
    System::Nullable_1<Mono::Security::Interface::TlsProtocols> get_EnabledProtocols();
    // public System.Void set_EnabledProtocols(System.Nullable`1<Mono.Security.Interface.TlsProtocols> value)
    // Offset: 0x17B831C
    void set_EnabledProtocols(System::Nullable_1<Mono::Security::Interface::TlsProtocols> value);
    // public Mono.Security.Interface.CipherSuiteCode[] get_EnabledCiphers()
    // Offset: 0x17B8324
    ::Array<Mono::Security::Interface::CipherSuiteCode>* get_EnabledCiphers();
    // public System.Void set_EnabledCiphers(Mono.Security.Interface.CipherSuiteCode[] value)
    // Offset: 0x17B832C
    void set_EnabledCiphers(::Array<Mono::Security::Interface::CipherSuiteCode>* value);
    // static public Mono.Security.Interface.MonoTlsSettings get_DefaultSettings()
    // Offset: 0x17B8348
    static Mono::Security::Interface::MonoTlsSettings* get_DefaultSettings();
    // static public Mono.Security.Interface.MonoTlsSettings CopyDefaultSettings()
    // Offset: 0x17B83DC
    static Mono::Security::Interface::MonoTlsSettings* CopyDefaultSettings();
    // public Mono.Security.Interface.ICertificateValidator get_CertificateValidator()
    // Offset: 0x17B8458
    Mono::Security::Interface::ICertificateValidator* get_CertificateValidator();
    // public Mono.Security.Interface.MonoTlsSettings CloneWithValidator(Mono.Security.Interface.ICertificateValidator validator)
    // Offset: 0x17B8460
    Mono::Security::Interface::MonoTlsSettings* CloneWithValidator(Mono::Security::Interface::ICertificateValidator* validator);
    // public Mono.Security.Interface.MonoTlsSettings Clone()
    // Offset: 0x17B83F8
    Mono::Security::Interface::MonoTlsSettings* Clone();
    // private System.Void .ctor(Mono.Security.Interface.MonoTlsSettings other)
    // Offset: 0x17B8504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoTlsSettings* New_ctor(Mono::Security::Interface::MonoTlsSettings* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Interface::MonoTlsSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoTlsSettings*, creationType>(other)));
    }
    // public System.Void .ctor()
    // Offset: 0x17B8334
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
