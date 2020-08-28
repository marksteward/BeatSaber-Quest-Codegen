// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE
  struct InternalParseTypeE : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: InternalParseTypeE
    constexpr InternalParseTypeE(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Empty
    static constexpr const int Empty = 0;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Empty
    static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE _get_Empty();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Empty
    static void _set_Empty(System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE SerializedStreamHeader
    static constexpr const int SerializedStreamHeader = 1;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE SerializedStreamHeader
    static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE _get_SerializedStreamHeader();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE SerializedStreamHeader
    static void _set_SerializedStreamHeader(System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Object
    static constexpr const int Object = 2;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Object
    static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE _get_Object();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Object
    static void _set_Object(System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Member
    static constexpr const int Member = 3;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Member
    static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE _get_Member();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Member
    static void _set_Member(System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE ObjectEnd
    static constexpr const int ObjectEnd = 4;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE ObjectEnd
    static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE _get_ObjectEnd();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE ObjectEnd
    static void _set_ObjectEnd(System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE MemberEnd
    static constexpr const int MemberEnd = 5;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE MemberEnd
    static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE _get_MemberEnd();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE MemberEnd
    static void _set_MemberEnd(System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Headers
    static constexpr const int Headers = 6;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Headers
    static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE _get_Headers();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Headers
    static void _set_Headers(System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE HeadersEnd
    static constexpr const int HeadersEnd = 7;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE HeadersEnd
    static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE _get_HeadersEnd();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE HeadersEnd
    static void _set_HeadersEnd(System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE SerializedStreamHeaderEnd
    static constexpr const int SerializedStreamHeaderEnd = 8;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE SerializedStreamHeaderEnd
    static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE _get_SerializedStreamHeaderEnd();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE SerializedStreamHeaderEnd
    static void _set_SerializedStreamHeaderEnd(System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Envelope
    static constexpr const int Envelope = 9;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Envelope
    static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE _get_Envelope();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Envelope
    static void _set_Envelope(System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE EnvelopeEnd
    static constexpr const int EnvelopeEnd = 10;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE EnvelopeEnd
    static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE _get_EnvelopeEnd();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE EnvelopeEnd
    static void _set_EnvelopeEnd(System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Body
    static constexpr const int Body = 11;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Body
    static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE _get_Body();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE Body
    static void _set_Body(System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE BodyEnd
    static constexpr const int BodyEnd = 12;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE BodyEnd
    static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE _get_BodyEnd();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE BodyEnd
    static void _set_BodyEnd(System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE value);
  }; // System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalParseTypeE");
#pragma pack(pop)
