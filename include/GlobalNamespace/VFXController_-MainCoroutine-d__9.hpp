// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VFXController
#include "GlobalNamespace/VFXController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VFXController/<MainCoroutine>d__9
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class VFXController::$MainCoroutine$d__9 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public VFXController <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::VFXController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VFXController*) == 0x8);
    // public System.Boolean deactivateAfterDuration
    // Size: 0x1
    // Offset: 0x28
    bool deactivateAfterDuration;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: deactivateAfterDuration and: duration
    char __padding3[0x3] = {};
    // public System.Single duration
    // Size: 0x4
    // Offset: 0x2C
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $MainCoroutine$d__9
    $MainCoroutine$d__9(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::VFXController* $$4__this_ = {}, bool deactivateAfterDuration_ = {}, float duration_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, deactivateAfterDuration{deactivateAfterDuration_}, duration{duration_} {}
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
    // Get instance field: public VFXController <>4__this
    GlobalNamespace::VFXController* _get_$$4__this();
    // Set instance field: public VFXController <>4__this
    void _set_$$4__this(GlobalNamespace::VFXController* value);
    // Get instance field: public System.Boolean deactivateAfterDuration
    bool _get_deactivateAfterDuration();
    // Set instance field: public System.Boolean deactivateAfterDuration
    void _set_deactivateAfterDuration(bool value);
    // Get instance field: public System.Single duration
    float _get_duration();
    // Set instance field: public System.Single duration
    void _set_duration(float value);
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x235D28C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x235D2F4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x235D0C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VFXController::$MainCoroutine$d__9* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VFXController::$MainCoroutine$d__9::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VFXController::$MainCoroutine$d__9*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x235D0F4
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x235D0F8
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x235D294
    void System_Collections_IEnumerator_Reset();
  }; // VFXController/<MainCoroutine>d__9
  #pragma pack(pop)
  static check_size<sizeof(VFXController::$MainCoroutine$d__9), 44 + sizeof(float)> __GlobalNamespace_VFXController_$MainCoroutine$d__9SizeCheck;
  static_assert(sizeof(VFXController::$MainCoroutine$d__9) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VFXController::$MainCoroutine$d__9*, "", "VFXController/<MainCoroutine>d__9");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VFXController::$MainCoroutine$d__9::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::VFXController::$MainCoroutine$d__9::*)()>(&GlobalNamespace::VFXController::$MainCoroutine$d__9::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXController::$MainCoroutine$d__9*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXController::$MainCoroutine$d__9::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::VFXController::$MainCoroutine$d__9::*)()>(&GlobalNamespace::VFXController::$MainCoroutine$d__9::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXController::$MainCoroutine$d__9*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXController::$MainCoroutine$d__9::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VFXController::$MainCoroutine$d__9::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VFXController::$MainCoroutine$d__9::*)()>(&GlobalNamespace::VFXController::$MainCoroutine$d__9::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXController::$MainCoroutine$d__9*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXController::$MainCoroutine$d__9::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::VFXController::$MainCoroutine$d__9::*)()>(&GlobalNamespace::VFXController::$MainCoroutine$d__9::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXController::$MainCoroutine$d__9*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXController::$MainCoroutine$d__9::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VFXController::$MainCoroutine$d__9::*)()>(&GlobalNamespace::VFXController::$MainCoroutine$d__9::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXController::$MainCoroutine$d__9*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
