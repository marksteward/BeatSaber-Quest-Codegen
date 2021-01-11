// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x15
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.InputRecord
  // [] Offset: FFFFFFFF
  struct InputRecord/*, public System::ValueType*/ {
    public:
    // public System.Int16 EventType
    // Size: 0x2
    // Offset: 0x0
    int16_t EventType;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // public System.Boolean KeyDown
    // Size: 0x1
    // Offset: 0x2
    bool KeyDown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: KeyDown and: RepeatCount
    char __padding1[0x1] = {};
    // public System.Int16 RepeatCount
    // Size: 0x2
    // Offset: 0x4
    int16_t RepeatCount;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // public System.Int16 VirtualKeyCode
    // Size: 0x2
    // Offset: 0x6
    int16_t VirtualKeyCode;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // public System.Int16 VirtualScanCode
    // Size: 0x2
    // Offset: 0x8
    int16_t VirtualScanCode;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // public System.Char Character
    // Size: 0x2
    // Offset: 0xA
    ::Il2CppChar Character;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // public System.Int32 ControlKeyState
    // Size: 0x4
    // Offset: 0xC
    int ControlKeyState;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 pad1
    // Size: 0x4
    // Offset: 0x10
    int pad1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean pad2
    // Size: 0x1
    // Offset: 0x14
    bool pad2;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InputRecord
    constexpr InputRecord(int16_t EventType_ = {}, bool KeyDown_ = {}, int16_t RepeatCount_ = {}, int16_t VirtualKeyCode_ = {}, int16_t VirtualScanCode_ = {}, ::Il2CppChar Character_ = {}, int ControlKeyState_ = {}, int pad1_ = {}, bool pad2_ = {}) noexcept : EventType{EventType_}, KeyDown{KeyDown_}, RepeatCount{RepeatCount_}, VirtualKeyCode{VirtualKeyCode_}, VirtualScanCode{VirtualScanCode_}, Character{Character_}, ControlKeyState{ControlKeyState_}, pad1{pad1_}, pad2{pad2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // System.InputRecord
  static check_size<sizeof(InputRecord), 20 + sizeof(bool)> __System_InputRecordSizeCheck;
  static_assert(sizeof(InputRecord) == 0x15);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::InputRecord, "System", "InputRecord");
