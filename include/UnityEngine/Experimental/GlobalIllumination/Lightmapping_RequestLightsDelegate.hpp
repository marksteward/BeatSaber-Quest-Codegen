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
  class Lightmapping::RequestLightsDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: RequestLightsDelegate
    RequestLightsDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B98374
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lightmapping::RequestLightsDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lightmapping::RequestLightsDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Light[] requests, Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI> lightsOutput)
    // Offset: 0x1B97EA0
    void Invoke(::Array<UnityEngine::Light*>* requests, Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Light[] requests, Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI> lightsOutput, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B986C4
    System::IAsyncResult* BeginInvoke(::Array<UnityEngine::Light*>* requests, Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1B98760
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate*, "UnityEngine.Experimental.GlobalIllumination", "Lightmapping/RequestLightsDelegate");
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate::*)(::Array<UnityEngine::Light*>*, Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI>)>(&UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate::Invoke)> {
  const MethodInfo* get() {
    static auto* requests = &classof(::Array<::Array<UnityEngine::Light*>*>*)->byval_arg;
    static auto* lightsOutput = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.GlobalIllumination", "LightDataGI")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requests, lightsOutput});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate::*)(::Array<UnityEngine::Light*>*, Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI>, System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* requests = &classof(::Array<::Array<UnityEngine::Light*>*>*)->byval_arg;
    static auto* lightsOutput = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.GlobalIllumination", "LightDataGI")})->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requests, lightsOutput, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate::*)(System::IAsyncResult*)>(&UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::Lightmapping::RequestLightsDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
