// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.HoverHintController
#include "HMUI/HoverHintController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.HoverHintController/<HideHintAfterDelay>d__11
  // [CompilerGeneratedAttribute] Offset: DF7CA0
  class HoverHintController::$HideHintAfterDelay$d__11 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public HMUI.HoverHintController <>4__this
    // Size: 0x8
    // Offset: 0x20
    HMUI::HoverHintController* $$4__this;
    // Field size check
    static_assert(sizeof(HMUI::HoverHintController*) == 0x8);
    // public System.Single delay
    // Size: 0x4
    // Offset: 0x28
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $HideHintAfterDelay$d__11
    $HideHintAfterDelay$d__11(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, HMUI::HoverHintController* $$4__this_ = {}, float delay_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, delay{delay_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1318760
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HoverHintController::$HideHintAfterDelay$d__11* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::HoverHintController::$HideHintAfterDelay$d__11::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HoverHintController::$HideHintAfterDelay$d__11*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1318B80
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1318B84
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1318C5C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1318C64
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1318CC4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // HMUI.HoverHintController/<HideHintAfterDelay>d__11
  #pragma pack(pop)
  static check_size<sizeof(HoverHintController::$HideHintAfterDelay$d__11), 40 + sizeof(float)> __HMUI_HoverHintController_$HideHintAfterDelay$d__11SizeCheck;
  static_assert(sizeof(HoverHintController::$HideHintAfterDelay$d__11) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::HoverHintController::$HideHintAfterDelay$d__11*, "HMUI", "HoverHintController/<HideHintAfterDelay>d__11");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::HoverHintController::$HideHintAfterDelay$d__11::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::HoverHintController::$HideHintAfterDelay$d__11::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverHintController::$HideHintAfterDelay$d__11::*)()>(&HMUI::HoverHintController::$HideHintAfterDelay$d__11::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintController::$HideHintAfterDelay$d__11*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintController::$HideHintAfterDelay$d__11::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::HoverHintController::$HideHintAfterDelay$d__11::*)()>(&HMUI::HoverHintController::$HideHintAfterDelay$d__11::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintController::$HideHintAfterDelay$d__11*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintController::$HideHintAfterDelay$d__11::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::HoverHintController::$HideHintAfterDelay$d__11::*)()>(&HMUI::HoverHintController::$HideHintAfterDelay$d__11::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintController::$HideHintAfterDelay$d__11*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintController::$HideHintAfterDelay$d__11::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverHintController::$HideHintAfterDelay$d__11::*)()>(&HMUI::HoverHintController::$HideHintAfterDelay$d__11::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintController::$HideHintAfterDelay$d__11*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintController::$HideHintAfterDelay$d__11::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::HoverHintController::$HideHintAfterDelay$d__11::*)()>(&HMUI::HoverHintController::$HideHintAfterDelay$d__11::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintController::$HideHintAfterDelay$d__11*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
