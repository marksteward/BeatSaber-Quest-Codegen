// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
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
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Certificate
  class X509Certificate : public ::Il2CppObject/*, public System::Runtime::Serialization::IDeserializationCallback, public System::Runtime::Serialization::ISerializable, public System::IDisposable*/ {
    public:
    // private System.Security.Cryptography.X509Certificates.X509CertificateImpl impl
    // Offset: 0x10
    System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl;
    // private System.Boolean hideDates
    // Offset: 0x18
    bool hideDates;
    // private System.String issuer_name
    // Offset: 0x20
    ::Il2CppString* issuer_name;
    // private System.String subject_name
    // Offset: 0x28
    ::Il2CppString* subject_name;
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
    // Offset: 0x120A060
    static X509Certificate* New_ctor(::Array<uint8_t>* data, bool dates);
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x120A0C4
    static X509Certificate* New_ctor(::Array<uint8_t>* data);
    // System.Void .ctor(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0x120A0CC
    static X509Certificate* New_ctor(System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
    // public System.Void .ctor(System.Security.Cryptography.X509Certificates.X509Certificate cert)
    // Offset: 0x120A258
    static X509Certificate* New_ctor(System::Security::Cryptography::X509Certificates::X509Certificate* cert);
    // System.Void ImportHandle(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0x120A3EC
    void ImportHandle(System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
    // System.Security.Cryptography.X509Certificates.X509CertificateImpl get_Impl()
    // Offset: 0x120A42C
    System::Security::Cryptography::X509Certificates::X509CertificateImpl* get_Impl();
    // System.Boolean get_IsValid()
    // Offset: 0x120A4C0
    bool get_IsValid();
    // public System.Boolean Equals(System.Security.Cryptography.X509Certificates.X509Certificate other)
    // Offset: 0x120A4EC
    bool Equals(System::Security::Cryptography::X509Certificates::X509Certificate* other);
    // public System.Byte[] GetCertHash()
    // Offset: 0x120A5E4
    ::Array<uint8_t>* GetCertHash();
    // public System.String GetCertHashString()
    // Offset: 0x120A668
    ::Il2CppString* GetCertHashString();
    // public System.Byte[] GetRawCertData()
    // Offset: 0x120A7E4
    ::Array<uint8_t>* GetRawCertData();
    // public System.Byte[] GetSerialNumber()
    // Offset: 0x120A81C
    ::Array<uint8_t>* GetSerialNumber();
    // public System.String GetSerialNumberString()
    // Offset: 0x120A858
    ::Il2CppString* GetSerialNumberString();
    // public System.String ToString(System.Boolean fVerbose)
    // Offset: 0x120A8C8
    ::Il2CppString* ToString(bool fVerbose);
    // public System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x120A938
    static X509Certificate* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.String get_Issuer()
    // Offset: 0x120AA38
    ::Il2CppString* get_Issuer();
    // public System.String get_Subject()
    // Offset: 0x120AA98
    ::Il2CppString* get_Subject();
    // public System.Void Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0x120ABA0
    void Import(::Array<uint8_t>* rawData, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // public System.Void Import(System.String fileName, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0x120AD30
    void Import(::Il2CppString* fileName, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x120AE64
    void Dispose(bool disposing);
    // public System.Void Reset()
    // Offset: 0x120AE7C
    void Reset();
    // public override System.Int32 GetHashCode()
    // Offset: 0x120A78C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x120A8C0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x120A930
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static X509Certificate* New_ctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x120AAF8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0x120AD84
    // Implemented from: System.Runtime.Serialization.IDeserializationCallback
    // Base method: System.Void IDeserializationCallback::OnDeserialization(System.Object sender)
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x120AD88
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Void Dispose()
    // Offset: 0x120AE50
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Security.Cryptography.X509Certificates.X509Certificate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Certificate*, "System.Security.Cryptography.X509Certificates", "X509Certificate");
#pragma pack(pop)
