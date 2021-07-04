// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.MarkerTrack
#include "UnityEngine/Timeline/MarkerTrack.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Timeline.SignalTrack
  // [TrackBindingTypeAttribute] Offset: DD74F0
  // [TrackColorAttribute] Offset: DD74F0
  // [ExcludeFromPresetAttribute] Offset: DD74F0
  class SignalTrack : public UnityEngine::Timeline::MarkerTrack {
    public:
    // Creating value type constructor for type: SignalTrack
    SignalTrack() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x17E6F98
    // Implemented from: UnityEngine.Timeline.MarkerTrack
    // Base method: System.Void MarkerTrack::.ctor()
    // Base method: System.Void TrackAsset::.ctor()
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::SignalTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalTrack*, creationType>()));
    }
  }; // UnityEngine.Timeline.SignalTrack
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::SignalTrack*, "UnityEngine.Timeline", "SignalTrack");
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalTrack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
