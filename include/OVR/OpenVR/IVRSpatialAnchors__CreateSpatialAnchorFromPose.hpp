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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: SpatialAnchorPose_t
  struct SpatialAnchorPose_t;
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
  // Autogenerated type: OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose
  // [UnmanagedFunctionPointerAttribute] Offset: DCE9A8
  class IVRSpatialAnchors::_CreateSpatialAnchorFromPose : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _CreateSpatialAnchorFromPose
    _CreateSpatialAnchorFromPose() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20AC674
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSpatialAnchors::_CreateSpatialAnchorFromPose* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSpatialAnchors::_CreateSpatialAnchorFromPose*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRSpatialAnchorError Invoke(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, ref OVR.OpenVR.SpatialAnchorPose_t pPose, ref System.UInt32 pHandleOut)
    // Offset: 0x20AC684
    OVR::OpenVR::EVRSpatialAnchorError Invoke(uint unDeviceIndex, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::SpatialAnchorPose_t& pPose, uint& pHandleOut);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, ref OVR.OpenVR.SpatialAnchorPose_t pPose, ref System.UInt32 pHandleOut, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20AC940
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::SpatialAnchorPose_t& pPose, uint& pHandleOut, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRSpatialAnchorError EndInvoke(ref OVR.OpenVR.SpatialAnchorPose_t pPose, ref System.UInt32 pHandleOut, System.IAsyncResult result)
    // Offset: 0x20ACA28
    OVR::OpenVR::EVRSpatialAnchorError EndInvoke(OVR::OpenVR::SpatialAnchorPose_t& pPose, uint& pHandleOut, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose*, "OVR.OpenVR", "IVRSpatialAnchors/_CreateSpatialAnchorFromPose");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose::*)(uint, OVR::OpenVR::ETrackingUniverseOrigin, OVR::OpenVR::SpatialAnchorPose_t&, uint&)>(&OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose::Invoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* pPose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "SpatialAnchorPose_t")->this_arg;
    static auto* pHandleOut = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, eOrigin, pPose, pHandleOut});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose::*)(uint, OVR::OpenVR::ETrackingUniverseOrigin, OVR::OpenVR::SpatialAnchorPose_t&, uint&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* pPose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "SpatialAnchorPose_t")->this_arg;
    static auto* pHandleOut = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, eOrigin, pPose, pHandleOut, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose::*)(OVR::OpenVR::SpatialAnchorPose_t&, uint&, System::IAsyncResult*)>(&OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pPose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "SpatialAnchorPose_t")->this_arg;
    static auto* pHandleOut = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pPose, pHandleOut, result});
  }
};
