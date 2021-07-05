// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Console/WindowsConsole
#include "System/Console_WindowsConsole.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Console/WindowsConsole/WindowsCancelHandler
  class Console::WindowsConsole::WindowsCancelHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: WindowsCancelHandler
    WindowsCancelHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x197A6FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Console::WindowsConsole::WindowsCancelHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Console::WindowsConsole::WindowsCancelHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Console::WindowsConsole::WindowsCancelHandler*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Int32 keyCode)
    // Offset: 0x197A70C
    bool Invoke(int keyCode);
    // public System.IAsyncResult BeginInvoke(System.Int32 keyCode, System.AsyncCallback callback, System.Object object)
    // Offset: 0x197A978
    System::IAsyncResult* BeginInvoke(int keyCode, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x197AA04
    bool EndInvoke(System::IAsyncResult* result);
  }; // System.Console/WindowsConsole/WindowsCancelHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Console::WindowsConsole::WindowsCancelHandler*, "System", "Console/WindowsConsole/WindowsCancelHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Console::WindowsConsole::WindowsCancelHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Console::WindowsConsole::WindowsCancelHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Console::WindowsConsole::WindowsCancelHandler::*)(int)>(&System::Console::WindowsConsole::WindowsCancelHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* keyCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Console::WindowsConsole::WindowsCancelHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyCode});
  }
};
// Writing MetadataGetter for method: System::Console::WindowsConsole::WindowsCancelHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Console::WindowsConsole::WindowsCancelHandler::*)(int, System::AsyncCallback*, ::Il2CppObject*)>(&System::Console::WindowsConsole::WindowsCancelHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* keyCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Console::WindowsConsole::WindowsCancelHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyCode, callback, object});
  }
};
// Writing MetadataGetter for method: System::Console::WindowsConsole::WindowsCancelHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Console::WindowsConsole::WindowsCancelHandler::*)(System::IAsyncResult*)>(&System::Console::WindowsConsole::WindowsCancelHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Console::WindowsConsole::WindowsCancelHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
