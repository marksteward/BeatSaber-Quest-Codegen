// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Experimental.GlobalIllumination.Lightmapping
#include "UnityEngine/Experimental/GlobalIllumination/Lightmapping.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: UnityEngine.Experimental.GlobalIllumination.LightDataGI
#include "UnityEngine/Experimental/GlobalIllumination/LightDataGI.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Light
  class Light;
}
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: NativeArray`1<T>
  template<typename T>
  struct NativeArray_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
  // [] Offset: FFFFFFFF
  class Lightmapping::RequestLightsDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: RequestLightsDelegate
    RequestLightsDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1689784
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lightmapping::RequestLightsDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lightmapping::RequestLightsDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Light[] requests, Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI> lightsOutput)
    // Offset: 0x1689278
    void Invoke(::Array<UnityEngine::Light*>* requests, Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Light[] requests, Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI> lightsOutput, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1689B3C
    System::IAsyncResult* BeginInvoke(::Array<UnityEngine::Light*>* requests, Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1689BD8
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate*, "UnityEngine.Experimental.GlobalIllumination", "Lightmapping/RequestLightsDelegate");
