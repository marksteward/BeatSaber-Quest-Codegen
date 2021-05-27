// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.ControlTrack
#include "UnityEngine/Timeline/ControlTrack.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: CustomControlTrack
  // [TrackClipTypeAttribute] Offset: E11384
  class CustomControlTrack : public UnityEngine::Timeline::ControlTrack {
    public:
    // Creating value type constructor for type: CustomControlTrack
    CustomControlTrack() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x109B460
    // Implemented from: UnityEngine.Timeline.ControlTrack
    // Base method: System.Void ControlTrack::.ctor()
    // Base method: System.Void TrackAsset::.ctor()
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomControlTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CustomControlTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomControlTrack*, creationType>()));
    }
  }; // CustomControlTrack
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomControlTrack*, "", "CustomControlTrack");