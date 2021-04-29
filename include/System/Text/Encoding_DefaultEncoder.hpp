// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
// Including type: System.Text.Encoder
#include "System/Text/Encoder.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.IObjectReference
#include "System/Runtime/Serialization/IObjectReference.hpp"
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
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.Encoding/DefaultEncoder
  class Encoding::DefaultEncoder : public System::Text::Encoder/*, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IObjectReference*/ {
    public:
    // private System.Text.Encoding m_encoding
    // Size: 0x8
    // Offset: 0x20
    System::Text::Encoding* m_encoding;
    // Field size check
    static_assert(sizeof(System::Text::Encoding*) == 0x8);
    // private System.Boolean m_hasInitializedEncoding
    // Size: 0x1
    // Offset: 0x28
    bool m_hasInitializedEncoding;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_hasInitializedEncoding and: charLeftOver
    char __padding1[0x1] = {};
    // System.Char charLeftOver
    // Size: 0x2
    // Offset: 0x2A
    ::Il2CppChar charLeftOver;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Creating value type constructor for type: DefaultEncoder
    DefaultEncoder(System::Text::Encoding* m_encoding_ = {}, bool m_hasInitializedEncoding_ = {}, ::Il2CppChar charLeftOver_ = {}) noexcept : m_encoding{m_encoding_}, m_hasInitializedEncoding{m_hasInitializedEncoding_}, charLeftOver{charLeftOver_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::IObjectReference
    operator System::Runtime::Serialization::IObjectReference() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::IObjectReference*>(this);
    }
    // public System.Void .ctor(System.Text.Encoding encoding)
    // Offset: 0x1B262C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Encoding::DefaultEncoder* New_ctor(System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::Encoding::DefaultEncoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Encoding::DefaultEncoder*, creationType>(encoding)));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B26D7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Encoding::DefaultEncoder* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::Encoding::DefaultEncoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Encoding::DefaultEncoder*, creationType>(info, context)));
    }
    // public System.Object GetRealObject(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B27024
    ::Il2CppObject* GetRealObject(System::Runtime::Serialization::StreamingContext context);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B270E4
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count, System.Boolean flush)
    // Offset: 0x1B27188
    // Implemented from: System.Text.Encoder
    // Base method: System.Int32 Encoder::GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count, System.Boolean flush)
    int GetByteCount(::Array<::Il2CppChar>* chars, int index, int count, bool flush);
    // public override System.Int32 GetByteCount(System.Char* chars, System.Int32 count, System.Boolean flush)
    // Offset: 0x1B271A8
    // Implemented from: System.Text.Encoder
    // Base method: System.Int32 Encoder::GetByteCount(System.Char* chars, System.Int32 count, System.Boolean flush)
    int GetByteCount(::Il2CppChar* chars, int count, bool flush);
    // public override System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex, System.Boolean flush)
    // Offset: 0x1B271C8
    // Implemented from: System.Text.Encoder
    // Base method: System.Int32 Encoder::GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex, System.Boolean flush)
    int GetBytes(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex, bool flush);
    // public override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Boolean flush)
    // Offset: 0x1B271EC
    // Implemented from: System.Text.Encoder
    // Base method: System.Int32 Encoder::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Boolean flush)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, bool flush);
  }; // System.Text.Encoding/DefaultEncoder
  #pragma pack(pop)
  static check_size<sizeof(Encoding::DefaultEncoder), 42 + sizeof(::Il2CppChar)> __System_Text_Encoding_DefaultEncoderSizeCheck;
  static_assert(sizeof(Encoding::DefaultEncoder) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::Encoding::DefaultEncoder*, "System.Text", "Encoding/DefaultEncoder");
