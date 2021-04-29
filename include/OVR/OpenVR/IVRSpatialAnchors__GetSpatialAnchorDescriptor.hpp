// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSpatialAnchors
#include "OVR/OpenVR/IVRSpatialAnchors.hpp"
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
  // Forward declaring type: EVRSpatialAnchorError
  struct EVRSpatialAnchorError;
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
  // Autogenerated type: OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorDescriptor
  // [UnmanagedFunctionPointerAttribute] Offset: CF4334
  class IVRSpatialAnchors::_GetSpatialAnchorDescriptor : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetSpatialAnchorDescriptor
    _GetSpatialAnchorDescriptor() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F1B278
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSpatialAnchors::_GetSpatialAnchorDescriptor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSpatialAnchors::_GetSpatialAnchorDescriptor*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRSpatialAnchorError Invoke(System.UInt32 unHandle, System.Text.StringBuilder pchDescriptorOut, ref System.UInt32 punDescriptorBufferLenInOut)
    // Offset: 0x1F1B288
    OVR::OpenVR::EVRSpatialAnchorError Invoke(uint unHandle, System::Text::StringBuilder* pchDescriptorOut, uint& punDescriptorBufferLenInOut);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unHandle, System.Text.StringBuilder pchDescriptorOut, ref System.UInt32 punDescriptorBufferLenInOut, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F1B528
    System::IAsyncResult* BeginInvoke(uint unHandle, System::Text::StringBuilder* pchDescriptorOut, uint& punDescriptorBufferLenInOut, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRSpatialAnchorError EndInvoke(ref System.UInt32 punDescriptorBufferLenInOut, System.IAsyncResult result)
    // Offset: 0x1F1B5D8
    OVR::OpenVR::EVRSpatialAnchorError EndInvoke(uint& punDescriptorBufferLenInOut, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorDescriptor
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorDescriptor*, "OVR.OpenVR", "IVRSpatialAnchors/_GetSpatialAnchorDescriptor");
