// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpRequestHeader
  // [TokenAttribute] Offset: FFFFFFFF
  struct HttpRequestHeader/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: HttpRequestHeader
    constexpr HttpRequestHeader(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.HttpRequestHeader CacheControl
    static constexpr const int CacheControl = 0;
    // Get static field: static public System.Net.HttpRequestHeader CacheControl
    static System::Net::HttpRequestHeader _get_CacheControl();
    // Set static field: static public System.Net.HttpRequestHeader CacheControl
    static void _set_CacheControl(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Connection
    static constexpr const int Connection = 1;
    // Get static field: static public System.Net.HttpRequestHeader Connection
    static System::Net::HttpRequestHeader _get_Connection();
    // Set static field: static public System.Net.HttpRequestHeader Connection
    static void _set_Connection(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Date
    static constexpr const int Date = 2;
    // Get static field: static public System.Net.HttpRequestHeader Date
    static System::Net::HttpRequestHeader _get_Date();
    // Set static field: static public System.Net.HttpRequestHeader Date
    static void _set_Date(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader KeepAlive
    static constexpr const int KeepAlive = 3;
    // Get static field: static public System.Net.HttpRequestHeader KeepAlive
    static System::Net::HttpRequestHeader _get_KeepAlive();
    // Set static field: static public System.Net.HttpRequestHeader KeepAlive
    static void _set_KeepAlive(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Pragma
    static constexpr const int Pragma = 4;
    // Get static field: static public System.Net.HttpRequestHeader Pragma
    static System::Net::HttpRequestHeader _get_Pragma();
    // Set static field: static public System.Net.HttpRequestHeader Pragma
    static void _set_Pragma(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Trailer
    static constexpr const int Trailer = 5;
    // Get static field: static public System.Net.HttpRequestHeader Trailer
    static System::Net::HttpRequestHeader _get_Trailer();
    // Set static field: static public System.Net.HttpRequestHeader Trailer
    static void _set_Trailer(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader TransferEncoding
    static constexpr const int TransferEncoding = 6;
    // Get static field: static public System.Net.HttpRequestHeader TransferEncoding
    static System::Net::HttpRequestHeader _get_TransferEncoding();
    // Set static field: static public System.Net.HttpRequestHeader TransferEncoding
    static void _set_TransferEncoding(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Upgrade
    static constexpr const int Upgrade = 7;
    // Get static field: static public System.Net.HttpRequestHeader Upgrade
    static System::Net::HttpRequestHeader _get_Upgrade();
    // Set static field: static public System.Net.HttpRequestHeader Upgrade
    static void _set_Upgrade(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Via
    static constexpr const int Via = 8;
    // Get static field: static public System.Net.HttpRequestHeader Via
    static System::Net::HttpRequestHeader _get_Via();
    // Set static field: static public System.Net.HttpRequestHeader Via
    static void _set_Via(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Warning
    static constexpr const int Warning = 9;
    // Get static field: static public System.Net.HttpRequestHeader Warning
    static System::Net::HttpRequestHeader _get_Warning();
    // Set static field: static public System.Net.HttpRequestHeader Warning
    static void _set_Warning(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Allow
    static constexpr const int Allow = 10;
    // Get static field: static public System.Net.HttpRequestHeader Allow
    static System::Net::HttpRequestHeader _get_Allow();
    // Set static field: static public System.Net.HttpRequestHeader Allow
    static void _set_Allow(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader ContentLength
    static constexpr const int ContentLength = 11;
    // Get static field: static public System.Net.HttpRequestHeader ContentLength
    static System::Net::HttpRequestHeader _get_ContentLength();
    // Set static field: static public System.Net.HttpRequestHeader ContentLength
    static void _set_ContentLength(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader ContentType
    static constexpr const int ContentType = 12;
    // Get static field: static public System.Net.HttpRequestHeader ContentType
    static System::Net::HttpRequestHeader _get_ContentType();
    // Set static field: static public System.Net.HttpRequestHeader ContentType
    static void _set_ContentType(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader ContentEncoding
    static constexpr const int ContentEncoding = 13;
    // Get static field: static public System.Net.HttpRequestHeader ContentEncoding
    static System::Net::HttpRequestHeader _get_ContentEncoding();
    // Set static field: static public System.Net.HttpRequestHeader ContentEncoding
    static void _set_ContentEncoding(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader ContentLanguage
    static constexpr const int ContentLanguage = 14;
    // Get static field: static public System.Net.HttpRequestHeader ContentLanguage
    static System::Net::HttpRequestHeader _get_ContentLanguage();
    // Set static field: static public System.Net.HttpRequestHeader ContentLanguage
    static void _set_ContentLanguage(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader ContentLocation
    static constexpr const int ContentLocation = 15;
    // Get static field: static public System.Net.HttpRequestHeader ContentLocation
    static System::Net::HttpRequestHeader _get_ContentLocation();
    // Set static field: static public System.Net.HttpRequestHeader ContentLocation
    static void _set_ContentLocation(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader ContentMd5
    static constexpr const int ContentMd5 = 16;
    // Get static field: static public System.Net.HttpRequestHeader ContentMd5
    static System::Net::HttpRequestHeader _get_ContentMd5();
    // Set static field: static public System.Net.HttpRequestHeader ContentMd5
    static void _set_ContentMd5(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader ContentRange
    static constexpr const int ContentRange = 17;
    // Get static field: static public System.Net.HttpRequestHeader ContentRange
    static System::Net::HttpRequestHeader _get_ContentRange();
    // Set static field: static public System.Net.HttpRequestHeader ContentRange
    static void _set_ContentRange(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Expires
    static constexpr const int Expires = 18;
    // Get static field: static public System.Net.HttpRequestHeader Expires
    static System::Net::HttpRequestHeader _get_Expires();
    // Set static field: static public System.Net.HttpRequestHeader Expires
    static void _set_Expires(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader LastModified
    static constexpr const int LastModified = 19;
    // Get static field: static public System.Net.HttpRequestHeader LastModified
    static System::Net::HttpRequestHeader _get_LastModified();
    // Set static field: static public System.Net.HttpRequestHeader LastModified
    static void _set_LastModified(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Accept
    static constexpr const int Accept = 20;
    // Get static field: static public System.Net.HttpRequestHeader Accept
    static System::Net::HttpRequestHeader _get_Accept();
    // Set static field: static public System.Net.HttpRequestHeader Accept
    static void _set_Accept(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader AcceptCharset
    static constexpr const int AcceptCharset = 21;
    // Get static field: static public System.Net.HttpRequestHeader AcceptCharset
    static System::Net::HttpRequestHeader _get_AcceptCharset();
    // Set static field: static public System.Net.HttpRequestHeader AcceptCharset
    static void _set_AcceptCharset(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader AcceptEncoding
    static constexpr const int AcceptEncoding = 22;
    // Get static field: static public System.Net.HttpRequestHeader AcceptEncoding
    static System::Net::HttpRequestHeader _get_AcceptEncoding();
    // Set static field: static public System.Net.HttpRequestHeader AcceptEncoding
    static void _set_AcceptEncoding(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader AcceptLanguage
    static constexpr const int AcceptLanguage = 23;
    // Get static field: static public System.Net.HttpRequestHeader AcceptLanguage
    static System::Net::HttpRequestHeader _get_AcceptLanguage();
    // Set static field: static public System.Net.HttpRequestHeader AcceptLanguage
    static void _set_AcceptLanguage(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Authorization
    static constexpr const int Authorization = 24;
    // Get static field: static public System.Net.HttpRequestHeader Authorization
    static System::Net::HttpRequestHeader _get_Authorization();
    // Set static field: static public System.Net.HttpRequestHeader Authorization
    static void _set_Authorization(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Cookie
    static constexpr const int Cookie = 25;
    // Get static field: static public System.Net.HttpRequestHeader Cookie
    static System::Net::HttpRequestHeader _get_Cookie();
    // Set static field: static public System.Net.HttpRequestHeader Cookie
    static void _set_Cookie(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Expect
    static constexpr const int Expect = 26;
    // Get static field: static public System.Net.HttpRequestHeader Expect
    static System::Net::HttpRequestHeader _get_Expect();
    // Set static field: static public System.Net.HttpRequestHeader Expect
    static void _set_Expect(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader From
    static constexpr const int From = 27;
    // Get static field: static public System.Net.HttpRequestHeader From
    static System::Net::HttpRequestHeader _get_From();
    // Set static field: static public System.Net.HttpRequestHeader From
    static void _set_From(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Host
    static constexpr const int Host = 28;
    // Get static field: static public System.Net.HttpRequestHeader Host
    static System::Net::HttpRequestHeader _get_Host();
    // Set static field: static public System.Net.HttpRequestHeader Host
    static void _set_Host(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader IfMatch
    static constexpr const int IfMatch = 29;
    // Get static field: static public System.Net.HttpRequestHeader IfMatch
    static System::Net::HttpRequestHeader _get_IfMatch();
    // Set static field: static public System.Net.HttpRequestHeader IfMatch
    static void _set_IfMatch(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader IfModifiedSince
    static constexpr const int IfModifiedSince = 30;
    // Get static field: static public System.Net.HttpRequestHeader IfModifiedSince
    static System::Net::HttpRequestHeader _get_IfModifiedSince();
    // Set static field: static public System.Net.HttpRequestHeader IfModifiedSince
    static void _set_IfModifiedSince(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader IfNoneMatch
    static constexpr const int IfNoneMatch = 31;
    // Get static field: static public System.Net.HttpRequestHeader IfNoneMatch
    static System::Net::HttpRequestHeader _get_IfNoneMatch();
    // Set static field: static public System.Net.HttpRequestHeader IfNoneMatch
    static void _set_IfNoneMatch(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader IfRange
    static constexpr const int IfRange = 32;
    // Get static field: static public System.Net.HttpRequestHeader IfRange
    static System::Net::HttpRequestHeader _get_IfRange();
    // Set static field: static public System.Net.HttpRequestHeader IfRange
    static void _set_IfRange(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader IfUnmodifiedSince
    static constexpr const int IfUnmodifiedSince = 33;
    // Get static field: static public System.Net.HttpRequestHeader IfUnmodifiedSince
    static System::Net::HttpRequestHeader _get_IfUnmodifiedSince();
    // Set static field: static public System.Net.HttpRequestHeader IfUnmodifiedSince
    static void _set_IfUnmodifiedSince(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader MaxForwards
    static constexpr const int MaxForwards = 34;
    // Get static field: static public System.Net.HttpRequestHeader MaxForwards
    static System::Net::HttpRequestHeader _get_MaxForwards();
    // Set static field: static public System.Net.HttpRequestHeader MaxForwards
    static void _set_MaxForwards(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader ProxyAuthorization
    static constexpr const int ProxyAuthorization = 35;
    // Get static field: static public System.Net.HttpRequestHeader ProxyAuthorization
    static System::Net::HttpRequestHeader _get_ProxyAuthorization();
    // Set static field: static public System.Net.HttpRequestHeader ProxyAuthorization
    static void _set_ProxyAuthorization(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Referer
    static constexpr const int Referer = 36;
    // Get static field: static public System.Net.HttpRequestHeader Referer
    static System::Net::HttpRequestHeader _get_Referer();
    // Set static field: static public System.Net.HttpRequestHeader Referer
    static void _set_Referer(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Range
    static constexpr const int Range = 37;
    // Get static field: static public System.Net.HttpRequestHeader Range
    static System::Net::HttpRequestHeader _get_Range();
    // Set static field: static public System.Net.HttpRequestHeader Range
    static void _set_Range(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Te
    static constexpr const int Te = 38;
    // Get static field: static public System.Net.HttpRequestHeader Te
    static System::Net::HttpRequestHeader _get_Te();
    // Set static field: static public System.Net.HttpRequestHeader Te
    static void _set_Te(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader Translate
    static constexpr const int Translate = 39;
    // Get static field: static public System.Net.HttpRequestHeader Translate
    static System::Net::HttpRequestHeader _get_Translate();
    // Set static field: static public System.Net.HttpRequestHeader Translate
    static void _set_Translate(System::Net::HttpRequestHeader value);
    // static field const value: static public System.Net.HttpRequestHeader UserAgent
    static constexpr const int UserAgent = 40;
    // Get static field: static public System.Net.HttpRequestHeader UserAgent
    static System::Net::HttpRequestHeader _get_UserAgent();
    // Set static field: static public System.Net.HttpRequestHeader UserAgent
    static void _set_UserAgent(System::Net::HttpRequestHeader value);
  }; // System.Net.HttpRequestHeader
  #pragma pack(pop)
  static check_size<sizeof(HttpRequestHeader), 0 + sizeof(int)> __System_Net_HttpRequestHeaderSizeCheck;
  static_assert(sizeof(HttpRequestHeader) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpRequestHeader, "System.Net", "HttpRequestHeader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
