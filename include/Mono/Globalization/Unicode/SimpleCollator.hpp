// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Globalization::Unicode
namespace Mono::Globalization::Unicode {
  // Forward declaring type: CodePointIndexer
  class CodePointIndexer;
  // Forward declaring type: Contraction
  class Contraction;
  // Forward declaring type: Level2Map
  class Level2Map;
  // Forward declaring type: SortKeyBuffer
  class SortKeyBuffer;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: TextInfo
  class TextInfo;
  // Forward declaring type: CultureInfo
  class CultureInfo;
  // Forward declaring type: CompareOptions
  struct CompareOptions;
  // Forward declaring type: SortKey
  class SortKey;
}
// Completed forward declares
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x5D
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Globalization.Unicode.SimpleCollator
  // [] Offset: FFFFFFFF
  class SimpleCollator : public ::Il2CppObject {
    public:
    // Nested type: Mono::Globalization::Unicode::SimpleCollator::Context
    struct Context;
    // Nested type: Mono::Globalization::Unicode::SimpleCollator::PreviousInfo
    struct PreviousInfo;
    // Nested type: Mono::Globalization::Unicode::SimpleCollator::Escape
    struct Escape;
    // Nested type: Mono::Globalization::Unicode::SimpleCollator::ExtenderType
    struct ExtenderType;
    // private readonly System.Globalization.TextInfo textInfo
    // Size: 0x8
    // Offset: 0x10
    System::Globalization::TextInfo* textInfo;
    // Field size check
    static_assert(sizeof(System::Globalization::TextInfo*) == 0x8);
    // private readonly Mono.Globalization.Unicode.CodePointIndexer cjkIndexer
    // Size: 0x8
    // Offset: 0x18
    Mono::Globalization::Unicode::CodePointIndexer* cjkIndexer;
    // Field size check
    static_assert(sizeof(Mono::Globalization::Unicode::CodePointIndexer*) == 0x8);
    // private readonly Mono.Globalization.Unicode.Contraction[] contractions
    // Size: 0x8
    // Offset: 0x20
    ::Array<Mono::Globalization::Unicode::Contraction*>* contractions;
    // Field size check
    static_assert(sizeof(::Array<Mono::Globalization::Unicode::Contraction*>*) == 0x8);
    // private readonly Mono.Globalization.Unicode.Level2Map[] level2Maps
    // Size: 0x8
    // Offset: 0x28
    ::Array<Mono::Globalization::Unicode::Level2Map*>* level2Maps;
    // Field size check
    static_assert(sizeof(::Array<Mono::Globalization::Unicode::Level2Map*>*) == 0x8);
    // private readonly System.Byte[] unsafeFlags
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* unsafeFlags;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Byte* cjkCatTable
    // Size: 0x8
    // Offset: 0x38
    uint8_t* cjkCatTable;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private readonly System.Byte* cjkLv1Table
    // Size: 0x8
    // Offset: 0x40
    uint8_t* cjkLv1Table;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private readonly System.Byte* cjkLv2Table
    // Size: 0x8
    // Offset: 0x48
    uint8_t* cjkLv2Table;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private readonly Mono.Globalization.Unicode.CodePointIndexer cjkLv2Indexer
    // Size: 0x8
    // Offset: 0x50
    Mono::Globalization::Unicode::CodePointIndexer* cjkLv2Indexer;
    // Field size check
    static_assert(sizeof(Mono::Globalization::Unicode::CodePointIndexer*) == 0x8);
    // private readonly System.Int32 lcid
    // Size: 0x4
    // Offset: 0x58
    int lcid;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Boolean frenchSort
    // Size: 0x1
    // Offset: 0x5C
    bool frenchSort;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SimpleCollator
    SimpleCollator(System::Globalization::TextInfo* textInfo_ = {}, Mono::Globalization::Unicode::CodePointIndexer* cjkIndexer_ = {}, ::Array<Mono::Globalization::Unicode::Contraction*>* contractions_ = {}, ::Array<Mono::Globalization::Unicode::Level2Map*>* level2Maps_ = {}, ::Array<uint8_t>* unsafeFlags_ = {}, uint8_t* cjkCatTable_ = {}, uint8_t* cjkLv1Table_ = {}, uint8_t* cjkLv2Table_ = {}, Mono::Globalization::Unicode::CodePointIndexer* cjkLv2Indexer_ = {}, int lcid_ = {}, bool frenchSort_ = {}) noexcept : textInfo{textInfo_}, cjkIndexer{cjkIndexer_}, contractions{contractions_}, level2Maps{level2Maps_}, unsafeFlags{unsafeFlags_}, cjkCatTable{cjkCatTable_}, cjkLv1Table{cjkLv1Table_}, cjkLv2Table{cjkLv2Table_}, cjkLv2Indexer{cjkLv2Indexer_}, lcid{lcid_}, frenchSort{frenchSort_} {}
    // Get static field: static private System.Boolean QuickCheckDisabled
    static bool _get_QuickCheckDisabled();
    // Set static field: static private System.Boolean QuickCheckDisabled
    static void _set_QuickCheckDisabled(bool value);
    // Get static field: static private Mono.Globalization.Unicode.SimpleCollator invariant
    static Mono::Globalization::Unicode::SimpleCollator* _get_invariant();
    // Set static field: static private Mono.Globalization.Unicode.SimpleCollator invariant
    static void _set_invariant(Mono::Globalization::Unicode::SimpleCollator* value);
    // static field const value: static private System.Int32 UnsafeFlagLength
    static constexpr const int UnsafeFlagLength = 96;
    // Get static field: static private System.Int32 UnsafeFlagLength
    static int _get_UnsafeFlagLength();
    // Set static field: static private System.Int32 UnsafeFlagLength
    static void _set_UnsafeFlagLength(int value);
    // public System.Void .ctor(System.Globalization.CultureInfo culture)
    // Offset: 0x151B75C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleCollator* New_ctor(System::Globalization::CultureInfo* culture) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Globalization::Unicode::SimpleCollator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleCollator*, creationType>(culture)));
    }
    // private System.Void SetCJKTable(System.Globalization.CultureInfo culture, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref System.Byte* catTable, ref System.Byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer lv2Indexer, ref System.Byte* lv2Table)
    // Offset: 0x151BABC
    void SetCJKTable(System::Globalization::CultureInfo* culture, Mono::Globalization::Unicode::CodePointIndexer*& cjkIndexer, uint8_t*& catTable, uint8_t*& lv1Table, Mono::Globalization::Unicode::CodePointIndexer*& lv2Indexer, uint8_t*& lv2Table);
    // static private System.Globalization.CultureInfo GetNeutralCulture(System.Globalization.CultureInfo info)
    // Offset: 0x151BBA4
    static System::Globalization::CultureInfo* GetNeutralCulture(System::Globalization::CultureInfo* info);
    // private System.Byte Category(System.Int32 cp)
    // Offset: 0x151BC20
    uint8_t Category(int cp);
    // private System.Byte Level1(System.Int32 cp)
    // Offset: 0x151BCD0
    uint8_t Level1(int cp);
    // private System.Byte Level2(System.Int32 cp, Mono.Globalization.Unicode.SimpleCollator/ExtenderType ext)
    // Offset: 0x151BD80
    uint8_t Level2(int cp, Mono::Globalization::Unicode::SimpleCollator::ExtenderType ext);
    // static private System.Boolean IsHalfKana(System.Int32 cp, System.Globalization.CompareOptions opt)
    // Offset: 0x151BED0
    static bool IsHalfKana(int cp, System::Globalization::CompareOptions opt);
    // private Mono.Globalization.Unicode.Contraction GetContraction(System.String s, System.Int32 start, System.Int32 end)
    // Offset: 0x151BF58
    Mono::Globalization::Unicode::Contraction* GetContraction(::Il2CppString* s, int start, int end);
    // private Mono.Globalization.Unicode.Contraction GetContraction(System.String s, System.Int32 start, System.Int32 end, Mono.Globalization.Unicode.Contraction[] clist)
    // Offset: 0x151C034
    Mono::Globalization::Unicode::Contraction* GetContraction(::Il2CppString* s, int start, int end, ::Array<Mono::Globalization::Unicode::Contraction*>* clist);
    // private Mono.Globalization.Unicode.Contraction GetTailContraction(System.String s, System.Int32 start, System.Int32 end)
    // Offset: 0x151C168
    Mono::Globalization::Unicode::Contraction* GetTailContraction(::Il2CppString* s, int start, int end);
    // private Mono.Globalization.Unicode.Contraction GetTailContraction(System.String s, System.Int32 start, System.Int32 end, Mono.Globalization.Unicode.Contraction[] clist)
    // Offset: 0x151C244
    Mono::Globalization::Unicode::Contraction* GetTailContraction(::Il2CppString* s, int start, int end, ::Array<Mono::Globalization::Unicode::Contraction*>* clist);
    // private System.Int32 FilterOptions(System.Int32 i, System.Globalization.CompareOptions opt)
    // Offset: 0x151C458
    int FilterOptions(int i, System::Globalization::CompareOptions opt);
    // private Mono.Globalization.Unicode.SimpleCollator/ExtenderType GetExtenderType(System.Int32 i)
    // Offset: 0x151C578
    Mono::Globalization::Unicode::SimpleCollator::ExtenderType GetExtenderType(int i);
    // static private System.Byte ToDashTypeValue(Mono.Globalization.Unicode.SimpleCollator/ExtenderType ext, System.Globalization.CompareOptions opt)
    // Offset: 0x151C684
    static uint8_t ToDashTypeValue(Mono::Globalization::Unicode::SimpleCollator::ExtenderType ext, System::Globalization::CompareOptions opt);
    // private System.Int32 FilterExtender(System.Int32 i, Mono.Globalization.Unicode.SimpleCollator/ExtenderType ext, System.Globalization.CompareOptions opt)
    // Offset: 0x151C6A4
    int FilterExtender(int i, Mono::Globalization::Unicode::SimpleCollator::ExtenderType ext, System::Globalization::CompareOptions opt);
    // static private System.Boolean IsIgnorable(System.Int32 i, System.Globalization.CompareOptions opt)
    // Offset: 0x151C8D8
    static bool IsIgnorable(int i, System::Globalization::CompareOptions opt);
    // private System.Boolean IsSafe(System.Int32 i)
    // Offset: 0x151C96C
    bool IsSafe(int i);
    // public System.Globalization.SortKey GetSortKey(System.String s, System.Globalization.CompareOptions options)
    // Offset: 0x151C9D8
    System::Globalization::SortKey* GetSortKey(::Il2CppString* s, System::Globalization::CompareOptions options);
    // public System.Globalization.SortKey GetSortKey(System.String s, System.Int32 start, System.Int32 length, System.Globalization.CompareOptions options)
    // Offset: 0x151C9F8
    System::Globalization::SortKey* GetSortKey(::Il2CppString* s, int start, int length, System::Globalization::CompareOptions options);
    // private System.Void GetSortKey(System.String s, System.Int32 start, System.Int32 end, Mono.Globalization.Unicode.SortKeyBuffer buf, System.Globalization.CompareOptions opt)
    // Offset: 0x151CD20
    void GetSortKey(::Il2CppString* s, int start, int end, Mono::Globalization::Unicode::SortKeyBuffer* buf, System::Globalization::CompareOptions opt);
    // private System.Void FillSortKeyRaw(System.Int32 i, Mono.Globalization.Unicode.SimpleCollator/ExtenderType ext, Mono.Globalization.Unicode.SortKeyBuffer buf, System.Globalization.CompareOptions opt)
    // Offset: 0x151D120
    void FillSortKeyRaw(int i, Mono::Globalization::Unicode::SimpleCollator::ExtenderType ext, Mono::Globalization::Unicode::SortKeyBuffer* buf, System::Globalization::CompareOptions opt);
    // private System.Void FillSurrogateSortKeyRaw(System.Int32 i, Mono.Globalization.Unicode.SortKeyBuffer buf)
    // Offset: 0x151D6D4
    void FillSurrogateSortKeyRaw(int i, Mono::Globalization::Unicode::SortKeyBuffer* buf);
    // System.Int32 Compare(System.String s1, System.Int32 idx1, System.Int32 len1, System.String s2, System.Int32 idx2, System.Int32 len2, System.Globalization.CompareOptions options)
    // Offset: 0x151D824
    int Compare(::Il2CppString* s1, int idx1, int len1, ::Il2CppString* s2, int idx2, int len2, System::Globalization::CompareOptions options);
    // private System.Void ClearBuffer(System.Byte* buffer, System.Int32 size)
    // Offset: 0x151D0E8
    void ClearBuffer(uint8_t* buffer, int size);
    // private System.Int32 CompareInternal(System.String s1, System.Int32 idx1, System.Int32 len1, System.String s2, System.Int32 idx2, System.Int32 len2, out System.Boolean targetConsumed, out System.Boolean sourceConsumed, System.Boolean skipHeadingExtenders, System.Boolean immediateBreakup, ref Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x151D8E4
    int CompareInternal(::Il2CppString* s1, int idx1, int len1, ::Il2CppString* s2, int idx2, int len2, bool& targetConsumed, bool& sourceConsumed, bool skipHeadingExtenders, bool immediateBreakup, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // private System.Int32 CompareFlagPair(System.Boolean b1, System.Boolean b2)
    // Offset: 0x151EC70
    int CompareFlagPair(bool b1, bool b2);
    // public System.Boolean IsPrefix(System.String src, System.String target, System.Globalization.CompareOptions opt)
    // Offset: 0x151EC90
    bool IsPrefix(::Il2CppString* src, ::Il2CppString* target, System::Globalization::CompareOptions opt);
    // public System.Boolean IsPrefix(System.String s, System.String target, System.Int32 start, System.Int32 length, System.Globalization.CompareOptions opt)
    // Offset: 0x151ECB0
    bool IsPrefix(::Il2CppString* s, ::Il2CppString* target, int start, int length, System::Globalization::CompareOptions opt);
    // private System.Boolean IsPrefix(System.String s, System.String target, System.Int32 start, System.Int32 length, System.Boolean skipHeadingExtenders, ref Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x151ED64
    bool IsPrefix(::Il2CppString* s, ::Il2CppString* target, int start, int length, bool skipHeadingExtenders, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // public System.Boolean IsSuffix(System.String src, System.String target, System.Globalization.CompareOptions opt)
    // Offset: 0x151EDD0
    bool IsSuffix(::Il2CppString* src, ::Il2CppString* target, System::Globalization::CompareOptions opt);
    // public System.Boolean IsSuffix(System.String s, System.String target, System.Int32 start, System.Int32 length, System.Globalization.CompareOptions opt)
    // Offset: 0x151EDF0
    bool IsSuffix(::Il2CppString* s, ::Il2CppString* target, int start, int length, System::Globalization::CompareOptions opt);
    // private System.Int32 QuickIndexOf(System.String s, System.String target, System.Int32 start, System.Int32 length, out System.Boolean testWasUnable)
    // Offset: 0x151F068
    int QuickIndexOf(::Il2CppString* s, ::Il2CppString* target, int start, int length, bool& testWasUnable);
    // public System.Int32 IndexOf(System.String s, System.String target, System.Int32 start, System.Int32 length, System.Globalization.CompareOptions opt)
    // Offset: 0x151F1DC
    int IndexOf(::Il2CppString* s, ::Il2CppString* target, int start, int length, System::Globalization::CompareOptions opt);
    // private System.Int32 IndexOfOrdinal(System.String s, System.String target, System.Int32 start, System.Int32 length)
    // Offset: 0x151F89C
    int IndexOfOrdinal(::Il2CppString* s, ::Il2CppString* target, int start, int length);
    // private System.Int32 IndexOfOrdinal(System.String s, System.Char target, System.Int32 start, System.Int32 length)
    // Offset: 0x151F978
    int IndexOfOrdinal(::Il2CppString* s, ::Il2CppChar target, int start, int length);
    // private System.Int32 IndexOfSortKey(System.String s, System.Int32 start, System.Int32 length, System.Byte* sortkey, System.Char target, System.Int32 ti, System.Boolean noLv4, ref Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x151F9E8
    int IndexOfSortKey(::Il2CppString* s, int start, int length, uint8_t* sortkey, ::Il2CppChar target, int ti, bool noLv4, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // private System.Int32 IndexOf(System.String s, System.String target, System.Int32 start, System.Int32 length, System.Byte* targetSortKey, ref Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x151F3C8
    int IndexOf(::Il2CppString* s, ::Il2CppString* target, int start, int length, uint8_t* targetSortKey, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // public System.Int32 LastIndexOf(System.String s, System.String target, System.Int32 start, System.Int32 length, System.Globalization.CompareOptions opt)
    // Offset: 0x151EE8C
    int LastIndexOf(::Il2CppString* s, ::Il2CppString* target, int start, int length, System::Globalization::CompareOptions opt);
    // private System.Int32 LastIndexOfOrdinal(System.String s, System.String target, System.Int32 start, System.Int32 length)
    // Offset: 0x151FC48
    int LastIndexOfOrdinal(::Il2CppString* s, ::Il2CppString* target, int start, int length);
    // private System.Int32 LastIndexOfSortKey(System.String s, System.Int32 start, System.Int32 orgStart, System.Int32 length, System.Byte* sortkey, System.Int32 ti, System.Boolean noLv4, ref Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x15202C4
    int LastIndexOfSortKey(::Il2CppString* s, int start, int orgStart, int length, uint8_t* sortkey, int ti, bool noLv4, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // private System.Int32 LastIndexOf(System.String s, System.String target, System.Int32 start, System.Int32 length, System.Byte* targetSortKey, ref Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x151FD78
    int LastIndexOf(::Il2CppString* s, ::Il2CppString* target, int start, int length, uint8_t* targetSortKey, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // private System.Boolean MatchesForward(System.String s, ref System.Int32 idx, System.Int32 end, System.Int32 ti, System.Byte* sortkey, System.Boolean noLv4, ref Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x151FA88
    bool MatchesForward(::Il2CppString* s, int& idx, int end, int ti, uint8_t* sortkey, bool noLv4, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // private System.Boolean MatchesForwardCore(System.String s, ref System.Int32 idx, System.Int32 end, System.Int32 ti, System.Byte* sortkey, System.Boolean noLv4, Mono.Globalization.Unicode.SimpleCollator/ExtenderType ext, ref Mono.Globalization.Unicode.Contraction ct, ref Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x152053C
    bool MatchesForwardCore(::Il2CppString* s, int& idx, int end, int ti, uint8_t* sortkey, bool noLv4, Mono::Globalization::Unicode::SimpleCollator::ExtenderType ext, Mono::Globalization::Unicode::Contraction*& ct, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // private System.Boolean MatchesPrimitive(System.Globalization.CompareOptions opt, System.Byte* source, System.Int32 si, Mono.Globalization.Unicode.SimpleCollator/ExtenderType ext, System.Byte* target, System.Int32 ti, System.Boolean noLv4)
    // Offset: 0x15208B4
    bool MatchesPrimitive(System::Globalization::CompareOptions opt, uint8_t* source, int si, Mono::Globalization::Unicode::SimpleCollator::ExtenderType ext, uint8_t* target, int ti, bool noLv4);
    // private System.Boolean MatchesBackward(System.String s, ref System.Int32 idx, System.Int32 end, System.Int32 orgStart, System.Int32 ti, System.Byte* sortkey, System.Boolean noLv4, ref Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x1520374
    bool MatchesBackward(::Il2CppString* s, int& idx, int end, int orgStart, int ti, uint8_t* sortkey, bool noLv4, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // private System.Boolean MatchesBackwardCore(System.String s, ref System.Int32 idx, System.Int32 end, System.Int32 orgStart, System.Int32 ti, System.Byte* sortkey, System.Boolean noLv4, Mono.Globalization.Unicode.SimpleCollator/ExtenderType ext, ref Mono.Globalization.Unicode.Contraction ct, ref Mono.Globalization.Unicode.SimpleCollator/Context ctx)
    // Offset: 0x1520B10
    bool MatchesBackwardCore(::Il2CppString* s, int& idx, int end, int orgStart, int ti, uint8_t* sortkey, bool noLv4, Mono::Globalization::Unicode::SimpleCollator::ExtenderType ext, Mono::Globalization::Unicode::Contraction*& ct, Mono::Globalization::Unicode::SimpleCollator::Context& ctx);
    // static private System.Void .cctor()
    // Offset: 0x1521038
    static void _cctor();
  }; // Mono.Globalization.Unicode.SimpleCollator
  static check_size<sizeof(SimpleCollator), 92 + sizeof(bool)> __Mono_Globalization_Unicode_SimpleCollatorSizeCheck;
  static_assert(sizeof(SimpleCollator) == 0x5D);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::SimpleCollator*, "Mono.Globalization.Unicode", "SimpleCollator");
