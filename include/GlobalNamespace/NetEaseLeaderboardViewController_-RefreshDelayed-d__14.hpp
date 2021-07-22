// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetEaseLeaderboardViewController
#include "GlobalNamespace/NetEaseLeaderboardViewController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2A
  #pragma pack(push, 1)
  // Autogenerated type: NetEaseLeaderboardViewController/<RefreshDelayed>d__14
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NetEaseLeaderboardViewController::$RefreshDelayed$d__14 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public NetEaseLeaderboardViewController <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NetEaseLeaderboardViewController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetEaseLeaderboardViewController*) == 0x8);
    // public System.Boolean clear
    // Size: 0x1
    // Offset: 0x28
    bool clear;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean showLoadingIndicator
    // Size: 0x1
    // Offset: 0x29
    bool showLoadingIndicator;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $RefreshDelayed$d__14
    $RefreshDelayed$d__14(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::NetEaseLeaderboardViewController* $$4__this_ = {}, bool clear_ = {}, bool showLoadingIndicator_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, clear{clear_}, showLoadingIndicator{showLoadingIndicator_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1010BEC
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1010C54
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x101044C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetEaseLeaderboardViewController::$RefreshDelayed$d__14* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetEaseLeaderboardViewController::$RefreshDelayed$d__14*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1010AF4
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1010AF8
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1010BF4
    void System_Collections_IEnumerator_Reset();
  }; // NetEaseLeaderboardViewController/<RefreshDelayed>d__14
  #pragma pack(pop)
  static check_size<sizeof(NetEaseLeaderboardViewController::$RefreshDelayed$d__14), 41 + sizeof(bool)> __GlobalNamespace_NetEaseLeaderboardViewController_$RefreshDelayed$d__14SizeCheck;
  static_assert(sizeof(NetEaseLeaderboardViewController::$RefreshDelayed$d__14) == 0x2A);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14*, "", "NetEaseLeaderboardViewController/<RefreshDelayed>d__14");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14::*)()>(&GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14::*)()>(&GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14::*)()>(&GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14::*)()>(&GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14::*)()>(&GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
