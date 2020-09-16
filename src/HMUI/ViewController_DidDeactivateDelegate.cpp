// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController/DidDeactivateDelegate
#include "HMUI/ViewController_DidDeactivateDelegate.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: HMUI.ViewController/DeactivationType
#include "HMUI/ViewController_DeactivationType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: HMUI.ViewController/DidDeactivateDelegate..ctor
HMUI::ViewController::DidDeactivateDelegate* HMUI::ViewController::DidDeactivateDelegate::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<ViewController::DidDeactivateDelegate*>(object, method));
}
// Autogenerated method: HMUI.ViewController/DidDeactivateDelegate.Invoke
void HMUI::ViewController::DidDeactivateDelegate::Invoke(HMUI::ViewController::DeactivationType deactivationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", deactivationType));
}
// Autogenerated method: HMUI.ViewController/DidDeactivateDelegate.BeginInvoke
System::IAsyncResult* HMUI::ViewController::DidDeactivateDelegate::BeginInvoke(HMUI::ViewController::DeactivationType deactivationType, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", deactivationType, callback, object));
}
// Autogenerated method: HMUI.ViewController/DidDeactivateDelegate.EndInvoke
void HMUI::ViewController::DidDeactivateDelegate::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
