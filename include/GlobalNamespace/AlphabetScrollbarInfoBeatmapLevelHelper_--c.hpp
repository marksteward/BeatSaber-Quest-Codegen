// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AlphabetScrollbarInfoBeatmapLevelHelper
#include "GlobalNamespace/AlphabetScrollbarInfoBeatmapLevelHelper.hpp"
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
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: AlphabetScrollbarInfoBeatmapLevelHelper/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBEFC4
  class AlphabetScrollbarInfoBeatmapLevelHelper::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly AlphabetScrollbarInfoBeatmapLevelHelper/<>c <>9
    static GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c* _get_$$9();
    // Set static field: static public readonly AlphabetScrollbarInfoBeatmapLevelHelper/<>c <>9
    static void _set_$$9(GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c* value);
    // Get static field: static public System.Func`2<IPreviewBeatmapLevel,System.String> <>9__3_0
    static System::Func_2<GlobalNamespace::IPreviewBeatmapLevel*, ::Il2CppString*>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<IPreviewBeatmapLevel,System.String> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<GlobalNamespace::IPreviewBeatmapLevel*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1A3C7CC
    static void _cctor();
    // System.String <CreateData>b__3_0(IPreviewBeatmapLevel x)
    // Offset: 0x1A3C83C
    ::Il2CppString* $CreateData$b__3_0(GlobalNamespace::IPreviewBeatmapLevel* x);
    // public System.Void .ctor()
    // Offset: 0x1A3C834
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AlphabetScrollbarInfoBeatmapLevelHelper::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AlphabetScrollbarInfoBeatmapLevelHelper::$$c*, creationType>()));
    }
  }; // AlphabetScrollbarInfoBeatmapLevelHelper/<>c
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AlphabetScrollbarInfoBeatmapLevelHelper::$$c*, "", "AlphabetScrollbarInfoBeatmapLevelHelper/<>c");
#pragma pack(pop)
