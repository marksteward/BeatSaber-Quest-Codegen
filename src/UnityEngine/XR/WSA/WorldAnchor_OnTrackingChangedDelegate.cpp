// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate
#include "UnityEngine/XR/WSA/WorldAnchor_OnTrackingChangedDelegate.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate..ctor
UnityEngine::XR::WSA::WorldAnchor::OnTrackingChangedDelegate* UnityEngine::XR::WSA::WorldAnchor::OnTrackingChangedDelegate::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<WorldAnchor::OnTrackingChangedDelegate*>(object, method));
}
// Autogenerated method: UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate.Invoke
void UnityEngine::XR::WSA::WorldAnchor::OnTrackingChangedDelegate::Invoke(UnityEngine::XR::WSA::WorldAnchor* worldAnchor, bool located) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", worldAnchor, located));
}
// Autogenerated method: UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate.BeginInvoke
System::IAsyncResult* UnityEngine::XR::WSA::WorldAnchor::OnTrackingChangedDelegate::BeginInvoke(UnityEngine::XR::WSA::WorldAnchor* worldAnchor, bool located, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", worldAnchor, located, callback, object));
}
// Autogenerated method: UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate.EndInvoke
void UnityEngine::XR::WSA::WorldAnchor::OnTrackingChangedDelegate::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
