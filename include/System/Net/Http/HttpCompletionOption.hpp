// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.HttpCompletionOption
  // [TokenAttribute] Offset: FFFFFFFF
  struct HttpCompletionOption/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: HttpCompletionOption
    constexpr HttpCompletionOption(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Http.HttpCompletionOption ResponseContentRead
    static constexpr const int ResponseContentRead = 0;
    // Get static field: static public System.Net.Http.HttpCompletionOption ResponseContentRead
    static System::Net::Http::HttpCompletionOption _get_ResponseContentRead();
    // Set static field: static public System.Net.Http.HttpCompletionOption ResponseContentRead
    static void _set_ResponseContentRead(System::Net::Http::HttpCompletionOption value);
    // static field const value: static public System.Net.Http.HttpCompletionOption ResponseHeadersRead
    static constexpr const int ResponseHeadersRead = 1;
    // Get static field: static public System.Net.Http.HttpCompletionOption ResponseHeadersRead
    static System::Net::Http::HttpCompletionOption _get_ResponseHeadersRead();
    // Set static field: static public System.Net.Http.HttpCompletionOption ResponseHeadersRead
    static void _set_ResponseHeadersRead(System::Net::Http::HttpCompletionOption value);
  }; // System.Net.Http.HttpCompletionOption
  #pragma pack(pop)
  static check_size<sizeof(HttpCompletionOption), 0 + sizeof(int)> __System_Net_Http_HttpCompletionOptionSizeCheck;
  static_assert(sizeof(HttpCompletionOption) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpCompletionOption, "System.Net.Http", "HttpCompletionOption");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
