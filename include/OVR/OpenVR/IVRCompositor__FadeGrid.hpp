// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_FadeGrid
  // [UnmanagedFunctionPointerAttribute] Offset: CF34FC
  class IVRCompositor::_FadeGrid : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _FadeGrid
    _FadeGrid() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D6B9EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_FadeGrid* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRCompositor::_FadeGrid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_FadeGrid*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Single fSeconds, System.Boolean bFadeIn)
    // Offset: 0x1D6B9FC
    void Invoke(float fSeconds, bool bFadeIn);
    // public System.IAsyncResult BeginInvoke(System.Single fSeconds, System.Boolean bFadeIn, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D6BC7C
    System::IAsyncResult* BeginInvoke(float fSeconds, bool bFadeIn, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1D6BD2C
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_FadeGrid
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_FadeGrid*, "OVR.OpenVR", "IVRCompositor/_FadeGrid");
