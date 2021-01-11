// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRScreenFade
#include "GlobalNamespace/OVRScreenFade.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: OVRScreenFade/<Fade>d__20
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D83F24
  class OVRScreenFade::$Fade$d__20 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public OVRScreenFade <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::OVRScreenFade* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRScreenFade*) == 0x8);
    // public System.Single startAlpha
    // Size: 0x4
    // Offset: 0x28
    float startAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single endAlpha
    // Size: 0x4
    // Offset: 0x2C
    float endAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <elapsedTime>5__2
    // Size: 0x4
    // Offset: 0x30
    float $elapsedTime$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $Fade$d__20
    $Fade$d__20(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::OVRScreenFade* $$4__this_ = {}, float startAlpha_ = {}, float endAlpha_ = {}, float $elapsedTime$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, startAlpha{startAlpha_}, endAlpha{endAlpha_}, $elapsedTime$5__2{$elapsedTime$5__2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x12E6328
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRScreenFade::$Fade$d__20* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRScreenFade::$Fade$d__20::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRScreenFade::$Fade$d__20*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x12E63C8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x12E63CC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x12E6508
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x12E6510
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x12E6570
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // OVRScreenFade/<Fade>d__20
  static check_size<sizeof(OVRScreenFade::$Fade$d__20), 48 + sizeof(float)> __GlobalNamespace_OVRScreenFade_$Fade$d__20SizeCheck;
  static_assert(sizeof(OVRScreenFade::$Fade$d__20) == 0x34);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRScreenFade::$Fade$d__20*, "", "OVRScreenFade/<Fade>d__20");
