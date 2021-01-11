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
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D38B7C
  class TypeFilter : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: TypeFilter
    TypeFilter() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15CA9E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeFilter* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::TypeFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeFilter*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Type m, System.Object filterCriteria)
    // Offset: 0x15D1D44
    bool Invoke(System::Type* m, ::Il2CppObject* filterCriteria);
    // public System.IAsyncResult BeginInvoke(System.Type m, System.Object filterCriteria, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15D2154
    System::IAsyncResult* BeginInvoke(System::Type* m, ::Il2CppObject* filterCriteria, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x15D2184
    bool EndInvoke(System::IAsyncResult* result);
  }; // System.Reflection.TypeFilter
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::TypeFilter*, "System.Reflection", "TypeFilter");
