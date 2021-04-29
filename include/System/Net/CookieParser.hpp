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
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: CookieTokenizer
  class CookieTokenizer;
  // Forward declaring type: Cookie
  class Cookie;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CookieParser
  class CookieParser : public ::Il2CppObject {
    public:
    // private System.Net.CookieTokenizer m_tokenizer
    // Size: 0x8
    // Offset: 0x10
    System::Net::CookieTokenizer* m_tokenizer;
    // Field size check
    static_assert(sizeof(System::Net::CookieTokenizer*) == 0x8);
    // Creating value type constructor for type: CookieParser
    CookieParser(System::Net::CookieTokenizer* m_tokenizer_ = {}) noexcept : m_tokenizer{m_tokenizer_} {}
    // Creating conversion operator: operator System::Net::CookieTokenizer*
    constexpr operator System::Net::CookieTokenizer*() const noexcept {
      return m_tokenizer;
    }
    // System.Void .ctor(System.String cookieString)
    // Offset: 0x14ECE8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CookieParser* New_ctor(::Il2CppString* cookieString) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::CookieParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CookieParser*, creationType>(cookieString)));
    }
    // System.Net.Cookie Get()
    // Offset: 0x14ECF04
    System::Net::Cookie* Get();
    // static System.String CheckQuoted(System.String value)
    // Offset: 0x14E88D4
    static ::Il2CppString* CheckQuoted(::Il2CppString* value);
  }; // System.Net.CookieParser
  #pragma pack(pop)
  static check_size<sizeof(CookieParser), 16 + sizeof(System::Net::CookieTokenizer*)> __System_Net_CookieParserSizeCheck;
  static_assert(sizeof(CookieParser) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::CookieParser*, "System.Net", "CookieParser");
