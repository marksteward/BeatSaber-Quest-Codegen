// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: FloatUnityEvent
  class FloatUnityEvent : public UnityEngine::Events::UnityEvent_1<float> {
    public:
    // Creating value type constructor for type: FloatUnityEvent
    FloatUnityEvent() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x117CAF0
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloatUnityEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FloatUnityEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloatUnityEvent*, creationType>()));
    }
  }; // FloatUnityEvent
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FloatUnityEvent*, "", "FloatUnityEvent");
