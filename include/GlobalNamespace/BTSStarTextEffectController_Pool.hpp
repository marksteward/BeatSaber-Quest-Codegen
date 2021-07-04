// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BTSStarTextEffectController
#include "GlobalNamespace/BTSStarTextEffectController.hpp"
// Including type: Zenject.MonoMemoryPool`4
#include "Zenject/MonoMemoryPool_4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BTSStarTextEffectController/Pool
  class BTSStarTextEffectController::Pool : public Zenject::MonoMemoryPool_4<UnityEngine::Sprite*, UnityEngine::Transform*, float, GlobalNamespace::BTSStarTextEffectController*> {
    public:
    // Creating value type constructor for type: Pool
    Pool() noexcept {}
    // protected System.Void Reinitialize(UnityEngine.Sprite sprite, UnityEngine.Transform transform, System.Single desiredAnimationLength, BTSStarTextEffectController starTextEffectController)
    // Offset: 0x113CD54
    void Reinitialize(UnityEngine::Sprite* sprite, UnityEngine::Transform* transform, float desiredAnimationLength, GlobalNamespace::BTSStarTextEffectController* starTextEffectController);
    // public System.Void .ctor()
    // Offset: 0x113CD6C
    // Implemented from: Zenject.MonoMemoryPool`4
    // Base method: System.Void MonoMemoryPool_4::.ctor()
    // Base method: System.Void MemoryPool_4::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSStarTextEffectController::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSStarTextEffectController::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSStarTextEffectController::Pool*, creationType>()));
    }
  }; // BTSStarTextEffectController/Pool
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSStarTextEffectController::Pool*, "", "BTSStarTextEffectController/Pool");
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectController::Pool::Reinitialize
// Il2CppName: Reinitialize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectController::Pool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
