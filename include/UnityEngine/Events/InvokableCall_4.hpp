// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.BaseInvokableCall
#include "UnityEngine/Events/BaseInvokableCall.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`4<T0, T1, T2, T3>
  template<typename T0, typename T1, typename T2, typename T3>
  class UnityAction_4;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Events.InvokableCall`4
  template<typename T1, typename T2, typename T3, typename T4>
  class InvokableCall_4 : public UnityEngine::Events::BaseInvokableCall {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xCBEA98
    // [DebuggerBrowsableAttribute] Offset: 0xCBEA98
    // private UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> Delegate
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>* Delegate;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>*) == 0x8);
    // Creating value type constructor for type: InvokableCall_4
    InvokableCall_4(UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>* Delegate_ = {}) noexcept : Delegate{Delegate_} {}
    // Creating conversion operator: operator UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>*
    constexpr operator UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>*() const noexcept {
      return Delegate;
    }
    // public System.Void .ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::.ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvokableCall_4<T1, T2, T3, T4>* New_ctor(::Il2CppObject* target, System::Reflection::MethodInfo* theFunction) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::InvokableCall_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvokableCall_4<T1, T2, T3, T4>*, creationType>(target, theFunction)));
    }
    // public override System.Void Invoke(System.Object[] args)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::Invoke(System.Object[] args)
    void Invoke(::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::InvokableCall_4::Invoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(args)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, args);
    }
    // public override System.Boolean Find(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Boolean BaseInvokableCall::Find(System.Object targetObj, System.Reflection.MethodInfo method)
    bool Find(::Il2CppObject* targetObj, System::Reflection::MethodInfo* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::InvokableCall_4::Find");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Find", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(targetObj), ::il2cpp_utils::ExtractType(method)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, targetObj, method);
    }
  }; // UnityEngine.Events.InvokableCall`4
  // Could not write size check! Type: UnityEngine.Events.InvokableCall`4 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::InvokableCall_4, "UnityEngine.Events", "InvokableCall`4");
