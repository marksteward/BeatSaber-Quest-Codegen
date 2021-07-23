// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderNLS
  class EncoderNLS;
  // Forward declaring type: DecoderNLS
  class DecoderNLS;
  // Forward declaring type: Encoder
  class Encoder;
  // Forward declaring type: Decoder
  class Decoder;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x3B
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.UnicodeEncoding
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D68CB4
  class UnicodeEncoding : public System::Text::Encoding {
    public:
    // Nested type: System::Text::UnicodeEncoding::Decoder
    class Decoder;
    // [OptionalFieldAttribute] Offset: 0xD6E9E4
    // System.Boolean isThrowException
    // Size: 0x1
    // Offset: 0x38
    bool isThrowException;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean bigEndian
    // Size: 0x1
    // Offset: 0x39
    bool bigEndian;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean byteOrderMark
    // Size: 0x1
    // Offset: 0x3A
    bool byteOrderMark;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: UnicodeEncoding
    UnicodeEncoding(bool isThrowException_ = {}, bool bigEndian_ = {}, bool byteOrderMark_ = {}) noexcept : isThrowException{isThrowException_}, bigEndian{bigEndian_}, byteOrderMark{byteOrderMark_} {}
    // Get static field: static private readonly System.UInt64 highLowPatternMask
    static uint64_t _get_highLowPatternMask();
    // Set static field: static private readonly System.UInt64 highLowPatternMask
    static void _set_highLowPatternMask(uint64_t value);
    // Get instance field: System.Boolean isThrowException
    bool _get_isThrowException();
    // Set instance field: System.Boolean isThrowException
    void _set_isThrowException(bool value);
    // Get instance field: System.Boolean bigEndian
    bool _get_bigEndian();
    // Set instance field: System.Boolean bigEndian
    void _set_bigEndian(bool value);
    // Get instance field: System.Boolean byteOrderMark
    bool _get_byteOrderMark();
    // Set instance field: System.Boolean byteOrderMark
    void _set_byteOrderMark(bool value);
    // public System.Void .ctor(System.Boolean bigEndian, System.Boolean byteOrderMark)
    // Offset: 0x189D4CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicodeEncoding* New_ctor(bool bigEndian, bool byteOrderMark) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UnicodeEncoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicodeEncoding*, creationType>(bigEndian, byteOrderMark)));
    }
    // public System.Void .ctor(System.Boolean bigEndian, System.Boolean byteOrderMark, System.Boolean throwOnInvalidBytes)
    // Offset: 0x189D4DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicodeEncoding* New_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UnicodeEncoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicodeEncoding*, creationType>(bigEndian, byteOrderMark, throwOnInvalidBytes)));
    }
    // static private System.Void .cctor()
    // Offset: 0x18A0D9C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x189D4BC
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicodeEncoding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UnicodeEncoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicodeEncoding*, creationType>()));
    }
    // private System.Void OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x189D568
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    void OnDeserializing(System::Runtime::Serialization::StreamingContext ctx);
    // override System.Void SetDefaultFallbacks()
    // Offset: 0x189D570
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::SetDefaultFallbacks()
    void SetDefaultFallbacks();
    // public override System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0x189D62C
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    int GetByteCount(::Array<::Il2CppChar>* chars, int index, int count);
    // public override System.Int32 GetByteCount(System.String s)
    // Offset: 0x189D800
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.String s)
    int GetByteCount(::Il2CppString* s);
    // public override System.Int32 GetByteCount(System.Char* chars, System.Int32 count)
    // Offset: 0x189D8B0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char* chars, System.Int32 count)
    int GetByteCount(::Il2CppChar* chars, int count);
    // public override System.Int32 GetBytes(System.String s, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x189D9CC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.String s, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    int GetBytes(::Il2CppString* s, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex);
    // public override System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x189DC3C
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    int GetBytes(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex);
    // public override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    // Offset: 0x189DEDC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount);
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x189E040
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count);
    // public override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count)
    // Offset: 0x189E214
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte* bytes, System.Int32 count)
    int GetCharCount(uint8_t* bytes, int count);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0x189E330
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex);
    // public override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    // Offset: 0x189E5D0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount);
    // public override System.String GetString(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x189E734
    // Implemented from: System.Text.Encoding
    // Base method: System.String Encoding::GetString(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    ::Il2CppString* GetString(::Array<uint8_t>* bytes, int index, int count);
    // override System.Int32 GetByteCount(System.Char* chars, System.Int32 count, System.Text.EncoderNLS encoder)
    // Offset: 0x189E90C
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char* chars, System.Int32 count, System.Text.EncoderNLS encoder)
    int GetByteCount(::Il2CppChar* chars, int count, System::Text::EncoderNLS* encoder);
    // override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS encoder)
    // Offset: 0x189EF08
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS encoder)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, System::Text::EncoderNLS* encoder);
    // override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS baseDecoder)
    // Offset: 0x189F708
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS baseDecoder)
    int GetCharCount(uint8_t* bytes, int count, System::Text::DecoderNLS* baseDecoder);
    // override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS baseDecoder)
    // Offset: 0x189FE68
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS baseDecoder)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, System::Text::DecoderNLS* baseDecoder);
    // public override System.Text.Encoder GetEncoder()
    // Offset: 0x18A07D4
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Encoder Encoding::GetEncoder()
    System::Text::Encoder* GetEncoder();
    // public override System.Text.Decoder GetDecoder()
    // Offset: 0x18A0838
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Decoder Encoding::GetDecoder()
    System::Text::Decoder* GetDecoder();
    // public override System.Byte[] GetPreamble()
    // Offset: 0x18A08B4
    // Implemented from: System.Text.Encoding
    // Base method: System.Byte[] Encoding::GetPreamble()
    ::Array<uint8_t>* GetPreamble();
    // public override System.Int32 GetMaxByteCount(System.Int32 charCount)
    // Offset: 0x18A0998
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxByteCount(System.Int32 charCount)
    int GetMaxByteCount(int charCount);
    // public override System.Int32 GetMaxCharCount(System.Int32 byteCount)
    // Offset: 0x18A0AA4
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxCharCount(System.Int32 byteCount)
    int GetMaxCharCount(int byteCount);
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x18A0BB4
    // Implemented from: System.Text.Encoding
    // Base method: System.Boolean Encoding::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x18A0CFC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetHashCode()
    int GetHashCode();
  }; // System.Text.UnicodeEncoding
  #pragma pack(pop)
  static check_size<sizeof(UnicodeEncoding), 58 + sizeof(bool)> __System_Text_UnicodeEncodingSizeCheck;
  static_assert(sizeof(UnicodeEncoding) == 0x3B);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::UnicodeEncoding*, "System.Text", "UnicodeEncoding");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Text::UnicodeEncoding::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::OnDeserializing
