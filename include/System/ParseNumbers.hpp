// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ParseNumbers
  // [TokenAttribute] Offset: FFFFFFFF
  class ParseNumbers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ParseNumbers
    ParseNumbers() noexcept {}
    // static public System.Int32 StringToInt(System.String value, System.Int32 fromBase, System.Int32 flags)
    // Offset: 0x1CA2CD8
    static int StringToInt(::Il2CppString* value, int fromBase, int flags);
    // static public System.Int32 StringToInt(System.String value, System.Int32 fromBase, System.Int32 flags, System.Int32* parsePos)
    // Offset: 0x1CA2CE0
    static int StringToInt(::Il2CppString* value, int fromBase, int flags, int* parsePos);
    // static public System.String LongToString(System.Int64 value, System.Int32 toBase, System.Int32 width, System.Char paddingChar, System.Int32 flags)
    // Offset: 0x1CA30FC
    static ::Il2CppString* LongToString(int64_t value, int toBase, int width, ::Il2CppChar paddingChar, int flags);
    // static public System.Int64 StringToLong(System.String value, System.Int32 fromBase, System.Int32 flags, System.Int32* parsePos)
    // Offset: 0x1CA36F8
    static int64_t StringToLong(::Il2CppString* value, int fromBase, int flags, int* parsePos);
    // static public System.String IntToString(System.Int32 value, System.Int32 toBase, System.Int32 width, System.Char paddingChar, System.Int32 flags)
    // Offset: 0x1CA3B40
    static ::Il2CppString* IntToString(int value, int toBase, int width, ::Il2CppChar paddingChar, int flags);
    // static private System.Void EndianSwap(ref System.Byte[] value)
    // Offset: 0x1CA3D68
    static void EndianSwap(::Array<uint8_t>*& value);
    // static private System.Text.StringBuilder ConvertToBase2(System.Byte[] value)
    // Offset: 0x1CA3220
    static System::Text::StringBuilder* ConvertToBase2(::Array<uint8_t>* value);
    // static private System.Text.StringBuilder ConvertToBase8(System.Byte[] value)
    // Offset: 0x1CA3364
    static System::Text::StringBuilder* ConvertToBase8(::Array<uint8_t>* value);
    // static private System.Text.StringBuilder ConvertToBase16(System.Byte[] value)
    // Offset: 0x1CA353C
    static System::Text::StringBuilder* ConvertToBase16(::Array<uint8_t>* value);
  }; // System.ParseNumbers
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ParseNumbers*, "System", "ParseNumbers");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ParseNumbers::StringToInt
// Il2CppName: StringToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*, int, int)>(&System::ParseNumbers::StringToInt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fromBase = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParseNumbers*), "StringToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, fromBase, flags});
  }
};
// Writing MetadataGetter for method: System::ParseNumbers::StringToInt
// Il2CppName: StringToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*, int, int, int*)>(&System::ParseNumbers::StringToInt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fromBase = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parsePos = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParseNumbers*), "StringToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, fromBase, flags, parsePos});
  }
};
// Writing MetadataGetter for method: System::ParseNumbers::LongToString
// Il2CppName: LongToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(int64_t, int, int, ::Il2CppChar, int)>(&System::ParseNumbers::LongToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* toBase = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* paddingChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParseNumbers*), "LongToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, toBase, width, paddingChar, flags});
  }
};
// Writing MetadataGetter for method: System::ParseNumbers::StringToLong
// Il2CppName: StringToLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::Il2CppString*, int, int, int*)>(&System::ParseNumbers::StringToLong)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fromBase = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parsePos = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParseNumbers*), "StringToLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, fromBase, flags, parsePos});
  }
};
// Writing MetadataGetter for method: System::ParseNumbers::IntToString
// Il2CppName: IntToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(int, int, int, ::Il2CppChar, int)>(&System::ParseNumbers::IntToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* toBase = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* paddingChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParseNumbers*), "IntToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, toBase, width, paddingChar, flags});
  }
};
// Writing MetadataGetter for method: System::ParseNumbers::EndianSwap
// Il2CppName: EndianSwap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint8_t>*&)>(&System::ParseNumbers::EndianSwap)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParseNumbers*), "EndianSwap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ParseNumbers::ConvertToBase2
// Il2CppName: ConvertToBase2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::StringBuilder* (*)(::Array<uint8_t>*)>(&System::ParseNumbers::ConvertToBase2)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParseNumbers*), "ConvertToBase2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ParseNumbers::ConvertToBase8
// Il2CppName: ConvertToBase8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::StringBuilder* (*)(::Array<uint8_t>*)>(&System::ParseNumbers::ConvertToBase8)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParseNumbers*), "ConvertToBase8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ParseNumbers::ConvertToBase16
// Il2CppName: ConvertToBase16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::StringBuilder* (*)(::Array<uint8_t>*)>(&System::ParseNumbers::ConvertToBase16)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParseNumbers*), "ConvertToBase16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
