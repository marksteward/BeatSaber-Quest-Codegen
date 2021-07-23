// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRTextEntryController
#include "GlobalNamespace/VRTextEntryController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VRTextEntryController/<BlinkCursor>d__23
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class VRTextEntryController::$BlinkCursor$d__23 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public VRTextEntryController <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::VRTextEntryController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRTextEntryController*) == 0x8);
    // private UnityEngine.Color <cursorColor>5__2
    // Size: 0x10
    // Offset: 0x28
    UnityEngine::Color $cursorColor$5__2;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: $BlinkCursor$d__23
    $BlinkCursor$d__23(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::VRTextEntryController* $$4__this_ = {}, UnityEngine::Color $cursorColor$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, $cursorColor$5__2{$cursorColor$5__2_} {}
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
    // Get instance field: public VRTextEntryController <>4__this
    GlobalNamespace::VRTextEntryController* _get_$$4__this();
    // Set instance field: public VRTextEntryController <>4__this
    void _set_$$4__this(GlobalNamespace::VRTextEntryController* value);
    // Get instance field: private UnityEngine.Color <cursorColor>5__2
    UnityEngine::Color _get_$cursorColor$5__2();
    // Set instance field: private UnityEngine.Color <cursorColor>5__2
    void _set_$cursorColor$5__2(UnityEngine::Color value);
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x127AEB8
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x127AF20
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x127AB3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRTextEntryController::$BlinkCursor$d__23* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRTextEntryController::$BlinkCursor$d__23*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x127AD50
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x127AD54
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x127AEC0
    void System_Collections_IEnumerator_Reset();
  }; // VRTextEntryController/<BlinkCursor>d__23
  #pragma pack(pop)
  static check_size<sizeof(VRTextEntryController::$BlinkCursor$d__23), 40 + sizeof(UnityEngine::Color)> __GlobalNamespace_VRTextEntryController_$BlinkCursor$d__23SizeCheck;
  static_assert(sizeof(VRTextEntryController::$BlinkCursor$d__23) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23*, "", "VRTextEntryController/<BlinkCursor>d__23");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::*)()>(&GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::*)()>(&GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::*)()>(&GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::*)()>(&GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::*)()>(&GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
