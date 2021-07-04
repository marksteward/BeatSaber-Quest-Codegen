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
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.TypeFilter
  // [ComVisibleAttribute] Offset: D7C080
  class TypeFilter : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: TypeFilter
    TypeFilter() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1413B84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeFilter* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::TypeFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeFilter*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Type m, System.Object filterCriteria)
    // Offset: 0x1413B94
    bool Invoke(System::Type* m, ::Il2CppObject* filterCriteria);
    // public System.IAsyncResult BeginInvoke(System.Type m, System.Object filterCriteria, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1413F88
    System::IAsyncResult* BeginInvoke(System::Type* m, ::Il2CppObject* filterCriteria, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x1413FB8
    bool EndInvoke(System::IAsyncResult* result);
  }; // System.Reflection.TypeFilter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::TypeFilter*, "System.Reflection", "TypeFilter");
// Writing MetadataGetter for method: System::Reflection::TypeFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::TypeFilter::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::TypeFilter::*)(System::Type*, ::Il2CppObject*)>(&System::Reflection::TypeFilter::Invoke)> {
  const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* filterCriteria = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::TypeFilter*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, filterCriteria});
  }
};
// Writing MetadataGetter for method: System::Reflection::TypeFilter::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Reflection::TypeFilter::*)(System::Type*, ::Il2CppObject*, System::AsyncCallback*, ::Il2CppObject*)>(&System::Reflection::TypeFilter::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* filterCriteria = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::TypeFilter*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, filterCriteria, callback, object});
  }
};
// Writing MetadataGetter for method: System::Reflection::TypeFilter::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::TypeFilter::*)(System::IAsyncResult*)>(&System::Reflection::TypeFilter::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::TypeFilter*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
