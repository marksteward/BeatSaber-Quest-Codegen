// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PseudoHDREncoding
  class PseudoHDREncoding : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PseudoHDREncoding
    PseudoHDREncoding() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE280EC
    // static field const value: static private System.String kPseudoHDREncodingShaderName
    static constexpr const char* kPseudoHDREncodingShaderName = "Hidden/PseudoHDREncoding";
    // Get static field: static private System.String kPseudoHDREncodingShaderName
    static ::Il2CppString* _get_kPseudoHDREncodingShaderName();
    // Set static field: static private System.String kPseudoHDREncodingShaderName
    static void _set_kPseudoHDREncodingShaderName(::Il2CppString* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE280FC
    // Get static field: static private UnityEngine.Material _material
    static UnityEngine::Material* _get__material();
    // Set static field: static private UnityEngine.Material _material
    static void _set__material(UnityEngine::Material* value);
    // static public UnityEngine.RenderTexture CreatePseudoHDREncodedTexture(UnityEngine.RenderTexture src)
    // Offset: 0x10A87D4
    static UnityEngine::RenderTexture* CreatePseudoHDREncodedTexture(UnityEngine::RenderTexture* src);
  }; // PseudoHDREncoding
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PseudoHDREncoding*, "", "PseudoHDREncoding");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PseudoHDREncoding::CreatePseudoHDREncodedTexture
// Il2CppName: CreatePseudoHDREncodedTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RenderTexture* (*)(UnityEngine::RenderTexture*)>(&GlobalNamespace::PseudoHDREncoding::CreatePseudoHDREncodedTexture)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PseudoHDREncoding*), "CreatePseudoHDREncodedTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src});
  }
};
