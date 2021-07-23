// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneContext
  class SceneContext;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SceneContextRegistry
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneContextRegistry : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,Zenject.SceneContext> _map
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<UnityEngine::SceneManagement::Scene, Zenject::SceneContext*>* map;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::SceneManagement::Scene, Zenject::SceneContext*>*) == 0x8);
    // Creating value type constructor for type: SceneContextRegistry
    SceneContextRegistry(System::Collections::Generic::Dictionary_2<UnityEngine::SceneManagement::Scene, Zenject::SceneContext*>* map_ = {}) noexcept : map{map_} {}
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<UnityEngine::SceneManagement::Scene, Zenject::SceneContext*>*
    constexpr operator System::Collections::Generic::Dictionary_2<UnityEngine::SceneManagement::Scene, Zenject::SceneContext*>*() const noexcept {
      return map;
    }
    // Get instance field: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,Zenject.SceneContext> _map
    System::Collections::Generic::Dictionary_2<UnityEngine::SceneManagement::Scene, Zenject::SceneContext*>* _get__map();
    // Set instance field: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,Zenject.SceneContext> _map
    void _set__map(System::Collections::Generic::Dictionary_2<UnityEngine::SceneManagement::Scene, Zenject::SceneContext*>* value);
    // public System.Collections.Generic.IEnumerable`1<Zenject.SceneContext> get_SceneContexts()
    // Offset: 0x16CAB64
    System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>* get_SceneContexts();
    // public System.Void Add(Zenject.SceneContext context)
    // Offset: 0x16CE1F0
    void Add(Zenject::SceneContext* context);
    // public Zenject.SceneContext GetSceneContextForScene(System.String name)
    // Offset: 0x16CE2C4
    Zenject::SceneContext* GetSceneContextForScene(::Il2CppString* name);
    // public Zenject.SceneContext GetSceneContextForScene(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x16CE378
    Zenject::SceneContext* GetSceneContextForScene(UnityEngine::SceneManagement::Scene scene);
    // public Zenject.SceneContext TryGetSceneContextForScene(System.String name)
    // Offset: 0x16CE3E0
    Zenject::SceneContext* TryGetSceneContextForScene(::Il2CppString* name);
    // public Zenject.SceneContext TryGetSceneContextForScene(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x16CE494
    Zenject::SceneContext* TryGetSceneContextForScene(UnityEngine::SceneManagement::Scene scene);
    // public Zenject.DiContainer GetContainerForScene(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x16CE514
    Zenject::DiContainer* GetContainerForScene(UnityEngine::SceneManagement::Scene scene);
    // public Zenject.DiContainer TryGetContainerForScene(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x16CE5E8
    Zenject::DiContainer* TryGetContainerForScene(UnityEngine::SceneManagement::Scene scene);
    // public System.Void Remove(Zenject.SceneContext context)
    // Offset: 0x16CE6E8
    void Remove(Zenject::SceneContext* context);
    // public System.Void .ctor()
    // Offset: 0x16CE824
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneContextRegistry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SceneContextRegistry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneContextRegistry*, creationType>()));
    }
  }; // Zenject.SceneContextRegistry
  #pragma pack(pop)
  static check_size<sizeof(SceneContextRegistry), 16 + sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::SceneManagement::Scene, Zenject::SceneContext*>*)> __Zenject_SceneContextRegistrySizeCheck;
  static_assert(sizeof(SceneContextRegistry) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SceneContextRegistry*, "Zenject", "SceneContextRegistry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::get_SceneContexts
// Il2CppName: get_SceneContexts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>* (Zenject::SceneContextRegistry::*)()>(&Zenject::SceneContextRegistry::get_SceneContexts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "get_SceneContexts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContextRegistry::*)(Zenject::SceneContext*)>(&Zenject::SceneContextRegistry::Add)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "SceneContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::GetSceneContextForScene
// Il2CppName: GetSceneContextForScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::SceneContext* (Zenject::SceneContextRegistry::*)(::Il2CppString*)>(&Zenject::SceneContextRegistry::GetSceneContextForScene)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "GetSceneContextForScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::GetSceneContextForScene
// Il2CppName: GetSceneContextForScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::SceneContext* (Zenject::SceneContextRegistry::*)(UnityEngine::SceneManagement::Scene)>(&Zenject::SceneContextRegistry::GetSceneContextForScene)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "GetSceneContextForScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::TryGetSceneContextForScene
// Il2CppName: TryGetSceneContextForScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::SceneContext* (Zenject::SceneContextRegistry::*)(::Il2CppString*)>(&Zenject::SceneContextRegistry::TryGetSceneContextForScene)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "TryGetSceneContextForScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::TryGetSceneContextForScene
// Il2CppName: TryGetSceneContextForScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::SceneContext* (Zenject::SceneContextRegistry::*)(UnityEngine::SceneManagement::Scene)>(&Zenject::SceneContextRegistry::TryGetSceneContextForScene)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "TryGetSceneContextForScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::GetContainerForScene
// Il2CppName: GetContainerForScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (Zenject::SceneContextRegistry::*)(UnityEngine::SceneManagement::Scene)>(&Zenject::SceneContextRegistry::GetContainerForScene)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "GetContainerForScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::TryGetContainerForScene
// Il2CppName: TryGetContainerForScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (Zenject::SceneContextRegistry::*)(UnityEngine::SceneManagement::Scene)>(&Zenject::SceneContextRegistry::TryGetContainerForScene)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "TryGetContainerForScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContextRegistry::*)(Zenject::SceneContext*)>(&Zenject::SceneContextRegistry::Remove)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "SceneContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
