// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardPlayerInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardPlayerInfo : public ::Il2CppObject {
    public:
    // public System.String serverKey
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* serverKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String <playerId>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* playerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String <playerName>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* playerName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String <playerKey>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* playerKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String <authType>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* authType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String <playerFriends>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* playerFriends;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean <succeeded>k__BackingField
    // Size: 0x1
    // Offset: 0x40
    bool succeeded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LeaderboardPlayerInfo
    LeaderboardPlayerInfo(::Il2CppString* serverKey_ = {}, ::Il2CppString* playerId_ = {}, ::Il2CppString* playerName_ = {}, ::Il2CppString* playerKey_ = {}, ::Il2CppString* authType_ = {}, ::Il2CppString* playerFriends_ = {}, bool succeeded_ = {}) noexcept : serverKey{serverKey_}, playerId{playerId_}, playerName{playerName_}, playerKey{playerKey_}, authType{authType_}, playerFriends{playerFriends_}, succeeded{succeeded_} {}
    // Get instance field: public System.String serverKey
    ::Il2CppString* _get_serverKey();
    // Set instance field: public System.String serverKey
    void _set_serverKey(::Il2CppString* value);
    // Get instance field: private System.String <playerId>k__BackingField
    ::Il2CppString* _get_$playerId$k__BackingField();
    // Set instance field: private System.String <playerId>k__BackingField
    void _set_$playerId$k__BackingField(::Il2CppString* value);
    // Get instance field: private System.String <playerName>k__BackingField
    ::Il2CppString* _get_$playerName$k__BackingField();
    // Set instance field: private System.String <playerName>k__BackingField
    void _set_$playerName$k__BackingField(::Il2CppString* value);
    // Get instance field: private System.String <playerKey>k__BackingField
    ::Il2CppString* _get_$playerKey$k__BackingField();
    // Set instance field: private System.String <playerKey>k__BackingField
    void _set_$playerKey$k__BackingField(::Il2CppString* value);
    // Get instance field: private System.String <authType>k__BackingField
    ::Il2CppString* _get_$authType$k__BackingField();
    // Set instance field: private System.String <authType>k__BackingField
    void _set_$authType$k__BackingField(::Il2CppString* value);
    // Get instance field: private System.String <playerFriends>k__BackingField
    ::Il2CppString* _get_$playerFriends$k__BackingField();
    // Set instance field: private System.String <playerFriends>k__BackingField
    void _set_$playerFriends$k__BackingField(::Il2CppString* value);
    // Get instance field: private System.Boolean <succeeded>k__BackingField
    bool _get_$succeeded$k__BackingField();
    // Set instance field: private System.Boolean <succeeded>k__BackingField
    void _set_$succeeded$k__BackingField(bool value);
    // public System.String get_playerId()
    // Offset: 0x1F4117C
    ::Il2CppString* get_playerId();
    // private System.Void set_playerId(System.String value)
    // Offset: 0x1F41184
    void set_playerId(::Il2CppString* value);
    // public System.String get_playerName()
    // Offset: 0x1F4118C
    ::Il2CppString* get_playerName();
    // private System.Void set_playerName(System.String value)
    // Offset: 0x1F41194
    void set_playerName(::Il2CppString* value);
    // public System.String get_playerKey()
    // Offset: 0x1F4119C
    ::Il2CppString* get_playerKey();
    // private System.Void set_playerKey(System.String value)
    // Offset: 0x1F411A4
    void set_playerKey(::Il2CppString* value);
    // public System.String get_authType()
    // Offset: 0x1F411AC
    ::Il2CppString* get_authType();
    // private System.Void set_authType(System.String value)
    // Offset: 0x1F411B4
    void set_authType(::Il2CppString* value);
    // public System.String get_playerFriends()
    // Offset: 0x1F411BC
    ::Il2CppString* get_playerFriends();
    // private System.Void set_playerFriends(System.String value)
    // Offset: 0x1F411C4
    void set_playerFriends(::Il2CppString* value);
    // public System.Boolean get_succeeded()
    // Offset: 0x1F411CC
    bool get_succeeded();
    // private System.Void set_succeeded(System.Boolean value)
    // Offset: 0x1F411D4
    void set_succeeded(bool value);
    // public System.Void .ctor(System.Boolean succeeded, System.String playerId, System.String playerName, System.String playerKey, System.String authType, System.String playerFriends)
    // Offset: 0x1F411E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardPlayerInfo* New_ctor(bool succeeded, ::Il2CppString* playerId, ::Il2CppString* playerName, ::Il2CppString* playerKey, ::Il2CppString* authType, ::Il2CppString* playerFriends) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LeaderboardPlayerInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardPlayerInfo*, creationType>(succeeded, playerId, playerName, playerKey, authType, playerFriends)));
    }
  }; // LeaderboardPlayerInfo
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardPlayerInfo), 64 + sizeof(bool)> __GlobalNamespace_LeaderboardPlayerInfoSizeCheck;
  static_assert(sizeof(LeaderboardPlayerInfo) == 0x41);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardPlayerInfo*, "", "LeaderboardPlayerInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardPlayerInfo::get_playerId
