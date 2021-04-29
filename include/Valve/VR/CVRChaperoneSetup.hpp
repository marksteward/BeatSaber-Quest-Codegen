// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.HmdQuad_t
#include "Valve/VR/HmdQuad_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRChaperoneSetup
  class CVRChaperoneSetup : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRChaperoneSetup FnTable
    // Size: 0xA0
    // Offset: 0x10
    Valve::VR::IVRChaperoneSetup FnTable;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRChaperoneSetup) == 0xA0);
    // Creating value type constructor for type: CVRChaperoneSetup
    CVRChaperoneSetup(Valve::VR::IVRChaperoneSetup FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator Valve::VR::IVRChaperoneSetup
    constexpr operator Valve::VR::IVRChaperoneSetup() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x152552C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRChaperoneSetup* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRChaperoneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRChaperoneSetup*, creationType>(pInterface)));
    }
    // public System.Boolean CommitWorkingCopy(Valve.VR.EChaperoneConfigFile configFile)
    // Offset: 0x1525634
    bool CommitWorkingCopy(Valve::VR::EChaperoneConfigFile configFile);
    // public System.Void RevertWorkingCopy()
    // Offset: 0x15258C8
    void RevertWorkingCopy();
    // public System.Boolean GetWorkingPlayAreaSize(ref System.Single pSizeX, ref System.Single pSizeZ)
    // Offset: 0x15258E4
    bool GetWorkingPlayAreaSize(float& pSizeX, float& pSizeZ);
    // public System.Boolean GetWorkingPlayAreaRect(ref Valve.VR.HmdQuad_t rect)
    // Offset: 0x1525908
    bool GetWorkingPlayAreaRect(Valve::VR::HmdQuad_t& rect);
    // public System.Boolean GetWorkingCollisionBoundsInfo(out Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x1525924
    bool GetWorkingCollisionBoundsInfo(::Array<Valve::VR::HmdQuad_t>*& pQuadsBuffer);
    // public System.Boolean GetLiveCollisionBoundsInfo(out Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x15259C4
    bool GetLiveCollisionBoundsInfo(::Array<Valve::VR::HmdQuad_t>*& pQuadsBuffer);
    // public System.Boolean GetWorkingSeatedZeroPoseToRawTrackingPose(ref Valve.VR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0x1525CD8
    bool GetWorkingSeatedZeroPoseToRawTrackingPose(Valve::VR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose);
    // public System.Boolean GetWorkingStandingZeroPoseToRawTrackingPose(ref Valve.VR.HmdMatrix34_t pmatStandingZeroPoseToRawTrackingPose)
    // Offset: 0x1525CF4
    bool GetWorkingStandingZeroPoseToRawTrackingPose(Valve::VR::HmdMatrix34_t& pmatStandingZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingPlayAreaSize(System.Single sizeX, System.Single sizeZ)
    // Offset: 0x1525D10
    void SetWorkingPlayAreaSize(float sizeX, float sizeZ);
    // public System.Void SetWorkingCollisionBoundsInfo(Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x1525D2C
    void SetWorkingCollisionBoundsInfo(::Array<Valve::VR::HmdQuad_t>* pQuadsBuffer);
    // public System.Void SetWorkingSeatedZeroPoseToRawTrackingPose(ref Valve.VR.HmdMatrix34_t pMatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0x1525D54
    void SetWorkingSeatedZeroPoseToRawTrackingPose(Valve::VR::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingStandingZeroPoseToRawTrackingPose(ref Valve.VR.HmdMatrix34_t pMatStandingZeroPoseToRawTrackingPose)
    // Offset: 0x1525D70
    void SetWorkingStandingZeroPoseToRawTrackingPose(Valve::VR::HmdMatrix34_t& pMatStandingZeroPoseToRawTrackingPose);
    // public System.Void ReloadFromDisk(Valve.VR.EChaperoneConfigFile configFile)
    // Offset: 0x1525D8C
    void ReloadFromDisk(Valve::VR::EChaperoneConfigFile configFile);
    // public System.Boolean GetLiveSeatedZeroPoseToRawTrackingPose(ref Valve.VR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0x1525DA8
    bool GetLiveSeatedZeroPoseToRawTrackingPose(Valve::VR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingCollisionBoundsTagsInfo(System.Byte[] pTagsBuffer)
    // Offset: 0x1525DC4
    void SetWorkingCollisionBoundsTagsInfo(::Array<uint8_t>* pTagsBuffer);
    // public System.Boolean GetLiveCollisionBoundsTagsInfo(out System.Byte[] pTagsBuffer)
    // Offset: 0x1525DEC
    bool GetLiveCollisionBoundsTagsInfo(::Array<uint8_t>*& pTagsBuffer);
    // public System.Boolean SetWorkingPhysicalBoundsInfo(Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x1526100
    bool SetWorkingPhysicalBoundsInfo(::Array<Valve::VR::HmdQuad_t>* pQuadsBuffer);
    // public System.Boolean GetLivePhysicalBoundsInfo(out Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x1526128
    bool GetLivePhysicalBoundsInfo(::Array<Valve::VR::HmdQuad_t>*& pQuadsBuffer);
    // public System.Boolean ExportLiveToBuffer(System.Text.StringBuilder pBuffer, ref System.UInt32 pnBufferLength)
    // Offset: 0x15261C8
    bool ExportLiveToBuffer(System::Text::StringBuilder* pBuffer, uint& pnBufferLength);
    // public System.Boolean ImportFromBufferToWorking(System.String pBuffer, System.UInt32 nImportFlags)
    // Offset: 0x15265D8
    bool ImportFromBufferToWorking(::Il2CppString* pBuffer, uint nImportFlags);
  }; // Valve.VR.CVRChaperoneSetup
  #pragma pack(pop)
  static check_size<sizeof(CVRChaperoneSetup), 16 + sizeof(Valve::VR::IVRChaperoneSetup)> __Valve_VR_CVRChaperoneSetupSizeCheck;
  static_assert(sizeof(CVRChaperoneSetup) == 0xB0);
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRChaperoneSetup*, "Valve.VR", "CVRChaperoneSetup");
