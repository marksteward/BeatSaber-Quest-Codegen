// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnifiedNetworkPlayerModel
#include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
// Including type: BaseNetworkPlayerModel/PartyConfig
#include "GlobalNamespace/BaseNetworkPlayerModel_PartyConfig.hpp"
// Including type: INetworkPlayerModelPartyConfig`1
#include "GlobalNamespace/INetworkPlayerModelPartyConfig_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: UnifiedNetworkPlayerModel/JoinMatchmakingPartyConfig
  // [TokenAttribute] Offset: FFFFFFFF
  class UnifiedNetworkPlayerModel::JoinMatchmakingPartyConfig : public GlobalNamespace::BaseNetworkPlayerModel::PartyConfig/*, public GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel*>*/ {
    public:
    // public System.String secret
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* secret;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String code
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* code;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: JoinMatchmakingPartyConfig
    JoinMatchmakingPartyConfig(::Il2CppString* secret_ = {}, ::Il2CppString* code_ = {}) noexcept : secret{secret_}, code{code_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel*>
    operator GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel*>() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel*>*>(this);
    }
    // Get instance field: public System.String secret
    ::Il2CppString* _get_secret();
    // Set instance field: public System.String secret
    void _set_secret(::Il2CppString* value);
    // Get instance field: public System.String code
    ::Il2CppString* _get_code();
    // Set instance field: public System.String code
    void _set_code(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1275414
    // Implemented from: BaseNetworkPlayerModel/PartyConfig
    // Base method: System.Void PartyConfig::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnifiedNetworkPlayerModel::JoinMatchmakingPartyConfig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnifiedNetworkPlayerModel::JoinMatchmakingPartyConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnifiedNetworkPlayerModel::JoinMatchmakingPartyConfig*, creationType>()));
    }
  }; // UnifiedNetworkPlayerModel/JoinMatchmakingPartyConfig
  #pragma pack(pop)
  static check_size<sizeof(UnifiedNetworkPlayerModel::JoinMatchmakingPartyConfig), 80 + sizeof(::Il2CppString*)> __GlobalNamespace_UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfigSizeCheck;
  static_assert(sizeof(UnifiedNetworkPlayerModel::JoinMatchmakingPartyConfig) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel::JoinMatchmakingPartyConfig*, "", "UnifiedNetworkPlayerModel/JoinMatchmakingPartyConfig");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::JoinMatchmakingPartyConfig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
