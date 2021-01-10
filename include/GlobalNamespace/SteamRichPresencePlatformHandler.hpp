// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IRichPresencePlatformHandler
#include "GlobalNamespace/IRichPresencePlatformHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IRichPresenceData
  class IRichPresenceData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: SteamRichPresencePlatformHandler
  // [] Offset: FFFFFFFF
  class SteamRichPresencePlatformHandler : public ::Il2CppObject/*, public GlobalNamespace::IRichPresencePlatformHandler*/ {
    public:
    // Creating value type constructor for type: SteamRichPresencePlatformHandler
    SteamRichPresencePlatformHandler() noexcept {}
    // Creating interface conversion operator: operator GlobalNamespace::IRichPresencePlatformHandler
    operator GlobalNamespace::IRichPresencePlatformHandler() noexcept {
      return *reinterpret_cast<GlobalNamespace::IRichPresencePlatformHandler*>(this);
    }
    // public System.Void SetPresence(IRichPresenceData richPresenceData)
    // Offset: 0xF47768
    // Implemented from: IRichPresencePlatformHandler
    // Base method: System.Void IRichPresencePlatformHandler::SetPresence(IRichPresenceData richPresenceData)
    void SetPresence(GlobalNamespace::IRichPresenceData* richPresenceData);
    // public System.Void Clear()
    // Offset: 0xF4776C
    // Implemented from: IRichPresencePlatformHandler
    // Base method: System.Void IRichPresencePlatformHandler::Clear()
    void Clear();
    // public System.Void .ctor()
    // Offset: 0xF47770
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamRichPresencePlatformHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamRichPresencePlatformHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamRichPresencePlatformHandler*, creationType>()));
    }
  }; // SteamRichPresencePlatformHandler
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamRichPresencePlatformHandler*, "", "SteamRichPresencePlatformHandler");
#pragma pack(pop)
