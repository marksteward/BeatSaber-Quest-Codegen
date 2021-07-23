// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.TermInfoNumbers
  // [TokenAttribute] Offset: FFFFFFFF
  struct TermInfoNumbers/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TermInfoNumbers
    constexpr TermInfoNumbers(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.TermInfoNumbers Columns
    static constexpr const int Columns = 0;
    // Get static field: static public System.TermInfoNumbers Columns
    static System::TermInfoNumbers _get_Columns();
    // Set static field: static public System.TermInfoNumbers Columns
    static void _set_Columns(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers InitTabs
    static constexpr const int InitTabs = 1;
    // Get static field: static public System.TermInfoNumbers InitTabs
    static System::TermInfoNumbers _get_InitTabs();
    // Set static field: static public System.TermInfoNumbers InitTabs
    static void _set_InitTabs(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers Lines
    static constexpr const int Lines = 2;
    // Get static field: static public System.TermInfoNumbers Lines
    static System::TermInfoNumbers _get_Lines();
    // Set static field: static public System.TermInfoNumbers Lines
    static void _set_Lines(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers LinesOfMemory
    static constexpr const int LinesOfMemory = 3;
    // Get static field: static public System.TermInfoNumbers LinesOfMemory
    static System::TermInfoNumbers _get_LinesOfMemory();
    // Set static field: static public System.TermInfoNumbers LinesOfMemory
    static void _set_LinesOfMemory(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers MagicCookieGlitch
    static constexpr const int MagicCookieGlitch = 4;
    // Get static field: static public System.TermInfoNumbers MagicCookieGlitch
    static System::TermInfoNumbers _get_MagicCookieGlitch();
    // Set static field: static public System.TermInfoNumbers MagicCookieGlitch
    static void _set_MagicCookieGlitch(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers PaddingBaudRate
    static constexpr const int PaddingBaudRate = 5;
    // Get static field: static public System.TermInfoNumbers PaddingBaudRate
    static System::TermInfoNumbers _get_PaddingBaudRate();
    // Set static field: static public System.TermInfoNumbers PaddingBaudRate
    static void _set_PaddingBaudRate(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers VirtualTerminal
    static constexpr const int VirtualTerminal = 6;
    // Get static field: static public System.TermInfoNumbers VirtualTerminal
    static System::TermInfoNumbers _get_VirtualTerminal();
    // Set static field: static public System.TermInfoNumbers VirtualTerminal
    static void _set_VirtualTerminal(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers WidthStatusLine
    static constexpr const int WidthStatusLine = 7;
    // Get static field: static public System.TermInfoNumbers WidthStatusLine
    static System::TermInfoNumbers _get_WidthStatusLine();
    // Set static field: static public System.TermInfoNumbers WidthStatusLine
    static void _set_WidthStatusLine(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers NumLabels
    static constexpr const int NumLabels = 8;
    // Get static field: static public System.TermInfoNumbers NumLabels
    static System::TermInfoNumbers _get_NumLabels();
    // Set static field: static public System.TermInfoNumbers NumLabels
    static void _set_NumLabels(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers LabelHeight
    static constexpr const int LabelHeight = 9;
    // Get static field: static public System.TermInfoNumbers LabelHeight
    static System::TermInfoNumbers _get_LabelHeight();
    // Set static field: static public System.TermInfoNumbers LabelHeight
    static void _set_LabelHeight(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers LabelWidth
    static constexpr const int LabelWidth = 10;
    // Get static field: static public System.TermInfoNumbers LabelWidth
    static System::TermInfoNumbers _get_LabelWidth();
    // Set static field: static public System.TermInfoNumbers LabelWidth
    static void _set_LabelWidth(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers MaxAttributes
    static constexpr const int MaxAttributes = 11;
    // Get static field: static public System.TermInfoNumbers MaxAttributes
    static System::TermInfoNumbers _get_MaxAttributes();
    // Set static field: static public System.TermInfoNumbers MaxAttributes
    static void _set_MaxAttributes(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers MaximumWindows
    static constexpr const int MaximumWindows = 12;
    // Get static field: static public System.TermInfoNumbers MaximumWindows
    static System::TermInfoNumbers _get_MaximumWindows();
    // Set static field: static public System.TermInfoNumbers MaximumWindows
    static void _set_MaximumWindows(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers MaxColors
    static constexpr const int MaxColors = 13;
    // Get static field: static public System.TermInfoNumbers MaxColors
    static System::TermInfoNumbers _get_MaxColors();
    // Set static field: static public System.TermInfoNumbers MaxColors
    static void _set_MaxColors(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers MaxPairs
    static constexpr const int MaxPairs = 14;
    // Get static field: static public System.TermInfoNumbers MaxPairs
    static System::TermInfoNumbers _get_MaxPairs();
    // Set static field: static public System.TermInfoNumbers MaxPairs
    static void _set_MaxPairs(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers NoColorVideo
    static constexpr const int NoColorVideo = 15;
    // Get static field: static public System.TermInfoNumbers NoColorVideo
    static System::TermInfoNumbers _get_NoColorVideo();
    // Set static field: static public System.TermInfoNumbers NoColorVideo
    static void _set_NoColorVideo(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers BufferCapacity
    static constexpr const int BufferCapacity = 16;
    // Get static field: static public System.TermInfoNumbers BufferCapacity
    static System::TermInfoNumbers _get_BufferCapacity();
    // Set static field: static public System.TermInfoNumbers BufferCapacity
    static void _set_BufferCapacity(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers DotVertSpacing
    static constexpr const int DotVertSpacing = 17;
    // Get static field: static public System.TermInfoNumbers DotVertSpacing
    static System::TermInfoNumbers _get_DotVertSpacing();
    // Set static field: static public System.TermInfoNumbers DotVertSpacing
    static void _set_DotVertSpacing(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers DotHorzSpacing
    static constexpr const int DotHorzSpacing = 18;
    // Get static field: static public System.TermInfoNumbers DotHorzSpacing
    static System::TermInfoNumbers _get_DotHorzSpacing();
    // Set static field: static public System.TermInfoNumbers DotHorzSpacing
    static void _set_DotHorzSpacing(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers MaxMicroAddress
    static constexpr const int MaxMicroAddress = 19;
    // Get static field: static public System.TermInfoNumbers MaxMicroAddress
    static System::TermInfoNumbers _get_MaxMicroAddress();
    // Set static field: static public System.TermInfoNumbers MaxMicroAddress
    static void _set_MaxMicroAddress(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers MaxMicroJump
    static constexpr const int MaxMicroJump = 20;
    // Get static field: static public System.TermInfoNumbers MaxMicroJump
    static System::TermInfoNumbers _get_MaxMicroJump();
    // Set static field: static public System.TermInfoNumbers MaxMicroJump
    static void _set_MaxMicroJump(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers MicroColSize
    static constexpr const int MicroColSize = 21;
    // Get static field: static public System.TermInfoNumbers MicroColSize
    static System::TermInfoNumbers _get_MicroColSize();
    // Set static field: static public System.TermInfoNumbers MicroColSize
    static void _set_MicroColSize(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers MicroLineSize
    static constexpr const int MicroLineSize = 22;
    // Get static field: static public System.TermInfoNumbers MicroLineSize
    static System::TermInfoNumbers _get_MicroLineSize();
    // Set static field: static public System.TermInfoNumbers MicroLineSize
    static void _set_MicroLineSize(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers NumberOfPins
    static constexpr const int NumberOfPins = 23;
    // Get static field: static public System.TermInfoNumbers NumberOfPins
    static System::TermInfoNumbers _get_NumberOfPins();
    // Set static field: static public System.TermInfoNumbers NumberOfPins
    static void _set_NumberOfPins(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers OutputResChar
    static constexpr const int OutputResChar = 24;
    // Get static field: static public System.TermInfoNumbers OutputResChar
    static System::TermInfoNumbers _get_OutputResChar();
    // Set static field: static public System.TermInfoNumbers OutputResChar
    static void _set_OutputResChar(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers OutputResLine
    static constexpr const int OutputResLine = 25;
    // Get static field: static public System.TermInfoNumbers OutputResLine
    static System::TermInfoNumbers _get_OutputResLine();
    // Set static field: static public System.TermInfoNumbers OutputResLine
    static void _set_OutputResLine(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers OutputResHorzInch
    static constexpr const int OutputResHorzInch = 26;
    // Get static field: static public System.TermInfoNumbers OutputResHorzInch
    static System::TermInfoNumbers _get_OutputResHorzInch();
    // Set static field: static public System.TermInfoNumbers OutputResHorzInch
    static void _set_OutputResHorzInch(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers OutputResVertInch
    static constexpr const int OutputResVertInch = 27;
    // Get static field: static public System.TermInfoNumbers OutputResVertInch
    static System::TermInfoNumbers _get_OutputResVertInch();
    // Set static field: static public System.TermInfoNumbers OutputResVertInch
    static void _set_OutputResVertInch(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers PrintRate
    static constexpr const int PrintRate = 28;
    // Get static field: static public System.TermInfoNumbers PrintRate
    static System::TermInfoNumbers _get_PrintRate();
    // Set static field: static public System.TermInfoNumbers PrintRate
    static void _set_PrintRate(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers WideCharSize
    static constexpr const int WideCharSize = 29;
    // Get static field: static public System.TermInfoNumbers WideCharSize
    static System::TermInfoNumbers _get_WideCharSize();
    // Set static field: static public System.TermInfoNumbers WideCharSize
    static void _set_WideCharSize(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers Buttons
    static constexpr const int Buttons = 30;
    // Get static field: static public System.TermInfoNumbers Buttons
    static System::TermInfoNumbers _get_Buttons();
    // Set static field: static public System.TermInfoNumbers Buttons
    static void _set_Buttons(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers BitImageEntwining
    static constexpr const int BitImageEntwining = 31;
    // Get static field: static public System.TermInfoNumbers BitImageEntwining
    static System::TermInfoNumbers _get_BitImageEntwining();
    // Set static field: static public System.TermInfoNumbers BitImageEntwining
    static void _set_BitImageEntwining(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers BitImageType
    static constexpr const int BitImageType = 32;
    // Get static field: static public System.TermInfoNumbers BitImageType
    static System::TermInfoNumbers _get_BitImageType();
    // Set static field: static public System.TermInfoNumbers BitImageType
    static void _set_BitImageType(System::TermInfoNumbers value);
    // static field const value: static public System.TermInfoNumbers Last
    static constexpr const int Last = 33;
    // Get static field: static public System.TermInfoNumbers Last
    static System::TermInfoNumbers _get_Last();
    // Set static field: static public System.TermInfoNumbers Last
    static void _set_Last(System::TermInfoNumbers value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // System.TermInfoNumbers
  #pragma pack(pop)
  static check_size<sizeof(TermInfoNumbers), 0 + sizeof(int)> __System_TermInfoNumbersSizeCheck;
  static_assert(sizeof(TermInfoNumbers) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TermInfoNumbers, "System", "TermInfoNumbers");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
