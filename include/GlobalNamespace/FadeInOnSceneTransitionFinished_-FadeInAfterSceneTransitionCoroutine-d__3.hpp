// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: FadeInOnSceneTransitionFinished
#include "GlobalNamespace/FadeInOnSceneTransitionFinished.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: FadeInOnSceneTransitionFinished/<FadeInAfterSceneTransitionCoroutine>d__3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public FadeInOnSceneTransitionFinished <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::FadeInOnSceneTransitionFinished* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FadeInOnSceneTransitionFinished*) == 0x8);
    // Creating value type constructor for type: $FadeInAfterSceneTransitionCoroutine$d__3
    $FadeInAfterSceneTransitionCoroutine$d__3(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::FadeInOnSceneTransitionFinished* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field: private System.Int32 <>1__state
    int _get_$$1__state();
    // Set instance field: private System.Int32 <>1__state
    void _set_$$1__state(int value);
    // Get instance field: private System.Object <>2__current
    ::Il2CppObject* _get_$$2__current();
    // Set instance field: private System.Object <>2__current
    void _set_$$2__current(::Il2CppObject* value);
    // Get instance field: public FadeInOnSceneTransitionFinished <>4__this
    GlobalNamespace::FadeInOnSceneTransitionFinished* _get_$$4__this();
    // Set instance field: public FadeInOnSceneTransitionFinished <>4__this
    void _set_$$4__this(GlobalNamespace::FadeInOnSceneTransitionFinished* value);
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1DC471C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1DC4784
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1DC4648
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1DC467C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1DC4680
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1DC4724
    void System_Collections_IEnumerator_Reset();
  }; // FadeInOnSceneTransitionFinished/<FadeInAfterSceneTransitionCoroutine>d__3
  #pragma pack(pop)
  static check_size<sizeof(FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3), 32 + sizeof(GlobalNamespace::FadeInOnSceneTransitionFinished*)> __GlobalNamespace_FadeInOnSceneTransitionFinished_$FadeInAfterSceneTransitionCoroutine$d__3SizeCheck;
  static_assert(sizeof(FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3*, "", "FadeInOnSceneTransitionFinished/<FadeInAfterSceneTransitionCoroutine>d__3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3::*)()>(&GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3::*)()>(&GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3::*)()>(&GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3::*)()>(&GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3::*)()>(&GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
