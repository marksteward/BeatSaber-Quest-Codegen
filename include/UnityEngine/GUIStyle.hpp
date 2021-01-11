// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIStyleState
  class GUIStyleState;
  // Forward declaring type: RectOffset
  class RectOffset;
  // Forward declaring type: Font
  class Font;
  // Forward declaring type: ImagePosition
  struct ImagePosition;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: GUIContent
  class GUIContent;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x80
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.GUIStyle
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: D65804
  // [NativeHeaderAttribute] Offset: D65804
  // [NativeHeaderAttribute] Offset: D65804
  class GUIStyle : public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private UnityEngine.GUIStyleState m_Normal
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GUIStyleState* m_Normal;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyleState*) == 0x8);
    // private UnityEngine.GUIStyleState m_Hover
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GUIStyleState* m_Hover;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyleState*) == 0x8);
    // private UnityEngine.GUIStyleState m_Active
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GUIStyleState* m_Active;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyleState*) == 0x8);
    // private UnityEngine.GUIStyleState m_Focused
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GUIStyleState* m_Focused;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyleState*) == 0x8);
    // private UnityEngine.GUIStyleState m_OnNormal
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::GUIStyleState* m_OnNormal;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyleState*) == 0x8);
    // private UnityEngine.GUIStyleState m_OnHover
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::GUIStyleState* m_OnHover;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyleState*) == 0x8);
    // private UnityEngine.GUIStyleState m_OnActive
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::GUIStyleState* m_OnActive;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyleState*) == 0x8);
    // private UnityEngine.GUIStyleState m_OnFocused
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::GUIStyleState* m_OnFocused;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyleState*) == 0x8);
    // private UnityEngine.RectOffset m_Border
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::RectOffset* m_Border;
    // Field size check
    static_assert(sizeof(UnityEngine::RectOffset*) == 0x8);
    // private UnityEngine.RectOffset m_Padding
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::RectOffset* m_Padding;
    // Field size check
    static_assert(sizeof(UnityEngine::RectOffset*) == 0x8);
    // private UnityEngine.RectOffset m_Margin
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::RectOffset* m_Margin;
    // Field size check
    static_assert(sizeof(UnityEngine::RectOffset*) == 0x8);
    // private UnityEngine.RectOffset m_Overflow
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::RectOffset* m_Overflow;
    // Field size check
    static_assert(sizeof(UnityEngine::RectOffset*) == 0x8);
    // private System.String m_Name
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppString* m_Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: GUIStyle
    GUIStyle(System::IntPtr m_Ptr_ = {}, UnityEngine::GUIStyleState* m_Normal_ = {}, UnityEngine::GUIStyleState* m_Hover_ = {}, UnityEngine::GUIStyleState* m_Active_ = {}, UnityEngine::GUIStyleState* m_Focused_ = {}, UnityEngine::GUIStyleState* m_OnNormal_ = {}, UnityEngine::GUIStyleState* m_OnHover_ = {}, UnityEngine::GUIStyleState* m_OnActive_ = {}, UnityEngine::GUIStyleState* m_OnFocused_ = {}, UnityEngine::RectOffset* m_Border_ = {}, UnityEngine::RectOffset* m_Padding_ = {}, UnityEngine::RectOffset* m_Margin_ = {}, UnityEngine::RectOffset* m_Overflow_ = {}, ::Il2CppString* m_Name_ = {}) noexcept : m_Ptr{m_Ptr_}, m_Normal{m_Normal_}, m_Hover{m_Hover_}, m_Active{m_Active_}, m_Focused{m_Focused_}, m_OnNormal{m_OnNormal_}, m_OnHover{m_OnHover_}, m_OnActive{m_OnActive_}, m_OnFocused{m_OnFocused_}, m_Border{m_Border_}, m_Padding{m_Padding_}, m_Margin{m_Margin_}, m_Overflow{m_Overflow_}, m_Name{m_Name_} {}
    // Get static field: static System.Boolean showKeyboardFocus
    static bool _get_showKeyboardFocus();
    // Set static field: static System.Boolean showKeyboardFocus
    static void _set_showKeyboardFocus(bool value);
    // Get static field: static private UnityEngine.GUIStyle s_None
    static UnityEngine::GUIStyle* _get_s_None();
    // Set static field: static private UnityEngine.GUIStyle s_None
    static void _set_s_None(UnityEngine::GUIStyle* value);
    // System.String get_rawName()
    // Offset: 0x160D620
    ::Il2CppString* get_rawName();
    // System.Void set_rawName(System.String value)
    // Offset: 0x160D660
    void set_rawName(::Il2CppString* value);
    // public UnityEngine.Font get_font()
    // Offset: 0x15FEC20
    UnityEngine::Font* get_font();
    // public UnityEngine.ImagePosition get_imagePosition()
    // Offset: 0x160D6B0
    UnityEngine::ImagePosition get_imagePosition();
    // public System.Boolean get_wordWrap()
    // Offset: 0x160D6F0
    bool get_wordWrap();
    // public System.Void set_wordWrap(System.Boolean value)
    // Offset: 0x160D730
    void set_wordWrap(bool value);
    // public UnityEngine.Vector2 get_contentOffset()
    // Offset: 0x160D780
    UnityEngine::Vector2 get_contentOffset();
    // public System.Void set_contentOffset(UnityEngine.Vector2 value)
    // Offset: 0x160D828
    void set_contentOffset(UnityEngine::Vector2 value);
    // public System.Single get_fixedWidth()
    // Offset: 0x1600E34
    float get_fixedWidth();
    // public System.Single get_fixedHeight()
    // Offset: 0x1600E74
    float get_fixedHeight();
    // public System.Boolean get_stretchWidth()
    // Offset: 0x1606D64
    bool get_stretchWidth();
    // public System.Void set_stretchWidth(System.Boolean value)
    // Offset: 0x160B594
    void set_stretchWidth(bool value);
    // public System.Boolean get_stretchHeight()
    // Offset: 0x1606DA4
    bool get_stretchHeight();
    // public System.Void set_stretchHeight(System.Boolean value)
    // Offset: 0x160CFD8
    void set_stretchHeight(bool value);
    // public System.Void set_fontSize(System.Int32 value)
    // Offset: 0x160D8CC
    void set_fontSize(int value);
    // public System.Void set_richText(System.Boolean value)
    // Offset: 0x160D91C
    void set_richText(bool value);
    // System.Void set_Internal_clipOffset(UnityEngine.Vector2 value)
    // Offset: 0x160D96C
    void set_Internal_clipOffset(UnityEngine::Vector2 value);
    // static private System.IntPtr Internal_Create(UnityEngine.GUIStyle self)
    // Offset: 0x160DA10
    static System::IntPtr Internal_Create(UnityEngine::GUIStyle* self);
    // static private System.IntPtr Internal_Copy(UnityEngine.GUIStyle self, UnityEngine.GUIStyle other)
    // Offset: 0x160DA50
    static System::IntPtr Internal_Copy(UnityEngine::GUIStyle* self, UnityEngine::GUIStyle* other);
    // static private System.Void Internal_Destroy(System.IntPtr self)
    // Offset: 0x160DAA0
    static void Internal_Destroy(System::IntPtr self);
    // private System.IntPtr GetStyleStatePtr(System.Int32 idx)
    // Offset: 0x160DAE0
    System::IntPtr GetStyleStatePtr(int idx);
    // private System.IntPtr GetRectOffsetPtr(System.Int32 idx)
    // Offset: 0x160DB30
    System::IntPtr GetRectOffsetPtr(int idx);
    // static private System.Single Internal_GetLineHeight(System.IntPtr target)
    // Offset: 0x160DB80
    static float Internal_GetLineHeight(System::IntPtr target);
    // private System.Void Internal_Draw(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus)
    // Offset: 0x160DBC0
    void Internal_Draw(UnityEngine::Rect screenRect, UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);
    // private System.Void Internal_Draw2(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Boolean on)
    // Offset: 0x160DCE0
    void Internal_Draw2(UnityEngine::Rect position, UnityEngine::GUIContent* content, int controlID, bool on);
    // private System.Void Internal_DrawCursor(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 pos, UnityEngine.Color cursorColor)
    // Offset: 0x160DDD0
    void Internal_DrawCursor(UnityEngine::Rect position, UnityEngine::GUIContent* content, int pos, UnityEngine::Color cursorColor);
    // private System.Void Internal_DrawWithTextSelection(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus, System.Boolean drawSelectionAsComposition, System.Int32 cursorFirst, System.Int32 cursorLast, UnityEngine.Color cursorColor, UnityEngine.Color selectionColor)
    // Offset: 0x160DEBC
    void Internal_DrawWithTextSelection(UnityEngine::Rect screenRect, UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, int cursorFirst, int cursorLast, UnityEngine::Color cursorColor, UnityEngine::Color selectionColor);
    // UnityEngine.Vector2 Internal_GetCursorPixelPosition(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 cursorStringIndex)
    // Offset: 0x160E050
    UnityEngine::Vector2 Internal_GetCursorPixelPosition(UnityEngine::Rect position, UnityEngine::GUIContent* content, int cursorStringIndex);
    // System.Int32 Internal_GetCursorStringIndex(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.Vector2 cursorPixelPosition)
    // Offset: 0x160E13C
    int Internal_GetCursorStringIndex(UnityEngine::Rect position, UnityEngine::GUIContent* content, UnityEngine::Vector2 cursorPixelPosition);
    // System.String Internal_GetSelectedRenderedText(UnityEngine.Rect localPosition, UnityEngine.GUIContent mContent, System.Int32 selectIndex, System.Int32 cursorIndex)
    // Offset: 0x160E214
    ::Il2CppString* Internal_GetSelectedRenderedText(UnityEngine::Rect localPosition, UnityEngine::GUIContent* mContent, int selectIndex, int cursorIndex);
    // UnityEngine.Vector2 Internal_CalcSize(UnityEngine.GUIContent content)
    // Offset: 0x160E304
    UnityEngine::Vector2 Internal_CalcSize(UnityEngine::GUIContent* content);
    // UnityEngine.Vector2 Internal_CalcSizeWithConstraints(UnityEngine.GUIContent content, UnityEngine.Vector2 maxSize)
    // Offset: 0x160E3BC
    UnityEngine::Vector2 Internal_CalcSizeWithConstraints(UnityEngine::GUIContent* content, UnityEngine::Vector2 maxSize);
    // private System.Single Internal_CalcHeight(UnityEngine.GUIContent content, System.Single width)
    // Offset: 0x160E490
    float Internal_CalcHeight(UnityEngine::GUIContent* content, float width);
    // private UnityEngine.Vector2 Internal_CalcMinMaxWidth(UnityEngine.GUIContent content)
    // Offset: 0x160E4F0
    UnityEngine::Vector2 Internal_CalcMinMaxWidth(UnityEngine::GUIContent* content);
    // static System.Void SetMouseTooltip(System.String tooltip, UnityEngine.Rect screenRect)
    // Offset: 0x15FF958
    static void SetMouseTooltip(::Il2CppString* tooltip, UnityEngine::Rect screenRect);
    // static private System.Single Internal_GetCursorFlashOffset()
    // Offset: 0x160E5F8
    static float Internal_GetCursorFlashOffset();
    // static System.Void SetDefaultFont(UnityEngine.Font font)
    // Offset: 0x160BF5C
    static void SetDefaultFont(UnityEngine::Font* font);
    // public System.Void .ctor(UnityEngine.GUIStyle other)
    // Offset: 0x160E62C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUIStyle* New_ctor(UnityEngine::GUIStyle* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUIStyle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUIStyle*, creationType>(other)));
    }
    // public System.String get_name()
    // Offset: 0x15FFEE0
    ::Il2CppString* get_name();
    // public System.Void set_name(System.String value)
    // Offset: 0x160C44C
    void set_name(::Il2CppString* value);
    // public UnityEngine.GUIStyleState get_normal()
    // Offset: 0x160D028
    UnityEngine::GUIStyleState* get_normal();
    // public UnityEngine.RectOffset get_margin()
    // Offset: 0x1602228
    UnityEngine::RectOffset* get_margin();
    // public UnityEngine.RectOffset get_padding()
    // Offset: 0x1608490
    UnityEngine::RectOffset* get_padding();
    // public System.Single get_lineHeight()
    // Offset: 0x160E890
    float get_lineHeight();
    // public System.Void Draw(UnityEngine.Rect position, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus)
    // Offset: 0x16022E8
    void Draw(UnityEngine::Rect position, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);
    // public System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus)
    // Offset: 0x15FF8E8
    void Draw(UnityEngine::Rect position, UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);
    // public System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID)
    // Offset: 0x16012E8
    void Draw(UnityEngine::Rect position, UnityEngine::GUIContent* content, int controlID);
    // public System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Boolean on)
    // Offset: 0x15FE650
    void Draw(UnityEngine::Rect position, UnityEngine::GUIContent* content, int controlID, bool on);
    // public System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Boolean on, System.Boolean hover)
    // Offset: 0x15FC88C
    void Draw(UnityEngine::Rect position, UnityEngine::GUIContent* content, int controlID, bool on, bool hover);
    // private System.Void Draw(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlId, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus)
    // Offset: 0x160E9BC
    void Draw(UnityEngine::Rect position, UnityEngine::GUIContent* content, int controlId, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);
    // public System.Void DrawCursor(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Int32 character)
    // Offset: 0x160EA88
    void DrawCursor(UnityEngine::Rect position, UnityEngine::GUIContent* content, int controlID, int character);
    // System.Void DrawWithTextSelection(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Boolean isActive, System.Boolean hasKeyboardFocus, System.Int32 firstSelectedCharacter, System.Int32 lastSelectedCharacter, System.Boolean drawSelectionAsComposition, UnityEngine.Color selectionColor)
    // Offset: 0x160ECE4
    void DrawWithTextSelection(UnityEngine::Rect position, UnityEngine::GUIContent* content, bool isActive, bool hasKeyboardFocus, int firstSelectedCharacter, int lastSelectedCharacter, bool drawSelectionAsComposition, UnityEngine::Color selectionColor);
    // System.Void DrawWithTextSelection(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Int32 firstSelectedCharacter, System.Int32 lastSelectedCharacter, System.Boolean drawSelectionAsComposition)
    // Offset: 0x160EF44
    void DrawWithTextSelection(UnityEngine::Rect position, UnityEngine::GUIContent* content, int controlID, int firstSelectedCharacter, int lastSelectedCharacter, bool drawSelectionAsComposition);
    // public System.Void DrawWithTextSelection(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Int32 firstSelectedCharacter, System.Int32 lastSelectedCharacter)
    // Offset: 0x160F0CC
    void DrawWithTextSelection(UnityEngine::Rect position, UnityEngine::GUIContent* content, int controlID, int firstSelectedCharacter, int lastSelectedCharacter);
    // static public UnityEngine.GUIStyle get_none()
    // Offset: 0x1601240
    static UnityEngine::GUIStyle* get_none();
    // public UnityEngine.Vector2 GetCursorPixelPosition(UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 cursorStringIndex)
    // Offset: 0x160F1C0
    UnityEngine::Vector2 GetCursorPixelPosition(UnityEngine::Rect position, UnityEngine::GUIContent* content, int cursorStringIndex);
    // public System.Int32 GetCursorStringIndex(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.Vector2 cursorPixelPosition)
    // Offset: 0x160F1C4
    int GetCursorStringIndex(UnityEngine::Rect position, UnityEngine::GUIContent* content, UnityEngine::Vector2 cursorPixelPosition);
    // public UnityEngine.Vector2 CalcSize(UnityEngine.GUIContent content)
    // Offset: 0x160F1C8
    UnityEngine::Vector2 CalcSize(UnityEngine::GUIContent* content);
    // UnityEngine.Vector2 CalcSizeWithConstraints(UnityEngine.GUIContent content, UnityEngine.Vector2 constraints)
    // Offset: 0x160B2F0
    UnityEngine::Vector2 CalcSizeWithConstraints(UnityEngine::GUIContent* content, UnityEngine::Vector2 constraints);
    // public System.Single CalcHeight(UnityEngine.GUIContent content, System.Single width)
    // Offset: 0x160F1CC
    float CalcHeight(UnityEngine::GUIContent* content, float width);
    // public System.Boolean get_isHeightDependantOnWidth()
    // Offset: 0x160B15C
    bool get_isHeightDependantOnWidth();
    // public System.Void CalcMinMaxWidth(UnityEngine.GUIContent content, out System.Single minWidth, out System.Single maxWidth)
    // Offset: 0x160F22C
    void CalcMinMaxWidth(UnityEngine::GUIContent* content, float& minWidth, float& maxWidth);
    // static private System.Void .cctor()
    // Offset: 0x160F320
    static void _cctor();
    // private System.Void get_contentOffset_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x160D7D8
    void get_contentOffset_Injected(UnityEngine::Vector2& ret);
    // private System.Void set_contentOffset_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x160D87C
    void set_contentOffset_Injected(UnityEngine::Vector2& value);
    // private System.Void set_Internal_clipOffset_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x160D9C0
    void set_Internal_clipOffset_Injected(UnityEngine::Vector2& value);
    // private System.Void Internal_Draw_Injected(ref UnityEngine.Rect screenRect, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus)
    // Offset: 0x160DC58
    void Internal_Draw_Injected(UnityEngine::Rect& screenRect, UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);
    // private System.Void Internal_Draw2_Injected(ref UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 controlID, System.Boolean on)
    // Offset: 0x160DD60
    void Internal_Draw2_Injected(UnityEngine::Rect& position, UnityEngine::GUIContent* content, int controlID, bool on);
    // private System.Void Internal_DrawCursor_Injected(ref UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 pos, ref UnityEngine.Color cursorColor)
    // Offset: 0x160DE4C
    void Internal_DrawCursor_Injected(UnityEngine::Rect& position, UnityEngine::GUIContent* content, int pos, UnityEngine::Color& cursorColor);
    // private System.Void Internal_DrawWithTextSelection_Injected(ref UnityEngine.Rect screenRect, UnityEngine.GUIContent content, System.Boolean isHover, System.Boolean isActive, System.Boolean on, System.Boolean hasKeyboardFocus, System.Boolean drawSelectionAsComposition, System.Int32 cursorFirst, System.Int32 cursorLast, ref UnityEngine.Color cursorColor, ref UnityEngine.Color selectionColor)
    // Offset: 0x160DF90
    void Internal_DrawWithTextSelection_Injected(UnityEngine::Rect& screenRect, UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, int cursorFirst, int cursorLast, UnityEngine::Color& cursorColor, UnityEngine::Color& selectionColor);
    // private System.Void Internal_GetCursorPixelPosition_Injected(ref UnityEngine.Rect position, UnityEngine.GUIContent content, System.Int32 cursorStringIndex, out UnityEngine.Vector2 ret)
    // Offset: 0x160E0CC
    void Internal_GetCursorPixelPosition_Injected(UnityEngine::Rect& position, UnityEngine::GUIContent* content, int cursorStringIndex, UnityEngine::Vector2& ret);
    // private System.Int32 Internal_GetCursorStringIndex_Injected(ref UnityEngine.Rect position, UnityEngine.GUIContent content, ref UnityEngine.Vector2 cursorPixelPosition)
    // Offset: 0x160E1AC
    int Internal_GetCursorStringIndex_Injected(UnityEngine::Rect& position, UnityEngine::GUIContent* content, UnityEngine::Vector2& cursorPixelPosition);
    // private System.String Internal_GetSelectedRenderedText_Injected(ref UnityEngine.Rect localPosition, UnityEngine.GUIContent mContent, System.Int32 selectIndex, System.Int32 cursorIndex)
    // Offset: 0x160E294
    ::Il2CppString* Internal_GetSelectedRenderedText_Injected(UnityEngine::Rect& localPosition, UnityEngine::GUIContent* mContent, int selectIndex, int cursorIndex);
    // private System.Void Internal_CalcSize_Injected(UnityEngine.GUIContent content, out UnityEngine.Vector2 ret)
    // Offset: 0x160E364
    void Internal_CalcSize_Injected(UnityEngine::GUIContent* content, UnityEngine::Vector2& ret);
    // private System.Void Internal_CalcSizeWithConstraints_Injected(UnityEngine.GUIContent content, ref UnityEngine.Vector2 maxSize, out UnityEngine.Vector2 ret)
    // Offset: 0x160E428
    void Internal_CalcSizeWithConstraints_Injected(UnityEngine::GUIContent* content, UnityEngine::Vector2& maxSize, UnityEngine::Vector2& ret);
    // private System.Void Internal_CalcMinMaxWidth_Injected(UnityEngine.GUIContent content, out UnityEngine.Vector2 ret)
    // Offset: 0x160E550
    void Internal_CalcMinMaxWidth_Injected(UnityEngine::GUIContent* content, UnityEngine::Vector2& ret);
    // static private System.Void SetMouseTooltip_Injected(System.String tooltip, ref UnityEngine.Rect screenRect)
    // Offset: 0x160E5A8
    static void SetMouseTooltip_Injected(::Il2CppString* tooltip, UnityEngine::Rect& screenRect);
    // public System.Void .ctor()
    // Offset: 0x160B4FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUIStyle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUIStyle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUIStyle*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x160E714
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.String ToString()
    // Offset: 0x160F258
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.GUIStyle
  static check_size<sizeof(GUIStyle), 120 + sizeof(::Il2CppString*)> __UnityEngine_GUIStyleSizeCheck;
  static_assert(sizeof(GUIStyle) == 0x80);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUIStyle*, "UnityEngine", "GUIStyle");
