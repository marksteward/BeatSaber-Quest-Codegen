// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/_GetRecommendedRenderTargetSize
  // [UnmanagedFunctionPointerAttribute] Offset: DD3208
  class IVRSystem::_GetRecommendedRenderTargetSize : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetRecommendedRenderTargetSize
    _GetRecommendedRenderTargetSize() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C9999C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetRecommendedRenderTargetSize* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetRecommendedRenderTargetSize*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x1C999AC
    void Invoke(uint& pnWidth, uint& pnHeight);
    // public System.IAsyncResult BeginInvoke(ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C99C18
    System::IAsyncResult* BeginInvoke(uint& pnWidth, uint& pnHeight, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.IAsyncResult result)
    // Offset: 0x1C99CC4
    void EndInvoke(uint& pnWidth, uint& pnHeight, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetRecommendedRenderTargetSize
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize*, "Valve.VR", "IVRSystem/_GetRecommendedRenderTargetSize");
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetRecommendedRenderTargetSize::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
