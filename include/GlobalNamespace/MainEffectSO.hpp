// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MainEffectSO
  // [TokenAttribute] Offset: FFFFFFFF
  class MainEffectSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Creating value type constructor for type: MainEffectSO
    MainEffectSO() noexcept {}
    // public System.Boolean get_hasPostProcessEffect()
    // Offset: 0x233F5C0
    bool get_hasPostProcessEffect();
    // public System.Void PreRender()
    // Offset: 0x233F5B4
    void PreRender();
    // public System.Void Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single fade)
    // Offset: 0x233F5B8
    void Render(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, float fade);
    // public System.Void PostRender(System.Single fade)
    // Offset: 0x233F5BC
    void PostRender(float fade);
    // public System.Void .ctor()
    // Offset: 0x233EC3C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainEffectSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainEffectSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainEffectSO*, creationType>()));
    }
  }; // MainEffectSO
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainEffectSO*, "", "MainEffectSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MainEffectSO::get_hasPostProcessEffect
// Il2CppName: get_hasPostProcessEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MainEffectSO::*)()>(&GlobalNamespace::MainEffectSO::get_hasPostProcessEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectSO*), "get_hasPostProcessEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectSO::PreRender
// Il2CppName: PreRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainEffectSO::*)()>(&GlobalNamespace::MainEffectSO::PreRender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectSO*), "PreRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectSO::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainEffectSO::*)(UnityEngine::RenderTexture*, UnityEngine::RenderTexture*, float)>(&GlobalNamespace::MainEffectSO::Render)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* fade = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectSO*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest, fade});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectSO::PostRender
// Il2CppName: PostRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainEffectSO::*)(float)>(&GlobalNamespace::MainEffectSO::PostRender)> {
  static const MethodInfo* get() {
    static auto* fade = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainEffectSO*), "PostRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fade});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainEffectSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
