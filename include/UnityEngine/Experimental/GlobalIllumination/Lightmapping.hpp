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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Light
  class Light;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.Lightmapping
  class Lightmapping : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate
    class RequestLightsDelegate;
    // Nested type: UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c
    class $$c;
    // Creating value type constructor for type: Lightmapping
    Lightmapping() noexcept {}
    // [RequiredByNativeCodeAttribute] Offset: 0xCBF5B0
    // Get static field: static private readonly UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate s_DefaultDelegate
    static UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* _get_s_DefaultDelegate();
    // Set static field: static private readonly UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate s_DefaultDelegate
    static void _set_s_DefaultDelegate(UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* value);
    // [RequiredByNativeCodeAttribute] Offset: 0xCBF5C0
    // Get static field: static private UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate s_RequestLightsDelegate
    static UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* _get_s_RequestLightsDelegate();
    // Set static field: static private UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate s_RequestLightsDelegate
    static void _set_s_RequestLightsDelegate(UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* value);
    // static public System.Void SetDelegate(UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate del)
    // Offset: 0x1A0CF88
    static void SetDelegate(UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* del);
    // static public UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate GetDelegate()
    // Offset: 0x1A0D018
    static UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate* GetDelegate();
    // static public System.Void ResetDelegate()
    // Offset: 0x1A0D080
    static void ResetDelegate();
    // static System.Void RequestLights(UnityEngine.Light[] lights, System.IntPtr outLightsPtr, System.Int32 outLightsCount)
    // Offset: 0x1A0D0EC
    static void RequestLights(::Array<UnityEngine::Light*>* lights, System::IntPtr outLightsPtr, int outLightsCount);
    // static private System.Void .cctor()
    // Offset: 0x1A0D5C8
    static void _cctor();
  }; // UnityEngine.Experimental.GlobalIllumination.Lightmapping
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::Lightmapping*, "UnityEngine.Experimental.GlobalIllumination", "Lightmapping");
