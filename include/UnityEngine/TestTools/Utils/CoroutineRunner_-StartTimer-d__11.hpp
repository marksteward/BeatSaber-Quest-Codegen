// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.Utils.CoroutineRunner
#include "UnityEngine/TestTools/Utils/CoroutineRunner.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Utils.CoroutineRunner/<StartTimer>d__11
  // [CompilerGeneratedAttribute] Offset: E3DA48
  class CoroutineRunner::$StartTimer$d__11 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public System.Int32 timeout
    // Size: 0x4
    // Offset: 0x20
    int timeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: timeout and: coroutineToBeKilled
    char __padding2[0x4] = {};
    // public System.Collections.IEnumerator coroutineToBeKilled
    // Size: 0x8
    // Offset: 0x28
    System::Collections::IEnumerator* coroutineToBeKilled;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // public UnityEngine.TestTools.Utils.CoroutineRunner <>4__this
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::TestTools::Utils::CoroutineRunner* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::Utils::CoroutineRunner*) == 0x8);
    // public System.Action onTimeout
    // Size: 0x8
    // Offset: 0x38
    System::Action* onTimeout;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: $StartTimer$d__11
    $StartTimer$d__11(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, int timeout_ = {}, System::Collections::IEnumerator* coroutineToBeKilled_ = {}, UnityEngine::TestTools::Utils::CoroutineRunner* $$4__this_ = {}, System::Action* onTimeout_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, timeout{timeout_}, coroutineToBeKilled{coroutineToBeKilled_}, $$4__this{$$4__this_}, onTimeout{onTimeout_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x23DE9F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CoroutineRunner::$StartTimer$d__11* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CoroutineRunner::$StartTimer$d__11*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x23DED60
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x23DED64
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x23DEEA4
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x23DEEAC
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x23DEF0C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // UnityEngine.TestTools.Utils.CoroutineRunner/<StartTimer>d__11
  #pragma pack(pop)
  static check_size<sizeof(CoroutineRunner::$StartTimer$d__11), 56 + sizeof(System::Action*)> __UnityEngine_TestTools_Utils_CoroutineRunner_$StartTimer$d__11SizeCheck;
  static_assert(sizeof(CoroutineRunner::$StartTimer$d__11) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11*, "UnityEngine.TestTools.Utils", "CoroutineRunner/<StartTimer>d__11");
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11::*)()>(&UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11::System_IDisposable_Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11::*)()>(&UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11::*)()>(&UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11::*)()>(&UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11::System_Collections_IEnumerator_Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11::*)()>(&UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11::System_Collections_IEnumerator_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::CoroutineRunner::$StartTimer$d__11*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
