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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderNLS
  class EncoderNLS;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.EncoderFallbackBuffer
  class EncoderFallbackBuffer : public ::Il2CppObject {
    public:
    // System.Char* charStart
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppChar* charStart;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // System.Char* charEnd
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppChar* charEnd;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // System.Text.EncoderNLS encoder
    // Size: 0x8
    // Offset: 0x20
    System::Text::EncoderNLS* encoder;
    // Field size check
    static_assert(sizeof(System::Text::EncoderNLS*) == 0x8);
    // System.Boolean setEncoder
    // Size: 0x1
    // Offset: 0x28
    bool setEncoder;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean bUsedEncoder
    // Size: 0x1
    // Offset: 0x29
    bool bUsedEncoder;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean bFallingBack
    // Size: 0x1
    // Offset: 0x2A
    bool bFallingBack;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bFallingBack and: iRecursionCount
    char __padding5[0x1] = {};
    // System.Int32 iRecursionCount
    // Size: 0x4
    // Offset: 0x2C
    int iRecursionCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EncoderFallbackBuffer
    EncoderFallbackBuffer(::Il2CppChar* charStart_ = {}, ::Il2CppChar* charEnd_ = {}, System::Text::EncoderNLS* encoder_ = {}, bool setEncoder_ = {}, bool bUsedEncoder_ = {}, bool bFallingBack_ = {}, int iRecursionCount_ = {}) noexcept : charStart{charStart_}, charEnd{charEnd_}, encoder{encoder_}, setEncoder{setEncoder_}, bUsedEncoder{bUsedEncoder_}, bFallingBack{bFallingBack_}, iRecursionCount{iRecursionCount_} {}
    // public System.Boolean Fallback(System.Char charUnknown, System.Int32 index)
    // Offset: 0xFFFFFFFF
    bool Fallback(::Il2CppChar charUnknown, int index);
    // public System.Boolean Fallback(System.Char charUnknownHigh, System.Char charUnknownLow, System.Int32 index)
    // Offset: 0xFFFFFFFF
    bool Fallback(::Il2CppChar charUnknownHigh, ::Il2CppChar charUnknownLow, int index);
    // public System.Char GetNextChar()
    // Offset: 0xFFFFFFFF
    ::Il2CppChar GetNextChar();
    // public System.Boolean MovePrevious()
    // Offset: 0xFFFFFFFF
    bool MovePrevious();
    // public System.Int32 get_Remaining()
    // Offset: 0xFFFFFFFF
    int get_Remaining();
    // public System.Void Reset()
    // Offset: 0x1B6481C
    void Reset();
    // System.Void InternalReset()
    // Offset: 0x1B64850
    void InternalReset();
    // System.Void InternalInitialize(System.Char* charStart, System.Char* charEnd, System.Text.EncoderNLS encoder, System.Boolean setEncoder)
    // Offset: 0x1B60B0C
    void InternalInitialize(::Il2CppChar* charStart, ::Il2CppChar* charEnd, System::Text::EncoderNLS* encoder, bool setEncoder);
    // System.Char InternalGetNextChar()
    // Offset: 0x1B60B28
    ::Il2CppChar InternalGetNextChar();
    // System.Boolean InternalFallback(System.Char ch, ref System.Char* chars)
    // Offset: 0x1B64868
    bool InternalFallback(::Il2CppChar ch, ::Il2CppChar*& chars);
    // System.Void ThrowLastCharRecursive(System.Int32 charRecursive)
    // Offset: 0x1B64A38
    void ThrowLastCharRecursive(int charRecursive);
    // protected System.Void .ctor()
    // Offset: 0x1B64180
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncoderFallbackBuffer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::EncoderFallbackBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncoderFallbackBuffer*, creationType>()));
    }
  }; // System.Text.EncoderFallbackBuffer
  #pragma pack(pop)
  static check_size<sizeof(EncoderFallbackBuffer), 44 + sizeof(int)> __System_Text_EncoderFallbackBufferSizeCheck;
  static_assert(sizeof(EncoderFallbackBuffer) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderFallbackBuffer*, "System.Text", "EncoderFallbackBuffer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::EncoderFallbackBuffer::Fallback
// Il2CppName: Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::EncoderFallbackBuffer::*)(::Il2CppChar, int)>(&System::Text::EncoderFallbackBuffer::Fallback)> {
  static const MethodInfo* get() {
    static auto* charUnknown = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallbackBuffer*), "Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charUnknown, index});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallbackBuffer::Fallback
// Il2CppName: Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::EncoderFallbackBuffer::*)(::Il2CppChar, ::Il2CppChar, int)>(&System::Text::EncoderFallbackBuffer::Fallback)> {
  static const MethodInfo* get() {
    static auto* charUnknownHigh = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* charUnknownLow = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallbackBuffer*), "Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charUnknownHigh, charUnknownLow, index});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallbackBuffer::GetNextChar
// Il2CppName: GetNextChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Text::EncoderFallbackBuffer::*)()>(&System::Text::EncoderFallbackBuffer::GetNextChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallbackBuffer*), "GetNextChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallbackBuffer::MovePrevious
// Il2CppName: MovePrevious
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::EncoderFallbackBuffer::*)()>(&System::Text::EncoderFallbackBuffer::MovePrevious)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallbackBuffer*), "MovePrevious", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallbackBuffer::get_Remaining
// Il2CppName: get_Remaining
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncoderFallbackBuffer::*)()>(&System::Text::EncoderFallbackBuffer::get_Remaining)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallbackBuffer*), "get_Remaining", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallbackBuffer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::EncoderFallbackBuffer::*)()>(&System::Text::EncoderFallbackBuffer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallbackBuffer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallbackBuffer::InternalReset
// Il2CppName: InternalReset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::EncoderFallbackBuffer::*)()>(&System::Text::EncoderFallbackBuffer::InternalReset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallbackBuffer*), "InternalReset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallbackBuffer::InternalInitialize
// Il2CppName: InternalInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::EncoderFallbackBuffer::*)(::Il2CppChar*, ::Il2CppChar*, System::Text::EncoderNLS*, bool)>(&System::Text::EncoderFallbackBuffer::InternalInitialize)> {
  static const MethodInfo* get() {
    static auto* charStart = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charEnd = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* encoder = &::il2cpp_utils::GetClassFromName("System.Text", "EncoderNLS")->byval_arg;
    static auto* setEncoder = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallbackBuffer*), "InternalInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charStart, charEnd, encoder, setEncoder});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallbackBuffer::InternalGetNextChar
// Il2CppName: InternalGetNextChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Text::EncoderFallbackBuffer::*)()>(&System::Text::EncoderFallbackBuffer::InternalGetNextChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallbackBuffer*), "InternalGetNextChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallbackBuffer::InternalFallback
// Il2CppName: InternalFallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::EncoderFallbackBuffer::*)(::Il2CppChar, ::Il2CppChar*&)>(&System::Text::EncoderFallbackBuffer::InternalFallback)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallbackBuffer*), "InternalFallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch, chars});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallbackBuffer::ThrowLastCharRecursive
// Il2CppName: ThrowLastCharRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::EncoderFallbackBuffer::*)(int)>(&System::Text::EncoderFallbackBuffer::ThrowLastCharRecursive)> {
  static const MethodInfo* get() {
    static auto* charRecursive = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderFallbackBuffer*), "ThrowLastCharRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charRecursive});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderFallbackBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
