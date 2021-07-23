// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Principal.IIdentity
#include "System/Security/Principal/IIdentity.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Claims
namespace System::Security::Claims {
  // Forward declaring type: Claim
  class Claim;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: Collection`1<T>
  template<typename T>
  class Collection_1;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Security.Claims
namespace System::Security::Claims {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Claims.ClaimsIdentity
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D6ADE4
  class ClaimsIdentity : public ::Il2CppObject/*, public System::Security::Principal::IIdentity*/ {
    public:
    // Nested type: System::Security::Claims::ClaimsIdentity::$get_Claims$d__51
    class $get_Claims$d__51;
    // private System.Byte[] m_userSerializationData
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* m_userSerializationData;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Security.Claims.Claim> m_instanceClaims
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Security::Claims::Claim*>* m_instanceClaims;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Security::Claims::Claim*>*) == 0x8);
    // private System.Collections.ObjectModel.Collection`1<System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim>> m_externalClaims
    // Size: 0x8
    // Offset: 0x20
    System::Collections::ObjectModel::Collection_1<System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>*>* m_externalClaims;
    // Field size check
    static_assert(sizeof(System::Collections::ObjectModel::Collection_1<System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>*>*) == 0x8);
    // private System.String m_nameType
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* m_nameType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_roleType
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* m_roleType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xD6F6B0
    // private System.String m_version
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* m_version;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xD6F6E8
    // private System.Security.Claims.ClaimsIdentity m_actor
    // Size: 0x8
    // Offset: 0x40
    System::Security::Claims::ClaimsIdentity* m_actor;
    // Field size check
    static_assert(sizeof(System::Security::Claims::ClaimsIdentity*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xD6F720
    // private System.String m_authenticationType
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* m_authenticationType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xD6F758
    // private System.Object m_bootstrapContext
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppObject* m_bootstrapContext;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xD6F790
    // private System.String m_label
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* m_label;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xD6F7C8
    // private System.String m_serializedNameType
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppString* m_serializedNameType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xD6F800
    // private System.String m_serializedRoleType
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppString* m_serializedRoleType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xD6F838
    // private System.String m_serializedClaims
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppString* m_serializedClaims;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ClaimsIdentity
    ClaimsIdentity(::Array<uint8_t>* m_userSerializationData_ = {}, System::Collections::Generic::List_1<System::Security::Claims::Claim*>* m_instanceClaims_ = {}, System::Collections::ObjectModel::Collection_1<System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>*>* m_externalClaims_ = {}, ::Il2CppString* m_nameType_ = {}, ::Il2CppString* m_roleType_ = {}, ::Il2CppString* m_version_ = {}, System::Security::Claims::ClaimsIdentity* m_actor_ = {}, ::Il2CppString* m_authenticationType_ = {}, ::Il2CppObject* m_bootstrapContext_ = {}, ::Il2CppString* m_label_ = {}, ::Il2CppString* m_serializedNameType_ = {}, ::Il2CppString* m_serializedRoleType_ = {}, ::Il2CppString* m_serializedClaims_ = {}) noexcept : m_userSerializationData{m_userSerializationData_}, m_instanceClaims{m_instanceClaims_}, m_externalClaims{m_externalClaims_}, m_nameType{m_nameType_}, m_roleType{m_roleType_}, m_version{m_version_}, m_actor{m_actor_}, m_authenticationType{m_authenticationType_}, m_bootstrapContext{m_bootstrapContext_}, m_label{m_label_}, m_serializedNameType{m_serializedNameType_}, m_serializedRoleType{m_serializedRoleType_}, m_serializedClaims{m_serializedClaims_} {}
    // Creating interface conversion operator: operator System::Security::Principal::IIdentity
    operator System::Security::Principal::IIdentity() noexcept {
      return *reinterpret_cast<System::Security::Principal::IIdentity*>(this);
    }
    // Get instance field: private System.Byte[] m_userSerializationData
    ::Array<uint8_t>* _get_m_userSerializationData();
    // Set instance field: private System.Byte[] m_userSerializationData
    void _set_m_userSerializationData(::Array<uint8_t>* value);
    // Get instance field: private System.Collections.Generic.List`1<System.Security.Claims.Claim> m_instanceClaims
    System::Collections::Generic::List_1<System::Security::Claims::Claim*>* _get_m_instanceClaims();
    // Set instance field: private System.Collections.Generic.List`1<System.Security.Claims.Claim> m_instanceClaims
    void _set_m_instanceClaims(System::Collections::Generic::List_1<System::Security::Claims::Claim*>* value);
    // Get instance field: private System.Collections.ObjectModel.Collection`1<System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim>> m_externalClaims
    System::Collections::ObjectModel::Collection_1<System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>*>* _get_m_externalClaims();
    // Set instance field: private System.Collections.ObjectModel.Collection`1<System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim>> m_externalClaims
    void _set_m_externalClaims(System::Collections::ObjectModel::Collection_1<System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>*>* value);
    // Get instance field: private System.String m_nameType
    ::Il2CppString* _get_m_nameType();
    // Set instance field: private System.String m_nameType
    void _set_m_nameType(::Il2CppString* value);
    // Get instance field: private System.String m_roleType
    ::Il2CppString* _get_m_roleType();
    // Set instance field: private System.String m_roleType
    void _set_m_roleType(::Il2CppString* value);
    // Get instance field: private System.String m_version
    ::Il2CppString* _get_m_version();
    // Set instance field: private System.String m_version
    void _set_m_version(::Il2CppString* value);
    // Get instance field: private System.Security.Claims.ClaimsIdentity m_actor
    System::Security::Claims::ClaimsIdentity* _get_m_actor();
    // Set instance field: private System.Security.Claims.ClaimsIdentity m_actor
    void _set_m_actor(System::Security::Claims::ClaimsIdentity* value);
    // Get instance field: private System.String m_authenticationType
    ::Il2CppString* _get_m_authenticationType();
    // Set instance field: private System.String m_authenticationType
    void _set_m_authenticationType(::Il2CppString* value);
    // Get instance field: private System.Object m_bootstrapContext
    ::Il2CppObject* _get_m_bootstrapContext();
    // Set instance field: private System.Object m_bootstrapContext
    void _set_m_bootstrapContext(::Il2CppObject* value);
    // Get instance field: private System.String m_label
    ::Il2CppString* _get_m_label();
    // Set instance field: private System.String m_label
    void _set_m_label(::Il2CppString* value);
    // Get instance field: private System.String m_serializedNameType
    ::Il2CppString* _get_m_serializedNameType();
    // Set instance field: private System.String m_serializedNameType
    void _set_m_serializedNameType(::Il2CppString* value);
    // Get instance field: private System.String m_serializedRoleType
    ::Il2CppString* _get_m_serializedRoleType();
    // Set instance field: private System.String m_serializedRoleType
    void _set_m_serializedRoleType(::Il2CppString* value);
    // Get instance field: private System.String m_serializedClaims
    ::Il2CppString* _get_m_serializedClaims();
    // Set instance field: private System.String m_serializedClaims
    void _set_m_serializedClaims(::Il2CppString* value);
    // public System.String get_AuthenticationType()
    // Offset: 0x1932B9C
    ::Il2CppString* get_AuthenticationType();
    // public System.Security.Claims.ClaimsIdentity get_Actor()
    // Offset: 0x1932BA4
    System::Security::Claims::ClaimsIdentity* get_Actor();
    // public System.Void set_Actor(System.Security.Claims.ClaimsIdentity value)
    // Offset: 0x1932BAC
    void set_Actor(System::Security::Claims::ClaimsIdentity* value);
    // public System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> get_Claims()
    // Offset: 0x1932C6C
    System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* get_Claims();
    // public System.String get_Name()
    // Offset: 0x1932D24
    ::Il2CppString* get_Name();
    // public System.String get_NameClaimType()
    // Offset: 0x1932D4C
    ::Il2CppString* get_NameClaimType();
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> claims)
    // Offset: 0x193189C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor(System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>(claims)));
    }
    // public System.Void .ctor(System.Security.Principal.IIdentity identity, System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> claims, System.String authenticationType, System.String nameType, System.String roleType)
    // Offset: 0x19318B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor(System::Security::Principal::IIdentity* identity, System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims, ::Il2CppString* authenticationType, ::Il2CppString* nameType, ::Il2CppString* roleType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>(identity, claims, authenticationType, nameType, roleType)));
    }
    // System.Void .ctor(System.Security.Principal.IIdentity identity, System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> claims, System.String authenticationType, System.String nameType, System.String roleType, System.Boolean checkAuthType)
    // Offset: 0x19318C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor(System::Security::Principal::IIdentity* identity, System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims, ::Il2CppString* authenticationType, ::Il2CppString* nameType, ::Il2CppString* roleType, bool checkAuthType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>(identity, claims, authenticationType, nameType, roleType, checkAuthType)));
    }
    // protected System.Void .ctor(System.Security.Claims.ClaimsIdentity other)
    // Offset: 0x1932238
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor(System::Security::Claims::ClaimsIdentity* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>(other)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x19323BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>(info, context)));
    }
    // public System.Security.Claims.ClaimsIdentity Clone()
    // Offset: 0x1932D54
    System::Security::Claims::ClaimsIdentity* Clone();
    // public System.Void AddClaim(System.Security.Claims.Claim claim)
    // Offset: 0x1932EB0
    void AddClaim(System::Security::Claims::Claim* claim);
    // private System.Void SafeAddClaims(System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> claims)
    // Offset: 0x1931EC0
    void SafeAddClaims(System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims);
    // private System.Void SafeAddClaim(System.Security.Claims.Claim claim)
    // Offset: 0x1932190
    void SafeAddClaim(System::Security::Claims::Claim* claim);
    // public System.Security.Claims.Claim FindFirst(System.String type)
    // Offset: 0x1932F94
    System::Security::Claims::Claim* FindFirst(::Il2CppString* type);
    // private System.Void OnSerializingMethod(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x19332A8
    void OnSerializingMethod(System::Runtime::Serialization::StreamingContext context);
    // private System.Void OnDeserializedMethod(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x19334DC
    void OnDeserializedMethod(System::Runtime::Serialization::StreamingContext context);
    // private System.Void OnDeserializingMethod(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1933808
    void OnDeserializingMethod(System::Runtime::Serialization::StreamingContext context);
    // protected System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x19338B0
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void DeserializeClaims(System.String serializedClaims)
    // Offset: 0x19335A0
    void DeserializeClaims(::Il2CppString* serializedClaims);
    // private System.String SerializeClaims()
    // Offset: 0x1933314
    ::Il2CppString* SerializeClaims();
    // private System.Boolean IsCircular(System.Security.Claims.ClaimsIdentity subject)
    // Offset: 0x1931E88
    bool IsCircular(System::Security::Claims::ClaimsIdentity* subject);
    // private System.Void Deserialize(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context, System.Boolean useContext)
    // Offset: 0x19324F8
    void Deserialize(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context, bool useContext);
    // public System.Void .ctor()
    // Offset: 0x1931880
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>()));
    }
  }; // System.Security.Claims.ClaimsIdentity
  #pragma pack(pop)
  static check_size<sizeof(ClaimsIdentity), 112 + sizeof(::Il2CppString*)> __System_Security_Claims_ClaimsIdentitySizeCheck;
  static_assert(sizeof(ClaimsIdentity) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Claims::ClaimsIdentity*, "System.Security.Claims", "ClaimsIdentity");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::get_AuthenticationType
