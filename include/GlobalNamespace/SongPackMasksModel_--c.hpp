// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SongPackMasksModel
#include "GlobalNamespace/SongPackMasksModel.hpp"
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
  // Autogenerated type: SongPackMasksModel/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF024
  class SongPackMasksModel::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly SongPackMasksModel/<>c <>9
    static GlobalNamespace::SongPackMasksModel::$$c* _get_$$9();
    // Set static field: static public readonly SongPackMasksModel/<>c <>9
    static void _set_$$9(GlobalNamespace::SongPackMasksModel::$$c* value);
    // Get static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__3_0
    static System::Func_2<GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<IBeatmapLevelPack,System.String> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0xF3A2C8
    static void _cctor();
    // System.String <.ctor>b__3_0(IBeatmapLevelPack pack)
    // Offset: 0xF3A338
    ::Il2CppString* $_ctor$b__3_0(GlobalNamespace::IBeatmapLevelPack* pack);
    // public System.Void .ctor()
    // Offset: 0xF3A330
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongPackMasksModel::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongPackMasksModel::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongPackMasksModel::$$c*, creationType>()));
    }
  }; // SongPackMasksModel/<>c
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPackMasksModel::$$c*, "", "SongPackMasksModel/<>c");
#pragma pack(pop)
