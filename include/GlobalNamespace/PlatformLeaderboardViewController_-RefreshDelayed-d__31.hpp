// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformLeaderboardViewController
#include "GlobalNamespace/PlatformLeaderboardViewController.hpp"
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
  // Autogenerated type: PlatformLeaderboardViewController/<RefreshDelayed>d__31
  // [CompilerGeneratedAttribute] Offset: D3266C
  class PlatformLeaderboardViewController::$RefreshDelayed$d__31 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public PlatformLeaderboardViewController <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PlatformLeaderboardViewController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformLeaderboardViewController*) == 0x8);
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
    // Creating value type constructor for type: $RefreshDelayed$d__31
    $RefreshDelayed$d__31(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::PlatformLeaderboardViewController* $$4__this_ = {}, bool clear_ = {}, bool showLoadingIndicator_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, clear{clear_}, showLoadingIndicator{showLoadingIndicator_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xF1D93C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformLeaderboardViewController::$RefreshDelayed$d__31* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlatformLeaderboardViewController::$RefreshDelayed$d__31::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformLeaderboardViewController::$RefreshDelayed$d__31*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xF1D9E0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xF1D9E4
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xF1DCA4
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xF1DCAC
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xF1DD0C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // PlatformLeaderboardViewController/<RefreshDelayed>d__31
  #pragma pack(pop)
  static check_size<sizeof(PlatformLeaderboardViewController::$RefreshDelayed$d__31), 41 + sizeof(bool)> __GlobalNamespace_PlatformLeaderboardViewController_$RefreshDelayed$d__31SizeCheck;
  static_assert(sizeof(PlatformLeaderboardViewController::$RefreshDelayed$d__31) == 0x2A);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardViewController::$RefreshDelayed$d__31*, "", "PlatformLeaderboardViewController/<RefreshDelayed>d__31");
