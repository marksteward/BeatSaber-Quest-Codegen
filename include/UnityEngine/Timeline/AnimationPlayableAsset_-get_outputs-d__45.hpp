// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.AnimationPlayableAsset
#include "UnityEngine/Timeline/AnimationPlayableAsset.hpp"
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
  // Autogenerated type: UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45
  // [CompilerGeneratedAttribute] Offset: DD78E8
  class AnimationPlayableAsset::$get_outputs$d__45 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>, public System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>*/ {
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
    // public UnityEngine.Timeline.AnimationPlayableAsset <>4__this
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Timeline::AnimationPlayableAsset* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::AnimationPlayableAsset*) == 0x8);
    // Creating value type constructor for type: $get_outputs$d__45
    $get_outputs$d__45(int $$1__state_ = {}, UnityEngine::Playables::PlayableBinding $$2__current_ = {}, int $$l__initialThreadId_ = {}, UnityEngine::Timeline::AnimationPlayableAsset* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>
    operator System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>
    operator System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x17D6A5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationPlayableAsset::$get_outputs$d__45* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationPlayableAsset::$get_outputs$d__45*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x17D74DC
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x17D74E0
    bool MoveNext();
    // private UnityEngine.Playables.PlayableBinding System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current()
    // Offset: 0x17D7570
    UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator$UnityEngine_Playables_PlayableBinding$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x17D7580
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x17D75E0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
    // Offset: 0x17D7648
    System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable$UnityEngine_Playables_PlayableBinding$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x17D76F4
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.Timeline.AnimationPlayableAsset/<get_outputs>d__45
  #pragma pack(pop)
  static check_size<sizeof(AnimationPlayableAsset::$get_outputs$d__45), 64 + sizeof(UnityEngine::Timeline::AnimationPlayableAsset*)> __UnityEngine_Timeline_AnimationPlayableAsset_$get_outputs$d__45SizeCheck;
  static_assert(sizeof(AnimationPlayableAsset::$get_outputs$d__45) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45*, "UnityEngine.Timeline", "AnimationPlayableAsset/<get_outputs>d__45");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::*)()>(&UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::*)()>(&UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::System_Collections_Generic_IEnumerator$UnityEngine_Playables_PlayableBinding$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableBinding (UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::*)()>(&UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::System_Collections_Generic_IEnumerator$UnityEngine_Playables_PlayableBinding$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45*), "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::*)()>(&UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::*)()>(&UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::System_Collections_Generic_IEnumerable$UnityEngine_Playables_PlayableBinding$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>* (UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::*)()>(&UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::System_Collections_Generic_IEnumerable$UnityEngine_Playables_PlayableBinding$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45*), "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::*)()>(&UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationPlayableAsset::$get_outputs$d__45*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
