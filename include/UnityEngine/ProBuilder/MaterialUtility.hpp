// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Renderer
  class Renderer;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MaterialUtility
  class MaterialUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: MaterialUtility
    MaterialUtility() noexcept {}
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Material> s_MaterialArray
    static System::Collections::Generic::List_1<UnityEngine::Material*>* _get_s_MaterialArray();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Material> s_MaterialArray
    static void _set_s_MaterialArray(System::Collections::Generic::List_1<UnityEngine::Material*>* value);
    // static System.Int32 GetMaterialCount(UnityEngine.Renderer renderer)
    // Offset: 0x1ABEEF0
    static int GetMaterialCount(UnityEngine::Renderer* renderer);
    // static UnityEngine.Material GetSharedMaterial(UnityEngine.Renderer renderer, System.Int32 index)
    // Offset: 0x1ABEFA4
    static UnityEngine::Material* GetSharedMaterial(UnityEngine::Renderer* renderer, int index);
    // static private System.Void .cctor()
    // Offset: 0x1ABF0F4
    static void _cctor();
  }; // UnityEngine.ProBuilder.MaterialUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MaterialUtility*, "UnityEngine.ProBuilder", "MaterialUtility");
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MaterialUtility::GetMaterialCount
// Il2CppName: GetMaterialCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::Renderer*)>(&UnityEngine::ProBuilder::MaterialUtility::GetMaterialCount)> {
  const MethodInfo* get() {
    static auto* renderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MaterialUtility*), "GetMaterialCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderer});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MaterialUtility::GetSharedMaterial
// Il2CppName: GetSharedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (*)(UnityEngine::Renderer*, int)>(&UnityEngine::ProBuilder::MaterialUtility::GetSharedMaterial)> {
  const MethodInfo* get() {
    static auto* renderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MaterialUtility*), "GetSharedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderer, index});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MaterialUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::MaterialUtility::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MaterialUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