// Il2CppName: get_AuthenticationType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Claims::ClaimsIdentity::*)()>(&System::Security::Claims::ClaimsIdentity::get_AuthenticationType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "get_AuthenticationType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::get_Actor
// Il2CppName: get_Actor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Claims::ClaimsIdentity* (System::Security::Claims::ClaimsIdentity::*)()>(&System::Security::Claims::ClaimsIdentity::get_Actor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "get_Actor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::set_Actor
// Il2CppName: set_Actor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Security::Claims::ClaimsIdentity*)>(&System::Security::Claims::ClaimsIdentity::set_Actor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Claims", "ClaimsIdentity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "set_Actor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::get_Claims
// Il2CppName: get_Claims
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* (System::Security::Claims::ClaimsIdentity::*)()>(&System::Security::Claims::ClaimsIdentity::get_Claims)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "get_Claims", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Claims::ClaimsIdentity::*)()>(&System::Security::Claims::ClaimsIdentity::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::get_NameClaimType
// Il2CppName: get_NameClaimType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Claims::ClaimsIdentity::*)()>(&System::Security::Claims::ClaimsIdentity::get_NameClaimType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "get_NameClaimType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Claims::ClaimsIdentity* (System::Security::Claims::ClaimsIdentity::*)()>(&System::Security::Claims::ClaimsIdentity::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::AddClaim
// Il2CppName: AddClaim
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Security::Claims::Claim*)>(&System::Security::Claims::ClaimsIdentity::AddClaim)> {
  static const MethodInfo* get() {
    static auto* claim = &::il2cpp_utils::GetClassFromName("System.Security.Claims", "Claim")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "AddClaim", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{claim});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::SafeAddClaims
// Il2CppName: SafeAddClaims
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>*)>(&System::Security::Claims::ClaimsIdentity::SafeAddClaims)> {
  static const MethodInfo* get() {
    static auto* claims = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Security.Claims", "Claim")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "SafeAddClaims", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{claims});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::SafeAddClaim
// Il2CppName: SafeAddClaim
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Security::Claims::Claim*)>(&System::Security::Claims::ClaimsIdentity::SafeAddClaim)> {
  static const MethodInfo* get() {
    static auto* claim = &::il2cpp_utils::GetClassFromName("System.Security.Claims", "Claim")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "SafeAddClaim", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{claim});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::FindFirst
// Il2CppName: FindFirst
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Claims::Claim* (System::Security::Claims::ClaimsIdentity::*)(::Il2CppString*)>(&System::Security::Claims::ClaimsIdentity::FindFirst)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "FindFirst", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::OnSerializingMethod
// Il2CppName: OnSerializingMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Runtime::Serialization::StreamingContext)>(&System::Security::Claims::ClaimsIdentity::OnSerializingMethod)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "OnSerializingMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::OnDeserializedMethod
// Il2CppName: OnDeserializedMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Runtime::Serialization::StreamingContext)>(&System::Security::Claims::ClaimsIdentity::OnDeserializedMethod)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "OnDeserializedMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::OnDeserializingMethod
// Il2CppName: OnDeserializingMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Runtime::Serialization::StreamingContext)>(&System::Security::Claims::ClaimsIdentity::OnDeserializingMethod)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "OnDeserializingMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Security::Claims::ClaimsIdentity::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::DeserializeClaims
// Il2CppName: DeserializeClaims
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(::Il2CppString*)>(&System::Security::Claims::ClaimsIdentity::DeserializeClaims)> {
  static const MethodInfo* get() {
    static auto* serializedClaims = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "DeserializeClaims", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializedClaims});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::SerializeClaims
// Il2CppName: SerializeClaims
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Claims::ClaimsIdentity::*)()>(&System::Security::Claims::ClaimsIdentity::SerializeClaims)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "SerializeClaims", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::IsCircular
// Il2CppName: IsCircular
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Claims::ClaimsIdentity::*)(System::Security::Claims::ClaimsIdentity*)>(&System::Security::Claims::ClaimsIdentity::IsCircular)> {
  static const MethodInfo* get() {
    static auto* subject = &::il2cpp_utils::GetClassFromName("System.Security.Claims", "ClaimsIdentity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "IsCircular", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{subject});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Claims::ClaimsIdentity::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext, bool)>(&System::Security::Claims::ClaimsIdentity::Deserialize)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* useContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Claims::ClaimsIdentity*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context, useContext});
  }
};
// Writing MetadataGetter for method: System::Security::Claims::ClaimsIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
