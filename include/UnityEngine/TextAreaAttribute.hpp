// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextAreaAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D4D09C
  class TextAreaAttribute : public UnityEngine::PropertyAttribute {
    public:
    // public readonly System.Int32 minLines
    // Size: 0x4
    // Offset: 0x10
    int minLines;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 maxLines
    // Size: 0x4
    // Offset: 0x14
    int maxLines;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TextAreaAttribute
    TextAreaAttribute(int minLines_ = {}, int maxLines_ = {}) noexcept : minLines{minLines_}, maxLines{maxLines_} {}
    // public System.Void .ctor(System.Int32 minLines, System.Int32 maxLines)
    // Offset: 0x16C33D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextAreaAttribute* New_ctor(int minLines, int maxLines) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TextAreaAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextAreaAttribute*, creationType>(minLines, maxLines)));
    }
  }; // UnityEngine.TextAreaAttribute
  static check_size<sizeof(TextAreaAttribute), 20 + sizeof(int)> __UnityEngine_TextAreaAttributeSizeCheck;
  static_assert(sizeof(TextAreaAttribute) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextAreaAttribute*, "UnityEngine", "TextAreaAttribute");