// Il2CppName: get_playerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::LeaderboardPlayerInfo::*)()>(&GlobalNamespace::LeaderboardPlayerInfo::get_playerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardPlayerInfo*), "get_playerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardPlayerInfo::set_playerId
// Il2CppName: set_playerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardPlayerInfo::*)(::Il2CppString*)>(&GlobalNamespace::LeaderboardPlayerInfo::set_playerId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardPlayerInfo*), "set_playerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardPlayerInfo::get_playerName
// Il2CppName: get_playerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::LeaderboardPlayerInfo::*)()>(&GlobalNamespace::LeaderboardPlayerInfo::get_playerName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardPlayerInfo*), "get_playerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardPlayerInfo::set_playerName
// Il2CppName: set_playerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardPlayerInfo::*)(::Il2CppString*)>(&GlobalNamespace::LeaderboardPlayerInfo::set_playerName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardPlayerInfo*), "set_playerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardPlayerInfo::get_playerKey
// Il2CppName: get_playerKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::LeaderboardPlayerInfo::*)()>(&GlobalNamespace::LeaderboardPlayerInfo::get_playerKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardPlayerInfo*), "get_playerKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardPlayerInfo::set_playerKey
// Il2CppName: set_playerKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardPlayerInfo::*)(::Il2CppString*)>(&GlobalNamespace::LeaderboardPlayerInfo::set_playerKey)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardPlayerInfo*), "set_playerKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardPlayerInfo::get_authType
// Il2CppName: get_authType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::LeaderboardPlayerInfo::*)()>(&GlobalNamespace::LeaderboardPlayerInfo::get_authType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardPlayerInfo*), "get_authType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardPlayerInfo::set_authType
// Il2CppName: set_authType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardPlayerInfo::*)(::Il2CppString*)>(&GlobalNamespace::LeaderboardPlayerInfo::set_authType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardPlayerInfo*), "set_authType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardPlayerInfo::get_playerFriends
// Il2CppName: get_playerFriends
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::LeaderboardPlayerInfo::*)()>(&GlobalNamespace::LeaderboardPlayerInfo::get_playerFriends)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardPlayerInfo*), "get_playerFriends", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardPlayerInfo::set_playerFriends
// Il2CppName: set_playerFriends
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardPlayerInfo::*)(::Il2CppString*)>(&GlobalNamespace::LeaderboardPlayerInfo::set_playerFriends)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardPlayerInfo*), "set_playerFriends", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardPlayerInfo::get_succeeded
// Il2CppName: get_succeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LeaderboardPlayerInfo::*)()>(&GlobalNamespace::LeaderboardPlayerInfo::get_succeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardPlayerInfo*), "get_succeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardPlayerInfo::set_succeeded
// Il2CppName: set_succeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardPlayerInfo::*)(bool)>(&GlobalNamespace::LeaderboardPlayerInfo::set_succeeded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardPlayerInfo*), "set_succeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardPlayerInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
