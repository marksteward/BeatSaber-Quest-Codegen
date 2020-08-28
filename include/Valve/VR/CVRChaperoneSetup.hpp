// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EChaperoneConfigFile
  struct EChaperoneConfigFile;
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
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
  // Autogenerated type: Valve.VR.CVRChaperoneSetup
  class CVRChaperoneSetup : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRChaperoneSetup FnTable
    // Offset: 0x10
    Valve::VR::IVRChaperoneSetup FnTable;
    // Creating conversion operator: operator Valve::VR::IVRChaperoneSetup
    constexpr operator Valve::VR::IVRChaperoneSetup() const {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xFE4468
    static CVRChaperoneSetup* New_ctor(System::IntPtr pInterface);
    // public System.Boolean CommitWorkingCopy(Valve.VR.EChaperoneConfigFile configFile)
    // Offset: 0xFE457C
    bool CommitWorkingCopy(Valve::VR::EChaperoneConfigFile configFile);
    // public System.Void RevertWorkingCopy()
    // Offset: 0xFE480C
    void RevertWorkingCopy();
    // public System.Boolean GetWorkingPlayAreaSize(System.Single pSizeX, System.Single pSizeZ)
    // Offset: 0xFE4828
    bool GetWorkingPlayAreaSize(float& pSizeX, float& pSizeZ);
    // public System.Boolean GetWorkingPlayAreaRect(Valve.VR.HmdQuad_t rect)
    // Offset: 0xFE484C
    bool GetWorkingPlayAreaRect(Valve::VR::HmdQuad_t& rect);
    // public System.Boolean GetWorkingCollisionBoundsInfo(Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0xFE4868
    bool GetWorkingCollisionBoundsInfo(::Array<Valve::VR::HmdQuad_t>*& pQuadsBuffer);
    // public System.Boolean GetLiveCollisionBoundsInfo(Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0xFE4914
    bool GetLiveCollisionBoundsInfo(::Array<Valve::VR::HmdQuad_t>*& pQuadsBuffer);
    // public System.Boolean GetWorkingSeatedZeroPoseToRawTrackingPose(Valve.VR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0xFE4C30
    bool GetWorkingSeatedZeroPoseToRawTrackingPose(Valve::VR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose);
    // public System.Boolean GetWorkingStandingZeroPoseToRawTrackingPose(Valve.VR.HmdMatrix34_t pmatStandingZeroPoseToRawTrackingPose)
    // Offset: 0xFE4C4C
    bool GetWorkingStandingZeroPoseToRawTrackingPose(Valve::VR::HmdMatrix34_t& pmatStandingZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingPlayAreaSize(System.Single sizeX, System.Single sizeZ)
    // Offset: 0xFE4C68
    void SetWorkingPlayAreaSize(float sizeX, float sizeZ);
    // public System.Void SetWorkingCollisionBoundsInfo(Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0xFE4C84
    void SetWorkingCollisionBoundsInfo(::Array<Valve::VR::HmdQuad_t>* pQuadsBuffer);
    // public System.Void SetWorkingSeatedZeroPoseToRawTrackingPose(Valve.VR.HmdMatrix34_t pMatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0xFE4CAC
    void SetWorkingSeatedZeroPoseToRawTrackingPose(Valve::VR::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingStandingZeroPoseToRawTrackingPose(Valve.VR.HmdMatrix34_t pMatStandingZeroPoseToRawTrackingPose)
    // Offset: 0xFE4CC8
    void SetWorkingStandingZeroPoseToRawTrackingPose(Valve::VR::HmdMatrix34_t& pMatStandingZeroPoseToRawTrackingPose);
    // public System.Void ReloadFromDisk(Valve.VR.EChaperoneConfigFile configFile)
    // Offset: 0xFE4CE4
    void ReloadFromDisk(Valve::VR::EChaperoneConfigFile configFile);
    // public System.Boolean GetLiveSeatedZeroPoseToRawTrackingPose(Valve.VR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0xFE4D00
    bool GetLiveSeatedZeroPoseToRawTrackingPose(Valve::VR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingCollisionBoundsTagsInfo(System.Byte[] pTagsBuffer)
    // Offset: 0xFE4D1C
    void SetWorkingCollisionBoundsTagsInfo(::Array<uint8_t>* pTagsBuffer);
    // public System.Boolean GetLiveCollisionBoundsTagsInfo(System.Byte[] pTagsBuffer)
    // Offset: 0xFE4D44
    bool GetLiveCollisionBoundsTagsInfo(::Array<uint8_t>*& pTagsBuffer);
    // public System.Boolean SetWorkingPhysicalBoundsInfo(Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0xFE4DF0
    bool SetWorkingPhysicalBoundsInfo(::Array<Valve::VR::HmdQuad_t>* pQuadsBuffer);
    // public System.Boolean GetLivePhysicalBoundsInfo(Valve.VR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0xFE4E18
    bool GetLivePhysicalBoundsInfo(::Array<Valve::VR::HmdQuad_t>*& pQuadsBuffer);
    // public System.Boolean ExportLiveToBuffer(System.Text.StringBuilder pBuffer, System.UInt32 pnBufferLength)
    // Offset: 0xFE4EC4
    bool ExportLiveToBuffer(System::Text::StringBuilder* pBuffer, uint& pnBufferLength);
    // public System.Boolean ImportFromBufferToWorking(System.String pBuffer, System.UInt32 nImportFlags)
    // Offset: 0xFE52F0
    bool ImportFromBufferToWorking(::Il2CppString* pBuffer, uint nImportFlags);
  }; // Valve.VR.CVRChaperoneSetup
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRChaperoneSetup*, "Valve.VR", "CVRChaperoneSetup");
#pragma pack(pop)
