// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSpatialAnchors
#include "OVR/OpenVR/IVRSpatialAnchors.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRSpatialAnchors
  class CVRSpatialAnchors : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRSpatialAnchors FnTable
    // Size: 0x20
    // Offset: 0x10
    OVR::OpenVR::IVRSpatialAnchors FnTable;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSpatialAnchors) == 0x20);
    // Creating value type constructor for type: CVRSpatialAnchors
    CVRSpatialAnchors(OVR::OpenVR::IVRSpatialAnchors FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator OVR::OpenVR::IVRSpatialAnchors
    constexpr operator OVR::OpenVR::IVRSpatialAnchors() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x15B236C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRSpatialAnchors* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::CVRSpatialAnchors::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRSpatialAnchors*, creationType>(pInterface)));
    }
    // public OVR.OpenVR.EVRSpatialAnchorError CreateSpatialAnchorFromDescriptor(System.String pchDescriptor, ref System.UInt32 pHandleOut)
    // Offset: 0x15B246C
    OVR::OpenVR::EVRSpatialAnchorError CreateSpatialAnchorFromDescriptor(::Il2CppString* pchDescriptor, uint& pHandleOut);
    // public OVR.OpenVR.EVRSpatialAnchorError CreateSpatialAnchorFromPose(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, ref OVR.OpenVR.SpatialAnchorPose_t pPose, ref System.UInt32 pHandleOut)
    // Offset: 0x15B248C
    OVR::OpenVR::EVRSpatialAnchorError CreateSpatialAnchorFromPose(uint unDeviceIndex, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::SpatialAnchorPose_t& pPose, uint& pHandleOut);
    // public OVR.OpenVR.EVRSpatialAnchorError GetSpatialAnchorPose(System.UInt32 unHandle, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, ref OVR.OpenVR.SpatialAnchorPose_t pPoseOut)
    // Offset: 0x15B24AC
    OVR::OpenVR::EVRSpatialAnchorError GetSpatialAnchorPose(uint unHandle, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::SpatialAnchorPose_t& pPoseOut);
    // public OVR.OpenVR.EVRSpatialAnchorError GetSpatialAnchorDescriptor(System.UInt32 unHandle, System.Text.StringBuilder pchDescriptorOut, ref System.UInt32 punDescriptorBufferLenInOut)
    // Offset: 0x15B24C8
    OVR::OpenVR::EVRSpatialAnchorError GetSpatialAnchorDescriptor(uint unHandle, System::Text::StringBuilder* pchDescriptorOut, uint& punDescriptorBufferLenInOut);
  }; // OVR.OpenVR.CVRSpatialAnchors
  #pragma pack(pop)
  static check_size<sizeof(CVRSpatialAnchors), 16 + sizeof(OVR::OpenVR::IVRSpatialAnchors)> __OVR_OpenVR_CVRSpatialAnchorsSizeCheck;
  static_assert(sizeof(CVRSpatialAnchors) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRSpatialAnchors*, "OVR.OpenVR", "CVRSpatialAnchors");
// Writing MetadataGetter for method: OVR::OpenVR::CVRSpatialAnchors::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRSpatialAnchors::CreateSpatialAnchorFromDescriptor
// Il2CppName: CreateSpatialAnchorFromDescriptor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRSpatialAnchors::CreateSpatialAnchorFromPose
// Il2CppName: CreateSpatialAnchorFromPose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRSpatialAnchors::GetSpatialAnchorPose
// Il2CppName: GetSpatialAnchorPose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRSpatialAnchors::GetSpatialAnchorDescriptor
// Il2CppName: GetSpatialAnchorDescriptor
// Cannot perform method pointer template specialization from operators!
