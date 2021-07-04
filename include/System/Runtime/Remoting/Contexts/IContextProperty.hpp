// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Contexts.IContextProperty
  // [ComVisibleAttribute] Offset: D7E288
  class IContextProperty {
    public:
    // Creating value type constructor for type: IContextProperty
    IContextProperty() noexcept {}
    // public System.String get_Name()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Name();
    // public System.Void Freeze(System.Runtime.Remoting.Contexts.Context newContext)
    // Offset: 0xFFFFFFFF
    void Freeze(System::Runtime::Remoting::Contexts::Context* newContext);
    // public System.Boolean IsNewContextOK(System.Runtime.Remoting.Contexts.Context newCtx)
    // Offset: 0xFFFFFFFF
    bool IsNewContextOK(System::Runtime::Remoting::Contexts::Context* newCtx);
  }; // System.Runtime.Remoting.Contexts.IContextProperty
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::IContextProperty*, "System.Runtime.Remoting.Contexts", "IContextProperty");
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::IContextProperty::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::Contexts::IContextProperty::*)()>(&System::Runtime::Remoting::Contexts::IContextProperty::get_Name)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::IContextProperty*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::IContextProperty::Freeze
// Il2CppName: Freeze
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Contexts::IContextProperty::*)(System::Runtime::Remoting::Contexts::Context*)>(&System::Runtime::Remoting::Contexts::IContextProperty::Freeze)> {
  const MethodInfo* get() {
    static auto* newContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Contexts", "Context")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::IContextProperty*), "Freeze", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newContext});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::IContextProperty::IsNewContextOK
// Il2CppName: IsNewContextOK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Contexts::IContextProperty::*)(System::Runtime::Remoting::Contexts::Context*)>(&System::Runtime::Remoting::Contexts::IContextProperty::IsNewContextOK)> {
  const MethodInfo* get() {
    static auto* newCtx = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Contexts", "Context")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::IContextProperty*), "IsNewContextOK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newCtx});
  }
};
