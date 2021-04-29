// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
  // Forward declaring type: LoadSceneMode
  struct LoadSceneMode;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.EntityBehaviour
  class EntityBehaviour : public UnityEngine::MonoBehaviour {
    public:
    // [TooltipAttribute] Offset: 0xD58204
    // public System.Boolean manageVisibility
    // Size: 0x1
    // Offset: 0x18
    bool manageVisibility;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EntityBehaviour
    EntityBehaviour(bool manageVisibility_ = {}) noexcept : manageVisibility{manageVisibility_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Initialize()
    // Offset: 0xFFFFFFFF
    void Initialize();
    // public System.Void OnEnterPlayMode()
    // Offset: 0xFFFFFFFF
    void OnEnterPlayMode();
    // public System.Void OnSceneLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0xFFFFFFFF
    void OnSceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode);
    // protected System.Void SetMaterial(UnityEngine.Material material)
    // Offset: 0x191A070
    void SetMaterial(UnityEngine::Material* material);
    // protected System.Void .ctor()
    // Offset: 0x191A14C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EntityBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::EntityBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EntityBehaviour*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.EntityBehaviour
  #pragma pack(pop)
  static check_size<sizeof(EntityBehaviour), 24 + sizeof(bool)> __UnityEngine_ProBuilder_EntityBehaviourSizeCheck;
  static_assert(sizeof(EntityBehaviour) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::EntityBehaviour*, "UnityEngine.ProBuilder", "EntityBehaviour");