// Il2CppName: OnDeserializing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UnicodeEncoding::*)(System::Runtime::Serialization::StreamingContext)>(&System::Text::UnicodeEncoding::OnDeserializing)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "OnDeserializing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::SetDefaultFallbacks
// Il2CppName: SetDefaultFallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UnicodeEncoding::*)()>(&System::Text::UnicodeEncoding::SetDefaultFallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "SetDefaultFallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::Array<::Il2CppChar>*, int, int)>(&System::Text::UnicodeEncoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, index, count});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::Il2CppString*)>(&System::Text::UnicodeEncoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::Il2CppChar*, int)>(&System::Text::UnicodeEncoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, count});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::Il2CppString*, int, int, ::Array<uint8_t>*, int)>(&System::Text::UnicodeEncoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, charIndex, charCount, bytes, byteIndex});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::Array<::Il2CppChar>*, int, int, ::Array<uint8_t>*, int)>(&System::Text::UnicodeEncoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charIndex, charCount, bytes, byteIndex});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::Il2CppChar*, int, uint8_t*, int)>(&System::Text::UnicodeEncoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charCount, bytes, byteCount});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::Array<uint8_t>*, int, int)>(&System::Text::UnicodeEncoding::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, index, count});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(uint8_t*, int)>(&System::Text::UnicodeEncoding::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, count});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::Array<uint8_t>*, int, int, ::Array<::Il2CppChar>*, int)>(&System::Text::UnicodeEncoding::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteIndex, byteCount, chars, charIndex});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(uint8_t*, int, ::Il2CppChar*, int)>(&System::Text::UnicodeEncoding::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteCount, chars, charCount});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Text::UnicodeEncoding::*)(::Array<uint8_t>*, int, int)>(&System::Text::UnicodeEncoding::GetString)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, index, count});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::Il2CppChar*, int, System::Text::EncoderNLS*)>(&System::Text::UnicodeEncoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* encoder = &::il2cpp_utils::GetClassFromName("System.Text", "EncoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, count, encoder});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::Il2CppChar*, int, uint8_t*, int, System::Text::EncoderNLS*)>(&System::Text::UnicodeEncoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* encoder = &::il2cpp_utils::GetClassFromName("System.Text", "EncoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charCount, bytes, byteCount, encoder});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(uint8_t*, int, System::Text::DecoderNLS*)>(&System::Text::UnicodeEncoding::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* baseDecoder = &::il2cpp_utils::GetClassFromName("System.Text", "DecoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, count, baseDecoder});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(uint8_t*, int, ::Il2CppChar*, int, System::Text::DecoderNLS*)>(&System::Text::UnicodeEncoding::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* baseDecoder = &::il2cpp_utils::GetClassFromName("System.Text", "DecoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteCount, chars, charCount, baseDecoder});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetEncoder
// Il2CppName: GetEncoder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoder* (System::Text::UnicodeEncoding::*)()>(&System::Text::UnicodeEncoding::GetEncoder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetEncoder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetDecoder
// Il2CppName: GetDecoder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Decoder* (System::Text::UnicodeEncoding::*)()>(&System::Text::UnicodeEncoding::GetDecoder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetDecoder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetPreamble
// Il2CppName: GetPreamble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Text::UnicodeEncoding::*)()>(&System::Text::UnicodeEncoding::GetPreamble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetPreamble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetMaxByteCount
// Il2CppName: GetMaxByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(int)>(&System::Text::UnicodeEncoding::GetMaxByteCount)> {
  static const MethodInfo* get() {
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetMaxByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charCount});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetMaxCharCount
// Il2CppName: GetMaxCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(int)>(&System::Text::UnicodeEncoding::GetMaxCharCount)> {
  static const MethodInfo* get() {
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetMaxCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{byteCount});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::UnicodeEncoding::*)(::Il2CppObject*)>(&System::Text::UnicodeEncoding::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)()>(&System::Text::UnicodeEncoding::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
