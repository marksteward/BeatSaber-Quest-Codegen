// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TextEditor
#include "UnityEngine/TextEditor.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.TextEditor/CharacterType
  struct TextEditor::CharacterType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: CharacterType
    constexpr CharacterType(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public UnityEngine.TextEditor/CharacterType LetterLike
    static constexpr const int LetterLike = 0;
    // Get static field: static public UnityEngine.TextEditor/CharacterType LetterLike
    static UnityEngine::TextEditor::CharacterType _get_LetterLike();
    // Set static field: static public UnityEngine.TextEditor/CharacterType LetterLike
    static void _set_LetterLike(UnityEngine::TextEditor::CharacterType value);
    // static field const value: static public UnityEngine.TextEditor/CharacterType Symbol
    static constexpr const int Symbol = 1;
    // Get static field: static public UnityEngine.TextEditor/CharacterType Symbol
    static UnityEngine::TextEditor::CharacterType _get_Symbol();
    // Set static field: static public UnityEngine.TextEditor/CharacterType Symbol
    static void _set_Symbol(UnityEngine::TextEditor::CharacterType value);
    // static field const value: static public UnityEngine.TextEditor/CharacterType Symbol2
    static constexpr const int Symbol2 = 2;
    // Get static field: static public UnityEngine.TextEditor/CharacterType Symbol2
    static UnityEngine::TextEditor::CharacterType _get_Symbol2();
    // Set static field: static public UnityEngine.TextEditor/CharacterType Symbol2
    static void _set_Symbol2(UnityEngine::TextEditor::CharacterType value);
    // static field const value: static public UnityEngine.TextEditor/CharacterType WhiteSpace
    static constexpr const int WhiteSpace = 3;
    // Get static field: static public UnityEngine.TextEditor/CharacterType WhiteSpace
    static UnityEngine::TextEditor::CharacterType _get_WhiteSpace();
    // Set static field: static public UnityEngine.TextEditor/CharacterType WhiteSpace
    static void _set_WhiteSpace(UnityEngine::TextEditor::CharacterType value);
  }; // UnityEngine.TextEditor/CharacterType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextEditor::CharacterType, "UnityEngine", "TextEditor/CharacterType");
#pragma pack(pop)
