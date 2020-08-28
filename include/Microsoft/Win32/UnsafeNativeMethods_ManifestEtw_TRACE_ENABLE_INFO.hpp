// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Autogenerated type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_ENABLE_INFO
  struct UnsafeNativeMethods::ManifestEtw::TRACE_ENABLE_INFO : public System::ValueType {
    public:
    // public System.Int32 IsEnabled
    // Offset: 0x0
    int IsEnabled;
    // public System.Byte Level
    // Offset: 0x4
    uint8_t Level;
    // public System.Byte Reserved1
    // Offset: 0x5
    uint8_t Reserved1;
    // public System.UInt16 LoggerId
    // Offset: 0x6
    uint16_t LoggerId;
    // public System.Int32 EnableProperty
    // Offset: 0x8
    int EnableProperty;
    // public System.Int32 Reserved2
    // Offset: 0xC
    int Reserved2;
    // public System.Int64 MatchAnyKeyword
    // Offset: 0x10
    int64_t MatchAnyKeyword;
    // public System.Int64 MatchAllKeyword
    // Offset: 0x18
    int64_t MatchAllKeyword;
    // Creating value type constructor for type: TRACE_ENABLE_INFO
    constexpr TRACE_ENABLE_INFO(int IsEnabled_ = {}, uint8_t Level_ = {}, uint8_t Reserved1_ = {}, uint16_t LoggerId_ = {}, int EnableProperty_ = {}, int Reserved2_ = {}, int64_t MatchAnyKeyword_ = {}, int64_t MatchAllKeyword_ = {}) : IsEnabled{IsEnabled_}, Level{Level_}, Reserved1{Reserved1_}, LoggerId{LoggerId_}, EnableProperty{EnableProperty_}, Reserved2{Reserved2_}, MatchAnyKeyword{MatchAnyKeyword_}, MatchAllKeyword{MatchAllKeyword_} {}
  }; // Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_ENABLE_INFO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::TRACE_ENABLE_INFO, "Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw/TRACE_ENABLE_INFO");
#pragma pack(pop)
