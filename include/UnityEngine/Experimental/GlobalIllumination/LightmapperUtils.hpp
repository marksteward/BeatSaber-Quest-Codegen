// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Forward declaring type: LinearColor
  struct LinearColor;
  // Forward declaring type: DirectionalLight
  struct DirectionalLight;
  // Forward declaring type: PointLight
  struct PointLight;
  // Forward declaring type: SpotLight
  struct SpotLight;
  // Forward declaring type: RectangleLight
  struct RectangleLight;
  // Forward declaring type: DiscLight
  struct DiscLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Light
  class Light;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.LightmapperUtils
  class LightmapperUtils : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: LightmapperUtils
    LightmapperUtils() noexcept {}
    // static public UnityEngine.Experimental.GlobalIllumination.LinearColor ExtractIndirect(UnityEngine.Light l)
    // Offset: 0x1B97420
    static UnityEngine::Experimental::GlobalIllumination::LinearColor ExtractIndirect(UnityEngine::Light* l);
    // static public System.Single ExtractInnerCone(UnityEngine.Light l)
    // Offset: 0x1B97598
    static float ExtractInnerCone(UnityEngine::Light* l);
    // static public System.Void Extract(UnityEngine.Light l, ref UnityEngine.Experimental.GlobalIllumination.DirectionalLight dir)
    // Offset: 0x1B97650
    static void Extract(UnityEngine::Light* l, UnityEngine::Experimental::GlobalIllumination::DirectionalLight& dir);
    // static public System.Void Extract(UnityEngine.Light l, ref UnityEngine.Experimental.GlobalIllumination.PointLight point)
    // Offset: 0x1B97750
    static void Extract(UnityEngine::Light* l, UnityEngine::Experimental::GlobalIllumination::PointLight& point);
    // static public System.Void Extract(UnityEngine.Light l, ref UnityEngine.Experimental.GlobalIllumination.SpotLight spot)
    // Offset: 0x1B97868
    static void Extract(UnityEngine::Light* l, UnityEngine::Experimental::GlobalIllumination::SpotLight& spot);
    // static public System.Void Extract(UnityEngine.Light l, ref UnityEngine.Experimental.GlobalIllumination.RectangleLight rect)
    // Offset: 0x1B979E0
    static void Extract(UnityEngine::Light* l, UnityEngine::Experimental::GlobalIllumination::RectangleLight& rect);
    // static public System.Void Extract(UnityEngine.Light l, ref UnityEngine.Experimental.GlobalIllumination.DiscLight disc)
    // Offset: 0x1B97B30
    static void Extract(UnityEngine::Light* l, UnityEngine::Experimental::GlobalIllumination::DiscLight& disc);
  }; // UnityEngine.Experimental.GlobalIllumination.LightmapperUtils
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*, "UnityEngine.Experimental.GlobalIllumination", "LightmapperUtils");
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ExtractIndirect
// Il2CppName: ExtractIndirect
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::ExtractInnerCone
// Il2CppName: ExtractInnerCone
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract
// Il2CppName: Extract
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract
// Il2CppName: Extract
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract
// Il2CppName: Extract
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract
// Il2CppName: Extract
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LightmapperUtils::Extract
// Il2CppName: Extract
// Cannot perform method pointer template specialization from operators!
