// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
  // [TokenAttribute] Offset: FFFFFFFF
  struct TouchScreenKeyboard_InternalConstructorHelperArguments/*, public System::ValueType*/ {
    public:
    // public System.UInt32 keyboardType
    // Size: 0x4
    // Offset: 0x0
    uint keyboardType;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 autocorrection
    // Size: 0x4
    // Offset: 0x4
    uint autocorrection;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 multiline
    // Size: 0x4
    // Offset: 0x8
    uint multiline;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 secure
    // Size: 0x4
    // Offset: 0xC
    uint secure;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 alert
    // Size: 0x4
    // Offset: 0x10
    uint alert;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Int32 characterLimit
    // Size: 0x4
    // Offset: 0x14
    int characterLimit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TouchScreenKeyboard_InternalConstructorHelperArguments
    constexpr TouchScreenKeyboard_InternalConstructorHelperArguments(uint keyboardType_ = {}, uint autocorrection_ = {}, uint multiline_ = {}, uint secure_ = {}, uint alert_ = {}, int characterLimit_ = {}) noexcept : keyboardType{keyboardType_}, autocorrection{autocorrection_}, multiline{multiline_}, secure{secure_}, alert{alert_}, characterLimit{characterLimit_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
  #pragma pack(pop)
  static check_size<sizeof(TouchScreenKeyboard_InternalConstructorHelperArguments), 20 + sizeof(int)> __UnityEngine_TouchScreenKeyboard_InternalConstructorHelperArgumentsSizeCheck;
  static_assert(sizeof(TouchScreenKeyboard_InternalConstructorHelperArguments) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments, "UnityEngine", "TouchScreenKeyboard_InternalConstructorHelperArguments");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
