// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.CookieToken
#include "System/Net/CookieToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CookieTokenizer
  class CookieTokenizer : public ::Il2CppObject {
    public:
    // Nested type: System::Net::CookieTokenizer::RecognizedAttribute
    struct RecognizedAttribute;
    // Size: 0xC
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Net.CookieTokenizer/RecognizedAttribute
    struct RecognizedAttribute/*, public System::ValueType*/ {
      public:
      // private System.String m_name
      // Size: 0x8
      // Offset: 0x0
      ::Il2CppString* m_name;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // private System.Net.CookieToken m_token
      // Size: 0x4
      // Offset: 0x8
      System::Net::CookieToken m_token;
      // Field size check
      static_assert(sizeof(System::Net::CookieToken) == 0x4);
      // Creating value type constructor for type: RecognizedAttribute
      constexpr RecognizedAttribute(::Il2CppString* m_name_ = {}, System::Net::CookieToken m_token_ = {}) noexcept : m_name{m_name_}, m_token{m_token_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // System.Void .ctor(System.String name, System.Net.CookieToken token)
      // Offset: 0xEF9FE4
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  RecognizedAttribute(::Il2CppString* name, System::Net::CookieToken token)
      // System.Net.CookieToken get_Token()
      // Offset: 0xEF9FF0
      System::Net::CookieToken get_Token();
      // System.Boolean IsEqualTo(System.String value)
      // Offset: 0xEF9FF8
      bool IsEqualTo(::Il2CppString* value);
    }; // System.Net.CookieTokenizer/RecognizedAttribute
    #pragma pack(pop)
    static check_size<sizeof(CookieTokenizer::RecognizedAttribute), 8 + sizeof(System::Net::CookieToken)> __System_Net_CookieTokenizer_RecognizedAttributeSizeCheck;
    static_assert(sizeof(CookieTokenizer::RecognizedAttribute) == 0xC);
    // private System.Boolean m_eofCookie
    // Size: 0x1
    // Offset: 0x10
    bool m_eofCookie;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_eofCookie and: m_index
    char __padding0[0x3] = {};
    // private System.Int32 m_index
    // Size: 0x4
    // Offset: 0x14
    int m_index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_length
    // Size: 0x4
    // Offset: 0x18
    int m_length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_length and: m_name
    char __padding2[0x4] = {};
    // private System.String m_name
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* m_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean m_quoted
    // Size: 0x1
    // Offset: 0x28
    bool m_quoted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_quoted and: m_start
    char __padding4[0x3] = {};
    // private System.Int32 m_start
    // Size: 0x4
    // Offset: 0x2C
    int m_start;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Net.CookieToken m_token
    // Size: 0x4
    // Offset: 0x30
    System::Net::CookieToken m_token;
    // Field size check
    static_assert(sizeof(System::Net::CookieToken) == 0x4);
    // private System.Int32 m_tokenLength
    // Size: 0x4
    // Offset: 0x34
    int m_tokenLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String m_tokenStream
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* m_tokenStream;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_value
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* m_value;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: CookieTokenizer
    CookieTokenizer(bool m_eofCookie_ = {}, int m_index_ = {}, int m_length_ = {}, ::Il2CppString* m_name_ = {}, bool m_quoted_ = {}, int m_start_ = {}, System::Net::CookieToken m_token_ = {}, int m_tokenLength_ = {}, ::Il2CppString* m_tokenStream_ = {}, ::Il2CppString* m_value_ = {}) noexcept : m_eofCookie{m_eofCookie_}, m_index{m_index_}, m_length{m_length_}, m_name{m_name_}, m_quoted{m_quoted_}, m_start{m_start_}, m_token{m_token_}, m_tokenLength{m_tokenLength_}, m_tokenStream{m_tokenStream_}, m_value{m_value_} {}
    // Get static field: static private System.Net.CookieTokenizer/RecognizedAttribute[] RecognizedAttributes
    static ::Array<System::Net::CookieTokenizer::RecognizedAttribute>* _get_RecognizedAttributes();
    // Set static field: static private System.Net.CookieTokenizer/RecognizedAttribute[] RecognizedAttributes
    static void _set_RecognizedAttributes(::Array<System::Net::CookieTokenizer::RecognizedAttribute>* value);
    // Get static field: static private System.Net.CookieTokenizer/RecognizedAttribute[] RecognizedServerAttributes
    static ::Array<System::Net::CookieTokenizer::RecognizedAttribute>* _get_RecognizedServerAttributes();
    // Set static field: static private System.Net.CookieTokenizer/RecognizedAttribute[] RecognizedServerAttributes
    static void _set_RecognizedServerAttributes(::Array<System::Net::CookieTokenizer::RecognizedAttribute>* value);
    // System.Void .ctor(System.String tokenStream)
    // Offset: 0x16B3C10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CookieTokenizer* New_ctor(::Il2CppString* tokenStream) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::CookieTokenizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CookieTokenizer*, creationType>(tokenStream)));
    }
    // System.Boolean get_EndOfCookie()
    // Offset: 0x16B3D60
    bool get_EndOfCookie();
    // System.Void set_EndOfCookie(System.Boolean value)
    // Offset: 0x16B3D68
    void set_EndOfCookie(bool value);
    // System.Boolean get_Eof()
    // Offset: 0x16B3D50
    bool get_Eof();
    // System.String get_Name()
    // Offset: 0x16B3D74
    ::Il2CppString* get_Name();
    // System.Void set_Name(System.String value)
    // Offset: 0x16B3D7C
    void set_Name(::Il2CppString* value);
    // System.Boolean get_Quoted()
    // Offset: 0x16B3D84
    bool get_Quoted();
    // System.Void set_Quoted(System.Boolean value)
    // Offset: 0x16B3D8C
    void set_Quoted(bool value);
    // System.Net.CookieToken get_Token()
    // Offset: 0x16B3D98
    System::Net::CookieToken get_Token();
    // System.Void set_Token(System.Net.CookieToken value)
    // Offset: 0x16B3DA0
    void set_Token(System::Net::CookieToken value);
    // System.String get_Value()
    // Offset: 0x16B3DA8
    ::Il2CppString* get_Value();
    // System.Void set_Value(System.String value)
    // Offset: 0x16B3DB0
    void set_Value(::Il2CppString* value);
    // System.String Extract()
    // Offset: 0x16B3DB8
    ::Il2CppString* Extract();
    // System.Net.CookieToken FindNext(System.Boolean ignoreComma, System.Boolean ignoreEquals)
    // Offset: 0x16B3E48
    System::Net::CookieToken FindNext(bool ignoreComma, bool ignoreEquals);
    // System.Net.CookieToken Next(System.Boolean first, System.Boolean parseResponseCookies)
    // Offset: 0x16B3C4C
    System::Net::CookieToken Next(bool first, bool parseResponseCookies);
    // System.Void Reset()
    // Offset: 0x16B4104
    void Reset();
    // System.Net.CookieToken TokenFromName(System.Boolean parseResponseCookies)
    // Offset: 0x16B417C
    System::Net::CookieToken TokenFromName(bool parseResponseCookies);
    // static private System.Void .cctor()
    // Offset: 0x16B43AC
    static void _cctor();
  }; // System.Net.CookieTokenizer
  #pragma pack(pop)
  static check_size<sizeof(CookieTokenizer), 64 + sizeof(::Il2CppString*)> __System_Net_CookieTokenizerSizeCheck;
  static_assert(sizeof(CookieTokenizer) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::CookieTokenizer*, "System.Net", "CookieTokenizer");
