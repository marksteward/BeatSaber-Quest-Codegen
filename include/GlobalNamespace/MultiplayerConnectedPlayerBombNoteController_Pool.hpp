// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerConnectedPlayerBombNoteController
#include "GlobalNamespace/MultiplayerConnectedPlayerBombNoteController.hpp"
// Including type: Zenject.MonoMemoryPool`1
#include "Zenject/MonoMemoryPool_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MultiplayerConnectedPlayerBombNoteController/Pool
  // [] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerBombNoteController::Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*> {
    public:
    // Creating value type constructor for type: Pool
    Pool() noexcept {}
    // public System.Void .ctor()
    // Offset: 0xFA94CC
    // Implemented from: Zenject.MonoMemoryPool`1
    // Base method: System.Void MonoMemoryPool_1::.ctor()
    // Base method: System.Void MemoryPool_1::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerBombNoteController::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerBombNoteController::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerBombNoteController::Pool*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerBombNoteController/Pool
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerBombNoteController::Pool*, "", "MultiplayerConnectedPlayerBombNoteController/Pool");
