// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender
#include "UnityEngine/TestTools/TestRunner/Callbacks/RemoteTestResultSender.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/UnityEngine.TestTools.TestRunner.Callbacks.<SendDataRoutine>d__12
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class RemoteTestResultSender::$SendDataRoutine$d__12 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender <>4__this
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender*) == 0x8);
    // private System.Object <>7__wrap1
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* $$7__wrap1;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean <>7__wrap2
    // Size: 0x1
    // Offset: 0x30
    bool $$7__wrap2;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $SendDataRoutine$d__12
    $SendDataRoutine$d__12(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender* $$4__this_ = {}, ::Il2CppObject* $$7__wrap1_ = {}, bool $$7__wrap2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, $$7__wrap1{$$7__wrap1_}, $$7__wrap2{$$7__wrap2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x148EE4C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x148EEB4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x148E908
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteTestResultSender::$SendDataRoutine$d__12* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteTestResultSender::$SendDataRoutine$d__12*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x148EB20
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x148EB84
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x148EB64
    void $$m__Finally1();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x148EE54
    void System_Collections_IEnumerator_Reset();
  }; // UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/UnityEngine.TestTools.TestRunner.Callbacks.<SendDataRoutine>d__12
  #pragma pack(pop)
  static check_size<sizeof(RemoteTestResultSender::$SendDataRoutine$d__12), 48 + sizeof(bool)> __UnityEngine_TestTools_TestRunner_Callbacks_RemoteTestResultSender_$SendDataRoutine$d__12SizeCheck;
  static_assert(sizeof(RemoteTestResultSender::$SendDataRoutine$d__12) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12*, "UnityEngine.TestTools.TestRunner.Callbacks", "RemoteTestResultSender/<SendDataRoutine>d__12");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
