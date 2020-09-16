// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor/_GetFrameTiming
#include "Valve/VR/IVRCompositor__GetFrameTiming.hpp"
// Including type: Valve.VR.Compositor_FrameTiming
#include "Valve/VR/Compositor_FrameTiming.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRCompositor/_GetFrameTiming..ctor
Valve::VR::IVRCompositor::_GetFrameTiming* Valve::VR::IVRCompositor::_GetFrameTiming::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<IVRCompositor::_GetFrameTiming*>(object, method));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetFrameTiming.Invoke
bool Valve::VR::IVRCompositor::_GetFrameTiming::Invoke(Valve::VR::Compositor_FrameTiming& pTiming, uint unFramesAgo) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", pTiming, unFramesAgo));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetFrameTiming.BeginInvoke
System::IAsyncResult* Valve::VR::IVRCompositor::_GetFrameTiming::BeginInvoke(Valve::VR::Compositor_FrameTiming& pTiming, uint unFramesAgo, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pTiming, unFramesAgo, callback, object));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetFrameTiming.EndInvoke
bool Valve::VR::IVRCompositor::_GetFrameTiming::EndInvoke(Valve::VR::Compositor_FrameTiming& pTiming, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", pTiming, result));
}
