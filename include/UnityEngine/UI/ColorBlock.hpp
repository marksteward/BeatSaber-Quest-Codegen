// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x58
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UI.ColorBlock
  // [] Offset: FFFFFFFF
  struct ColorBlock/*, public System::ValueType, public System::IEquatable_1<UnityEngine::UI::ColorBlock>*/ {
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xD7DCB4
    // private UnityEngine.Color m_NormalColor
    // Size: 0x10
    // Offset: 0x0
    UnityEngine::Color m_NormalColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [FormerlySerializedAsAttribute] Offset: 0xD7DD00
    // private UnityEngine.Color m_HighlightedColor
    // Size: 0x10
    // Offset: 0x10
    UnityEngine::Color m_HighlightedColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [FormerlySerializedAsAttribute] Offset: 0xD7DD4C
    // private UnityEngine.Color m_PressedColor
    // Size: 0x10
    // Offset: 0x20
    UnityEngine::Color m_PressedColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [FormerlySerializedAsAttribute] Offset: 0xD7DD98
    // private UnityEngine.Color m_SelectedColor
    // Size: 0x10
    // Offset: 0x30
    UnityEngine::Color m_SelectedColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [FormerlySerializedAsAttribute] Offset: 0xD7DDE4
    // private UnityEngine.Color m_DisabledColor
    // Size: 0x10
    // Offset: 0x40
    UnityEngine::Color m_DisabledColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [RangeAttribute] Offset: 0xD7DE30
    // private System.Single m_ColorMultiplier
    // Size: 0x4
    // Offset: 0x50
    float m_ColorMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xD7DE70
    // private System.Single m_FadeDuration
    // Size: 0x4
    // Offset: 0x54
    float m_FadeDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: ColorBlock
    constexpr ColorBlock(UnityEngine::Color m_NormalColor_ = {}, UnityEngine::Color m_HighlightedColor_ = {}, UnityEngine::Color m_PressedColor_ = {}, UnityEngine::Color m_SelectedColor_ = {}, UnityEngine::Color m_DisabledColor_ = {}, float m_ColorMultiplier_ = {}, float m_FadeDuration_ = {}) noexcept : m_NormalColor{m_NormalColor_}, m_HighlightedColor{m_HighlightedColor_}, m_PressedColor{m_PressedColor_}, m_SelectedColor{m_SelectedColor_}, m_DisabledColor{m_DisabledColor_}, m_ColorMultiplier{m_ColorMultiplier_}, m_FadeDuration{m_FadeDuration_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::UI::ColorBlock>
    operator System::IEquatable_1<UnityEngine::UI::ColorBlock>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::UI::ColorBlock>*>(this);
    }
    // public UnityEngine.Color get_normalColor()
    // Offset: 0xC94168
    UnityEngine::Color get_normalColor();
    // public System.Void set_normalColor(UnityEngine.Color value)
    // Offset: 0xC94174
    void set_normalColor(UnityEngine::Color value);
    // public UnityEngine.Color get_highlightedColor()
    // Offset: 0xC94180
    UnityEngine::Color get_highlightedColor();
    // public System.Void set_highlightedColor(UnityEngine.Color value)
    // Offset: 0xC9418C
    void set_highlightedColor(UnityEngine::Color value);
    // public UnityEngine.Color get_pressedColor()
    // Offset: 0xC94198
    UnityEngine::Color get_pressedColor();
    // public System.Void set_pressedColor(UnityEngine.Color value)
    // Offset: 0xC941A4
    void set_pressedColor(UnityEngine::Color value);
    // public UnityEngine.Color get_selectedColor()
    // Offset: 0xC941B0
    UnityEngine::Color get_selectedColor();
    // public System.Void set_selectedColor(UnityEngine.Color value)
    // Offset: 0xC941BC
    void set_selectedColor(UnityEngine::Color value);
    // public UnityEngine.Color get_disabledColor()
    // Offset: 0xC941C8
    UnityEngine::Color get_disabledColor();
    // public System.Void set_disabledColor(UnityEngine.Color value)
    // Offset: 0xC941D4
    void set_disabledColor(UnityEngine::Color value);
    // public System.Single get_colorMultiplier()
    // Offset: 0xC941E0
    float get_colorMultiplier();
    // public System.Void set_colorMultiplier(System.Single value)
    // Offset: 0xC941E8
    void set_colorMultiplier(float value);
    // public System.Single get_fadeDuration()
    // Offset: 0xC941F0
    float get_fadeDuration();
    // public System.Void set_fadeDuration(System.Single value)
    // Offset: 0xC941F8
    void set_fadeDuration(float value);
    // static public UnityEngine.UI.ColorBlock get_defaultColorBlock()
    // Offset: 0x11591F8
    static UnityEngine::UI::ColorBlock get_defaultColorBlock();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC94200
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(UnityEngine.UI.ColorBlock other)
    // Offset: 0xC94208
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.UI.ColorBlock other)
    bool Equals(UnityEngine::UI::ColorBlock other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC94248
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.UI.ColorBlock
  static check_size<sizeof(ColorBlock), 84 + sizeof(float)> __UnityEngine_UI_ColorBlockSizeCheck;
  static_assert(sizeof(ColorBlock) == 0x58);
  // static public System.Boolean op_Equality(UnityEngine.UI.ColorBlock point1, UnityEngine.UI.ColorBlock point2)
  // Offset: 0x1159524
  bool operator ==(const UnityEngine::UI::ColorBlock& point1, const UnityEngine::UI::ColorBlock& point2);
  // static public System.Boolean op_Inequality(UnityEngine.UI.ColorBlock point1, UnityEngine.UI.ColorBlock point2)
  // Offset: 0x1159564
  bool operator !=(const UnityEngine::UI::ColorBlock& point1, const UnityEngine::UI::ColorBlock& point2);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ColorBlock, "UnityEngine.UI", "ColorBlock");
