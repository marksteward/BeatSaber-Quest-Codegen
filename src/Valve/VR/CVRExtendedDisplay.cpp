// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Valve.VR.CVRExtendedDisplay
#include "Valve/VR/CVRExtendedDisplay.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.EVREye
#include "Valve/VR/EVREye.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.CVRExtendedDisplay..ctor
Valve::VR::CVRExtendedDisplay* Valve::VR::CVRExtendedDisplay::New_ctor(System::IntPtr pInterface) {
  return THROW_UNLESS(il2cpp_utils::New<CVRExtendedDisplay*>(pInterface));
}
// Autogenerated method: Valve.VR.CVRExtendedDisplay.GetWindowBounds
void Valve::VR::CVRExtendedDisplay::GetWindowBounds(int& pnX, int& pnY, uint& pnWidth, uint& pnHeight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetWindowBounds", pnX, pnY, pnWidth, pnHeight));
}
// Autogenerated method: Valve.VR.CVRExtendedDisplay.GetEyeOutputViewport
void Valve::VR::CVRExtendedDisplay::GetEyeOutputViewport(Valve::VR::EVREye eEye, uint& pnX, uint& pnY, uint& pnWidth, uint& pnHeight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetEyeOutputViewport", eEye, pnX, pnY, pnWidth, pnHeight));
}
// Autogenerated method: Valve.VR.CVRExtendedDisplay.GetDXGIOutputInfo
void Valve::VR::CVRExtendedDisplay::GetDXGIOutputInfo(int& pnAdapterIndex, int& pnAdapterOutputIndex) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetDXGIOutputInfo", pnAdapterIndex, pnAdapterOutputIndex));
}
