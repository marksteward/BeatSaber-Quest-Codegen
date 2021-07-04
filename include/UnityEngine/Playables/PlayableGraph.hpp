// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: IPlayable
  class IPlayable;
  // Forward declaring type: PlayableHandle
  struct PlayableHandle;
  // Forward declaring type: PlayableOutputHandle
  struct PlayableOutputHandle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IExposedPropertyTable
  class IExposedPropertyTable;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Playables.PlayableGraph
  // [UsedByNativeCodeAttribute] Offset: D9222C
  // [NativeHeaderAttribute] Offset: D9222C
  // [NativeHeaderAttribute] Offset: D9222C
  // [NativeHeaderAttribute] Offset: D9222C
  // [NativeHeaderAttribute] Offset: D9222C
  struct PlayableGraph/*, public System::ValueType*/ {
    public:
    // System.IntPtr m_Handle
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr m_Handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // System.UInt32 m_Version
    // Size: 0x4
    // Offset: 0x8
    uint m_Version;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: PlayableGraph
    constexpr PlayableGraph(System::IntPtr m_Handle_ = {}, uint m_Version_ = {}) noexcept : m_Handle{m_Handle_}, m_Version{m_Version_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public UnityEngine.Playables.Playable GetRootPlayable(System.Int32 index)
    // Offset: 0xF083D0
    UnityEngine::Playables::Playable GetRootPlayable(int index);
    // public System.Boolean Connect(U source, System.Int32 sourceOutputPort, V destination, System.Int32 destinationInputPort)
    // Offset: 0xFFFFFFFF
    template<class U, class V>
    bool Connect(U source, int sourceOutputPort, V destination, int destinationInputPort) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<V>> && is_value_type_v<V>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::PlayableGraph::Connect");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Connect", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<V>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source), ::il2cpp_utils::ExtractType(sourceOutputPort), ::il2cpp_utils::ExtractType(destination), ::il2cpp_utils::ExtractType(destinationInputPort)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<V>::get()})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___generic__method, source, sourceOutputPort, destination, destinationInputPort);
    }
    // public System.Boolean IsValid()
    // Offset: 0xF083D8
    bool IsValid();
    // public System.Boolean IsPlaying()
    // Offset: 0xF08418
    bool IsPlaying();
    // public UnityEngine.IExposedPropertyTable GetResolver()
    // Offset: 0xF08458
    UnityEngine::IExposedPropertyTable* GetResolver();
    // public System.Int32 GetPlayableCount()
    // Offset: 0xF08498
    int GetPlayableCount();
    // public System.Int32 GetRootPlayableCount()
    // Offset: 0xF084D8
    int GetRootPlayableCount();
    // UnityEngine.Playables.PlayableHandle CreatePlayableHandle()
    // Offset: 0xF08518
    UnityEngine::Playables::PlayableHandle CreatePlayableHandle();
    // System.Boolean CreateScriptOutputInternal(System.String name, out UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0xF08520
    bool CreateScriptOutputInternal(::Il2CppString* name, UnityEngine::Playables::PlayableOutputHandle& handle);
    // UnityEngine.Playables.PlayableHandle GetRootPlayableInternal(System.Int32 index)
    // Offset: 0xF08578
    UnityEngine::Playables::PlayableHandle GetRootPlayableInternal(int index);
    // private System.Boolean ConnectInternal(UnityEngine.Playables.PlayableHandle source, System.Int32 sourceOutputPort, UnityEngine.Playables.PlayableHandle destination, System.Int32 destinationInputPort)
    // Offset: 0xF08580
    bool ConnectInternal(UnityEngine::Playables::PlayableHandle source, int sourceOutputPort, UnityEngine::Playables::PlayableHandle destination, int destinationInputPort);
    // static private System.Boolean IsValid_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1C1F330
    static bool IsValid_Injected(UnityEngine::Playables::PlayableGraph& _unity_self);
    // static private System.Boolean IsPlaying_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1C1F3B0
    static bool IsPlaying_Injected(UnityEngine::Playables::PlayableGraph& _unity_self);
    // static private UnityEngine.IExposedPropertyTable GetResolver_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1C1F430
    static UnityEngine::IExposedPropertyTable* GetResolver_Injected(UnityEngine::Playables::PlayableGraph& _unity_self);
    // static private System.Int32 GetPlayableCount_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1C1F4B0
    static int GetPlayableCount_Injected(UnityEngine::Playables::PlayableGraph& _unity_self);
    // static private System.Int32 GetRootPlayableCount_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1C1F530
    static int GetRootPlayableCount_Injected(UnityEngine::Playables::PlayableGraph& _unity_self);
    // static private System.Void CreatePlayableHandle_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self, out UnityEngine.Playables.PlayableHandle ret)
    // Offset: 0x1C1F570
    static void CreatePlayableHandle_Injected(UnityEngine::Playables::PlayableGraph& _unity_self, UnityEngine::Playables::PlayableHandle& ret);
    // static private System.Boolean CreateScriptOutputInternal_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self, System.String name, out UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0x1C1F618
    static bool CreateScriptOutputInternal_Injected(UnityEngine::Playables::PlayableGraph& _unity_self, ::Il2CppString* name, UnityEngine::Playables::PlayableOutputHandle& handle);
    // static private System.Void GetRootPlayableInternal_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self, System.Int32 index, out UnityEngine.Playables.PlayableHandle ret)
    // Offset: 0x1C1F670
    static void GetRootPlayableInternal_Injected(UnityEngine::Playables::PlayableGraph& _unity_self, int index, UnityEngine::Playables::PlayableHandle& ret);
    // static private System.Boolean ConnectInternal_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self, ref UnityEngine.Playables.PlayableHandle source, System.Int32 sourceOutputPort, ref UnityEngine.Playables.PlayableHandle destination, System.Int32 destinationInputPort)
    // Offset: 0x1C1F740
    static bool ConnectInternal_Injected(UnityEngine::Playables::PlayableGraph& _unity_self, UnityEngine::Playables::PlayableHandle& source, int sourceOutputPort, UnityEngine::Playables::PlayableHandle& destination, int destinationInputPort);
  }; // UnityEngine.Playables.PlayableGraph
  #pragma pack(pop)
  static check_size<sizeof(PlayableGraph), 8 + sizeof(uint)> __UnityEngine_Playables_PlayableGraphSizeCheck;
  static_assert(sizeof(PlayableGraph) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableGraph, "UnityEngine.Playables", "PlayableGraph");
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetRootPlayable
// Il2CppName: GetRootPlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (UnityEngine::Playables::PlayableGraph::*)(int)>(&UnityEngine::Playables::PlayableGraph::GetRootPlayable)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetRootPlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::Connect
// Il2CppName: Connect
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::PlayableGraph::*)()>(&UnityEngine::Playables::PlayableGraph::IsValid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::IsPlaying
// Il2CppName: IsPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::PlayableGraph::*)()>(&UnityEngine::Playables::PlayableGraph::IsPlaying)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "IsPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetResolver
// Il2CppName: GetResolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::IExposedPropertyTable* (UnityEngine::Playables::PlayableGraph::*)()>(&UnityEngine::Playables::PlayableGraph::GetResolver)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetResolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetPlayableCount
// Il2CppName: GetPlayableCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Playables::PlayableGraph::*)()>(&UnityEngine::Playables::PlayableGraph::GetPlayableCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetPlayableCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetRootPlayableCount
// Il2CppName: GetRootPlayableCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Playables::PlayableGraph::*)()>(&UnityEngine::Playables::PlayableGraph::GetRootPlayableCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetRootPlayableCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::CreatePlayableHandle
// Il2CppName: CreatePlayableHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (UnityEngine::Playables::PlayableGraph::*)()>(&UnityEngine::Playables::PlayableGraph::CreatePlayableHandle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "CreatePlayableHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::CreateScriptOutputInternal
// Il2CppName: CreateScriptOutputInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::PlayableGraph::*)(::Il2CppString*, UnityEngine::Playables::PlayableOutputHandle&)>(&UnityEngine::Playables::PlayableGraph::CreateScriptOutputInternal)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "CreateScriptOutputInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetRootPlayableInternal
// Il2CppName: GetRootPlayableInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (UnityEngine::Playables::PlayableGraph::*)(int)>(&UnityEngine::Playables::PlayableGraph::GetRootPlayableInternal)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetRootPlayableInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::ConnectInternal
// Il2CppName: ConnectInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::PlayableGraph::*)(UnityEngine::Playables::PlayableHandle, int, UnityEngine::Playables::PlayableHandle, int)>(&UnityEngine::Playables::PlayableGraph::ConnectInternal)> {
  const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->byval_arg;
    static auto* sourceOutputPort = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* destination = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->byval_arg;
    static auto* destinationInputPort = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "ConnectInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, sourceOutputPort, destination, destinationInputPort});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::IsValid_Injected
// Il2CppName: IsValid_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Playables::PlayableGraph&)>(&UnityEngine::Playables::PlayableGraph::IsValid_Injected)> {
  const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "IsValid_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::IsPlaying_Injected
// Il2CppName: IsPlaying_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Playables::PlayableGraph&)>(&UnityEngine::Playables::PlayableGraph::IsPlaying_Injected)> {
  const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "IsPlaying_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetResolver_Injected
// Il2CppName: GetResolver_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::IExposedPropertyTable* (*)(UnityEngine::Playables::PlayableGraph&)>(&UnityEngine::Playables::PlayableGraph::GetResolver_Injected)> {
  const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetResolver_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetPlayableCount_Injected
// Il2CppName: GetPlayableCount_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::Playables::PlayableGraph&)>(&UnityEngine::Playables::PlayableGraph::GetPlayableCount_Injected)> {
  const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetPlayableCount_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetRootPlayableCount_Injected
// Il2CppName: GetRootPlayableCount_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::Playables::PlayableGraph&)>(&UnityEngine::Playables::PlayableGraph::GetRootPlayableCount_Injected)> {
  const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetRootPlayableCount_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::CreatePlayableHandle_Injected
// Il2CppName: CreatePlayableHandle_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Playables::PlayableGraph&, UnityEngine::Playables::PlayableHandle&)>(&UnityEngine::Playables::PlayableGraph::CreatePlayableHandle_Injected)> {
  const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "CreatePlayableHandle_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::CreateScriptOutputInternal_Injected
// Il2CppName: CreateScriptOutputInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Playables::PlayableGraph&, ::Il2CppString*, UnityEngine::Playables::PlayableOutputHandle&)>(&UnityEngine::Playables::PlayableGraph::CreateScriptOutputInternal_Injected)> {
  const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "CreateScriptOutputInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, name, handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::GetRootPlayableInternal_Injected
// Il2CppName: GetRootPlayableInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Playables::PlayableGraph&, int, UnityEngine::Playables::PlayableHandle&)>(&UnityEngine::Playables::PlayableGraph::GetRootPlayableInternal_Injected)> {
  const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "GetRootPlayableInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, index, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableGraph::ConnectInternal_Injected
// Il2CppName: ConnectInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Playables::PlayableGraph&, UnityEngine::Playables::PlayableHandle&, int, UnityEngine::Playables::PlayableHandle&, int)>(&UnityEngine::Playables::PlayableGraph::ConnectInternal_Injected)> {
  const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* sourceOutputPort = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* destination = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* destinationInputPort = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableGraph), "ConnectInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, source, sourceOutputPort, destination, destinationInputPort});
  }
};
