// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.DecoderFallback
#include "System/Text/DecoderFallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
  // Forward declaring type: DecoderFallbackBuffer
  class DecoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x2A
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.InternalDecoderBestFitFallback
  class InternalDecoderBestFitFallback : public System::Text::DecoderFallback {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    // System.Text.Encoding encoding
    // Size: 0x8
    // Offset: 0x18
    System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(System::Text::Encoding*) == 0x8);
    // System.Char[] arrayBestFit
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppChar>* arrayBestFit;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // System.Char cReplacement
    // Size: 0x2
    // Offset: 0x28
    ::Il2CppChar cReplacement;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Creating value type constructor for type: InternalDecoderBestFitFallback
    InternalDecoderBestFitFallback(System::Text::Encoding* encoding_ = {}, ::Array<::Il2CppChar>* arrayBestFit_ = {}, ::Il2CppChar cReplacement_ = {}) noexcept : encoding{encoding_}, arrayBestFit{arrayBestFit_}, cReplacement{cReplacement_} {}
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // System.Void .ctor(System.Text.Encoding encoding)
    // Offset: 0x1CF5DE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternalDecoderBestFitFallback* New_ctor(System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::InternalDecoderBestFitFallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternalDecoderBestFitFallback*, creationType>(encoding)));
    }
    // public override System.Text.DecoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0x1CFBE2C
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Text.DecoderFallbackBuffer DecoderFallback::CreateFallbackBuffer()
    System::Text::DecoderFallbackBuffer* CreateFallbackBuffer();
    // public override System.Int32 get_MaxCharCount()
    // Offset: 0x1CFBF80
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Int32 DecoderFallback::get_MaxCharCount()
    int get_MaxCharCount();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x1CFBF88
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1CFC040
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Text.InternalDecoderBestFitFallback
  #pragma pack(pop)
  static check_size<sizeof(InternalDecoderBestFitFallback), 40 + sizeof(::Il2CppChar)> __System_Text_InternalDecoderBestFitFallbackSizeCheck;
  static_assert(sizeof(InternalDecoderBestFitFallback) == 0x2A);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::InternalDecoderBestFitFallback*, "System.Text", "InternalDecoderBestFitFallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::InternalDecoderBestFitFallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::InternalDecoderBestFitFallback::CreateFallbackBuffer
// Il2CppName: CreateFallbackBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::DecoderFallbackBuffer* (System::Text::InternalDecoderBestFitFallback::*)()>(&System::Text::InternalDecoderBestFitFallback::CreateFallbackBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::InternalDecoderBestFitFallback*), "CreateFallbackBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::InternalDecoderBestFitFallback::get_MaxCharCount
// Il2CppName: get_MaxCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::InternalDecoderBestFitFallback::*)()>(&System::Text::InternalDecoderBestFitFallback::get_MaxCharCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::InternalDecoderBestFitFallback*), "get_MaxCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::InternalDecoderBestFitFallback::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::InternalDecoderBestFitFallback::*)(::Il2CppObject*)>(&System::Text::InternalDecoderBestFitFallback::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::InternalDecoderBestFitFallback*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Text::InternalDecoderBestFitFallback::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::InternalDecoderBestFitFallback::*)()>(&System::Text::InternalDecoderBestFitFallback::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::InternalDecoderBestFitFallback*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
