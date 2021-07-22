// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Scripting
namespace UnityEngine::Scripting {
  // Skipping declaration: Mode because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Scripting
namespace UnityEngine::Scripting {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Scripting.GarbageCollector
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D7E818
  class GarbageCollector : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Scripting::GarbageCollector::Mode
    struct Mode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Scripting.GarbageCollector/UnityEngine.Scripting.Mode
    // [TokenAttribute] Offset: FFFFFFFF
    struct Mode/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Mode
      constexpr Mode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Scripting.GarbageCollector/UnityEngine.Scripting.Mode Disabled
      static constexpr const int Disabled = 0;
      // Get static field: static public UnityEngine.Scripting.GarbageCollector/UnityEngine.Scripting.Mode Disabled
      static UnityEngine::Scripting::GarbageCollector::Mode _get_Disabled();
      // Set static field: static public UnityEngine.Scripting.GarbageCollector/UnityEngine.Scripting.Mode Disabled
      static void _set_Disabled(UnityEngine::Scripting::GarbageCollector::Mode value);
      // static field const value: static public UnityEngine.Scripting.GarbageCollector/UnityEngine.Scripting.Mode Enabled
      static constexpr const int Enabled = 1;
      // Get static field: static public UnityEngine.Scripting.GarbageCollector/UnityEngine.Scripting.Mode Enabled
      static UnityEngine::Scripting::GarbageCollector::Mode _get_Enabled();
      // Set static field: static public UnityEngine.Scripting.GarbageCollector/UnityEngine.Scripting.Mode Enabled
      static void _set_Enabled(UnityEngine::Scripting::GarbageCollector::Mode value);
    }; // UnityEngine.Scripting.GarbageCollector/UnityEngine.Scripting.Mode
    #pragma pack(pop)
    static check_size<sizeof(GarbageCollector::Mode), 0 + sizeof(int)> __UnityEngine_Scripting_GarbageCollector_ModeSizeCheck;
    static_assert(sizeof(GarbageCollector::Mode) == 0x4);
    // Creating value type constructor for type: GarbageCollector
    GarbageCollector() noexcept {}
    // [DebuggerBrowsableAttribute] Offset: 0xD81D14
    // Get static field: static private System.Action`1<UnityEngine.Scripting.GarbageCollector/UnityEngine.Scripting.Mode> GCModeChanged
    static System::Action_1<UnityEngine::Scripting::GarbageCollector::Mode>* _get_GCModeChanged();
    // Set static field: static private System.Action`1<UnityEngine.Scripting.GarbageCollector/UnityEngine.Scripting.Mode> GCModeChanged
    static void _set_GCModeChanged(System::Action_1<UnityEngine::Scripting::GarbageCollector::Mode>* value);
    // static public System.Void set_GCMode(UnityEngine.Scripting.GarbageCollector/UnityEngine.Scripting.Mode value)
    // Offset: 0x1C8332C
    static void set_GCMode(UnityEngine::Scripting::GarbageCollector::Mode value);
    // static private System.Void SetMode(UnityEngine.Scripting.GarbageCollector/UnityEngine.Scripting.Mode mode)
    // Offset: 0x1C83428
    static void SetMode(UnityEngine::Scripting::GarbageCollector::Mode mode);
    // static private UnityEngine.Scripting.GarbageCollector/UnityEngine.Scripting.Mode GetMode()
    // Offset: 0x1C833F4
    static UnityEngine::Scripting::GarbageCollector::Mode GetMode();
  }; // UnityEngine.Scripting.GarbageCollector
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::GarbageCollector*, "UnityEngine.Scripting", "GarbageCollector");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::GarbageCollector::Mode, "UnityEngine.Scripting", "GarbageCollector/Mode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Scripting::GarbageCollector::set_GCMode
// Il2CppName: set_GCMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Scripting::GarbageCollector::Mode)>(&UnityEngine::Scripting::GarbageCollector::set_GCMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Scripting", "GarbageCollector/Mode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Scripting::GarbageCollector*), "set_GCMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Scripting::GarbageCollector::SetMode
// Il2CppName: SetMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Scripting::GarbageCollector::Mode)>(&UnityEngine::Scripting::GarbageCollector::SetMode)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine.Scripting", "GarbageCollector/Mode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Scripting::GarbageCollector*), "SetMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Scripting::GarbageCollector::GetMode
// Il2CppName: GetMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Scripting::GarbageCollector::Mode (*)()>(&UnityEngine::Scripting::GarbageCollector::GetMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Scripting::GarbageCollector*), "GetMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
