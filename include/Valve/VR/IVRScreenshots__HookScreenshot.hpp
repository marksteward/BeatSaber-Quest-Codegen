// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRScreenshots
#include "Valve/VR/IVRScreenshots.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.EVRScreenshotType
#include "Valve/VR/EVRScreenshotType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRScreenshots/_HookScreenshot
  // [UnmanagedFunctionPointerAttribute] Offset: CF8F48
  class IVRScreenshots::_HookScreenshot : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _HookScreenshot
    _HookScreenshot() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1ACE8D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRScreenshots::_HookScreenshot* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRScreenshots::_HookScreenshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRScreenshots::_HookScreenshot*, creationType>(object, method)));
    }
    // public Valve.VR.EVRScreenshotError Invoke(in Valve.VR.EVRScreenshotType[] pSupportedTypes, System.Int32 numTypes)
    // Offset: 0x1ACE8E0
    Valve::VR::EVRScreenshotError Invoke(::Array<Valve::VR::EVRScreenshotType>*& pSupportedTypes, int numTypes);
    // public System.IAsyncResult BeginInvoke(in Valve.VR.EVRScreenshotType[] pSupportedTypes, System.Int32 numTypes, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1ACEB58
    System::IAsyncResult* BeginInvoke(::Array<Valve::VR::EVRScreenshotType>*& pSupportedTypes, int numTypes, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRScreenshotError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1ACEBF4
    Valve::VR::EVRScreenshotError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRScreenshots/_HookScreenshot
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRScreenshots::_HookScreenshot*, "Valve.VR", "IVRScreenshots/_HookScreenshot");
