// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: AssemblyLoadEventArgs
  class AssemblyLoadEventArgs;
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
  // Autogenerated type: System.AssemblyLoadEventHandler
  // [ComVisibleAttribute] Offset: D7B1F8
  class AssemblyLoadEventHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: AssemblyLoadEventHandler
    AssemblyLoadEventHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1779738
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyLoadEventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::AssemblyLoadEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyLoadEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.AssemblyLoadEventArgs args)
    // Offset: 0x1771618
    void Invoke(::Il2CppObject* sender, System::AssemblyLoadEventArgs* args);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.AssemblyLoadEventArgs args, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1779748
    System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, System::AssemblyLoadEventArgs* args, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1779778
    void EndInvoke(System::IAsyncResult* result);
  }; // System.AssemblyLoadEventHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::AssemblyLoadEventHandler*, "System", "AssemblyLoadEventHandler");
// Writing MetadataGetter for method: System::AssemblyLoadEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::AssemblyLoadEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AssemblyLoadEventHandler::*)(::Il2CppObject*, System::AssemblyLoadEventArgs*)>(&System::AssemblyLoadEventHandler::Invoke)> {
  const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* args = &::il2cpp_utils::GetClassFromName("System", "AssemblyLoadEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::AssemblyLoadEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, args});
  }
};
// Writing MetadataGetter for method: System::AssemblyLoadEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::AssemblyLoadEventHandler::*)(::Il2CppObject*, System::AssemblyLoadEventArgs*, System::AsyncCallback*, ::Il2CppObject*)>(&System::AssemblyLoadEventHandler::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* args = &::il2cpp_utils::GetClassFromName("System", "AssemblyLoadEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::AssemblyLoadEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, args, callback, object});
  }
};
// Writing MetadataGetter for method: System::AssemblyLoadEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AssemblyLoadEventHandler::*)(System::IAsyncResult*)>(&System::AssemblyLoadEventHandler::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::AssemblyLoadEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
