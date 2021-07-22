// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesPlatform
  // [TokenAttribute] Offset: FFFFFFFF
  struct AddressablesPlatform/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AddressablesPlatform
    constexpr AddressablesPlatform(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.AddressableAssets.AddressablesPlatform Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public UnityEngine.AddressableAssets.AddressablesPlatform Unknown
    static UnityEngine::AddressableAssets::AddressablesPlatform _get_Unknown();
    // Set static field: static public UnityEngine.AddressableAssets.AddressablesPlatform Unknown
    static void _set_Unknown(UnityEngine::AddressableAssets::AddressablesPlatform value);
    // static field const value: static public UnityEngine.AddressableAssets.AddressablesPlatform Windows
    static constexpr const int Windows = 1;
    // Get static field: static public UnityEngine.AddressableAssets.AddressablesPlatform Windows
    static UnityEngine::AddressableAssets::AddressablesPlatform _get_Windows();
    // Set static field: static public UnityEngine.AddressableAssets.AddressablesPlatform Windows
    static void _set_Windows(UnityEngine::AddressableAssets::AddressablesPlatform value);
    // static field const value: static public UnityEngine.AddressableAssets.AddressablesPlatform OSX
    static constexpr const int OSX = 2;
    // Get static field: static public UnityEngine.AddressableAssets.AddressablesPlatform OSX
    static UnityEngine::AddressableAssets::AddressablesPlatform _get_OSX();
    // Set static field: static public UnityEngine.AddressableAssets.AddressablesPlatform OSX
    static void _set_OSX(UnityEngine::AddressableAssets::AddressablesPlatform value);
    // static field const value: static public UnityEngine.AddressableAssets.AddressablesPlatform Linux
    static constexpr const int Linux = 3;
    // Get static field: static public UnityEngine.AddressableAssets.AddressablesPlatform Linux
    static UnityEngine::AddressableAssets::AddressablesPlatform _get_Linux();
    // Set static field: static public UnityEngine.AddressableAssets.AddressablesPlatform Linux
    static void _set_Linux(UnityEngine::AddressableAssets::AddressablesPlatform value);
    // static field const value: static public UnityEngine.AddressableAssets.AddressablesPlatform PS4
    static constexpr const int PS4 = 4;
    // Get static field: static public UnityEngine.AddressableAssets.AddressablesPlatform PS4
    static UnityEngine::AddressableAssets::AddressablesPlatform _get_PS4();
    // Set static field: static public UnityEngine.AddressableAssets.AddressablesPlatform PS4
    static void _set_PS4(UnityEngine::AddressableAssets::AddressablesPlatform value);
    // static field const value: static public UnityEngine.AddressableAssets.AddressablesPlatform Switch
    static constexpr const int Switch = 5;
    // Get static field: static public UnityEngine.AddressableAssets.AddressablesPlatform Switch
    static UnityEngine::AddressableAssets::AddressablesPlatform _get_Switch();
    // Set static field: static public UnityEngine.AddressableAssets.AddressablesPlatform Switch
    static void _set_Switch(UnityEngine::AddressableAssets::AddressablesPlatform value);
    // static field const value: static public UnityEngine.AddressableAssets.AddressablesPlatform XboxOne
    static constexpr const int XboxOne = 6;
    // Get static field: static public UnityEngine.AddressableAssets.AddressablesPlatform XboxOne
    static UnityEngine::AddressableAssets::AddressablesPlatform _get_XboxOne();
    // Set static field: static public UnityEngine.AddressableAssets.AddressablesPlatform XboxOne
    static void _set_XboxOne(UnityEngine::AddressableAssets::AddressablesPlatform value);
    // static field const value: static public UnityEngine.AddressableAssets.AddressablesPlatform WebGL
    static constexpr const int WebGL = 7;
    // Get static field: static public UnityEngine.AddressableAssets.AddressablesPlatform WebGL
    static UnityEngine::AddressableAssets::AddressablesPlatform _get_WebGL();
    // Set static field: static public UnityEngine.AddressableAssets.AddressablesPlatform WebGL
    static void _set_WebGL(UnityEngine::AddressableAssets::AddressablesPlatform value);
    // static field const value: static public UnityEngine.AddressableAssets.AddressablesPlatform iOS
    static constexpr const int iOS = 8;
    // Get static field: static public UnityEngine.AddressableAssets.AddressablesPlatform iOS
    static UnityEngine::AddressableAssets::AddressablesPlatform _get_iOS();
    // Set static field: static public UnityEngine.AddressableAssets.AddressablesPlatform iOS
    static void _set_iOS(UnityEngine::AddressableAssets::AddressablesPlatform value);
    // static field const value: static public UnityEngine.AddressableAssets.AddressablesPlatform Android
    static constexpr const int Android = 9;
    // Get static field: static public UnityEngine.AddressableAssets.AddressablesPlatform Android
    static UnityEngine::AddressableAssets::AddressablesPlatform _get_Android();
    // Set static field: static public UnityEngine.AddressableAssets.AddressablesPlatform Android
    static void _set_Android(UnityEngine::AddressableAssets::AddressablesPlatform value);
    // static field const value: static public UnityEngine.AddressableAssets.AddressablesPlatform WindowsUniversal
    static constexpr const int WindowsUniversal = 10;
    // Get static field: static public UnityEngine.AddressableAssets.AddressablesPlatform WindowsUniversal
    static UnityEngine::AddressableAssets::AddressablesPlatform _get_WindowsUniversal();
    // Set static field: static public UnityEngine.AddressableAssets.AddressablesPlatform WindowsUniversal
    static void _set_WindowsUniversal(UnityEngine::AddressableAssets::AddressablesPlatform value);
  }; // UnityEngine.AddressableAssets.AddressablesPlatform
  #pragma pack(pop)
  static check_size<sizeof(AddressablesPlatform), 0 + sizeof(int)> __UnityEngine_AddressableAssets_AddressablesPlatformSizeCheck;
  static_assert(sizeof(AddressablesPlatform) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AddressablesPlatform, "UnityEngine.AddressableAssets", "AddressablesPlatform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
