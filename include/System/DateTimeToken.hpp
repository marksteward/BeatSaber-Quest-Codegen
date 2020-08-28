// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.DateTimeParse/DTT
#include "System/DateTimeParse_DTT.hpp"
// Including type: System.TokenType
#include "System/TokenType.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.DateTimeToken
  struct DateTimeToken : public System::ValueType {
    public:
    // System.DateTimeParse/DTT dtt
    // Offset: 0x0
    System::DateTimeParse::DTT dtt;
    // System.TokenType suffix
    // Offset: 0x4
    System::TokenType suffix;
    // System.Int32 num
    // Offset: 0x8
    int num;
    // Creating value type constructor for type: DateTimeToken
    constexpr DateTimeToken(System::DateTimeParse::DTT dtt_ = {}, System::TokenType suffix_ = {}, int num_ = {}) : dtt{dtt_}, suffix{suffix_}, num{num_} {}
  }; // System.DateTimeToken
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeToken, "System", "DateTimeToken");
#pragma pack(pop)
