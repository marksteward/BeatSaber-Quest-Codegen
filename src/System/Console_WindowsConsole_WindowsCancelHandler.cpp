// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Console/WindowsConsole/WindowsCancelHandler
#include "System/Console_WindowsConsole_WindowsCancelHandler.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Console/WindowsConsole/WindowsCancelHandler..ctor
System::Console::WindowsConsole::WindowsCancelHandler* System::Console::WindowsConsole::WindowsCancelHandler::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<Console::WindowsConsole::WindowsCancelHandler*>(object, method));
}
// Autogenerated method: System.Console/WindowsConsole/WindowsCancelHandler.Invoke
bool System::Console::WindowsConsole::WindowsCancelHandler::Invoke(int keyCode) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", keyCode));
}
// Autogenerated method: System.Console/WindowsConsole/WindowsCancelHandler.BeginInvoke
System::IAsyncResult* System::Console::WindowsConsole::WindowsCancelHandler::BeginInvoke(int keyCode, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", keyCode, callback, object));
}
// Autogenerated method: System.Console/WindowsConsole/WindowsCancelHandler.EndInvoke
bool System::Console::WindowsConsole::WindowsCancelHandler::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", result));
}
