// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Cubemap
  class Cubemap;
  // Skipping declaration: ReflectionProbeEvent because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ReflectionProbe
  // [NativeHeaderAttribute] Offset: D8E248
  class ReflectionProbe : public UnityEngine::Behaviour {
    public:
    // Nested type: UnityEngine::ReflectionProbe::ReflectionProbeEvent
    struct ReflectionProbeEvent;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.ReflectionProbe/ReflectionProbeEvent
    struct ReflectionProbeEvent/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ReflectionProbeEvent
      constexpr ReflectionProbeEvent(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.ReflectionProbe/ReflectionProbeEvent ReflectionProbeAdded
      static constexpr const int ReflectionProbeAdded = 0;
      // Get static field: static public UnityEngine.ReflectionProbe/ReflectionProbeEvent ReflectionProbeAdded
      static UnityEngine::ReflectionProbe::ReflectionProbeEvent _get_ReflectionProbeAdded();
      // Set static field: static public UnityEngine.ReflectionProbe/ReflectionProbeEvent ReflectionProbeAdded
      static void _set_ReflectionProbeAdded(UnityEngine::ReflectionProbe::ReflectionProbeEvent value);
      // static field const value: static public UnityEngine.ReflectionProbe/ReflectionProbeEvent ReflectionProbeRemoved
      static constexpr const int ReflectionProbeRemoved = 1;
      // Get static field: static public UnityEngine.ReflectionProbe/ReflectionProbeEvent ReflectionProbeRemoved
      static UnityEngine::ReflectionProbe::ReflectionProbeEvent _get_ReflectionProbeRemoved();
      // Set static field: static public UnityEngine.ReflectionProbe/ReflectionProbeEvent ReflectionProbeRemoved
      static void _set_ReflectionProbeRemoved(UnityEngine::ReflectionProbe::ReflectionProbeEvent value);
    }; // UnityEngine.ReflectionProbe/ReflectionProbeEvent
    #pragma pack(pop)
    static check_size<sizeof(ReflectionProbe::ReflectionProbeEvent), 0 + sizeof(int)> __UnityEngine_ReflectionProbe_ReflectionProbeEventSizeCheck;
    static_assert(sizeof(ReflectionProbe::ReflectionProbeEvent) == 0x4);
    // Creating value type constructor for type: ReflectionProbe
    ReflectionProbe() noexcept {}
    // [CompilerGeneratedAttribute] Offset: 0xD92E94
    // [DebuggerBrowsableAttribute] Offset: 0xD92E94
    // Get static field: static private System.Action`2<UnityEngine.ReflectionProbe,UnityEngine.ReflectionProbe/ReflectionProbeEvent> reflectionProbeChanged
    static System::Action_2<UnityEngine::ReflectionProbe*, UnityEngine::ReflectionProbe::ReflectionProbeEvent>* _get_reflectionProbeChanged();
    // Set static field: static private System.Action`2<UnityEngine.ReflectionProbe,UnityEngine.ReflectionProbe/ReflectionProbeEvent> reflectionProbeChanged
    static void _set_reflectionProbeChanged(System::Action_2<UnityEngine::ReflectionProbe*, UnityEngine::ReflectionProbe::ReflectionProbeEvent>* value);
    // [CompilerGeneratedAttribute] Offset: 0xD92ED0
    // [DebuggerBrowsableAttribute] Offset: 0xD92ED0
    // Get static field: static private System.Action`1<UnityEngine.Cubemap> defaultReflectionSet
    static System::Action_1<UnityEngine::Cubemap*>* _get_defaultReflectionSet();
    // Set static field: static private System.Action`1<UnityEngine.Cubemap> defaultReflectionSet
    static void _set_defaultReflectionSet(System::Action_1<UnityEngine::Cubemap*>* value);
    // static private System.Void CallReflectionProbeEvent(UnityEngine.ReflectionProbe probe, UnityEngine.ReflectionProbe/ReflectionProbeEvent probeEvent)
    // Offset: 0x1B29B3C
    static void CallReflectionProbeEvent(UnityEngine::ReflectionProbe* probe, UnityEngine::ReflectionProbe::ReflectionProbeEvent probeEvent);
    // static private System.Void CallSetDefaultReflection(UnityEngine.Cubemap defaultReflectionCubemap)
    // Offset: 0x1B29BC4
    static void CallSetDefaultReflection(UnityEngine::Cubemap* defaultReflectionCubemap);
  }; // UnityEngine.ReflectionProbe
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ReflectionProbe*, "UnityEngine", "ReflectionProbe");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ReflectionProbe::ReflectionProbeEvent, "UnityEngine", "ReflectionProbe/ReflectionProbeEvent");
// Writing MetadataGetter for method: UnityEngine::ReflectionProbe::CallReflectionProbeEvent
// Il2CppName: CallReflectionProbeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ReflectionProbe*, UnityEngine::ReflectionProbe::ReflectionProbeEvent)>(&UnityEngine::ReflectionProbe::CallReflectionProbeEvent)> {
  const MethodInfo* get() {
    static auto* probe = &::il2cpp_utils::GetClassFromName("UnityEngine", "ReflectionProbe")->byval_arg;
    static auto* probeEvent = &::il2cpp_utils::GetClassFromName("UnityEngine", "ReflectionProbe/ReflectionProbeEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ReflectionProbe*), "CallReflectionProbeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{probe, probeEvent});
  }
};
// Writing MetadataGetter for method: UnityEngine::ReflectionProbe::CallSetDefaultReflection
// Il2CppName: CallSetDefaultReflection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Cubemap*)>(&UnityEngine::ReflectionProbe::CallSetDefaultReflection)> {
  const MethodInfo* get() {
    static auto* defaultReflectionCubemap = &::il2cpp_utils::GetClassFromName("UnityEngine", "Cubemap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ReflectionProbe*), "CallSetDefaultReflection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{defaultReflectionCubemap});
  }
};
