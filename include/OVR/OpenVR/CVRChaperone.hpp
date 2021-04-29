// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperone
#include "OVR/OpenVR/IVRChaperone.hpp"
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
  // Forward declaring type: ChaperoneCalibrationState
  struct ChaperoneCalibrationState;
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRChaperone
  class CVRChaperone : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRChaperone FnTable
    // Size: 0x40
    // Offset: 0x10
    OVR::OpenVR::IVRChaperone FnTable;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRChaperone) == 0x40);
    // Creating value type constructor for type: CVRChaperone
    CVRChaperone(OVR::OpenVR::IVRChaperone FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator OVR::OpenVR::IVRChaperone
    constexpr operator OVR::OpenVR::IVRChaperone() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x1414350
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRChaperone* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::CVRChaperone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRChaperone*, creationType>(pInterface)));
    }
    // public OVR.OpenVR.ChaperoneCalibrationState GetCalibrationState()
    // Offset: 0x1414458
    OVR::OpenVR::ChaperoneCalibrationState GetCalibrationState();
    // public System.Boolean GetPlayAreaSize(ref System.Single pSizeX, ref System.Single pSizeZ)
    // Offset: 0x1414684
    bool GetPlayAreaSize(float& pSizeX, float& pSizeZ);
    // public System.Boolean GetPlayAreaRect(ref OVR.OpenVR.HmdQuad_t rect)
    // Offset: 0x141491C
    bool GetPlayAreaRect(OVR::OpenVR::HmdQuad_t& rect);
    // public System.Void ReloadInfo()
    // Offset: 0x1414B94
    void ReloadInfo();
    // public System.Void SetSceneColor(OVR.OpenVR.HmdColor_t color)
    // Offset: 0x1414DB8
    void SetSceneColor(OVR::OpenVR::HmdColor_t color);
    // public System.Void GetBoundsColor(ref OVR.OpenVR.HmdColor_t pOutputColorArray, System.Int32 nNumOutputColors, System.Single flCollisionBoundsFadeDistance, ref OVR.OpenVR.HmdColor_t pOutputCameraColor)
    // Offset: 0x1415080
    void GetBoundsColor(OVR::OpenVR::HmdColor_t& pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, OVR::OpenVR::HmdColor_t& pOutputCameraColor);
    // public System.Boolean AreBoundsVisible()
    // Offset: 0x1415348
    bool AreBoundsVisible();
    // public System.Void ForceBoundsVisible(System.Boolean bForce)
    // Offset: 0x1415578
    void ForceBoundsVisible(bool bForce);
  }; // OVR.OpenVR.CVRChaperone
  #pragma pack(pop)
  static check_size<sizeof(CVRChaperone), 16 + sizeof(OVR::OpenVR::IVRChaperone)> __OVR_OpenVR_CVRChaperoneSizeCheck;
  static_assert(sizeof(CVRChaperone) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRChaperone*, "OVR.OpenVR", "CVRChaperone");