DEFINE_IL2CPP_ARG_TYPE(System::Net::CookieTokenizer::RecognizedAttribute, "System.Net", "CookieTokenizer/RecognizedAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::CookieTokenizer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::CookieTokenizer::get_EndOfCookie
// Il2CppName: get_EndOfCookie
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CookieTokenizer::*)()>(&System::Net::CookieTokenizer::get_EndOfCookie)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "get_EndOfCookie", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::set_EndOfCookie
// Il2CppName: set_EndOfCookie
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CookieTokenizer::*)(bool)>(&System::Net::CookieTokenizer::set_EndOfCookie)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "set_EndOfCookie", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::get_Eof
// Il2CppName: get_Eof
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CookieTokenizer::*)()>(&System::Net::CookieTokenizer::get_Eof)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "get_Eof", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::CookieTokenizer::*)()>(&System::Net::CookieTokenizer::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CookieTokenizer::*)(::Il2CppString*)>(&System::Net::CookieTokenizer::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::get_Quoted
// Il2CppName: get_Quoted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CookieTokenizer::*)()>(&System::Net::CookieTokenizer::get_Quoted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "get_Quoted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::set_Quoted
// Il2CppName: set_Quoted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CookieTokenizer::*)(bool)>(&System::Net::CookieTokenizer::set_Quoted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "set_Quoted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::get_Token
// Il2CppName: get_Token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::CookieToken (System::Net::CookieTokenizer::*)()>(&System::Net::CookieTokenizer::get_Token)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "get_Token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::set_Token
// Il2CppName: set_Token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CookieTokenizer::*)(System::Net::CookieToken)>(&System::Net::CookieTokenizer::set_Token)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "CookieToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "set_Token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::CookieTokenizer::*)()>(&System::Net::CookieTokenizer::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CookieTokenizer::*)(::Il2CppString*)>(&System::Net::CookieTokenizer::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::Extract
// Il2CppName: Extract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::CookieTokenizer::*)()>(&System::Net::CookieTokenizer::Extract)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "Extract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::FindNext
// Il2CppName: FindNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::CookieToken (System::Net::CookieTokenizer::*)(bool, bool)>(&System::Net::CookieTokenizer::FindNext)> {
  static const MethodInfo* get() {
    static auto* ignoreComma = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* ignoreEquals = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "FindNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ignoreComma, ignoreEquals});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::Next
// Il2CppName: Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::CookieToken (System::Net::CookieTokenizer::*)(bool, bool)>(&System::Net::CookieTokenizer::Next)> {
  static const MethodInfo* get() {
    static auto* first = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parseResponseCookies = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{first, parseResponseCookies});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CookieTokenizer::*)()>(&System::Net::CookieTokenizer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::TokenFromName
// Il2CppName: TokenFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::CookieToken (System::Net::CookieTokenizer::*)(bool)>(&System::Net::CookieTokenizer::TokenFromName)> {
  static const MethodInfo* get() {
    static auto* parseResponseCookies = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), "TokenFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parseResponseCookies});
  }
};
// Writing MetadataGetter for method: System::Net::CookieTokenizer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::CookieTokenizer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieTokenizer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
