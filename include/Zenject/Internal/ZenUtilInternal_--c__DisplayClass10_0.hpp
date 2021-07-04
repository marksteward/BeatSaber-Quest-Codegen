// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ZenUtilInternal
#include "Zenject/Internal/ZenUtilInternal.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ZenUtilInternal/<>c__DisplayClass10_0
  // [CompilerGeneratedAttribute] Offset: DDE85C
  class ZenUtilInternal::$$c__DisplayClass10_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.SceneManagement.Scene scene
    // Size: 0x4
    // Offset: 0x10
    UnityEngine::SceneManagement::Scene scene;
    // Field size check
    static_assert(sizeof(UnityEngine::SceneManagement::Scene) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass10_0
    $$c__DisplayClass10_0(UnityEngine::SceneManagement::Scene scene_ = {}) noexcept : scene{scene_} {}
    // Creating conversion operator: operator UnityEngine::SceneManagement::Scene
    constexpr operator UnityEngine::SceneManagement::Scene() const noexcept {
      return scene;
    }
    // System.Boolean <GetRootGameObjects>b__1(UnityEngine.GameObject x)
    // Offset: 0x16DB9B0
    bool $GetRootGameObjects$b__1(UnityEngine::GameObject* x);
    // public System.Void .ctor()
    // Offset: 0x16DB854
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenUtilInternal::$$c__DisplayClass10_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenUtilInternal::$$c__DisplayClass10_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenUtilInternal::$$c__DisplayClass10_0*, creationType>()));
    }
  }; // Zenject.Internal.ZenUtilInternal/<>c__DisplayClass10_0
  #pragma pack(pop)
  static check_size<sizeof(ZenUtilInternal::$$c__DisplayClass10_0), 16 + sizeof(UnityEngine::SceneManagement::Scene)> __Zenject_Internal_ZenUtilInternal_$$c__DisplayClass10_0SizeCheck;
  static_assert(sizeof(ZenUtilInternal::$$c__DisplayClass10_0) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ZenUtilInternal::$$c__DisplayClass10_0*, "Zenject.Internal", "ZenUtilInternal/<>c__DisplayClass10_0");
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$$c__DisplayClass10_0::$GetRootGameObjects$b__1
// Il2CppName: <GetRootGameObjects>b__1
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::$$c__DisplayClass10_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
