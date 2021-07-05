// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IMultiplayerRichPresenceData
#include "GlobalNamespace/IMultiplayerRichPresenceData.hpp"
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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: InMultiplayerRichPresenceData
  class InMultiplayerRichPresenceData : public ::Il2CppObject/*, public GlobalNamespace::IMultiplayerRichPresenceData*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE189B0
    // private System.String <apiName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* apiName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE189C0
    // private System.String <localizedDescription>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* localizedDescription;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE189D0
    // private System.String <multiplayerLobbyCode>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* multiplayerLobbyCode;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: InMultiplayerRichPresenceData
    InMultiplayerRichPresenceData(::Il2CppString* apiName_ = {}, ::Il2CppString* localizedDescription_ = {}, ::Il2CppString* multiplayerLobbyCode_ = {}) noexcept : apiName{apiName_}, localizedDescription{localizedDescription_}, multiplayerLobbyCode{multiplayerLobbyCode_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerRichPresenceData
    operator GlobalNamespace::IMultiplayerRichPresenceData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerRichPresenceData*>(this);
    }
    // [LocalizationKeyAttribute] Offset: 0xE189E0
    // static field const value: static private System.String kInMultiplayerLobbyRichPresenceLocalizationKey
    static constexpr const char* kInMultiplayerLobbyRichPresenceLocalizationKey = "IN_MULTIPLAYER_LOBBY_PRESENCE";
    // Get static field: static private System.String kInMultiplayerLobbyRichPresenceLocalizationKey
    static ::Il2CppString* _get_kInMultiplayerLobbyRichPresenceLocalizationKey();
    // Set static field: static private System.String kInMultiplayerLobbyRichPresenceLocalizationKey
    static void _set_kInMultiplayerLobbyRichPresenceLocalizationKey(::Il2CppString* value);
    // public System.String get_apiName()
    // Offset: 0x10C4054
    ::Il2CppString* get_apiName();
    // protected System.Void set_apiName(System.String value)
    // Offset: 0x10C405C
    void set_apiName(::Il2CppString* value);
    // public System.String get_localizedDescription()
    // Offset: 0x10C4064
    ::Il2CppString* get_localizedDescription();
    // protected System.Void set_localizedDescription(System.String value)
    // Offset: 0x10C406C
    void set_localizedDescription(::Il2CppString* value);
    // public System.String get_multiplayerLobbyCode()
    // Offset: 0x10C4074
    ::Il2CppString* get_multiplayerLobbyCode();
    // public System.Void set_multiplayerLobbyCode(System.String value)
    // Offset: 0x10C407C
    void set_multiplayerLobbyCode(::Il2CppString* value);
    // public System.Boolean get_isJoinable()
    // Offset: 0x10C4084
    bool get_isJoinable();
    // public System.Void .ctor(System.String multiplayerLobbyCode)
    // Offset: 0x10C4094
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InMultiplayerRichPresenceData* New_ctor(::Il2CppString* multiplayerLobbyCode) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::InMultiplayerRichPresenceData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InMultiplayerRichPresenceData*, creationType>(multiplayerLobbyCode)));
    }
  }; // InMultiplayerRichPresenceData
  #pragma pack(pop)
  static check_size<sizeof(InMultiplayerRichPresenceData), 32 + sizeof(::Il2CppString*)> __GlobalNamespace_InMultiplayerRichPresenceDataSizeCheck;
  static_assert(sizeof(InMultiplayerRichPresenceData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InMultiplayerRichPresenceData*, "", "InMultiplayerRichPresenceData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::get_apiName
// Il2CppName: get_apiName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::InMultiplayerRichPresenceData::*)()>(&GlobalNamespace::InMultiplayerRichPresenceData::get_apiName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "get_apiName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::set_apiName
// Il2CppName: set_apiName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InMultiplayerRichPresenceData::*)(::Il2CppString*)>(&GlobalNamespace::InMultiplayerRichPresenceData::set_apiName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "set_apiName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::get_localizedDescription
// Il2CppName: get_localizedDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::InMultiplayerRichPresenceData::*)()>(&GlobalNamespace::InMultiplayerRichPresenceData::get_localizedDescription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "get_localizedDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::set_localizedDescription
// Il2CppName: set_localizedDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InMultiplayerRichPresenceData::*)(::Il2CppString*)>(&GlobalNamespace::InMultiplayerRichPresenceData::set_localizedDescription)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "set_localizedDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::get_multiplayerLobbyCode
// Il2CppName: get_multiplayerLobbyCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::InMultiplayerRichPresenceData::*)()>(&GlobalNamespace::InMultiplayerRichPresenceData::get_multiplayerLobbyCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "get_multiplayerLobbyCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::set_multiplayerLobbyCode
// Il2CppName: set_multiplayerLobbyCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InMultiplayerRichPresenceData::*)(::Il2CppString*)>(&GlobalNamespace::InMultiplayerRichPresenceData::set_multiplayerLobbyCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "set_multiplayerLobbyCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::get_isJoinable
// Il2CppName: get_isJoinable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::InMultiplayerRichPresenceData::*)()>(&GlobalNamespace::InMultiplayerRichPresenceData::get_isJoinable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "get_isJoinable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
