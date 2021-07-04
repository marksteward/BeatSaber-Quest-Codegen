// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Font
  class Font;
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: GUISettings
  class GUISettings;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0xE8
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUISkin
  // [ExecuteInEditMode] Offset: DADA28
  // [RequiredByNativeCodeAttribute] Offset: DADA28
  // [AssetFileNameExtensionAttribute] Offset: DADA28
  class GUISkin : public UnityEngine::ScriptableObject {
    public:
    // Nested type: UnityEngine::GUISkin::SkinChangedDelegate
    class SkinChangedDelegate;
    // private UnityEngine.Font m_Font
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Font* m_Font;
    // Field size check
    static_assert(sizeof(UnityEngine::Font*) == 0x8);
    // private UnityEngine.GUIStyle m_box
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GUIStyle* m_box;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_button
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GUIStyle* m_button;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_toggle
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GUIStyle* m_toggle;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_label
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::GUIStyle* m_label;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_textField
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::GUIStyle* m_textField;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_textArea
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::GUIStyle* m_textArea;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_window
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::GUIStyle* m_window;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_horizontalSlider
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::GUIStyle* m_horizontalSlider;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_horizontalSliderThumb
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::GUIStyle* m_horizontalSliderThumb;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_horizontalSliderThumbExtent
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::GUIStyle* m_horizontalSliderThumbExtent;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_verticalSlider
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::GUIStyle* m_verticalSlider;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_verticalSliderThumb
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::GUIStyle* m_verticalSliderThumb;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_verticalSliderThumbExtent
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::GUIStyle* m_verticalSliderThumbExtent;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_horizontalScrollbar
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::GUIStyle* m_horizontalScrollbar;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_horizontalScrollbarThumb
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::GUIStyle* m_horizontalScrollbarThumb;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_horizontalScrollbarLeftButton
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::GUIStyle* m_horizontalScrollbarLeftButton;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_horizontalScrollbarRightButton
    // Size: 0x8
    // Offset: 0xA0
    UnityEngine::GUIStyle* m_horizontalScrollbarRightButton;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_verticalScrollbar
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::GUIStyle* m_verticalScrollbar;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_verticalScrollbarThumb
    // Size: 0x8
    // Offset: 0xB0
    UnityEngine::GUIStyle* m_verticalScrollbarThumb;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_verticalScrollbarUpButton
    // Size: 0x8
    // Offset: 0xB8
    UnityEngine::GUIStyle* m_verticalScrollbarUpButton;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_verticalScrollbarDownButton
    // Size: 0x8
    // Offset: 0xC0
    UnityEngine::GUIStyle* m_verticalScrollbarDownButton;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.GUIStyle m_ScrollView
    // Size: 0x8
    // Offset: 0xC8
    UnityEngine::GUIStyle* m_ScrollView;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // UnityEngine.GUIStyle[] m_CustomStyles
    // Size: 0x8
    // Offset: 0xD0
    ::Array<UnityEngine::GUIStyle*>* m_CustomStyles;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GUIStyle*>*) == 0x8);
    // private UnityEngine.GUISettings m_Settings
    // Size: 0x8
    // Offset: 0xD8
    UnityEngine::GUISettings* m_Settings;
    // Field size check
    static_assert(sizeof(UnityEngine::GUISettings*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> m_Styles
    // Size: 0x8
    // Offset: 0xE0
    System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::GUIStyle*>* m_Styles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::GUIStyle*>*) == 0x8);
    // Creating value type constructor for type: GUISkin
    GUISkin(UnityEngine::Font* m_Font_ = {}, UnityEngine::GUIStyle* m_box_ = {}, UnityEngine::GUIStyle* m_button_ = {}, UnityEngine::GUIStyle* m_toggle_ = {}, UnityEngine::GUIStyle* m_label_ = {}, UnityEngine::GUIStyle* m_textField_ = {}, UnityEngine::GUIStyle* m_textArea_ = {}, UnityEngine::GUIStyle* m_window_ = {}, UnityEngine::GUIStyle* m_horizontalSlider_ = {}, UnityEngine::GUIStyle* m_horizontalSliderThumb_ = {}, UnityEngine::GUIStyle* m_horizontalSliderThumbExtent_ = {}, UnityEngine::GUIStyle* m_verticalSlider_ = {}, UnityEngine::GUIStyle* m_verticalSliderThumb_ = {}, UnityEngine::GUIStyle* m_verticalSliderThumbExtent_ = {}, UnityEngine::GUIStyle* m_horizontalScrollbar_ = {}, UnityEngine::GUIStyle* m_horizontalScrollbarThumb_ = {}, UnityEngine::GUIStyle* m_horizontalScrollbarLeftButton_ = {}, UnityEngine::GUIStyle* m_horizontalScrollbarRightButton_ = {}, UnityEngine::GUIStyle* m_verticalScrollbar_ = {}, UnityEngine::GUIStyle* m_verticalScrollbarThumb_ = {}, UnityEngine::GUIStyle* m_verticalScrollbarUpButton_ = {}, UnityEngine::GUIStyle* m_verticalScrollbarDownButton_ = {}, UnityEngine::GUIStyle* m_ScrollView_ = {}, ::Array<UnityEngine::GUIStyle*>* m_CustomStyles_ = {}, UnityEngine::GUISettings* m_Settings_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::GUIStyle*>* m_Styles_ = {}) noexcept : m_Font{m_Font_}, m_box{m_box_}, m_button{m_button_}, m_toggle{m_toggle_}, m_label{m_label_}, m_textField{m_textField_}, m_textArea{m_textArea_}, m_window{m_window_}, m_horizontalSlider{m_horizontalSlider_}, m_horizontalSliderThumb{m_horizontalSliderThumb_}, m_horizontalSliderThumbExtent{m_horizontalSliderThumbExtent_}, m_verticalSlider{m_verticalSlider_}, m_verticalSliderThumb{m_verticalSliderThumb_}, m_verticalSliderThumbExtent{m_verticalSliderThumbExtent_}, m_horizontalScrollbar{m_horizontalScrollbar_}, m_horizontalScrollbarThumb{m_horizontalScrollbarThumb_}, m_horizontalScrollbarLeftButton{m_horizontalScrollbarLeftButton_}, m_horizontalScrollbarRightButton{m_horizontalScrollbarRightButton_}, m_verticalScrollbar{m_verticalScrollbar_}, m_verticalScrollbarThumb{m_verticalScrollbarThumb_}, m_verticalScrollbarUpButton{m_verticalScrollbarUpButton_}, m_verticalScrollbarDownButton{m_verticalScrollbarDownButton_}, m_ScrollView{m_ScrollView_}, m_CustomStyles{m_CustomStyles_}, m_Settings{m_Settings_}, m_Styles{m_Styles_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static UnityEngine.GUIStyle ms_Error
    static UnityEngine::GUIStyle* _get_ms_Error();
    // Set static field: static UnityEngine.GUIStyle ms_Error
    static void _set_ms_Error(UnityEngine::GUIStyle* value);
    // Get static field: static UnityEngine.GUISkin/SkinChangedDelegate m_SkinChanged
    static UnityEngine::GUISkin::SkinChangedDelegate* _get_m_SkinChanged();
    // Set static field: static UnityEngine.GUISkin/SkinChangedDelegate m_SkinChanged
    static void _set_m_SkinChanged(UnityEngine::GUISkin::SkinChangedDelegate* value);
    // Get static field: static UnityEngine.GUISkin current
    static UnityEngine::GUISkin* _get_current();
    // Set static field: static UnityEngine.GUISkin current
    static void _set_current(UnityEngine::GUISkin* value);
    // System.Void OnEnable()
    // Offset: 0x1A94340
    void OnEnable();
    // static System.Void CleanupRoots()
    // Offset: 0x1A943C4
    static void CleanupRoots();
    // public UnityEngine.Font get_font()
    // Offset: 0x1A876F8
    UnityEngine::Font* get_font();
    // public System.Void set_font(UnityEngine.Font value)
    // Offset: 0x1A9441C
    void set_font(UnityEngine::Font* value);
    // public UnityEngine.GUIStyle get_box()
    // Offset: 0x1A8CA58
    UnityEngine::GUIStyle* get_box();
    // public System.Void set_box(UnityEngine.GUIStyle value)
    // Offset: 0x1A94544
    void set_box(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_label()
    // Offset: 0x1A8C7C8
    UnityEngine::GUIStyle* get_label();
    // public System.Void set_label(UnityEngine.GUIStyle value)
    // Offset: 0x1A9454C
    void set_label(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_textField()
    // Offset: 0x1A8CD58
    UnityEngine::GUIStyle* get_textField();
    // public System.Void set_textField(UnityEngine.GUIStyle value)
    // Offset: 0x1A94554
    void set_textField(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_textArea()
    // Offset: 0x1A9455C
    UnityEngine::GUIStyle* get_textArea();
    // public System.Void set_textArea(UnityEngine.GUIStyle value)
    // Offset: 0x1A94564
    void set_textArea(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_button()
    // Offset: 0x1A8CBEC
    UnityEngine::GUIStyle* get_button();
    // public System.Void set_button(UnityEngine.GUIStyle value)
    // Offset: 0x1A9456C
    void set_button(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_toggle()
    // Offset: 0x1A8D090
    UnityEngine::GUIStyle* get_toggle();
    // public System.Void set_toggle(UnityEngine.GUIStyle value)
    // Offset: 0x1A94574
    void set_toggle(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_window()
    // Offset: 0x1A9457C
    UnityEngine::GUIStyle* get_window();
    // public System.Void set_window(UnityEngine.GUIStyle value)
    // Offset: 0x1A94584
    void set_window(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_horizontalSlider()
    // Offset: 0x1A8D22C
    UnityEngine::GUIStyle* get_horizontalSlider();
    // public System.Void set_horizontalSlider(UnityEngine.GUIStyle value)
    // Offset: 0x1A9458C
    void set_horizontalSlider(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_horizontalSliderThumb()
    // Offset: 0x1A8D234
    UnityEngine::GUIStyle* get_horizontalSliderThumb();
    // public System.Void set_horizontalSliderThumb(UnityEngine.GUIStyle value)
    // Offset: 0x1A94594
    void set_horizontalSliderThumb(UnityEngine::GUIStyle* value);
    // UnityEngine.GUIStyle get_horizontalSliderThumbExtent()
    // Offset: 0x1A9459C
    UnityEngine::GUIStyle* get_horizontalSliderThumbExtent();
    // System.Void set_horizontalSliderThumbExtent(UnityEngine.GUIStyle value)
    // Offset: 0x1A945A4
    void set_horizontalSliderThumbExtent(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_verticalSlider()
    // Offset: 0x1A945AC
    UnityEngine::GUIStyle* get_verticalSlider();
    // public System.Void set_verticalSlider(UnityEngine.GUIStyle value)
    // Offset: 0x1A945B4
    void set_verticalSlider(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_verticalSliderThumb()
    // Offset: 0x1A945BC
    UnityEngine::GUIStyle* get_verticalSliderThumb();
    // public System.Void set_verticalSliderThumb(UnityEngine.GUIStyle value)
    // Offset: 0x1A945C4
    void set_verticalSliderThumb(UnityEngine::GUIStyle* value);
    // UnityEngine.GUIStyle get_verticalSliderThumbExtent()
    // Offset: 0x1A945CC
    UnityEngine::GUIStyle* get_verticalSliderThumbExtent();
    // System.Void set_verticalSliderThumbExtent(UnityEngine.GUIStyle value)
    // Offset: 0x1A945D4
    void set_verticalSliderThumbExtent(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_horizontalScrollbar()
    // Offset: 0x1A8ECA4
    UnityEngine::GUIStyle* get_horizontalScrollbar();
    // public System.Void set_horizontalScrollbar(UnityEngine.GUIStyle value)
    // Offset: 0x1A945DC
    void set_horizontalScrollbar(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_horizontalScrollbarThumb()
    // Offset: 0x1A945E4
    UnityEngine::GUIStyle* get_horizontalScrollbarThumb();
    // public System.Void set_horizontalScrollbarThumb(UnityEngine.GUIStyle value)
    // Offset: 0x1A945EC
    void set_horizontalScrollbarThumb(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_horizontalScrollbarLeftButton()
    // Offset: 0x1A945F4
    UnityEngine::GUIStyle* get_horizontalScrollbarLeftButton();
    // public System.Void set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle value)
    // Offset: 0x1A945FC
    void set_horizontalScrollbarLeftButton(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_horizontalScrollbarRightButton()
    // Offset: 0x1A94604
    UnityEngine::GUIStyle* get_horizontalScrollbarRightButton();
    // public System.Void set_horizontalScrollbarRightButton(UnityEngine.GUIStyle value)
    // Offset: 0x1A9460C
    void set_horizontalScrollbarRightButton(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_verticalScrollbar()
    // Offset: 0x1A8ECAC
    UnityEngine::GUIStyle* get_verticalScrollbar();
    // public System.Void set_verticalScrollbar(UnityEngine.GUIStyle value)
    // Offset: 0x1A94614
    void set_verticalScrollbar(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_verticalScrollbarThumb()
    // Offset: 0x1A9461C
    UnityEngine::GUIStyle* get_verticalScrollbarThumb();
    // public System.Void set_verticalScrollbarThumb(UnityEngine.GUIStyle value)
    // Offset: 0x1A94624
    void set_verticalScrollbarThumb(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_verticalScrollbarUpButton()
    // Offset: 0x1A9462C
    UnityEngine::GUIStyle* get_verticalScrollbarUpButton();
    // public System.Void set_verticalScrollbarUpButton(UnityEngine.GUIStyle value)
    // Offset: 0x1A94634
    void set_verticalScrollbarUpButton(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_verticalScrollbarDownButton()
    // Offset: 0x1A9463C
    UnityEngine::GUIStyle* get_verticalScrollbarDownButton();
    // public System.Void set_verticalScrollbarDownButton(UnityEngine.GUIStyle value)
    // Offset: 0x1A94644
    void set_verticalScrollbarDownButton(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle get_scrollView()
    // Offset: 0x1A8ECB4
    UnityEngine::GUIStyle* get_scrollView();
    // public System.Void set_scrollView(UnityEngine.GUIStyle value)
    // Offset: 0x1A9464C
    void set_scrollView(UnityEngine::GUIStyle* value);
    // public UnityEngine.GUIStyle[] get_customStyles()
    // Offset: 0x1A94654
    ::Array<UnityEngine::GUIStyle*>* get_customStyles();
    // public System.Void set_customStyles(UnityEngine.GUIStyle[] value)
    // Offset: 0x1A9465C
    void set_customStyles(::Array<UnityEngine::GUIStyle*>* value);
    // public UnityEngine.GUISettings get_settings()
    // Offset: 0x1A871A8
    UnityEngine::GUISettings* get_settings();
    // static UnityEngine.GUIStyle get_error()
    // Offset: 0x1A94664
    static UnityEngine::GUIStyle* get_error();
    // System.Void Apply()
    // Offset: 0x1A94344
    void Apply();
    // private System.Void BuildStyleCache()
    // Offset: 0x1A94794
    void BuildStyleCache();
    // public UnityEngine.GUIStyle GetStyle(System.String styleName)
    // Offset: 0x1A889A8
    UnityEngine::GUIStyle* GetStyle(::Il2CppString* styleName);
    // public UnityEngine.GUIStyle FindStyle(System.String styleName)
    // Offset: 0x1A95598
    UnityEngine::GUIStyle* FindStyle(::Il2CppString* styleName);
    // System.Void MakeCurrent()
    // Offset: 0x1A83ADC
    void MakeCurrent();
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1A95834
    System::Collections::IEnumerator* GetEnumerator();
    // public System.Void .ctor()
    // Offset: 0x1A942C0
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUISkin* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUISkin::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUISkin*, creationType>()));
    }
  }; // UnityEngine.GUISkin
  #pragma pack(pop)
  static check_size<sizeof(GUISkin), 224 + sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::GUIStyle*>*)> __UnityEngine_GUISkinSizeCheck;
  static_assert(sizeof(GUISkin) == 0xE8);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUISkin*, "UnityEngine", "GUISkin");
// Writing MetadataGetter for method: UnityEngine::GUISkin::OnEnable
// Il2CppName: OnEnable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::CleanupRoots
// Il2CppName: CleanupRoots
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_font
// Il2CppName: get_font
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_font
// Il2CppName: set_font
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_box
// Il2CppName: get_box
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_box
// Il2CppName: set_box
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_label
// Il2CppName: get_label
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_label
// Il2CppName: set_label
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_textField
// Il2CppName: get_textField
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_textField
// Il2CppName: set_textField
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_textArea
// Il2CppName: get_textArea
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_textArea
// Il2CppName: set_textArea
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_button
// Il2CppName: get_button
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_button
// Il2CppName: set_button
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_toggle
// Il2CppName: get_toggle
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_toggle
// Il2CppName: set_toggle
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_window
// Il2CppName: get_window
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_window
// Il2CppName: set_window
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_horizontalSlider
// Il2CppName: get_horizontalSlider
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_horizontalSlider
// Il2CppName: set_horizontalSlider
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_horizontalSliderThumb
// Il2CppName: get_horizontalSliderThumb
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_horizontalSliderThumb
// Il2CppName: set_horizontalSliderThumb
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_horizontalSliderThumbExtent
// Il2CppName: get_horizontalSliderThumbExtent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_horizontalSliderThumbExtent
// Il2CppName: set_horizontalSliderThumbExtent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_verticalSlider
// Il2CppName: get_verticalSlider
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_verticalSlider
// Il2CppName: set_verticalSlider
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_verticalSliderThumb
// Il2CppName: get_verticalSliderThumb
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_verticalSliderThumb
// Il2CppName: set_verticalSliderThumb
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_verticalSliderThumbExtent
// Il2CppName: get_verticalSliderThumbExtent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_verticalSliderThumbExtent
// Il2CppName: set_verticalSliderThumbExtent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_horizontalScrollbar
// Il2CppName: get_horizontalScrollbar
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_horizontalScrollbar
// Il2CppName: set_horizontalScrollbar
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_horizontalScrollbarThumb
// Il2CppName: get_horizontalScrollbarThumb
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_horizontalScrollbarThumb
// Il2CppName: set_horizontalScrollbarThumb
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_horizontalScrollbarLeftButton
// Il2CppName: get_horizontalScrollbarLeftButton
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_horizontalScrollbarLeftButton
// Il2CppName: set_horizontalScrollbarLeftButton
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_horizontalScrollbarRightButton
// Il2CppName: get_horizontalScrollbarRightButton
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_horizontalScrollbarRightButton
// Il2CppName: set_horizontalScrollbarRightButton
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_verticalScrollbar
// Il2CppName: get_verticalScrollbar
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_verticalScrollbar
// Il2CppName: set_verticalScrollbar
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_verticalScrollbarThumb
// Il2CppName: get_verticalScrollbarThumb
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_verticalScrollbarThumb
// Il2CppName: set_verticalScrollbarThumb
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_verticalScrollbarUpButton
// Il2CppName: get_verticalScrollbarUpButton
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_verticalScrollbarUpButton
// Il2CppName: set_verticalScrollbarUpButton
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_verticalScrollbarDownButton
// Il2CppName: get_verticalScrollbarDownButton
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_verticalScrollbarDownButton
// Il2CppName: set_verticalScrollbarDownButton
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_scrollView
// Il2CppName: get_scrollView
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_scrollView
// Il2CppName: set_scrollView
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_customStyles
// Il2CppName: get_customStyles
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::set_customStyles
// Il2CppName: set_customStyles
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_settings
// Il2CppName: get_settings
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::get_error
// Il2CppName: get_error
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::Apply
// Il2CppName: Apply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::BuildStyleCache
// Il2CppName: BuildStyleCache
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::GetStyle
// Il2CppName: GetStyle
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::FindStyle
// Il2CppName: FindStyle
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::MakeCurrent
// Il2CppName: MakeCurrent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::GetEnumerator
// Il2CppName: GetEnumerator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::GUISkin::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
