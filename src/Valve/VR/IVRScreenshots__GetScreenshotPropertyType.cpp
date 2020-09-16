// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRScreenshots/_GetScreenshotPropertyType
#include "Valve/VR/IVRScreenshots__GetScreenshotPropertyType.hpp"
// Including type: Valve.VR.EVRScreenshotType
#include "Valve/VR/EVRScreenshotType.hpp"
// Including type: Valve.VR.EVRScreenshotError
#include "Valve/VR/EVRScreenshotError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRScreenshots/_GetScreenshotPropertyType..ctor
Valve::VR::IVRScreenshots::_GetScreenshotPropertyType* Valve::VR::IVRScreenshots::_GetScreenshotPropertyType::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRScreenshots::_GetScreenshotPropertyType*>(object, method));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_GetScreenshotPropertyType.Invoke
Valve::VR::EVRScreenshotType Valve::VR::IVRScreenshots::_GetScreenshotPropertyType::Invoke(uint screenshotHandle, Valve::VR::EVRScreenshotError& pError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRScreenshotType>(this, "Invoke", screenshotHandle, pError));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_GetScreenshotPropertyType.BeginInvoke
System::IAsyncResult* Valve::VR::IVRScreenshots::_GetScreenshotPropertyType::BeginInvoke(uint screenshotHandle, Valve::VR::EVRScreenshotError& pError, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", screenshotHandle, pError, callback, object));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_GetScreenshotPropertyType.EndInvoke
Valve::VR::EVRScreenshotType Valve::VR::IVRScreenshots::_GetScreenshotPropertyType::EndInvoke(Valve::VR::EVRScreenshotError& pError, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRScreenshotType>(this, "EndInvoke", pError, result));
}
