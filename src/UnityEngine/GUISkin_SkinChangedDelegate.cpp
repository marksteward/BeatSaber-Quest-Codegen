// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.GUISkin/SkinChangedDelegate
#include "UnityEngine/GUISkin_SkinChangedDelegate.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.GUISkin/SkinChangedDelegate..ctor
UnityEngine::GUISkin::SkinChangedDelegate* UnityEngine::GUISkin::SkinChangedDelegate::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<GUISkin::SkinChangedDelegate*>(object, method));
}
// Autogenerated method: UnityEngine.GUISkin/SkinChangedDelegate.Invoke
void UnityEngine::GUISkin::SkinChangedDelegate::Invoke() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke"));
}
// Autogenerated method: UnityEngine.GUISkin/SkinChangedDelegate.BeginInvoke
System::IAsyncResult* UnityEngine::GUISkin::SkinChangedDelegate::BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: UnityEngine.GUISkin/SkinChangedDelegate.EndInvoke
void UnityEngine::GUISkin::SkinChangedDelegate::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
