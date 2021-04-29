// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
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
  // Forward declaring type: EVRApplicationProperty
  struct EVRApplicationProperty;
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
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
  // Autogenerated type: OVR.OpenVR.IVRApplications/_GetApplicationPropertyString
  // [UnmanagedFunctionPointerAttribute] Offset: CF3060
  class IVRApplications::_GetApplicationPropertyString : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetApplicationPropertyString
    _GetApplicationPropertyString() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x141E2C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_GetApplicationPropertyString* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRApplications::_GetApplicationPropertyString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_GetApplicationPropertyString*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.String pchAppKey, OVR.OpenVR.EVRApplicationProperty eProperty, System.Text.StringBuilder pchPropertyValueBuffer, System.UInt32 unPropertyValueBufferLen, ref OVR.OpenVR.EVRApplicationError peError)
    // Offset: 0x1410518
    uint Invoke(::Il2CppString* pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, System::Text::StringBuilder* pchPropertyValueBuffer, uint unPropertyValueBufferLen, OVR::OpenVR::EVRApplicationError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, OVR.OpenVR.EVRApplicationProperty eProperty, System.Text.StringBuilder pchPropertyValueBuffer, System.UInt32 unPropertyValueBufferLen, ref OVR.OpenVR.EVRApplicationError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x141E2D4
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, System::Text::StringBuilder* pchPropertyValueBuffer, uint unPropertyValueBufferLen, OVR::OpenVR::EVRApplicationError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref OVR.OpenVR.EVRApplicationError peError, System.IAsyncResult result)
    // Offset: 0x141E3BC
    uint EndInvoke(OVR::OpenVR::EVRApplicationError& peError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_GetApplicationPropertyString
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_GetApplicationPropertyString*, "OVR.OpenVR", "IVRApplications/_GetApplicationPropertyString");
