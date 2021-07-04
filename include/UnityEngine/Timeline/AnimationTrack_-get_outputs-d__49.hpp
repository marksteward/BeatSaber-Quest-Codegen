// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.AnimationTrack
#include "UnityEngine/Timeline/AnimationTrack.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.Playables.PlayableBinding
#include "UnityEngine/Playables/PlayableBinding.hpp"
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
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49
  // [CompilerGeneratedAttribute] Offset: DD78F8
  class AnimationTrack::$get_outputs$d__49 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>, public System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private UnityEngine.Playables.PlayableBinding <>2__current
    // Size: 0x20
    // Offset: 0x18
    UnityEngine::Playables::PlayableBinding $$2__current;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableBinding) == 0x20);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x38
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public UnityEngine.Timeline.AnimationTrack <>4__this
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Timeline::AnimationTrack* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::AnimationTrack*) == 0x8);
    // Creating value type constructor for type: $get_outputs$d__49
    $get_outputs$d__49(int $$1__state_ = {}, UnityEngine::Playables::PlayableBinding $$2__current_ = {}, int $$l__initialThreadId_ = {}, UnityEngine::Timeline::AnimationTrack* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>
    operator System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>
    operator System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x17D7D58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationTrack::$get_outputs$d__49* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::AnimationTrack::$get_outputs$d__49::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationTrack::$get_outputs$d__49*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x17DB2BC
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x17DB2C0
    bool MoveNext();
    // private UnityEngine.Playables.PlayableBinding System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current()
    // Offset: 0x17DB350
    UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator$UnityEngine_Playables_PlayableBinding$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x17DB360
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x17DB3C0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
    // Offset: 0x17DB428
    System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable$UnityEngine_Playables_PlayableBinding$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x17DB4D4
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49
  #pragma pack(pop)
  static check_size<sizeof(AnimationTrack::$get_outputs$d__49), 64 + sizeof(UnityEngine::Timeline::AnimationTrack*)> __UnityEngine_Timeline_AnimationTrack_$get_outputs$d__49SizeCheck;
  static_assert(sizeof(AnimationTrack::$get_outputs$d__49) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AnimationTrack::$get_outputs$d__49*, "UnityEngine.Timeline", "AnimationTrack/<get_outputs>d__49");
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationTrack::$get_outputs$d__49::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationTrack::$get_outputs$d__49::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationTrack::$get_outputs$d__49::MoveNext
// Il2CppName: MoveNext
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationTrack::$get_outputs$d__49::System_Collections_Generic_IEnumerator$UnityEngine_Playables_PlayableBinding$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationTrack::$get_outputs$d__49::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationTrack::$get_outputs$d__49::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationTrack::$get_outputs$d__49::System_Collections_Generic_IEnumerable$UnityEngine_Playables_PlayableBinding$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationTrack::$get_outputs$d__49::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
// Cannot perform method pointer template specialization from operators!
