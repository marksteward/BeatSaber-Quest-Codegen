// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionMapAnimationController
#include "GlobalNamespace/MissionMapAnimationController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MissionMapAnimationController/<UpdateClearedNodeStateCoroutine>d__13
  // [CompilerGeneratedAttribute] Offset: E12608
  class MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public MissionNode lastClearedMissionNode
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MissionNode* lastClearedMissionNode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNode*) == 0x8);
    // public MissionMapAnimationController <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MissionMapAnimationController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionMapAnimationController*) == 0x8);
    // Creating value type constructor for type: $UpdateClearedNodeStateCoroutine$d__13
    $UpdateClearedNodeStateCoroutine$d__13(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::MissionNode* lastClearedMissionNode_ = {}, GlobalNamespace::MissionMapAnimationController* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, lastClearedMissionNode{lastClearedMissionNode_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1096F5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1097230
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1097234
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1097348
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1097350
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x10973B0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // MissionMapAnimationController/<UpdateClearedNodeStateCoroutine>d__13
  #pragma pack(pop)
  static check_size<sizeof(MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13), 40 + sizeof(GlobalNamespace::MissionMapAnimationController*)> __GlobalNamespace_MissionMapAnimationController_$UpdateClearedNodeStateCoroutine$d__13SizeCheck;
  static_assert(sizeof(MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13*, "", "MissionMapAnimationController/<UpdateClearedNodeStateCoroutine>d__13");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13::*)()>(&GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13::*)()>(&GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13::*)()>(&GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13::*)()>(&GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13::*)()>(&GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
