// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HTTPLeaderboardsModel
#include "GlobalNamespace/HTTPLeaderboardsModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: LeaderboardEntry
  class LeaderboardEntry;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HTTPLeaderboardsModel/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF1D4
  class HTTPLeaderboardsModel::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly HTTPLeaderboardsModel/<>c <>9
    static GlobalNamespace::HTTPLeaderboardsModel::$$c* _get_$$9();
    // Set static field: static public readonly HTTPLeaderboardsModel/<>c <>9
    static void _set_$$9(GlobalNamespace::HTTPLeaderboardsModel::$$c* value);
    // Get static field: static public System.Func`2<BeatSaberAPI.DataTransferObjects.LeaderboardEntry,System.String> <>9__10_0
    static System::Func_2<BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, ::Il2CppString*>* _get_$$9__10_0();
    // Set static field: static public System.Func`2<BeatSaberAPI.DataTransferObjects.LeaderboardEntry,System.String> <>9__10_0
    static void _set_$$9__10_0(System::Func_2<BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0xF11DA0
    static void _cctor();
    // System.String <GetLeaderboardEntriesAsync>b__10_0(BeatSaberAPI.DataTransferObjects.LeaderboardEntry x)
    // Offset: 0xF11E10
    ::Il2CppString* $GetLeaderboardEntriesAsync$b__10_0(BeatSaberAPI::DataTransferObjects::LeaderboardEntry* x);
    // public System.Void .ctor()
    // Offset: 0xF11E08
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HTTPLeaderboardsModel::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HTTPLeaderboardsModel::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HTTPLeaderboardsModel::$$c*, creationType>()));
    }
  }; // HTTPLeaderboardsModel/<>c
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HTTPLeaderboardsModel::$$c*, "", "HTTPLeaderboardsModel/<>c");
