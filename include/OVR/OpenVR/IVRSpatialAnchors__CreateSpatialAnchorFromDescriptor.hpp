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
  // Autogenerated type: OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D857BC
  class IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _CreateSpatialAnchorFromDescriptor
    _CreateSpatialAnchorFromDescriptor() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x190E25C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRSpatialAnchorError Invoke(System.String pchDescriptor, ref System.UInt32 pHandleOut)
    // Offset: 0x190E270
    OVR::OpenVR::EVRSpatialAnchorError Invoke(::Il2CppString* pchDescriptor, uint& pHandleOut);
    // public System.IAsyncResult BeginInvoke(System.String pchDescriptor, ref System.UInt32 pHandleOut, System.AsyncCallback callback, System.Object object)
    // Offset: 0x190E67C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchDescriptor, uint& pHandleOut, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRSpatialAnchorError EndInvoke(ref System.UInt32 pHandleOut, System.IAsyncResult result)
    // Offset: 0x190E718
    OVR::OpenVR::EVRSpatialAnchorError EndInvoke(uint& pHandleOut, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor*, "OVR.OpenVR", "IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor");
