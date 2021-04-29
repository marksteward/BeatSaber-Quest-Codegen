// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: IPlayable
  class IPlayable;
  // Forward declaring type: PlayableHandle
  struct PlayableHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.AnimationPlayableExtensions
  // [NativeHeaderAttribute] Offset: CD01AC
  // [NativeHeaderAttribute] Offset: CD01AC
  // [NativeHeaderAttribute] Offset: CD01AC
  // [ExtensionAttribute] Offset: FFFFFFFF
  class AnimationPlayableExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AnimationPlayableExtensions
    AnimationPlayableExtensions() noexcept {}
    // static public System.Void SetAnimatedProperties(U playable, UnityEngine.AnimationClip clip)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetAnimatedProperties(U playable, UnityEngine::AnimationClip* clip) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Animations::AnimationPlayableExtensions::SetAnimatedProperties");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Animations", "AnimationPlayableExtensions", "SetAnimatedProperties", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(playable), ::il2cpp_utils::ExtractType(clip)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, playable, clip);
    }
    // static System.Void SetAnimatedPropertiesInternal(ref UnityEngine.Playables.PlayableHandle playable, UnityEngine.AnimationClip animatedProperties)
    // Offset: 0x2174A5C
    static void SetAnimatedPropertiesInternal(UnityEngine::Playables::PlayableHandle& playable, UnityEngine::AnimationClip* animatedProperties);
  }; // UnityEngine.Animations.AnimationPlayableExtensions
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationPlayableExtensions*, "UnityEngine.Animations", "AnimationPlayableExtensions");
