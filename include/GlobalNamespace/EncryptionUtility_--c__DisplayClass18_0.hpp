// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: EncryptionUtility/<>c__DisplayClass18_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class EncryptionUtility::$$c__DisplayClass18_0 : public ::Il2CppObject {
    public:
    // public System.Byte[] preMasterSecret
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* preMasterSecret;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Byte[] serverSeed
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* serverSeed;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Byte[] clientSeed
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* clientSeed;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Boolean isClient
    // Size: 0x1
    // Offset: 0x28
    bool isClient;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $$c__DisplayClass18_0
    $$c__DisplayClass18_0(::Array<uint8_t>* preMasterSecret_ = {}, ::Array<uint8_t>* serverSeed_ = {}, ::Array<uint8_t>* clientSeed_ = {}, bool isClient_ = {}) noexcept : preMasterSecret{preMasterSecret_}, serverSeed{serverSeed_}, clientSeed{clientSeed_}, isClient{isClient_} {}
    // Get instance field: public System.Byte[] preMasterSecret
    ::Array<uint8_t>* _get_preMasterSecret();
    // Set instance field: public System.Byte[] preMasterSecret
    void _set_preMasterSecret(::Array<uint8_t>* value);
    // Get instance field: public System.Byte[] serverSeed
    ::Array<uint8_t>* _get_serverSeed();
    // Set instance field: public System.Byte[] serverSeed
    void _set_serverSeed(::Array<uint8_t>* value);
    // Get instance field: public System.Byte[] clientSeed
    ::Array<uint8_t>* _get_clientSeed();
    // Set instance field: public System.Byte[] clientSeed
    void _set_clientSeed(::Array<uint8_t>* value);
    // Get instance field: public System.Boolean isClient
    bool _get_isClient();
    // Set instance field: public System.Boolean isClient
    void _set_isClient(bool value);
    // EncryptionUtility/IEncryptionState <CreateEncryptionStateAsync>b__0()
    // Offset: 0x109939C
    GlobalNamespace::EncryptionUtility::IEncryptionState* $CreateEncryptionStateAsync$b__0();
    // public System.Void .ctor()
    // Offset: 0x1097834
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncryptionUtility::$$c__DisplayClass18_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EncryptionUtility::$$c__DisplayClass18_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncryptionUtility::$$c__DisplayClass18_0*, creationType>()));
    }
  }; // EncryptionUtility/<>c__DisplayClass18_0
  #pragma pack(pop)
  static check_size<sizeof(EncryptionUtility::$$c__DisplayClass18_0), 40 + sizeof(bool)> __GlobalNamespace_EncryptionUtility_$$c__DisplayClass18_0SizeCheck;
  static_assert(sizeof(EncryptionUtility::$$c__DisplayClass18_0) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EncryptionUtility::$$c__DisplayClass18_0*, "", "EncryptionUtility/<>c__DisplayClass18_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::$$c__DisplayClass18_0::$CreateEncryptionStateAsync$b__0
// Il2CppName: <CreateEncryptionStateAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EncryptionUtility::IEncryptionState* (GlobalNamespace::EncryptionUtility::$$c__DisplayClass18_0::*)()>(&GlobalNamespace::EncryptionUtility::$$c__DisplayClass18_0::$CreateEncryptionStateAsync$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EncryptionUtility::$$c__DisplayClass18_0*), "<CreateEncryptionStateAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EncryptionUtility::$$c__DisplayClass18_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
