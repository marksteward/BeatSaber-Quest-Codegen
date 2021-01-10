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
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Func`1
  // [] Offset: FFFFFFFF
  // [TypeForwardedFromAttribute] Offset: D36B50
  template<typename TResult>
  class Func_1 : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: Func_1
    Func_1() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Func_1<TResult>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Func_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Func_1<TResult>*, creationType>(object, method)));
    }
    // public TResult Invoke()
    // Offset: 0xFFFFFFFF
    TResult Invoke() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Func_1::Invoke");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<TResult, false>(this, ___internal__method);
    }
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Func_1::BeginInvoke");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(callback, object)));
      return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, callback, object);
    }
    // public TResult EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    TResult EndInvoke(System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Func_1::EndInvoke");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(result)));
      return ::il2cpp_utils::RunMethodThrow<TResult, false>(this, ___internal__method, result);
    }
  }; // System.Func`1
  // Could not write size check! Type: System.Func`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Func_1, "System", "Func`1");
