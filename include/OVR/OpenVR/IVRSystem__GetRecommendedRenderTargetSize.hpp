// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetRecommendedRenderTargetSize
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D83F34
  class IVRSystem::_GetRecommendedRenderTargetSize : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetRecommendedRenderTargetSize
    _GetRecommendedRenderTargetSize() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1914DC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetRecommendedRenderTargetSize* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetRecommendedRenderTargetSize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetRecommendedRenderTargetSize*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x1914DDC
    void Invoke(uint& pnWidth, uint& pnHeight);
    // public System.IAsyncResult BeginInvoke(ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1915048
    System::IAsyncResult* BeginInvoke(uint& pnWidth, uint& pnHeight, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.IAsyncResult result)
    // Offset: 0x19150F4
    void EndInvoke(uint& pnWidth, uint& pnHeight, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetRecommendedRenderTargetSize
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetRecommendedRenderTargetSize*, "OVR.OpenVR", "IVRSystem/_GetRecommendedRenderTargetSize");
#pragma pack(pop)
