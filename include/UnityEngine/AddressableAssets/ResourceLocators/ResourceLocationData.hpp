// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.Util.SerializedType
#include "UnityEngine/ResourceManagement/Util/SerializedType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationData
  class ResourceLocationData : public ::Il2CppObject {
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xE01BB0
    // private System.String[] m_Keys
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppString*>* m_Keys;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xE01BFC
    // private System.String m_InternalId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_InternalId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xE01C48
    // private System.String m_Provider
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* m_Provider;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xE01C94
    // private System.String[] m_Dependencies
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Il2CppString*>* m_Dependencies;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private UnityEngine.ResourceManagement.Util.SerializedType m_ResourceType
    // Size: 0x19
    // Offset: 0x30
    UnityEngine::ResourceManagement::Util::SerializedType m_ResourceType;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::Util::SerializedType) == 0x19);
    // Padding between fields: m_ResourceType and: SerializedData
    char __padding4[0x7] = {};
    // private System.Byte[] SerializedData
    // Size: 0x8
    // Offset: 0x50
    ::Array<uint8_t>* SerializedData;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Object _Data
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppObject* Data;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: ResourceLocationData
    ResourceLocationData(::Array<::Il2CppString*>* m_Keys_ = {}, ::Il2CppString* m_InternalId_ = {}, ::Il2CppString* m_Provider_ = {}, ::Array<::Il2CppString*>* m_Dependencies_ = {}, UnityEngine::ResourceManagement::Util::SerializedType m_ResourceType_ = {}, ::Array<uint8_t>* SerializedData_ = {}, ::Il2CppObject* Data_ = {}) noexcept : m_Keys{m_Keys_}, m_InternalId{m_InternalId_}, m_Provider{m_Provider_}, m_Dependencies{m_Dependencies_}, m_ResourceType{m_ResourceType_}, SerializedData{SerializedData_}, Data{Data_} {}
    // public System.String[] get_Keys()
    // Offset: 0x13DCBA4
    ::Array<::Il2CppString*>* get_Keys();
    // public System.String get_InternalId()
    // Offset: 0x13DCBAC
    ::Il2CppString* get_InternalId();
    // public System.String get_Provider()
    // Offset: 0x13DCBB4
    ::Il2CppString* get_Provider();
    // public System.String[] get_Dependencies()
    // Offset: 0x13DCBBC
    ::Array<::Il2CppString*>* get_Dependencies();
    // public System.Type get_ResourceType()
    // Offset: 0x13DCBC4
    System::Type* get_ResourceType();
    // public System.Object get_Data()
    // Offset: 0x13DCBD0
    ::Il2CppObject* get_Data();
    // public System.Void set_Data(System.Object value)
    // Offset: 0x13DCC20
    void set_Data(::Il2CppObject* value);
    // public System.Void .ctor(System.String[] keys, System.String id, System.Type provider, System.Type t, System.String[] dependencies)
    // Offset: 0x13DCCC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceLocationData* New_ctor(::Array<::Il2CppString*>* keys, ::Il2CppString* id, System::Type* provider, System::Type* t, ::Array<::Il2CppString*>* dependencies) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceLocationData*, creationType>(keys, id, provider, t, dependencies)));
    }
  }; // UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationData
  #pragma pack(pop)
  static check_size<sizeof(ResourceLocationData), 88 + sizeof(::Il2CppObject*)> __UnityEngine_AddressableAssets_ResourceLocators_ResourceLocationDataSizeCheck;
  static_assert(sizeof(ResourceLocationData) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData*, "UnityEngine.AddressableAssets.ResourceLocators", "ResourceLocationData");