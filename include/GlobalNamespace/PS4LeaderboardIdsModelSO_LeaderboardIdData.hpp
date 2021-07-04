// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PS4LeaderboardIdsModelSO
#include "GlobalNamespace/PS4LeaderboardIdsModelSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PS4LeaderboardIdsModelSO/LeaderboardIdData
  class PS4LeaderboardIdsModelSO::LeaderboardIdData : public ::Il2CppObject {
    public:
    // private System.UInt32 _ps4LeaderboardId
    // Size: 0x4
    // Offset: 0x10
    uint ps4LeaderboardId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: ps4LeaderboardId and: leaderboardId
    char __padding0[0x4] = {};
    // private System.String _leaderboardId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* leaderboardId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: LeaderboardIdData
    LeaderboardIdData(uint ps4LeaderboardId_ = {}, ::Il2CppString* leaderboardId_ = {}) noexcept : ps4LeaderboardId{ps4LeaderboardId_}, leaderboardId{leaderboardId_} {}
    // public System.UInt32 get_ps4LeaderboardId()
    // Offset: 0x104A464
    uint get_ps4LeaderboardId();
    // public System.String get_leaderboardId()
    // Offset: 0x104A46C
    ::Il2CppString* get_leaderboardId();
    // public System.Void .ctor(System.UInt32 ps4LeaderboardId, System.String leaderboardId)
    // Offset: 0x104A474
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4LeaderboardIdsModelSO::LeaderboardIdData* New_ctor(uint ps4LeaderboardId, ::Il2CppString* leaderboardId) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4LeaderboardIdsModelSO::LeaderboardIdData*, creationType>(ps4LeaderboardId, leaderboardId)));
    }
  }; // PS4LeaderboardIdsModelSO/LeaderboardIdData
  #pragma pack(pop)
  static check_size<sizeof(PS4LeaderboardIdsModelSO::LeaderboardIdData), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_PS4LeaderboardIdsModelSO_LeaderboardIdDataSizeCheck;
  static_assert(sizeof(PS4LeaderboardIdsModelSO::LeaderboardIdData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData*, "", "PS4LeaderboardIdsModelSO/LeaderboardIdData");
// Writing MetadataGetter for method: GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData::get_ps4LeaderboardId
// Il2CppName: get_ps4LeaderboardId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData::*)()>(&GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData::get_ps4LeaderboardId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData*), "get_ps4LeaderboardId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData::get_leaderboardId
// Il2CppName: get_leaderboardId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData::*)()>(&GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData::get_leaderboardId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData*), "get_leaderboardId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
