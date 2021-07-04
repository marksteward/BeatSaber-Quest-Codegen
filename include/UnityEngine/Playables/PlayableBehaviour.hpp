// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.IPlayableBehaviour
#include "UnityEngine/Playables/IPlayableBehaviour.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.PlayableBehaviour
  // [RequiredByNativeCodeAttribute] Offset: D921FC
  class PlayableBehaviour : public ::Il2CppObject/*, public UnityEngine::Playables::IPlayableBehaviour, public System::ICloneable*/ {
    public:
    // Creating value type constructor for type: PlayableBehaviour
    PlayableBehaviour() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayableBehaviour
    operator UnityEngine::Playables::IPlayableBehaviour() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayableBehaviour*>(this);
    }
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // public System.Void OnGraphStart(UnityEngine.Playables.Playable playable)
    // Offset: 0x1C1ED50
    void OnGraphStart(UnityEngine::Playables::Playable playable);
    // public System.Void OnGraphStop(UnityEngine.Playables.Playable playable)
    // Offset: 0x1C1ED54
    void OnGraphStop(UnityEngine::Playables::Playable playable);
    // public System.Void OnPlayableCreate(UnityEngine.Playables.Playable playable)
    // Offset: 0x1C1ED58
    void OnPlayableCreate(UnityEngine::Playables::Playable playable);
    // public System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x1C1ED5C
    void OnPlayableDestroy(UnityEngine::Playables::Playable playable);
    // public System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1C1ED60
    void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1C1ED64
    void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1C1ED68
    void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x1C1ED6C
    void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
    // public System.Object Clone()
    // Offset: 0x1C1ED70
    ::Il2CppObject* Clone();
    // public System.Void .ctor()
    // Offset: 0x1C1ED48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayableBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::PlayableBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayableBehaviour*, creationType>()));
    }
  }; // UnityEngine.Playables.PlayableBehaviour
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableBehaviour*, "UnityEngine.Playables", "PlayableBehaviour");
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::OnGraphStart
// Il2CppName: OnGraphStart
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::OnGraphStop
// Il2CppName: OnGraphStop
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::OnPlayableCreate
// Il2CppName: OnPlayableCreate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::OnPlayableDestroy
// Il2CppName: OnPlayableDestroy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::OnBehaviourPlay
// Il2CppName: OnBehaviourPlay
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::OnBehaviourPause
// Il2CppName: OnBehaviourPause
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::PrepareFrame
// Il2CppName: PrepareFrame
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::Clone
// Il2CppName: Clone
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
