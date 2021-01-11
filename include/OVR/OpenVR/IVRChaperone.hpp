// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.IVRChaperone
  // [] Offset: FFFFFFFF
  struct IVRChaperone/*, public System::ValueType*/ {
    public:
    // Nested type: OVR::OpenVR::IVRChaperone::_GetCalibrationState
    class _GetCalibrationState;
    // Nested type: OVR::OpenVR::IVRChaperone::_GetPlayAreaSize
    class _GetPlayAreaSize;
    // Nested type: OVR::OpenVR::IVRChaperone::_GetPlayAreaRect
    class _GetPlayAreaRect;
    // Nested type: OVR::OpenVR::IVRChaperone::_ReloadInfo
    class _ReloadInfo;
    // Nested type: OVR::OpenVR::IVRChaperone::_SetSceneColor
    class _SetSceneColor;
    // Nested type: OVR::OpenVR::IVRChaperone::_GetBoundsColor
    class _GetBoundsColor;
    // Nested type: OVR::OpenVR::IVRChaperone::_AreBoundsVisible
    class _AreBoundsVisible;
    // Nested type: OVR::OpenVR::IVRChaperone::_ForceBoundsVisible
    class _ForceBoundsVisible;
    // OVR.OpenVR.IVRChaperone/_GetCalibrationState GetCalibrationState
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::IVRChaperone::_GetCalibrationState* GetCalibrationState;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRChaperone::_GetCalibrationState*) == 0x8);
    // OVR.OpenVR.IVRChaperone/_GetPlayAreaSize GetPlayAreaSize
    // Size: 0x8
    // Offset: 0x8
    OVR::OpenVR::IVRChaperone::_GetPlayAreaSize* GetPlayAreaSize;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRChaperone::_GetPlayAreaSize*) == 0x8);
    // OVR.OpenVR.IVRChaperone/_GetPlayAreaRect GetPlayAreaRect
    // Size: 0x8
    // Offset: 0x10
    OVR::OpenVR::IVRChaperone::_GetPlayAreaRect* GetPlayAreaRect;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRChaperone::_GetPlayAreaRect*) == 0x8);
    // OVR.OpenVR.IVRChaperone/_ReloadInfo ReloadInfo
    // Size: 0x8
    // Offset: 0x18
    OVR::OpenVR::IVRChaperone::_ReloadInfo* ReloadInfo;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRChaperone::_ReloadInfo*) == 0x8);
    // OVR.OpenVR.IVRChaperone/_SetSceneColor SetSceneColor
    // Size: 0x8
    // Offset: 0x20
    OVR::OpenVR::IVRChaperone::_SetSceneColor* SetSceneColor;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRChaperone::_SetSceneColor*) == 0x8);
    // OVR.OpenVR.IVRChaperone/_GetBoundsColor GetBoundsColor
    // Size: 0x8
    // Offset: 0x28
    OVR::OpenVR::IVRChaperone::_GetBoundsColor* GetBoundsColor;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRChaperone::_GetBoundsColor*) == 0x8);
    // OVR.OpenVR.IVRChaperone/_AreBoundsVisible AreBoundsVisible
    // Size: 0x8
    // Offset: 0x30
    OVR::OpenVR::IVRChaperone::_AreBoundsVisible* AreBoundsVisible;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRChaperone::_AreBoundsVisible*) == 0x8);
    // OVR.OpenVR.IVRChaperone/_ForceBoundsVisible ForceBoundsVisible
    // Size: 0x8
    // Offset: 0x38
    OVR::OpenVR::IVRChaperone::_ForceBoundsVisible* ForceBoundsVisible;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRChaperone::_ForceBoundsVisible*) == 0x8);
    // Creating value type constructor for type: IVRChaperone
    constexpr IVRChaperone(OVR::OpenVR::IVRChaperone::_GetCalibrationState* GetCalibrationState_ = {}, OVR::OpenVR::IVRChaperone::_GetPlayAreaSize* GetPlayAreaSize_ = {}, OVR::OpenVR::IVRChaperone::_GetPlayAreaRect* GetPlayAreaRect_ = {}, OVR::OpenVR::IVRChaperone::_ReloadInfo* ReloadInfo_ = {}, OVR::OpenVR::IVRChaperone::_SetSceneColor* SetSceneColor_ = {}, OVR::OpenVR::IVRChaperone::_GetBoundsColor* GetBoundsColor_ = {}, OVR::OpenVR::IVRChaperone::_AreBoundsVisible* AreBoundsVisible_ = {}, OVR::OpenVR::IVRChaperone::_ForceBoundsVisible* ForceBoundsVisible_ = {}) noexcept : GetCalibrationState{GetCalibrationState_}, GetPlayAreaSize{GetPlayAreaSize_}, GetPlayAreaRect{GetPlayAreaRect_}, ReloadInfo{ReloadInfo_}, SetSceneColor{SetSceneColor_}, GetBoundsColor{GetBoundsColor_}, AreBoundsVisible{AreBoundsVisible_}, ForceBoundsVisible{ForceBoundsVisible_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // OVR.OpenVR.IVRChaperone
  static check_size<sizeof(IVRChaperone), 56 + sizeof(OVR::OpenVR::IVRChaperone::_ForceBoundsVisible*)> __OVR_OpenVR_IVRChaperoneSizeCheck;
  static_assert(sizeof(IVRChaperone) == 0x40);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperone, "OVR.OpenVR", "IVRChaperone");
