// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_TextElement
#include "TMPro/TMP_TextElement.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_SpriteGlyph
  class TMP_SpriteGlyph;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_SpriteCharacter
  // [] Offset: FFFFFFFF
  class TMP_SpriteCharacter : public TMPro::TMP_TextElement {
    public:
    // private System.String m_Name
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* m_Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 m_HashCode
    // Size: 0x4
    // Offset: 0x30
    int m_HashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TMP_SpriteCharacter
    TMP_SpriteCharacter(::Il2CppString* m_Name_ = {}, int m_HashCode_ = {}) noexcept : m_Name{m_Name_}, m_HashCode{m_HashCode_} {}
    // public System.String get_name()
    // Offset: 0xF8C2BC
    ::Il2CppString* get_name();
    // public System.Void set_name(System.String value)
    // Offset: 0xF8C0C0
    void set_name(::Il2CppString* value);
    // public System.Int32 get_hashCode()
    // Offset: 0xF8C2C4
    int get_hashCode();
    // public System.Void .ctor(System.UInt32 unicode, TMPro.TMP_SpriteGlyph glyph)
    // Offset: 0xF8C050
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_SpriteCharacter* New_ctor(uint unicode, TMPro::TMP_SpriteGlyph* glyph) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_SpriteCharacter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_SpriteCharacter*, creationType>(unicode, glyph)));
    }
    // public System.Void .ctor()
    // Offset: 0xF8C2CC
    // Implemented from: TMPro.TMP_TextElement
    // Base method: System.Void TMP_TextElement::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_SpriteCharacter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_SpriteCharacter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_SpriteCharacter*, creationType>()));
    }
  }; // TMPro.TMP_SpriteCharacter
  static check_size<sizeof(TMP_SpriteCharacter), 48 + sizeof(int)> __TMPro_TMP_SpriteCharacterSizeCheck;
  static_assert(sizeof(TMP_SpriteCharacter) == 0x34);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SpriteCharacter*, "TMPro", "TMP_SpriteCharacter");
