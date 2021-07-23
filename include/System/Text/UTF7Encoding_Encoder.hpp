// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.UTF7Encoding
#include "System/Text/UTF7Encoding.hpp"
// Including type: System.Text.EncoderNLS
#include "System/Text/EncoderNLS.hpp"
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
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.UTF7Encoding/System.Text.Encoder
  // [TokenAttribute] Offset: FFFFFFFF
  class UTF7Encoding::Encoder : public System::Text::EncoderNLS {
    public:
    // System.Int32 bits
    // Size: 0x4
    // Offset: 0x38
    int bits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 bitCount
    // Size: 0x4
    // Offset: 0x3C
    int bitCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Encoder
    Encoder(int bits_ = {}, int bitCount_ = {}) noexcept : bits{bits_}, bitCount{bitCount_} {}
    // Get instance field: System.Int32 bits
    int _get_bits();
    // Set instance field: System.Int32 bits
    void _set_bits(int value);
    // Get instance field: System.Int32 bitCount
    int _get_bitCount();
    // Set instance field: System.Int32 bitCount
    void _set_bitCount(int value);
    // public System.Void .ctor(System.Text.UTF7Encoding encoding)
    // Offset: 0x1D27E14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF7Encoding::Encoder* New_ctor(System::Text::UTF7Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UTF7Encoding::Encoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF7Encoding::Encoder*, creationType>(encoding)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1D286FC
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // override System.Boolean get_HasState()
    // Offset: 0x1D287FC
    // Implemented from: System.Text.EncoderNLS
    // Base method: System.Boolean EncoderNLS::get_HasState()
    bool get_HasState();
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1D28508
    // Implemented from: System.Text.EncoderNLS
    // Base method: System.Void EncoderNLS::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF7Encoding::Encoder* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UTF7Encoding::Encoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF7Encoding::Encoder*, creationType>(info, context)));
    }
    // public override System.Void Reset()
    // Offset: 0x1D287D8
    // Implemented from: System.Text.EncoderNLS
    // Base method: System.Void EncoderNLS::Reset()
    void Reset();
  }; // System.Text.UTF7Encoding/System.Text.Encoder
  #pragma pack(pop)
  static check_size<sizeof(UTF7Encoding::Encoder), 60 + sizeof(int)> __System_Text_UTF7Encoding_EncoderSizeCheck;
  static_assert(sizeof(UTF7Encoding::Encoder) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::UTF7Encoding::Encoder*, "System.Text", "UTF7Encoding/Encoder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::UTF7Encoding::Encoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UTF7Encoding::Encoder::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF7Encoding::Encoder::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Text::UTF7Encoding::Encoder::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF7Encoding::Encoder*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Text::UTF7Encoding::Encoder::get_HasState
// Il2CppName: get_HasState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::UTF7Encoding::Encoder::*)()>(&System::Text::UTF7Encoding::Encoder::get_HasState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF7Encoding::Encoder*), "get_HasState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UTF7Encoding::Encoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UTF7Encoding::Encoder::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF7Encoding::Encoder::*)()>(&System::Text::UTF7Encoding::Encoder::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF7Encoding::Encoder*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
