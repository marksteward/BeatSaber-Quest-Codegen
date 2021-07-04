// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Match
  class Match;
  // Forward declaring type: Regex
  class Regex;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexRunner
  // [EditorBrowsableAttribute] Offset: D8764C
  class RegexRunner : public ::Il2CppObject {
    public:
    // protected internal System.Int32 runtextbeg
    // Size: 0x4
    // Offset: 0x10
    int runtextbeg;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected internal System.Int32 runtextend
    // Size: 0x4
    // Offset: 0x14
    int runtextend;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected internal System.Int32 runtextstart
    // Size: 0x4
    // Offset: 0x18
    int runtextstart;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: runtextstart and: runtext
    char __padding2[0x4] = {};
    // protected internal System.String runtext
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* runtext;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected internal System.Int32 runtextpos
    // Size: 0x4
    // Offset: 0x28
    int runtextpos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: runtextpos and: runtrack
    char __padding4[0x4] = {};
    // protected internal System.Int32[] runtrack
    // Size: 0x8
    // Offset: 0x30
    ::Array<int>* runtrack;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // protected internal System.Int32 runtrackpos
    // Size: 0x4
    // Offset: 0x38
    int runtrackpos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: runtrackpos and: runstack
    char __padding6[0x4] = {};
    // protected internal System.Int32[] runstack
    // Size: 0x8
    // Offset: 0x40
    ::Array<int>* runstack;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // protected internal System.Int32 runstackpos
    // Size: 0x4
    // Offset: 0x48
    int runstackpos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: runstackpos and: runcrawl
    char __padding8[0x4] = {};
    // protected internal System.Int32[] runcrawl
    // Size: 0x8
    // Offset: 0x50
    ::Array<int>* runcrawl;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // protected internal System.Int32 runcrawlpos
    // Size: 0x4
    // Offset: 0x58
    int runcrawlpos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected internal System.Int32 runtrackcount
    // Size: 0x4
    // Offset: 0x5C
    int runtrackcount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected internal System.Text.RegularExpressions.Match runmatch
    // Size: 0x8
    // Offset: 0x60
    System::Text::RegularExpressions::Match* runmatch;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::Match*) == 0x8);
    // protected internal System.Text.RegularExpressions.Regex runregex
    // Size: 0x8
    // Offset: 0x68
    System::Text::RegularExpressions::Regex* runregex;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::Regex*) == 0x8);
    // private System.Int32 timeout
    // Size: 0x4
    // Offset: 0x70
    int timeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean ignoreTimeout
    // Size: 0x1
    // Offset: 0x74
    bool ignoreTimeout;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ignoreTimeout and: timeoutOccursAt
    char __padding15[0x3] = {};
    // private System.Int32 timeoutOccursAt
    // Size: 0x4
    // Offset: 0x78
    int timeoutOccursAt;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 timeoutChecksToSkip
    // Size: 0x4
    // Offset: 0x7C
    int timeoutChecksToSkip;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RegexRunner
    RegexRunner(int runtextbeg_ = {}, int runtextend_ = {}, int runtextstart_ = {}, ::Il2CppString* runtext_ = {}, int runtextpos_ = {}, ::Array<int>* runtrack_ = {}, int runtrackpos_ = {}, ::Array<int>* runstack_ = {}, int runstackpos_ = {}, ::Array<int>* runcrawl_ = {}, int runcrawlpos_ = {}, int runtrackcount_ = {}, System::Text::RegularExpressions::Match* runmatch_ = {}, System::Text::RegularExpressions::Regex* runregex_ = {}, int timeout_ = {}, bool ignoreTimeout_ = {}, int timeoutOccursAt_ = {}, int timeoutChecksToSkip_ = {}) noexcept : runtextbeg{runtextbeg_}, runtextend{runtextend_}, runtextstart{runtextstart_}, runtext{runtext_}, runtextpos{runtextpos_}, runtrack{runtrack_}, runtrackpos{runtrackpos_}, runstack{runstack_}, runstackpos{runstackpos_}, runcrawl{runcrawl_}, runcrawlpos{runcrawlpos_}, runtrackcount{runtrackcount_}, runmatch{runmatch_}, runregex{runregex_}, timeout{timeout_}, ignoreTimeout{ignoreTimeout_}, timeoutOccursAt{timeoutOccursAt_}, timeoutChecksToSkip{timeoutChecksToSkip_} {}
    // protected internal System.Text.RegularExpressions.Match Scan(System.Text.RegularExpressions.Regex regex, System.String text, System.Int32 textbeg, System.Int32 textend, System.Int32 textstart, System.Int32 prevlen, System.Boolean quick, System.TimeSpan timeout)
    // Offset: 0x1997068
    System::Text::RegularExpressions::Match* Scan(System::Text::RegularExpressions::Regex* regex, ::Il2CppString* text, int textbeg, int textend, int textstart, int prevlen, bool quick, System::TimeSpan timeout);
    // private System.Void StartTimeoutWatch()
    // Offset: 0x19973AC
    void StartTimeoutWatch();
    // protected System.Void CheckTimeout()
    // Offset: 0x19900D0
    void CheckTimeout();
    // private System.Void DoCheckTimeout()
    // Offset: 0x1997608
    void DoCheckTimeout();
    // protected System.Void Go()
    // Offset: 0xFFFFFFFF
    void Go();
    // protected System.Boolean FindFirstChar()
    // Offset: 0xFFFFFFFF
    bool FindFirstChar();
    // protected System.Void InitTrackCount()
    // Offset: 0xFFFFFFFF
    void InitTrackCount();
    // private System.Void InitMatch()
    // Offset: 0x19973F0
    void InitMatch();
    // private System.Text.RegularExpressions.Match TidyMatch(System.Boolean quick)
    // Offset: 0x19975BC
    System::Text::RegularExpressions::Match* TidyMatch(bool quick);
    // protected System.Void EnsureStorage()
    // Offset: 0x198DF9C
    void EnsureStorage();
    // protected System.Boolean IsBoundary(System.Int32 index, System.Int32 startpos, System.Int32 endpos)
    // Offset: 0x1990308
    bool IsBoundary(int index, int startpos, int endpos);
    // protected System.Boolean IsECMABoundary(System.Int32 index, System.Int32 startpos, System.Int32 endpos)
    // Offset: 0x1990428
    bool IsECMABoundary(int index, int startpos, int endpos);
    // protected System.Void DoubleTrack()
    // Offset: 0x199779C
    void DoubleTrack();
    // protected System.Void DoubleStack()
    // Offset: 0x19976F4
    void DoubleStack();
    // protected System.Void DoubleCrawl()
    // Offset: 0x1997844
    void DoubleCrawl();
    // protected System.Void Crawl(System.Int32 i)
    // Offset: 0x19978EC
    void Crawl(int i);
    // protected System.Int32 Popcrawl()
    // Offset: 0x1997954
    int Popcrawl();
    // protected System.Int32 Crawlpos()
    // Offset: 0x19902E4
    int Crawlpos();
    // protected System.Void Capture(System.Int32 capnum, System.Int32 start, System.Int32 end)
    // Offset: 0x199023C
    void Capture(int capnum, int start, int end);
    // protected System.Void TransferCapture(System.Int32 capnum, System.Int32 uncapnum, System.Int32 start, System.Int32 end)
    // Offset: 0x1990118
    void TransferCapture(int capnum, int uncapnum, int start, int end);
    // protected System.Void Uncapture()
    // Offset: 0x19902A8
    void Uncapture();
    // protected System.Boolean IsMatched(System.Int32 cap)
    // Offset: 0x19900F8
    bool IsMatched(int cap);
    // protected System.Int32 MatchIndex(System.Int32 cap)
    // Offset: 0x1990548
    int MatchIndex(int cap);
    // protected System.Int32 MatchLength(System.Int32 cap)
    // Offset: 0x1990568
    int MatchLength(int cap);
    // protected internal System.Void .ctor()
    // Offset: 0x198DE64
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexRunner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexRunner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexRunner*, creationType>()));
    }
  }; // System.Text.RegularExpressions.RegexRunner
  #pragma pack(pop)
  static check_size<sizeof(RegexRunner), 124 + sizeof(int)> __System_Text_RegularExpressions_RegexRunnerSizeCheck;
  static_assert(sizeof(RegexRunner) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexRunner*, "System.Text.RegularExpressions", "RegexRunner");
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::Scan
// Il2CppName: Scan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::StartTimeoutWatch
// Il2CppName: StartTimeoutWatch
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::CheckTimeout
// Il2CppName: CheckTimeout
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::DoCheckTimeout
// Il2CppName: DoCheckTimeout
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::Go
// Il2CppName: Go
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::FindFirstChar
// Il2CppName: FindFirstChar
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::InitTrackCount
// Il2CppName: InitTrackCount
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::InitMatch
// Il2CppName: InitMatch
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::TidyMatch
// Il2CppName: TidyMatch
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::EnsureStorage
// Il2CppName: EnsureStorage
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::IsBoundary
// Il2CppName: IsBoundary
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::IsECMABoundary
// Il2CppName: IsECMABoundary
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::DoubleTrack
// Il2CppName: DoubleTrack
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::DoubleStack
// Il2CppName: DoubleStack
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::DoubleCrawl
// Il2CppName: DoubleCrawl
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::Crawl
// Il2CppName: Crawl
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::Popcrawl
// Il2CppName: Popcrawl
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::Crawlpos
// Il2CppName: Crawlpos
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::Capture
// Il2CppName: Capture
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::TransferCapture
// Il2CppName: TransferCapture
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::Uncapture
// Il2CppName: Uncapture
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::IsMatched
// Il2CppName: IsMatched
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::MatchIndex
// Il2CppName: MatchIndex
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::MatchLength
// Il2CppName: MatchLength
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexRunner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
