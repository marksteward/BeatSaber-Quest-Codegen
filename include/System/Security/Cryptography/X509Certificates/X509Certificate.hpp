// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateImpl
  class X509CertificateImpl;
  // Forward declaring type: X509KeyStorageFlags
  struct X509KeyStorageFlags;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x30
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Certificate
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3A710
  // [MonoTODOAttribute] Offset: D3A710
  class X509Certificate : public ::Il2CppObject/*, public System::Runtime::Serialization::IDeserializationCallback, public System::Runtime::Serialization::ISerializable, public System::IDisposable*/ {
    public:
    // private System.Security.Cryptography.X509Certificates.X509CertificateImpl impl
    // Size: 0x8
    // Offset: 0x10
    System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509CertificateImpl*) == 0x8);
    // private System.Boolean hideDates
    // Size: 0x1
    // Offset: 0x18
    bool hideDates;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hideDates and: issuer_name
    char __padding1[0x7] = {};
    // private System.String issuer_name
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* issuer_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String subject_name
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* subject_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: X509Certificate
    X509Certificate(System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl_ = {}, bool hideDates_ = {}, ::Il2CppString* issuer_name_ = {}, ::Il2CppString* subject_name_ = {}) noexcept : impl{impl_}, hideDates{hideDates_}, issuer_name{issuer_name_}, subject_name{subject_name_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::IDeserializationCallback
    operator System::Runtime::Serialization::IDeserializationCallback() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // System.Void .ctor(System.Byte[] data, System.Boolean dates)
    // Offset: 0x127F118
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor(::Array<uint8_t>* data, bool dates) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>(data, dates)));
    }
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x127F17C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor(::Array<uint8_t>* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>(data)));
    }
    // System.Void .ctor(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0x127F184
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor(System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>(impl)));
    }
    // public System.Void .ctor(System.Security.Cryptography.X509Certificates.X509Certificate cert)
    // Offset: 0x127F310
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor(System::Security::Cryptography::X509Certificates::X509Certificate* cert) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>(cert)));
    }
    // System.Void ImportHandle(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0x127F4A4
    void ImportHandle(System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
    // System.Security.Cryptography.X509Certificates.X509CertificateImpl get_Impl()
    // Offset: 0x127F4E4
    System::Security::Cryptography::X509Certificates::X509CertificateImpl* get_Impl();
    // System.Boolean get_IsValid()
    // Offset: 0x127F578
    bool get_IsValid();
    // public System.Boolean Equals(System.Security.Cryptography.X509Certificates.X509Certificate other)
    // Offset: 0x127F5A4
    bool Equals(System::Security::Cryptography::X509Certificates::X509Certificate* other);
    // public System.Byte[] GetCertHash()
    // Offset: 0x127F69C
    ::Array<uint8_t>* GetCertHash();
    // public System.String GetCertHashString()
    // Offset: 0x127F720
    ::Il2CppString* GetCertHashString();
    // public System.Byte[] GetRawCertData()
    // Offset: 0x127F89C
    ::Array<uint8_t>* GetRawCertData();
    // public System.Byte[] GetSerialNumber()
    // Offset: 0x127F8D4
    ::Array<uint8_t>* GetSerialNumber();
    // public System.String GetSerialNumberString()
    // Offset: 0x127F910
    ::Il2CppString* GetSerialNumberString();
    // public System.String ToString(System.Boolean fVerbose)
    // Offset: 0x127F980
    ::Il2CppString* ToString(bool fVerbose);
    // public System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x127F9F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>(info, context)));
    }
    // public System.String get_Issuer()
    // Offset: 0x127FAF0
    ::Il2CppString* get_Issuer();
    // public System.String get_Subject()
    // Offset: 0x127FB50
    ::Il2CppString* get_Subject();
    // public System.Void Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0x127FC58
    void Import(::Array<uint8_t>* rawData, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // public System.Void Import(System.String fileName, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0x127FDE8
    void Import(::Il2CppString* fileName, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x127FF1C
    void Dispose(bool disposing);
    // public System.Void Reset()
    // Offset: 0x127FF34
    void Reset();
    // public override System.Int32 GetHashCode()
    // Offset: 0x127F844
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x127F978
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x127F9E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x127FBB0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0x127FE3C
    // Implemented from: System.Runtime.Serialization.IDeserializationCallback
    // Base method: System.Void IDeserializationCallback::OnDeserialization(System.Object sender)
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x127FE40
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Void Dispose()
    // Offset: 0x127FF08
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Security.Cryptography.X509Certificates.X509Certificate
  static check_size<sizeof(X509Certificate), 40 + sizeof(::Il2CppString*)> __System_Security_Cryptography_X509Certificates_X509CertificateSizeCheck;
  static_assert(sizeof(X509Certificate) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Certificate*, "System.Security.Cryptography.X509Certificates", "X509Certificate");
#pragma pack(pop)
