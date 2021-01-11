// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Text.RegularExpressions.RegexOptions
#include "System/Text/RegularExpressions/RegexOptions.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexRunnerFactory
  class RegexRunnerFactory;
  // Forward declaring type: ExclusiveReference
  class ExclusiveReference;
  // Forward declaring type: SharedReference
  class SharedReference;
  // Forward declaring type: RegexCode
  class RegexCode;
  // Forward declaring type: CachedCodeEntry
  class CachedCodeEntry;
  // Forward declaring type: Match
  class Match;
  // Forward declaring type: MatchEvaluator
  class MatchEvaluator;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.Regex
  // [] Offset: FFFFFFFF
  class Regex : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // protected internal System.String pattern
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* pattern;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected internal System.Text.RegularExpressions.RegexRunnerFactory factory
    // Size: 0x8
    // Offset: 0x18
    System::Text::RegularExpressions::RegexRunnerFactory* factory;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexRunnerFactory*) == 0x8);
    // protected internal System.Text.RegularExpressions.RegexOptions roptions
    // Size: 0x4
    // Offset: 0x20
    System::Text::RegularExpressions::RegexOptions roptions;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexOptions) == 0x4);
    // Padding between fields: roptions and: internalMatchTimeout
    char __padding2[0x4] = {};
    // [OptionalFieldAttribute] Offset: 0xD45F5C
    // protected internal System.TimeSpan internalMatchTimeout
    // Size: 0x8
    // Offset: 0x28
    System::TimeSpan internalMatchTimeout;
    // Field size check
    static_assert(sizeof(System::TimeSpan) == 0x8);
    // protected internal System.Collections.Hashtable caps
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Hashtable* caps;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // protected internal System.Collections.Hashtable capnames
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Hashtable* capnames;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // protected internal System.String[] capslist
    // Size: 0x8
    // Offset: 0x40
    ::Array<::Il2CppString*>* capslist;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // protected internal System.Int32 capsize
    // Size: 0x4
    // Offset: 0x48
    int capsize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: capsize and: runnerref
    char __padding7[0x4] = {};
    // System.Text.RegularExpressions.ExclusiveReference runnerref
    // Size: 0x8
    // Offset: 0x50
    System::Text::RegularExpressions::ExclusiveReference* runnerref;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::ExclusiveReference*) == 0x8);
    // System.Text.RegularExpressions.SharedReference replref
    // Size: 0x8
    // Offset: 0x58
    System::Text::RegularExpressions::SharedReference* replref;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::SharedReference*) == 0x8);
    // System.Text.RegularExpressions.RegexCode code
    // Size: 0x8
    // Offset: 0x60
    System::Text::RegularExpressions::RegexCode* code;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexCode*) == 0x8);
    // System.Boolean refsInitialized
    // Size: 0x1
    // Offset: 0x68
    bool refsInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Regex
    Regex(::Il2CppString* pattern_ = {}, System::Text::RegularExpressions::RegexRunnerFactory* factory_ = {}, System::Text::RegularExpressions::RegexOptions roptions_ = {}, System::TimeSpan internalMatchTimeout_ = {}, System::Collections::Hashtable* caps_ = {}, System::Collections::Hashtable* capnames_ = {}, ::Array<::Il2CppString*>* capslist_ = {}, int capsize_ = {}, System::Text::RegularExpressions::ExclusiveReference* runnerref_ = {}, System::Text::RegularExpressions::SharedReference* replref_ = {}, System::Text::RegularExpressions::RegexCode* code_ = {}, bool refsInitialized_ = {}) noexcept : pattern{pattern_}, factory{factory_}, roptions{roptions_}, internalMatchTimeout{internalMatchTimeout_}, caps{caps_}, capnames{capnames_}, capslist{capslist_}, capsize{capsize_}, runnerref{runnerref_}, replref{replref_}, code{code_}, refsInitialized{refsInitialized_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Get static field: static private readonly System.TimeSpan MaximumMatchTimeout
    static System::TimeSpan _get_MaximumMatchTimeout();
    // Set static field: static private readonly System.TimeSpan MaximumMatchTimeout
    static void _set_MaximumMatchTimeout(System::TimeSpan value);
    // Get static field: static public readonly System.TimeSpan InfiniteMatchTimeout
    static System::TimeSpan _get_InfiniteMatchTimeout();
    // Set static field: static public readonly System.TimeSpan InfiniteMatchTimeout
    static void _set_InfiniteMatchTimeout(System::TimeSpan value);
    // Get static field: static readonly System.TimeSpan FallbackDefaultMatchTimeout
    static System::TimeSpan _get_FallbackDefaultMatchTimeout();
    // Set static field: static readonly System.TimeSpan FallbackDefaultMatchTimeout
    static void _set_FallbackDefaultMatchTimeout(System::TimeSpan value);
    // Get static field: static readonly System.TimeSpan DefaultMatchTimeout
    static System::TimeSpan _get_DefaultMatchTimeout();
    // Set static field: static readonly System.TimeSpan DefaultMatchTimeout
    static void _set_DefaultMatchTimeout(System::TimeSpan value);
    // Get static field: static System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> livecode
    static System::Collections::Generic::LinkedList_1<System::Text::RegularExpressions::CachedCodeEntry*>* _get_livecode();
    // Set static field: static System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> livecode
    static void _set_livecode(System::Collections::Generic::LinkedList_1<System::Text::RegularExpressions::CachedCodeEntry*>* value);
    // Get static field: static System.Int32 cacheSize
    static int _get_cacheSize();
    // Set static field: static System.Int32 cacheSize
    static void _set_cacheSize(int value);
    // public System.Void .ctor(System.String pattern)
    // Offset: 0x146EBD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Regex* New_ctor(::Il2CppString* pattern) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::Regex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Regex*, creationType>(pattern)));
    }
    // public System.Void .ctor(System.String pattern, System.Text.RegularExpressions.RegexOptions options)
    // Offset: 0x146F0F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Regex* New_ctor(::Il2CppString* pattern, System::Text::RegularExpressions::RegexOptions options) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::Regex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Regex*, creationType>(pattern, options)));
    }
    // private System.Void .ctor(System.String pattern, System.Text.RegularExpressions.RegexOptions options, System.TimeSpan matchTimeout, System.Boolean useCache)
    // Offset: 0x146EC60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Regex* New_ctor(::Il2CppString* pattern, System::Text::RegularExpressions::RegexOptions options, System::TimeSpan matchTimeout, bool useCache) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::Regex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Regex*, creationType>(pattern, options, matchTimeout, useCache)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x146FA08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Regex* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::Regex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Regex*, creationType>(info, context)));
    }
    // static protected internal System.Void ValidateMatchTimeout(System.TimeSpan matchTimeout)
    // Offset: 0x146F17C
    static void ValidateMatchTimeout(System::TimeSpan matchTimeout);
    // static private System.TimeSpan InitDefaultMatchTimeout()
    // Offset: 0x146FC38
    static System::TimeSpan InitDefaultMatchTimeout();
    // public System.Text.RegularExpressions.RegexOptions get_Options()
    // Offset: 0x146FE90
    System::Text::RegularExpressions::RegexOptions get_Options();
    // public System.TimeSpan get_MatchTimeout()
    // Offset: 0x146FE98
    System::TimeSpan get_MatchTimeout();
    // public System.Boolean get_RightToLeft()
    // Offset: 0x146FEA0
    bool get_RightToLeft();
    // public System.String GroupNameFromNumber(System.Int32 i)
    // Offset: 0x146D3D0
    ::Il2CppString* GroupNameFromNumber(int i);
    // static public System.Boolean IsMatch(System.String input, System.String pattern)
    // Offset: 0x146FEC0
    static bool IsMatch(::Il2CppString* input, ::Il2CppString* pattern);
    // static public System.Boolean IsMatch(System.String input, System.String pattern, System.Text.RegularExpressions.RegexOptions options, System.TimeSpan matchTimeout)
    // Offset: 0x146FF44
    static bool IsMatch(::Il2CppString* input, ::Il2CppString* pattern, System::Text::RegularExpressions::RegexOptions options, System::TimeSpan matchTimeout);
    // public System.Boolean IsMatch(System.String input)
    // Offset: 0x146FFD8
    bool IsMatch(::Il2CppString* input);
    // public System.Boolean IsMatch(System.String input, System.Int32 startat)
    // Offset: 0x1470080
    bool IsMatch(::Il2CppString* input, int startat);
    // static public System.Text.RegularExpressions.Match Match(System.String input, System.String pattern)
    // Offset: 0x1470138
    static System::Text::RegularExpressions::Match* Match(::Il2CppString* input, ::Il2CppString* pattern);
    // static public System.Text.RegularExpressions.Match Match(System.String input, System.String pattern, System.Text.RegularExpressions.RegexOptions options, System.TimeSpan matchTimeout)
    // Offset: 0x14701BC
    static System::Text::RegularExpressions::Match* Match(::Il2CppString* input, ::Il2CppString* pattern, System::Text::RegularExpressions::RegexOptions options, System::TimeSpan matchTimeout);
    // public System.Text.RegularExpressions.Match Match(System.String input)
    // Offset: 0x1470250
    System::Text::RegularExpressions::Match* Match(::Il2CppString* input);
    // public System.Text.RegularExpressions.Match Match(System.String input, System.Int32 startat)
    // Offset: 0x14702F8
    System::Text::RegularExpressions::Match* Match(::Il2CppString* input, int startat);
    // public System.String Replace(System.String input, System.Text.RegularExpressions.MatchEvaluator evaluator)
    // Offset: 0x14703A4
    ::Il2CppString* Replace(::Il2CppString* input, System::Text::RegularExpressions::MatchEvaluator* evaluator);
    // public System.String Replace(System.String input, System.Text.RegularExpressions.MatchEvaluator evaluator, System.Int32 count, System.Int32 startat)
    // Offset: 0x1470458
    ::Il2CppString* Replace(::Il2CppString* input, System::Text::RegularExpressions::MatchEvaluator* evaluator, int count, int startat);
    // protected System.Void InitializeReferences()
    // Offset: 0x146F524
    void InitializeReferences();
    // System.Text.RegularExpressions.Match Run(System.Boolean quick, System.Int32 prevlen, System.String input, System.Int32 beginning, System.Int32 length, System.Int32 startat)
    // Offset: 0x146DB78
    System::Text::RegularExpressions::Match* Run(bool quick, int prevlen, ::Il2CppString* input, int beginning, int length, int startat);
    // static private System.Text.RegularExpressions.CachedCodeEntry LookupCachedAndUpdate(System.String key)
    // Offset: 0x146F2EC
    static System::Text::RegularExpressions::CachedCodeEntry* LookupCachedAndUpdate(::Il2CppString* key);
    // private System.Text.RegularExpressions.CachedCodeEntry CacheCode(System.String key)
    // Offset: 0x146F618
    System::Text::RegularExpressions::CachedCodeEntry* CacheCode(::Il2CppString* key);
    // protected System.Boolean UseOptionR()
    // Offset: 0x146FEAC
    bool UseOptionR();
    // System.Boolean UseOptionInvariant()
    // Offset: 0x1470510
    bool UseOptionInvariant();
    // static private System.Void .cctor()
    // Offset: 0x147051C
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x146EB5C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Regex* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::Regex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Regex*, creationType>()));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x146FB64
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* si, System::Runtime::Serialization::StreamingContext context);
    // public override System.String ToString()
    // Offset: 0x146FEB8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Text.RegularExpressions.Regex
  static check_size<sizeof(Regex), 104 + sizeof(bool)> __System_Text_RegularExpressions_RegexSizeCheck;
  static_assert(sizeof(Regex) == 0x69);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::Regex*, "System.Text.RegularExpressions", "Regex");
