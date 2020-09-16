// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRScreenshots/_SubmitScreenshot
#include "Valve/VR/IVRScreenshots__SubmitScreenshot.hpp"
// Including type: Valve.VR.EVRScreenshotError
#include "Valve/VR/EVRScreenshotError.hpp"
// Including type: Valve.VR.EVRScreenshotType
#include "Valve/VR/EVRScreenshotType.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRScreenshots/_SubmitScreenshot..ctor
Valve::VR::IVRScreenshots::_SubmitScreenshot* Valve::VR::IVRScreenshots::_SubmitScreenshot::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRScreenshots::_SubmitScreenshot*>(object, method));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_SubmitScreenshot.Invoke
Valve::VR::EVRScreenshotError Valve::VR::IVRScreenshots::_SubmitScreenshot::Invoke(uint screenshotHandle, Valve::VR::EVRScreenshotType type, ::Il2CppString* pchSourcePreviewFilename, ::Il2CppString* pchSourceVRFilename) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRScreenshotError>(this, "Invoke", screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_SubmitScreenshot.BeginInvoke
System::IAsyncResult* Valve::VR::IVRScreenshots::_SubmitScreenshot::BeginInvoke(uint screenshotHandle, Valve::VR::EVRScreenshotType type, ::Il2CppString* pchSourcePreviewFilename, ::Il2CppString* pchSourceVRFilename, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename, callback, object));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_SubmitScreenshot.EndInvoke
Valve::VR::EVRScreenshotError Valve::VR::IVRScreenshots::_SubmitScreenshot::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRScreenshotError>(this, "EndInvoke", result));
}
