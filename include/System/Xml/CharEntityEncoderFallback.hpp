// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.EncoderFallback
#include "System/Text/EncoderFallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: CharEntityEncoderFallbackBuffer
  class CharEntityEncoderFallbackBuffer;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderFallbackBuffer
  class EncoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x34
  // Autogenerated type: System.Xml.CharEntityEncoderFallback
  // [] Offset: FFFFFFFF
  class CharEntityEncoderFallback : public System::Text::EncoderFallback {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    // private System.Xml.CharEntityEncoderFallbackBuffer fallbackBuffer
    // Size: 0x8
    // Offset: 0x18
    System::Xml::CharEntityEncoderFallbackBuffer* fallbackBuffer;
    // Field size check
    static_assert(sizeof(System::Xml::CharEntityEncoderFallbackBuffer*) == 0x8);
    // private System.Int32[] textContentMarks
    // Size: 0x8
    // Offset: 0x20
    ::Array<int>* textContentMarks;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32 endMarkPos
    // Size: 0x4
    // Offset: 0x28
    int endMarkPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 curMarkPos
    // Size: 0x4
    // Offset: 0x2C
    int curMarkPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 startOffset
    // Size: 0x4
    // Offset: 0x30
    int startOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CharEntityEncoderFallback
    CharEntityEncoderFallback(System::Xml::CharEntityEncoderFallbackBuffer* fallbackBuffer_ = {}, ::Array<int>* textContentMarks_ = {}, int endMarkPos_ = {}, int curMarkPos_ = {}, int startOffset_ = {}) noexcept : fallbackBuffer{fallbackBuffer_}, textContentMarks{textContentMarks_}, endMarkPos{endMarkPos_}, curMarkPos{curMarkPos_}, startOffset{startOffset_} {}
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // System.Void set_StartOffset(System.Int32 value)
    // Offset: 0x14DF488
    void set_StartOffset(int value);
    // System.Void Reset(System.Int32[] textContentMarks, System.Int32 endMarkPos)
    // Offset: 0x14DF490
    void Reset(::Array<int>* textContentMarks, int endMarkPos);
    // System.Boolean CanReplaceAt(System.Int32 index)
    // Offset: 0x14DF4C0
    bool CanReplaceAt(int index);
    // System.Void .ctor()
    // Offset: 0x14DF368
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Void EncoderFallback::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CharEntityEncoderFallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::CharEntityEncoderFallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CharEntityEncoderFallback*, creationType>()));
    }
    // public override System.Text.EncoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0x14DF370
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Text.EncoderFallbackBuffer EncoderFallback::CreateFallbackBuffer()
    System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();
    // public override System.Int32 get_MaxCharCount()
    // Offset: 0x14DF480
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Int32 EncoderFallback::get_MaxCharCount()
    int get_MaxCharCount();
  }; // System.Xml.CharEntityEncoderFallback
  static check_size<sizeof(CharEntityEncoderFallback), 48 + sizeof(int)> __System_Xml_CharEntityEncoderFallbackSizeCheck;
  static_assert(sizeof(CharEntityEncoderFallback) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::CharEntityEncoderFallback*, "System.Xml", "CharEntityEncoderFallback");
#pragma pack(pop)
