// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_ReleaseMirrorTextureD3D11
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D84B50
  class IVRCompositor::_ReleaseMirrorTextureD3D11 : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ReleaseMirrorTextureD3D11
    _ReleaseMirrorTextureD3D11() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x185DDE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_ReleaseMirrorTextureD3D11* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRCompositor::_ReleaseMirrorTextureD3D11::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_ReleaseMirrorTextureD3D11*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IntPtr pD3D11ShaderResourceView)
    // Offset: 0x185DDFC
    void Invoke(System::IntPtr pD3D11ShaderResourceView);
    // public System.IAsyncResult BeginInvoke(System.IntPtr pD3D11ShaderResourceView, System.AsyncCallback callback, System.Object object)
    // Offset: 0x185E05C
    System::IAsyncResult* BeginInvoke(System::IntPtr pD3D11ShaderResourceView, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x185E0E8
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_ReleaseMirrorTextureD3D11
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_ReleaseMirrorTextureD3D11*, "OVR.OpenVR", "IVRCompositor/_ReleaseMirrorTextureD3D11");
#pragma pack(pop)
