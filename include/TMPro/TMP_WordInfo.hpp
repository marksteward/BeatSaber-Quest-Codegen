// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_WordInfo
  struct TMP_WordInfo : public System::ValueType {
    public:
    // public TMPro.TMP_Text textComponent
    // Offset: 0x0
    TMPro::TMP_Text* textComponent;
    // public System.Int32 firstCharacterIndex
    // Offset: 0x8
    int firstCharacterIndex;
    // public System.Int32 lastCharacterIndex
    // Offset: 0xC
    int lastCharacterIndex;
    // public System.Int32 characterCount
    // Offset: 0x10
    int characterCount;
    // Creating value type constructor for type: TMP_WordInfo
    constexpr TMP_WordInfo(TMPro::TMP_Text* textComponent_ = {}, int firstCharacterIndex_ = {}, int lastCharacterIndex_ = {}, int characterCount_ = {}) : textComponent{textComponent_}, firstCharacterIndex{firstCharacterIndex_}, lastCharacterIndex{lastCharacterIndex_}, characterCount{characterCount_} {}
    // public System.String GetWord()
    // Offset: 0xA326CC
    ::Il2CppString* GetWord();
  }; // TMPro.TMP_WordInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_WordInfo, "TMPro", "TMP_WordInfo");
#pragma pack(pop)
