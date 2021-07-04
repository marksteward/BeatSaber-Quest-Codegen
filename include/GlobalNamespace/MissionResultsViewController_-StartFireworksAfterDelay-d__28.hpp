// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionResultsViewController
#include "GlobalNamespace/MissionResultsViewController.hpp"
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
  // Autogenerated type: MissionResultsViewController/<StartFireworksAfterDelay>d__28
  // [CompilerGeneratedAttribute] Offset: E128A8
  class MissionResultsViewController::$StartFireworksAfterDelay$d__28 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public System.Single delay
    // Size: 0x4
    // Offset: 0x20
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: delay and: $$4__this
    char __padding2[0x4] = {};
    // public MissionResultsViewController <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MissionResultsViewController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionResultsViewController*) == 0x8);
    // Creating value type constructor for type: $StartFireworksAfterDelay$d__28
    $StartFireworksAfterDelay$d__28(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, float delay_ = {}, GlobalNamespace::MissionResultsViewController* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, delay{delay_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x109BE34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionResultsViewController::$StartFireworksAfterDelay$d__28* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionResultsViewController::$StartFireworksAfterDelay$d__28*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x109C328
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x109C32C
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x109C3EC
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x109C3F4
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x109C454
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // MissionResultsViewController/<StartFireworksAfterDelay>d__28
  #pragma pack(pop)
  static check_size<sizeof(MissionResultsViewController::$StartFireworksAfterDelay$d__28), 40 + sizeof(GlobalNamespace::MissionResultsViewController*)> __GlobalNamespace_MissionResultsViewController_$StartFireworksAfterDelay$d__28SizeCheck;
  static_assert(sizeof(MissionResultsViewController::$StartFireworksAfterDelay$d__28) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28*, "", "MissionResultsViewController/<StartFireworksAfterDelay>d__28");
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28::*)()>(&GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28::System_IDisposable_Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28::*)()>(&GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28::*)()>(&GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28::*)()>(&GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28::System_Collections_IEnumerator_Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28::*)()>(&GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28::System_Collections_IEnumerator_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
