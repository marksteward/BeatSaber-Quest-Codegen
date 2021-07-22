// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LobbyPlayersDataModel
#include "GlobalNamespace/LobbyPlayersDataModel.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LobbyPlayersDataModel/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LobbyPlayersDataModel::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly LobbyPlayersDataModel/<>c <>9
    static GlobalNamespace::LobbyPlayersDataModel::$$c* _get_$$9();
    // Set static field: static public readonly LobbyPlayersDataModel/<>c <>9
    static void _set_$$9(GlobalNamespace::LobbyPlayersDataModel::$$c* value);
    // Get static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__51_0
    static System::Func_2<GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*>* _get_$$9__51_0();
    // Set static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__51_0
    static void _set_$$9__51_0(System::Func_2<GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x11C4494
    static void _cctor();
    // System.String <SetOwnedSongPacks>b__51_0(IBeatmapLevelPack pack)
    // Offset: 0x11C4500
    ::Il2CppString* $SetOwnedSongPacks$b__51_0(GlobalNamespace::IBeatmapLevelPack* pack);
    // public System.Void .ctor()
    // Offset: 0x11C44F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyPlayersDataModel::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LobbyPlayersDataModel::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyPlayersDataModel::$$c*, creationType>()));
    }
  }; // LobbyPlayersDataModel/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyPlayersDataModel::$$c*, "", "LobbyPlayersDataModel/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayersDataModel::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LobbyPlayersDataModel::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayersDataModel::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayersDataModel::$$c::$SetOwnedSongPacks$b__51_0
// Il2CppName: <SetOwnedSongPacks>b__51_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::LobbyPlayersDataModel::$$c::*)(GlobalNamespace::IBeatmapLevelPack*)>(&GlobalNamespace::LobbyPlayersDataModel::$$c::$SetOwnedSongPacks$b__51_0)> {
  static const MethodInfo* get() {
    static auto* pack = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelPack")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyPlayersDataModel::$$c*), "<SetOwnedSongPacks>b__51_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pack});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyPlayersDataModel::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
