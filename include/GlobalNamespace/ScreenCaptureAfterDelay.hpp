// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainEffectController
  class MainEffectController;
  // Forward declaring type: ScreenCaptureCache
  class ScreenCaptureCache;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ScreenCaptureAfterDelay
  class ScreenCaptureAfterDelay : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ScreenCaptureAfterDelay::InitData
    class InitData;
    // Nested type: GlobalNamespace::ScreenCaptureAfterDelay::$Start$d__6
    class $Start$d__6;
    // private MainEffectController _mainEffectController
    // Offset: 0x18
    GlobalNamespace::MainEffectController* mainEffectController;
    // private ScreenCaptureCache _screenCaptureCache
    // Offset: 0x20
    GlobalNamespace::ScreenCaptureCache* screenCaptureCache;
    // private ScreenCaptureAfterDelay/InitData _initData
    // Offset: 0x28
    GlobalNamespace::ScreenCaptureAfterDelay::InitData* initData;
    // private UnityEngine.Texture2D _captureTexture
    // Offset: 0x30
    UnityEngine::Texture2D* captureTexture;
    // private UnityEngine.RenderTexture _captureRenderTexture
    // Offset: 0x38
    UnityEngine::RenderTexture* captureRenderTexture;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // protected System.Collections.IEnumerator Start()
    // Offset: 0x1914EC8
    System::Collections::IEnumerator* Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1914F70
    void OnDestroy();
    // private System.Void HandleMainEffectControllerAfterImageEffectEvent(UnityEngine.RenderTexture renderTexture)
    // Offset: 0x1915054
    void HandleMainEffectControllerAfterImageEffectEvent(UnityEngine::RenderTexture* renderTexture);
    // public System.Void .ctor()
    // Offset: 0x191534C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ScreenCaptureAfterDelay* New_ctor();
  }; // ScreenCaptureAfterDelay
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenCaptureAfterDelay*, "", "ScreenCaptureAfterDelay");
#pragma pack(pop)
