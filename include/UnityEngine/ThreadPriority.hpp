// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ThreadPriority
  struct ThreadPriority : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: ThreadPriority
    constexpr ThreadPriority(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public UnityEngine.ThreadPriority Low
    static constexpr const int Low = 0;
    // Get static field: static public UnityEngine.ThreadPriority Low
    static UnityEngine::ThreadPriority _get_Low();
    // Set static field: static public UnityEngine.ThreadPriority Low
    static void _set_Low(UnityEngine::ThreadPriority value);
    // static field const value: static public UnityEngine.ThreadPriority BelowNormal
    static constexpr const int BelowNormal = 1;
    // Get static field: static public UnityEngine.ThreadPriority BelowNormal
    static UnityEngine::ThreadPriority _get_BelowNormal();
    // Set static field: static public UnityEngine.ThreadPriority BelowNormal
    static void _set_BelowNormal(UnityEngine::ThreadPriority value);
    // static field const value: static public UnityEngine.ThreadPriority Normal
    static constexpr const int Normal = 2;
    // Get static field: static public UnityEngine.ThreadPriority Normal
    static UnityEngine::ThreadPriority _get_Normal();
    // Set static field: static public UnityEngine.ThreadPriority Normal
    static void _set_Normal(UnityEngine::ThreadPriority value);
    // static field const value: static public UnityEngine.ThreadPriority High
    static constexpr const int High = 4;
    // Get static field: static public UnityEngine.ThreadPriority High
    static UnityEngine::ThreadPriority _get_High();
    // Set static field: static public UnityEngine.ThreadPriority High
    static void _set_High(UnityEngine::ThreadPriority value);
  }; // UnityEngine.ThreadPriority
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ThreadPriority, "UnityEngine", "ThreadPriority");
#pragma pack(pop)
