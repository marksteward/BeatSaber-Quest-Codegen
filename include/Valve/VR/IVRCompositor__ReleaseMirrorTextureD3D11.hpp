// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
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
  // Autogenerated type: Valve.VR.IVRCompositor/_ReleaseMirrorTextureD3D11
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D89880
  class IVRCompositor::_ReleaseMirrorTextureD3D11 : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ReleaseMirrorTextureD3D11
    _ReleaseMirrorTextureD3D11() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18E9C74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_ReleaseMirrorTextureD3D11* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_ReleaseMirrorTextureD3D11::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_ReleaseMirrorTextureD3D11*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IntPtr pD3D11ShaderResourceView)
    // Offset: 0x18E9C88
    void Invoke(System::IntPtr pD3D11ShaderResourceView);
    // public System.IAsyncResult BeginInvoke(System.IntPtr pD3D11ShaderResourceView, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18E9EE8
    System::IAsyncResult* BeginInvoke(System::IntPtr pD3D11ShaderResourceView, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x18E9F74
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_ReleaseMirrorTextureD3D11
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_ReleaseMirrorTextureD3D11*, "Valve.VR", "IVRCompositor/_ReleaseMirrorTextureD3D11");
