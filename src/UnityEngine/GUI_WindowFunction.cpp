// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.GUI/WindowFunction
#include "UnityEngine/GUI_WindowFunction.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.GUI/WindowFunction..ctor
UnityEngine::GUI::WindowFunction* UnityEngine::GUI::WindowFunction::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<GUI::WindowFunction*>(object, method));
}
// Autogenerated method: UnityEngine.GUI/WindowFunction.Invoke
void UnityEngine::GUI::WindowFunction::Invoke(int id) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", id));
}
// Autogenerated method: UnityEngine.GUI/WindowFunction.BeginInvoke
System::IAsyncResult* UnityEngine::GUI::WindowFunction::BeginInvoke(int id, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", id, callback, object));
}
// Autogenerated method: UnityEngine.GUI/WindowFunction.EndInvoke
void UnityEngine::GUI::WindowFunction::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
