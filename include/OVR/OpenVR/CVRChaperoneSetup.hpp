// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OVR.OpenVR.HmdQuad_t
#include "OVR/OpenVR/HmdQuad_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EChaperoneConfigFile
  struct EChaperoneConfigFile;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRChaperoneSetup
  class CVRChaperoneSetup : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRChaperoneSetup FnTable
    // Size: 0xA0
    // Offset: 0x10
    OVR::OpenVR::IVRChaperoneSetup FnTable;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRChaperoneSetup) == 0xA0);
    // Creating value type constructor for type: CVRChaperoneSetup
    CVRChaperoneSetup(OVR::OpenVR::IVRChaperoneSetup FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator OVR::OpenVR::IVRChaperoneSetup
    constexpr operator OVR::OpenVR::IVRChaperoneSetup() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x15ABB6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRChaperoneSetup* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::CVRChaperoneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRChaperoneSetup*, creationType>(pInterface)));
    }
    // public System.Boolean CommitWorkingCopy(OVR.OpenVR.EChaperoneConfigFile configFile)
    // Offset: 0x15ABC74
    bool CommitWorkingCopy(OVR::OpenVR::EChaperoneConfigFile configFile);
    // public System.Void RevertWorkingCopy()
    // Offset: 0x15ABF08
    void RevertWorkingCopy();
    // public System.Boolean GetWorkingPlayAreaSize(ref System.Single pSizeX, ref System.Single pSizeZ)
    // Offset: 0x15AC12C
    bool GetWorkingPlayAreaSize(float& pSizeX, float& pSizeZ);
    // public System.Boolean GetWorkingPlayAreaRect(ref OVR.OpenVR.HmdQuad_t rect)
    // Offset: 0x15AC3C4
    bool GetWorkingPlayAreaRect(OVR::OpenVR::HmdQuad_t& rect);
    // public System.Boolean GetWorkingCollisionBoundsInfo(out OVR.OpenVR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x15AC63C
    bool GetWorkingCollisionBoundsInfo(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer);
    // public System.Boolean GetLiveCollisionBoundsInfo(out OVR.OpenVR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x15AC950
    bool GetLiveCollisionBoundsInfo(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer);
    // public System.Boolean GetWorkingSeatedZeroPoseToRawTrackingPose(ref OVR.OpenVR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0x15ACC64
    bool GetWorkingSeatedZeroPoseToRawTrackingPose(OVR::OpenVR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose);
    // public System.Boolean GetWorkingStandingZeroPoseToRawTrackingPose(ref OVR.OpenVR.HmdMatrix34_t pmatStandingZeroPoseToRawTrackingPose)
    // Offset: 0x15ACEDC
    bool GetWorkingStandingZeroPoseToRawTrackingPose(OVR::OpenVR::HmdMatrix34_t& pmatStandingZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingPlayAreaSize(System.Single sizeX, System.Single sizeZ)
    // Offset: 0x15AD154
    void SetWorkingPlayAreaSize(float sizeX, float sizeZ);
    // public System.Void SetWorkingCollisionBoundsInfo(OVR.OpenVR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x15AD3E4
    void SetWorkingCollisionBoundsInfo(::Array<OVR::OpenVR::HmdQuad_t>* pQuadsBuffer);
    // public System.Void SetWorkingSeatedZeroPoseToRawTrackingPose(ref OVR.OpenVR.HmdMatrix34_t pMatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0x15AD678
    void SetWorkingSeatedZeroPoseToRawTrackingPose(OVR::OpenVR::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingStandingZeroPoseToRawTrackingPose(ref OVR.OpenVR.HmdMatrix34_t pMatStandingZeroPoseToRawTrackingPose)
    // Offset: 0x15AD8E4
    void SetWorkingStandingZeroPoseToRawTrackingPose(OVR::OpenVR::HmdMatrix34_t& pMatStandingZeroPoseToRawTrackingPose);
    // public System.Void ReloadFromDisk(OVR.OpenVR.EChaperoneConfigFile configFile)
    // Offset: 0x15ADB50
    void ReloadFromDisk(OVR::OpenVR::EChaperoneConfigFile configFile);
    // public System.Boolean GetLiveSeatedZeroPoseToRawTrackingPose(ref OVR.OpenVR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0x15ADDD8
    bool GetLiveSeatedZeroPoseToRawTrackingPose(OVR::OpenVR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingCollisionBoundsTagsInfo(System.Byte[] pTagsBuffer)
    // Offset: 0x15AE050
    void SetWorkingCollisionBoundsTagsInfo(::Array<uint8_t>* pTagsBuffer);
    // public System.Boolean GetLiveCollisionBoundsTagsInfo(out System.Byte[] pTagsBuffer)
    // Offset: 0x15AE2E4
    bool GetLiveCollisionBoundsTagsInfo(::Array<uint8_t>*& pTagsBuffer);
    // public System.Boolean SetWorkingPhysicalBoundsInfo(OVR.OpenVR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x15AE5F8
    bool SetWorkingPhysicalBoundsInfo(::Array<OVR::OpenVR::HmdQuad_t>* pQuadsBuffer);
    // public System.Boolean GetLivePhysicalBoundsInfo(out OVR.OpenVR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x15AE898
    bool GetLivePhysicalBoundsInfo(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer);
    // public System.Boolean ExportLiveToBuffer(System.Text.StringBuilder pBuffer, ref System.UInt32 pnBufferLength)
    // Offset: 0x15AEBAC
    bool ExportLiveToBuffer(System::Text::StringBuilder* pBuffer, uint& pnBufferLength);
    // public System.Boolean ImportFromBufferToWorking(System.String pBuffer, System.UInt32 nImportFlags)
    // Offset: 0x15AEFBC
    bool ImportFromBufferToWorking(::Il2CppString* pBuffer, uint nImportFlags);
  }; // OVR.OpenVR.CVRChaperoneSetup
  #pragma pack(pop)
  static check_size<sizeof(CVRChaperoneSetup), 16 + sizeof(OVR::OpenVR::IVRChaperoneSetup)> __OVR_OpenVR_CVRChaperoneSetupSizeCheck;
  static_assert(sizeof(CVRChaperoneSetup) == 0xB0);
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRChaperoneSetup*, "OVR.OpenVR", "CVRChaperoneSetup");
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::CommitWorkingCopy
// Il2CppName: CommitWorkingCopy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::RevertWorkingCopy
// Il2CppName: RevertWorkingCopy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaSize
// Il2CppName: GetWorkingPlayAreaSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaRect
// Il2CppName: GetWorkingPlayAreaRect
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetWorkingCollisionBoundsInfo
// Il2CppName: GetWorkingCollisionBoundsInfo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsInfo
// Il2CppName: GetLiveCollisionBoundsInfo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetWorkingSeatedZeroPoseToRawTrackingPose
// Il2CppName: GetWorkingSeatedZeroPoseToRawTrackingPose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetWorkingStandingZeroPoseToRawTrackingPose
// Il2CppName: GetWorkingStandingZeroPoseToRawTrackingPose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::SetWorkingPlayAreaSize
// Il2CppName: SetWorkingPlayAreaSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsInfo
// Il2CppName: SetWorkingCollisionBoundsInfo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::SetWorkingSeatedZeroPoseToRawTrackingPose
// Il2CppName: SetWorkingSeatedZeroPoseToRawTrackingPose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::SetWorkingStandingZeroPoseToRawTrackingPose
// Il2CppName: SetWorkingStandingZeroPoseToRawTrackingPose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::ReloadFromDisk
// Il2CppName: ReloadFromDisk
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetLiveSeatedZeroPoseToRawTrackingPose
// Il2CppName: GetLiveSeatedZeroPoseToRawTrackingPose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsTagsInfo
// Il2CppName: SetWorkingCollisionBoundsTagsInfo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsTagsInfo
// Il2CppName: GetLiveCollisionBoundsTagsInfo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::SetWorkingPhysicalBoundsInfo
// Il2CppName: SetWorkingPhysicalBoundsInfo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetLivePhysicalBoundsInfo
// Il2CppName: GetLivePhysicalBoundsInfo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::ExportLiveToBuffer
// Il2CppName: ExportLiveToBuffer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::ImportFromBufferToWorking
// Il2CppName: ImportFromBufferToWorking
// Cannot perform method pointer template specialization from operators!
