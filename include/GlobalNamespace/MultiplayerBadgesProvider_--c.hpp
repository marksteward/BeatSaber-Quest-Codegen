// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerBadgesProvider
#include "GlobalNamespace/MultiplayerBadgesProvider.hpp"
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
  // Forward declaring type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerBadgesProvider/<>c
  // [CompilerGeneratedAttribute] Offset: D31EAC
  class MultiplayerBadgesProvider::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly MultiplayerBadgesProvider/<>c <>9
    static GlobalNamespace::MultiplayerBadgesProvider::$$c* _get_$$9();
    // Set static field: static public readonly MultiplayerBadgesProvider/<>c <>9
    static void _set_$$9(GlobalNamespace::MultiplayerBadgesProvider::$$c* value);
    // Get static field: static public System.Func`2<MultiplayerPlayerResultsData,System.Int32> <>9__7_0
    static System::Func_2<GlobalNamespace::MultiplayerPlayerResultsData*, int>* _get_$$9__7_0();
    // Set static field: static public System.Func`2<MultiplayerPlayerResultsData,System.Int32> <>9__7_0
    static void _set_$$9__7_0(System::Func_2<GlobalNamespace::MultiplayerPlayerResultsData*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0xFC20C0
    static void _cctor();
    // System.Int32 <SelectBadgesAndPutThemIntoResults>b__7_0(MultiplayerPlayerResultsData p)
    // Offset: 0xFC212C
    int $SelectBadgesAndPutThemIntoResults$b__7_0(GlobalNamespace::MultiplayerPlayerResultsData* p);
    // public System.Void .ctor()
    // Offset: 0xFC2124
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerBadgesProvider::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerBadgesProvider::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerBadgesProvider::$$c*, creationType>()));
    }
  }; // MultiplayerBadgesProvider/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBadgesProvider::$$c*, "", "MultiplayerBadgesProvider/<>c");
