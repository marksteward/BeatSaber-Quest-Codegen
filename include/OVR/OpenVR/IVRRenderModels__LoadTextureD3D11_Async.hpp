// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
}
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
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_LoadTextureD3D11_Async
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D852BC
  class IVRRenderModels::_LoadTextureD3D11_Async : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _LoadTextureD3D11_Async
    _LoadTextureD3D11_Async() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x19077D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_LoadTextureD3D11_Async* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_LoadTextureD3D11_Async*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRRenderModelError Invoke(System.Int32 textureId, System.IntPtr pD3D11Device, ref System.IntPtr ppD3D11Texture2D)
    // Offset: 0x19077EC
    OVR::OpenVR::EVRRenderModelError Invoke(int textureId, System::IntPtr pD3D11Device, System::IntPtr& ppD3D11Texture2D);
    // public System.IAsyncResult BeginInvoke(System.Int32 textureId, System.IntPtr pD3D11Device, ref System.IntPtr ppD3D11Texture2D, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1907A98
    System::IAsyncResult* BeginInvoke(int textureId, System::IntPtr pD3D11Device, System::IntPtr& ppD3D11Texture2D, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRRenderModelError EndInvoke(ref System.IntPtr ppD3D11Texture2D, System.IAsyncResult result)
    // Offset: 0x1907B60
    OVR::OpenVR::EVRRenderModelError EndInvoke(System::IntPtr& ppD3D11Texture2D, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_LoadTextureD3D11_Async
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async*, "OVR.OpenVR", "IVRRenderModels/_LoadTextureD3D11_Async");
