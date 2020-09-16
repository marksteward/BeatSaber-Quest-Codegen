// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor/_FadeToColor
#include "Valve/VR/IVRCompositor__FadeToColor.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRCompositor/_FadeToColor..ctor
Valve::VR::IVRCompositor::_FadeToColor* Valve::VR::IVRCompositor::_FadeToColor::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRCompositor::_FadeToColor*>(object, method));
}
// Autogenerated method: Valve.VR.IVRCompositor/_FadeToColor.Invoke
void Valve::VR::IVRCompositor::_FadeToColor::Invoke(float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground));
}
// Autogenerated method: Valve.VR.IVRCompositor/_FadeToColor.BeginInvoke
System::IAsyncResult* Valve::VR::IVRCompositor::_FadeToColor::BeginInvoke(float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground, callback, object));
}
// Autogenerated method: Valve.VR.IVRCompositor/_FadeToColor.EndInvoke
void Valve::VR::IVRCompositor::_FadeToColor::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
