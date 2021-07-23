// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.FullScreenMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct FullScreenMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FullScreenMode
    constexpr FullScreenMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.FullScreenMode ExclusiveFullScreen
    static constexpr const int ExclusiveFullScreen = 0;
    // Get static field: static public UnityEngine.FullScreenMode ExclusiveFullScreen
    static UnityEngine::FullScreenMode _get_ExclusiveFullScreen();
    // Set static field: static public UnityEngine.FullScreenMode ExclusiveFullScreen
    static void _set_ExclusiveFullScreen(UnityEngine::FullScreenMode value);
    // static field const value: static public UnityEngine.FullScreenMode FullScreenWindow
    static constexpr const int FullScreenWindow = 1;
    // Get static field: static public UnityEngine.FullScreenMode FullScreenWindow
    static UnityEngine::FullScreenMode _get_FullScreenWindow();
    // Set static field: static public UnityEngine.FullScreenMode FullScreenWindow
    static void _set_FullScreenWindow(UnityEngine::FullScreenMode value);
    // static field const value: static public UnityEngine.FullScreenMode MaximizedWindow
    static constexpr const int MaximizedWindow = 2;
    // Get static field: static public UnityEngine.FullScreenMode MaximizedWindow
    static UnityEngine::FullScreenMode _get_MaximizedWindow();
    // Set static field: static public UnityEngine.FullScreenMode MaximizedWindow
    static void _set_MaximizedWindow(UnityEngine::FullScreenMode value);
    // static field const value: static public UnityEngine.FullScreenMode Windowed
    static constexpr const int Windowed = 3;
    // Get static field: static public UnityEngine.FullScreenMode Windowed
    static UnityEngine::FullScreenMode _get_Windowed();
    // Set static field: static public UnityEngine.FullScreenMode Windowed
    static void _set_Windowed(UnityEngine::FullScreenMode value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // UnityEngine.FullScreenMode
  #pragma pack(pop)
  static check_size<sizeof(FullScreenMode), 0 + sizeof(int)> __UnityEngine_FullScreenModeSizeCheck;
  static_assert(sizeof(FullScreenMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::FullScreenMode, "UnityEngine", "FullScreenMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
