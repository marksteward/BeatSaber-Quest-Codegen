// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.CoroutineTween.FloatTween
#include "UnityEngine/UI/CoroutineTween/FloatTween.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.UI.CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UI.CoroutineTween.FloatTween/UnityEngine.UI.CoroutineTween.FloatTweenCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class FloatTween::FloatTweenCallback : public UnityEngine::Events::UnityEvent_1<float> {
    public:
    // Creating value type constructor for type: FloatTweenCallback
    FloatTweenCallback() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x140F73C
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloatTween::FloatTweenCallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::CoroutineTween::FloatTween::FloatTweenCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloatTween::FloatTweenCallback*, creationType>()));
    }
  }; // UnityEngine.UI.CoroutineTween.FloatTween/UnityEngine.UI.CoroutineTween.FloatTweenCallback
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CoroutineTween::FloatTween::FloatTweenCallback*, "UnityEngine.UI.CoroutineTween", "FloatTween/FloatTweenCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::FloatTween::FloatTweenCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
