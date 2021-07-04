// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IRichPresenceData
#include "GlobalNamespace/IRichPresenceData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayingTutorialPresenceData
  class PlayingTutorialPresenceData : public ::Il2CppObject/*, public GlobalNamespace::IRichPresenceData*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE18A40
    // private System.String <localizedDescription>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* localizedDescription;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: PlayingTutorialPresenceData
    PlayingTutorialPresenceData(::Il2CppString* localizedDescription_ = {}) noexcept : localizedDescription{localizedDescription_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IRichPresenceData
    operator GlobalNamespace::IRichPresenceData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IRichPresenceData*>(this);
    }
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return localizedDescription;
    }
    // [LocalizationKeyAttribute] Offset: 0xE18A50
    // static field const value: static private System.String kPlayingCampaignRichPresenceLocalizationKey
    static constexpr const char* kPlayingCampaignRichPresenceLocalizationKey = "PLAYING_TUTORIAL_PRESENCE";
    // Get static field: static private System.String kPlayingCampaignRichPresenceLocalizationKey
    static ::Il2CppString* _get_kPlayingCampaignRichPresenceLocalizationKey();
    // Set static field: static private System.String kPlayingCampaignRichPresenceLocalizationKey
    static void _set_kPlayingCampaignRichPresenceLocalizationKey(::Il2CppString* value);
    // public System.String get_apiName()
    // Offset: 0x10A5698
    ::Il2CppString* get_apiName();
    // public System.String get_localizedDescription()
    // Offset: 0x10A56E0
    ::Il2CppString* get_localizedDescription();
    // private System.Void set_localizedDescription(System.String value)
    // Offset: 0x10A56E8
    void set_localizedDescription(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x10A56F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayingTutorialPresenceData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayingTutorialPresenceData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayingTutorialPresenceData*, creationType>()));
    }
  }; // PlayingTutorialPresenceData
  #pragma pack(pop)
  static check_size<sizeof(PlayingTutorialPresenceData), 16 + sizeof(::Il2CppString*)> __GlobalNamespace_PlayingTutorialPresenceDataSizeCheck;
  static_assert(sizeof(PlayingTutorialPresenceData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayingTutorialPresenceData*, "", "PlayingTutorialPresenceData");
// Writing MetadataGetter for method: GlobalNamespace::PlayingTutorialPresenceData::get_apiName
// Il2CppName: get_apiName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PlayingTutorialPresenceData::*)()>(&GlobalNamespace::PlayingTutorialPresenceData::get_apiName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayingTutorialPresenceData*), "get_apiName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayingTutorialPresenceData::get_localizedDescription
// Il2CppName: get_localizedDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PlayingTutorialPresenceData::*)()>(&GlobalNamespace::PlayingTutorialPresenceData::get_localizedDescription)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayingTutorialPresenceData*), "get_localizedDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayingTutorialPresenceData::set_localizedDescription
// Il2CppName: set_localizedDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayingTutorialPresenceData::*)(::Il2CppString*)>(&GlobalNamespace::PlayingTutorialPresenceData::set_localizedDescription)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayingTutorialPresenceData*), "set_localizedDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayingTutorialPresenceData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
