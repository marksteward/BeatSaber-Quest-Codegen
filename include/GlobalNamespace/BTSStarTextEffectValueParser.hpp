// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BTSStarTextEffectValueParser
  class BTSStarTextEffectValueParser : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BTSStarTextEffectValueParser
    BTSStarTextEffectValueParser() noexcept {}
    // static field const value: static private System.Int32 kTextMask
    static constexpr const int kTextMask = 255;
    // Get static field: static private System.Int32 kTextMask
    static int _get_kTextMask();
    // Set static field: static private System.Int32 kTextMask
    static void _set_kTextMask(int value);
    // static field const value: static private System.Int32 kTextBitOffset
    static constexpr const int kTextBitOffset = 0;
    // Get static field: static private System.Int32 kTextBitOffset
    static int _get_kTextBitOffset();
    // Set static field: static private System.Int32 kTextBitOffset
    static void _set_kTextBitOffset(int value);
    // static field const value: static private System.Int32 kPositionMask
    static constexpr const int kPositionMask = 65280;
    // Get static field: static private System.Int32 kPositionMask
    static int _get_kPositionMask();
    // Set static field: static private System.Int32 kPositionMask
    static void _set_kPositionMask(int value);
    // static field const value: static private System.Int32 kPositionBitOffset
    static constexpr const int kPositionBitOffset = 8;
    // Get static field: static private System.Int32 kPositionBitOffset
    static int _get_kPositionBitOffset();
    // Set static field: static private System.Int32 kPositionBitOffset
    static void _set_kPositionBitOffset(int value);
    // static public System.Int32 GetTextId(System.Int32 value)
    // Offset: 0x1024FA4
    static int GetTextId(int value);
    // static public System.Int32 GetPositionId(System.Int32 value)
    // Offset: 0x1024FAC
    static int GetPositionId(int value);
    // static public System.Int32 MergeValuesIntoOneInt(System.Int32 textId, System.Int32 positionId)
    // Offset: 0x1024FB4
    static int MergeValuesIntoOneInt(int textId, int positionId);
  }; // BTSStarTextEffectValueParser
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSStarTextEffectValueParser*, "", "BTSStarTextEffectValueParser");
