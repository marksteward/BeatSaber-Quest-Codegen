// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveData/BeatmapEventType
  // [TokenAttribute] Offset: FFFFFFFF
  struct BeatmapSaveData::BeatmapEventType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BeatmapEventType
    constexpr BeatmapEventType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event0
    static constexpr const int Event0 = 0;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event0
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event0();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event0
    static void _set_Event0(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event1
    static constexpr const int Event1 = 1;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event1
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event1();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event1
    static void _set_Event1(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event2
    static constexpr const int Event2 = 2;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event2
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event2();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event2
    static void _set_Event2(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event3
    static constexpr const int Event3 = 3;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event3
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event3();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event3
    static void _set_Event3(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event4
    static constexpr const int Event4 = 4;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event4
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event4();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event4
    static void _set_Event4(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event5
    static constexpr const int Event5 = 5;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event5
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event5();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event5
    static void _set_Event5(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event6
    static constexpr const int Event6 = 6;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event6
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event6();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event6
    static void _set_Event6(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event7
    static constexpr const int Event7 = 7;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event7
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event7();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event7
    static void _set_Event7(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event8
    static constexpr const int Event8 = 8;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event8
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event8();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event8
    static void _set_Event8(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event9
    static constexpr const int Event9 = 9;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event9
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event9();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event9
    static void _set_Event9(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event10
    static constexpr const int Event10 = 10;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event10
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event10();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event10
    static void _set_Event10(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event11
    static constexpr const int Event11 = 11;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event11
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event11();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event11
    static void _set_Event11(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event12
    static constexpr const int Event12 = 12;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event12
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event12();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event12
    static void _set_Event12(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event13
    static constexpr const int Event13 = 13;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event13
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event13();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event13
    static void _set_Event13(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event14
    static constexpr const int Event14 = 14;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event14
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event14();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event14
    static void _set_Event14(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event15
    static constexpr const int Event15 = 15;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event15
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event15();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event15
    static void _set_Event15(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event16
    static constexpr const int Event16 = 16;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event16
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event16();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event16
    static void _set_Event16(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Event17
    static constexpr const int Event17 = 17;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Event17
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Event17();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Event17
    static void _set_Event17(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType VoidEvent
    static constexpr const int VoidEvent = -1;
    // Get static field: static public BeatmapSaveData/BeatmapEventType VoidEvent
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_VoidEvent();
    // Set static field: static public BeatmapSaveData/BeatmapEventType VoidEvent
    static void _set_VoidEvent(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Special0
    static constexpr const int Special0 = 40;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Special0
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Special0();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Special0
    static void _set_Special0(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Special1
    static constexpr const int Special1 = 41;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Special1
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Special1();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Special1
    static void _set_Special1(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Special2
    static constexpr const int Special2 = 42;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Special2
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Special2();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Special2
    static void _set_Special2(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // static field const value: static public BeatmapSaveData/BeatmapEventType Special3
    static constexpr const int Special3 = 43;
    // Get static field: static public BeatmapSaveData/BeatmapEventType Special3
    static GlobalNamespace::BeatmapSaveData::BeatmapEventType _get_Special3();
    // Set static field: static public BeatmapSaveData/BeatmapEventType Special3
    static void _set_Special3(GlobalNamespace::BeatmapSaveData::BeatmapEventType value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // BeatmapSaveData/BeatmapEventType
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::BeatmapEventType), 0 + sizeof(int)> __GlobalNamespace_BeatmapSaveData_BeatmapEventTypeSizeCheck;
  static_assert(sizeof(BeatmapSaveData::BeatmapEventType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData::BeatmapEventType, "", "BeatmapSaveData/BeatmapEventType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
