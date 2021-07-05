// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TextureEffectSO
  class TextureEffectSO;
  // Forward declaring type: ToneMapping
  struct ToneMapping;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IBloomPrePassParams
  class IBloomPrePassParams {
    public:
    // Creating value type constructor for type: IBloomPrePassParams
    IBloomPrePassParams() noexcept {}
    // public TextureEffectSO get_textureEffect()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::TextureEffectSO* get_textureEffect();
    // public System.Int32 get_textureWidth()
    // Offset: 0xFFFFFFFF
    int get_textureWidth();
    // public System.Int32 get_textureHeight()
    // Offset: 0xFFFFFFFF
    int get_textureHeight();
    // public UnityEngine.Vector2 get_fov()
    // Offset: 0xFFFFFFFF
    UnityEngine::Vector2 get_fov();
    // public System.Single get_linesWidth()
    // Offset: 0xFFFFFFFF
    float get_linesWidth();
    // public ToneMapping get_toneMapping()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::ToneMapping get_toneMapping();
  }; // IBloomPrePassParams
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBloomPrePassParams*, "", "IBloomPrePassParams");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IBloomPrePassParams::get_textureEffect
// Il2CppName: get_textureEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::TextureEffectSO* (GlobalNamespace::IBloomPrePassParams::*)()>(&GlobalNamespace::IBloomPrePassParams::get_textureEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBloomPrePassParams*), "get_textureEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBloomPrePassParams::get_textureWidth
// Il2CppName: get_textureWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IBloomPrePassParams::*)()>(&GlobalNamespace::IBloomPrePassParams::get_textureWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBloomPrePassParams*), "get_textureWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBloomPrePassParams::get_textureHeight
// Il2CppName: get_textureHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IBloomPrePassParams::*)()>(&GlobalNamespace::IBloomPrePassParams::get_textureHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBloomPrePassParams*), "get_textureHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBloomPrePassParams::get_fov
// Il2CppName: get_fov
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (GlobalNamespace::IBloomPrePassParams::*)()>(&GlobalNamespace::IBloomPrePassParams::get_fov)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBloomPrePassParams*), "get_fov", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBloomPrePassParams::get_linesWidth
// Il2CppName: get_linesWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::IBloomPrePassParams::*)()>(&GlobalNamespace::IBloomPrePassParams::get_linesWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBloomPrePassParams*), "get_linesWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBloomPrePassParams::get_toneMapping
// Il2CppName: get_toneMapping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ToneMapping (GlobalNamespace::IBloomPrePassParams::*)()>(&GlobalNamespace::IBloomPrePassParams::get_toneMapping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBloomPrePassParams*), "get_toneMapping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
