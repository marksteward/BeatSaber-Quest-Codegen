// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.AnimationRemoveScalePlayable
  // [NativeHeaderAttribute] Offset: DA9AC0
  // [StaticAccessorAttribute] Offset: DA9AC0
  // [NativeHeaderAttribute] Offset: DA9AC0
  // [NativeHeaderAttribute] Offset: DA9AC0
  // [RequiredByNativeCodeAttribute] Offset: DA9AC0
  struct AnimationRemoveScalePlayable/*, public System::ValueType, public UnityEngine::Playables::IPlayable, public System::IEquatable_1<UnityEngine::Animations::AnimationRemoveScalePlayable>*/ {
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableHandle) == 0xC);
    // Creating value type constructor for type: AnimationRemoveScalePlayable
    constexpr AnimationRemoveScalePlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayable
    operator UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Animations::AnimationRemoveScalePlayable>
    operator System::IEquatable_1<UnityEngine::Animations::AnimationRemoveScalePlayable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Animations::AnimationRemoveScalePlayable>*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableHandle
    constexpr operator UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Get static field: static private readonly UnityEngine.Animations.AnimationRemoveScalePlayable m_NullPlayable
    static UnityEngine::Animations::AnimationRemoveScalePlayable _get_m_NullPlayable();
    // Set static field: static private readonly UnityEngine.Animations.AnimationRemoveScalePlayable m_NullPlayable
    static void _set_m_NullPlayable(UnityEngine::Animations::AnimationRemoveScalePlayable value);
    // static public UnityEngine.Animations.AnimationRemoveScalePlayable Create(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount)
    // Offset: 0x23558AC
    static UnityEngine::Animations::AnimationRemoveScalePlayable Create(UnityEngine::Playables::PlayableGraph graph, int inputCount);
    // static private UnityEngine.Playables.PlayableHandle CreateHandle(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount)
    // Offset: 0x2355954
    static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph, int inputCount);
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0xF21954
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  AnimationRemoveScalePlayable(UnityEngine::Playables::PlayableHandle handle)
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0xF2195C
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Animations.AnimationRemoveScalePlayable other)
    // Offset: 0xF21968
    bool Equals(UnityEngine::Animations::AnimationRemoveScalePlayable other);
    // static private System.Boolean CreateHandleInternal(UnityEngine.Playables.PlayableGraph graph, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x2355B04
    static bool CreateHandleInternal(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::PlayableHandle& handle);
    // static private System.Void .cctor()
    // Offset: 0x2355CF0
    static void _cctor();
    // static private System.Boolean CreateHandleInternal_Injected(ref UnityEngine.Playables.PlayableGraph graph, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x2355CA0
    static bool CreateHandleInternal_Injected(UnityEngine::Playables::PlayableGraph& graph, UnityEngine::Playables::PlayableHandle& handle);
  }; // UnityEngine.Animations.AnimationRemoveScalePlayable
  #pragma pack(pop)
  static check_size<sizeof(AnimationRemoveScalePlayable), 0 + sizeof(UnityEngine::Playables::PlayableHandle)> __UnityEngine_Animations_AnimationRemoveScalePlayableSizeCheck;
  static_assert(sizeof(AnimationRemoveScalePlayable) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationRemoveScalePlayable, "UnityEngine.Animations", "AnimationRemoveScalePlayable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationRemoveScalePlayable::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Animations::AnimationRemoveScalePlayable (*)(UnityEngine::Playables::PlayableGraph, int)>(&UnityEngine::Animations::AnimationRemoveScalePlayable::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationRemoveScalePlayable), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, inputCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationRemoveScalePlayable::CreateHandle
// Il2CppName: CreateHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (*)(UnityEngine::Playables::PlayableGraph, int)>(&UnityEngine::Animations::AnimationRemoveScalePlayable::CreateHandle)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationRemoveScalePlayable), "CreateHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, inputCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationRemoveScalePlayable::AnimationRemoveScalePlayable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationRemoveScalePlayable::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (UnityEngine::Animations::AnimationRemoveScalePlayable::*)()>(&UnityEngine::Animations::AnimationRemoveScalePlayable::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationRemoveScalePlayable), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationRemoveScalePlayable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::AnimationRemoveScalePlayable::*)(UnityEngine::Animations::AnimationRemoveScalePlayable)>(&UnityEngine::Animations::AnimationRemoveScalePlayable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationRemoveScalePlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationRemoveScalePlayable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationRemoveScalePlayable::CreateHandleInternal
// Il2CppName: CreateHandleInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Playables::PlayableGraph, UnityEngine::Playables::PlayableHandle&)>(&UnityEngine::Animations::AnimationRemoveScalePlayable::CreateHandleInternal)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationRemoveScalePlayable), "CreateHandleInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationRemoveScalePlayable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Animations::AnimationRemoveScalePlayable::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationRemoveScalePlayable), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationRemoveScalePlayable::CreateHandleInternal_Injected
// Il2CppName: CreateHandleInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Playables::PlayableGraph&, UnityEngine::Playables::PlayableHandle&)>(&UnityEngine::Animations::AnimationRemoveScalePlayable::CreateHandleInternal_Injected)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationRemoveScalePlayable), "CreateHandleInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, handle});
  }
};
