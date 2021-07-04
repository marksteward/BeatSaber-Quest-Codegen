// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UI.SpriteState
  struct SpriteState/*, public System::ValueType, public System::IEquatable_1<UnityEngine::UI::SpriteState>*/ {
    public:
    // private UnityEngine.Sprite m_HighlightedSprite
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Sprite* m_HighlightedSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite m_PressedSprite
    // Size: 0x8
    // Offset: 0x8
    UnityEngine::Sprite* m_PressedSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xDC78F8
    // private UnityEngine.Sprite m_SelectedSprite
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Sprite* m_SelectedSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite m_DisabledSprite
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Sprite* m_DisabledSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // Creating value type constructor for type: SpriteState
    constexpr SpriteState(UnityEngine::Sprite* m_HighlightedSprite_ = {}, UnityEngine::Sprite* m_PressedSprite_ = {}, UnityEngine::Sprite* m_SelectedSprite_ = {}, UnityEngine::Sprite* m_DisabledSprite_ = {}) noexcept : m_HighlightedSprite{m_HighlightedSprite_}, m_PressedSprite{m_PressedSprite_}, m_SelectedSprite{m_SelectedSprite_}, m_DisabledSprite{m_DisabledSprite_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::UI::SpriteState>
    operator System::IEquatable_1<UnityEngine::UI::SpriteState>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::UI::SpriteState>*>(this);
    }
    // public UnityEngine.Sprite get_highlightedSprite()
    // Offset: 0xF22A8C
    UnityEngine::Sprite* get_highlightedSprite();
    // public System.Void set_highlightedSprite(UnityEngine.Sprite value)
    // Offset: 0xF22A94
    void set_highlightedSprite(UnityEngine::Sprite* value);
    // public UnityEngine.Sprite get_pressedSprite()
    // Offset: 0xF22A9C
    UnityEngine::Sprite* get_pressedSprite();
    // public System.Void set_pressedSprite(UnityEngine.Sprite value)
    // Offset: 0xF22AA4
    void set_pressedSprite(UnityEngine::Sprite* value);
    // public UnityEngine.Sprite get_selectedSprite()
    // Offset: 0xF22AAC
    UnityEngine::Sprite* get_selectedSprite();
    // public System.Void set_selectedSprite(UnityEngine.Sprite value)
    // Offset: 0xF22AB4
    void set_selectedSprite(UnityEngine::Sprite* value);
    // public UnityEngine.Sprite get_disabledSprite()
    // Offset: 0xF22ABC
    UnityEngine::Sprite* get_disabledSprite();
    // public System.Void set_disabledSprite(UnityEngine.Sprite value)
    // Offset: 0xF22AC4
    void set_disabledSprite(UnityEngine::Sprite* value);
    // public System.Boolean Equals(UnityEngine.UI.SpriteState other)
    // Offset: 0xF22ACC
    bool Equals(UnityEngine::UI::SpriteState other);
  }; // UnityEngine.UI.SpriteState
  #pragma pack(pop)
  static check_size<sizeof(SpriteState), 24 + sizeof(UnityEngine::Sprite*)> __UnityEngine_UI_SpriteStateSizeCheck;
  static_assert(sizeof(SpriteState) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::SpriteState, "UnityEngine.UI", "SpriteState");
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::get_highlightedSprite
// Il2CppName: get_highlightedSprite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::set_highlightedSprite
// Il2CppName: set_highlightedSprite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::get_pressedSprite
// Il2CppName: get_pressedSprite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::set_pressedSprite
// Il2CppName: set_pressedSprite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::get_selectedSprite
// Il2CppName: get_selectedSprite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::set_selectedSprite
// Il2CppName: set_selectedSprite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::get_disabledSprite
// Il2CppName: get_disabledSprite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::set_disabledSprite
// Il2CppName: set_disabledSprite
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
