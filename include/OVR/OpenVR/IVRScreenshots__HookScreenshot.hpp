// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRScreenshots
#include "OVR/OpenVR/IVRScreenshots.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.EVRScreenshotType
#include "OVR/OpenVR/EVRScreenshotType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
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
  // Autogenerated type: OVR.OpenVR.IVRScreenshots/_HookScreenshot
  // [UnmanagedFunctionPointerAttribute] Offset: CF4050
  class IVRScreenshots::_HookScreenshot : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _HookScreenshot
    _HookScreenshot() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F15E28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRScreenshots::_HookScreenshot* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRScreenshots::_HookScreenshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRScreenshots::_HookScreenshot*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRScreenshotError Invoke(in OVR.OpenVR.EVRScreenshotType[] pSupportedTypes, System.Int32 numTypes)
    // Offset: 0x1F15E38
    OVR::OpenVR::EVRScreenshotError Invoke(::Array<OVR::OpenVR::EVRScreenshotType>*& pSupportedTypes, int numTypes);
    // public System.IAsyncResult BeginInvoke(in OVR.OpenVR.EVRScreenshotType[] pSupportedTypes, System.Int32 numTypes, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F160B0
    System::IAsyncResult* BeginInvoke(::Array<OVR::OpenVR::EVRScreenshotType>*& pSupportedTypes, int numTypes, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRScreenshotError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1F1614C
    OVR::OpenVR::EVRScreenshotError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRScreenshots/_HookScreenshot
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRScreenshots::_HookScreenshot*, "OVR.OpenVR", "IVRScreenshots/_HookScreenshot");
