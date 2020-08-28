// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
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
  // Autogenerated type: OVR.OpenVR.IVRExtendedDisplay
  struct IVRExtendedDisplay : public System::ValueType {
    public:
    // Nested type: OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds
    class _GetWindowBounds;
    // Nested type: OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport
    class _GetEyeOutputViewport;
    // Nested type: OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo
    class _GetDXGIOutputInfo;
    // OVR.OpenVR.IVRExtendedDisplay/_GetWindowBounds GetWindowBounds
    // Offset: 0x0
    OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds* GetWindowBounds;
    // OVR.OpenVR.IVRExtendedDisplay/_GetEyeOutputViewport GetEyeOutputViewport
    // Offset: 0x8
    OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport* GetEyeOutputViewport;
    // OVR.OpenVR.IVRExtendedDisplay/_GetDXGIOutputInfo GetDXGIOutputInfo
    // Offset: 0x10
    OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo* GetDXGIOutputInfo;
    // Creating value type constructor for type: IVRExtendedDisplay
    constexpr IVRExtendedDisplay(OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds* GetWindowBounds_ = {}, OVR::OpenVR::IVRExtendedDisplay::_GetEyeOutputViewport* GetEyeOutputViewport_ = {}, OVR::OpenVR::IVRExtendedDisplay::_GetDXGIOutputInfo* GetDXGIOutputInfo_ = {}) : GetWindowBounds{GetWindowBounds_}, GetEyeOutputViewport{GetEyeOutputViewport_}, GetDXGIOutputInfo{GetDXGIOutputInfo_} {}
  }; // OVR.OpenVR.IVRExtendedDisplay
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRExtendedDisplay, "OVR.OpenVR", "IVRExtendedDisplay");
#pragma pack(pop)
