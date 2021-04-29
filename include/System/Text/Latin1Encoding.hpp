// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.EncodingNLS
#include "System/Text/EncodingNLS.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderNLS
  class EncoderNLS;
  // Forward declaring type: DecoderNLS
  class DecoderNLS;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.Latin1Encoding
  class Latin1Encoding : public System::Text::EncodingNLS/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // Creating value type constructor for type: Latin1Encoding
    Latin1Encoding() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Get static field: static private readonly System.Char[] arrayCharBestFit
    static ::Array<::Il2CppChar>* _get_arrayCharBestFit();
    // Set static field: static private readonly System.Char[] arrayCharBestFit
    static void _set_arrayCharBestFit(::Array<::Il2CppChar>* value);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B29CE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Latin1Encoding* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::Latin1Encoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Latin1Encoding*, creationType>(info, context)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B29D18
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // static private System.Void .cctor()
    // Offset: 0x1B2A634
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1B2540C
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Latin1Encoding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::Latin1Encoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Latin1Encoding*, creationType>()));
    }
    // override System.Int32 GetByteCount(System.Char* chars, System.Int32 charCount, System.Text.EncoderNLS encoder)
    // Offset: 0x1B29DDC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char* chars, System.Int32 charCount, System.Text.EncoderNLS encoder)
    int GetByteCount(::Il2CppChar* chars, int charCount, System::Text::EncoderNLS* encoder);
    // override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS encoder)
    // Offset: 0x1B29FCC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS encoder)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, System::Text::EncoderNLS* encoder);
    // override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS decoder)
    // Offset: 0x1B2A338
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS decoder)
    int GetCharCount(uint8_t* bytes, int count, System::Text::DecoderNLS* decoder);
    // override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS decoder)
    // Offset: 0x1B2A340
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS decoder)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, System::Text::DecoderNLS* decoder);
    // public override System.Int32 GetMaxByteCount(System.Int32 charCount)
    // Offset: 0x1B2A3B8
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxByteCount(System.Int32 charCount)
    int GetMaxByteCount(int charCount);
    // public override System.Int32 GetMaxCharCount(System.Int32 byteCount)
    // Offset: 0x1B2A4C4
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxCharCount(System.Int32 byteCount)
    int GetMaxCharCount(int byteCount);
    // override System.Char[] GetBestFitUnicodeToBytesData()
    // Offset: 0x1B2A5CC
    // Implemented from: System.Text.Encoding
    // Base method: System.Char[] Encoding::GetBestFitUnicodeToBytesData()
    ::Array<::Il2CppChar>* GetBestFitUnicodeToBytesData();
  }; // System.Text.Latin1Encoding
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::Latin1Encoding*, "System.Text", "Latin1Encoding");
