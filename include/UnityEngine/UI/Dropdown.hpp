// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
// Including type: UnityEngine.EventSystems.ICancelHandler
#include "UnityEngine/EventSystems/ICancelHandler.hpp"
// Including type: UnityEngine.UI.CoroutineTween.FloatTween
#include "UnityEngine/UI/CoroutineTween/FloatTween.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
  // Forward declaring type: Image
  class Image;
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Sprite
  class Sprite;
  // Skipping declaration: Component because it is already included!
  // Forward declaring type: Canvas
  class Canvas;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::UI::CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // Forward declaring type: TweenRunner`1<T>
  template<typename T>
  class TweenRunner_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x159
  // Autogenerated type: UnityEngine.UI.Dropdown
  // [] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: D7C9FC
  // [RequireComponent] Offset: D7C9FC
  class Dropdown : public UnityEngine::UI::Selectable/*, public UnityEngine::EventSystems::IPointerClickHandler, public UnityEngine::EventSystems::ISubmitHandler, public UnityEngine::EventSystems::ICancelHandler*/ {
    public:
    // Nested type: UnityEngine::UI::Dropdown::DropdownItem
    class DropdownItem;
    // Nested type: UnityEngine::UI::Dropdown::OptionData
    class OptionData;
    // Nested type: UnityEngine::UI::Dropdown::OptionDataList
    class OptionDataList;
    // Nested type: UnityEngine::UI::Dropdown::DropdownEvent
    class DropdownEvent;
    // Nested type: UnityEngine::UI::Dropdown::$$c__DisplayClass62_0
    class $$c__DisplayClass62_0;
    // Nested type: UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74
    class $DelayedDestroyDropdownList$d__74;
    // private UnityEngine.RectTransform m_Template
    // Size: 0x8
    // Offset: 0xF0
    UnityEngine::RectTransform* m_Template;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.UI.Text m_CaptionText
    // Size: 0x8
    // Offset: 0xF8
    UnityEngine::UI::Text* m_CaptionText;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Text*) == 0x8);
    // private UnityEngine.UI.Image m_CaptionImage
    // Size: 0x8
    // Offset: 0x100
    UnityEngine::UI::Image* m_CaptionImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // [SpaceAttribute] Offset: 0xD7DEEC
    // private UnityEngine.UI.Text m_ItemText
    // Size: 0x8
    // Offset: 0x108
    UnityEngine::UI::Text* m_ItemText;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Text*) == 0x8);
    // private UnityEngine.UI.Image m_ItemImage
    // Size: 0x8
    // Offset: 0x110
    UnityEngine::UI::Image* m_ItemImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // [SpaceAttribute] Offset: 0xD7DF34
    // private System.Int32 m_Value
    // Size: 0x4
    // Offset: 0x118
    int m_Value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_Value and: m_Options
    char __padding5[0x4] = {};
    // [SpaceAttribute] Offset: 0xD7DF6C
    // private UnityEngine.UI.Dropdown/OptionDataList m_Options
    // Size: 0x8
    // Offset: 0x120
    UnityEngine::UI::Dropdown::OptionDataList* m_Options;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Dropdown::OptionDataList*) == 0x8);
    // [SpaceAttribute] Offset: 0xD7DFA4
    // private UnityEngine.UI.Dropdown/DropdownEvent m_OnValueChanged
    // Size: 0x8
    // Offset: 0x128
    UnityEngine::UI::Dropdown::DropdownEvent* m_OnValueChanged;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Dropdown::DropdownEvent*) == 0x8);
    // private System.Single m_AlphaFadeSpeed
    // Size: 0x4
    // Offset: 0x130
    float m_AlphaFadeSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_AlphaFadeSpeed and: m_Dropdown
    char __padding8[0x4] = {};
    // private UnityEngine.GameObject m_Dropdown
    // Size: 0x8
    // Offset: 0x138
    UnityEngine::GameObject* m_Dropdown;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject m_Blocker
    // Size: 0x8
    // Offset: 0x140
    UnityEngine::GameObject* m_Blocker;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> m_Items
    // Size: 0x8
    // Offset: 0x148
    System::Collections::Generic::List_1<UnityEngine::UI::Dropdown::DropdownItem*>* m_Items;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::UI::Dropdown::DropdownItem*>*) == 0x8);
    // private UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> m_AlphaTweenRunner
    // Size: 0x8
    // Offset: 0x150
    UnityEngine::UI::CoroutineTween::TweenRunner_1<UnityEngine::UI::CoroutineTween::FloatTween>* m_AlphaTweenRunner;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::CoroutineTween::TweenRunner_1<UnityEngine::UI::CoroutineTween::FloatTween>*) == 0x8);
    // private System.Boolean validTemplate
    // Size: 0x1
    // Offset: 0x158
    bool validTemplate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Dropdown
    Dropdown(UnityEngine::RectTransform* m_Template_ = {}, UnityEngine::UI::Text* m_CaptionText_ = {}, UnityEngine::UI::Image* m_CaptionImage_ = {}, UnityEngine::UI::Text* m_ItemText_ = {}, UnityEngine::UI::Image* m_ItemImage_ = {}, int m_Value_ = {}, UnityEngine::UI::Dropdown::OptionDataList* m_Options_ = {}, UnityEngine::UI::Dropdown::DropdownEvent* m_OnValueChanged_ = {}, float m_AlphaFadeSpeed_ = {}, UnityEngine::GameObject* m_Dropdown_ = {}, UnityEngine::GameObject* m_Blocker_ = {}, System::Collections::Generic::List_1<UnityEngine::UI::Dropdown::DropdownItem*>* m_Items_ = {}, UnityEngine::UI::CoroutineTween::TweenRunner_1<UnityEngine::UI::CoroutineTween::FloatTween>* m_AlphaTweenRunner_ = {}, bool validTemplate_ = {}) noexcept : m_Template{m_Template_}, m_CaptionText{m_CaptionText_}, m_CaptionImage{m_CaptionImage_}, m_ItemText{m_ItemText_}, m_ItemImage{m_ItemImage_}, m_Value{m_Value_}, m_Options{m_Options_}, m_OnValueChanged{m_OnValueChanged_}, m_AlphaFadeSpeed{m_AlphaFadeSpeed_}, m_Dropdown{m_Dropdown_}, m_Blocker{m_Blocker_}, m_Items{m_Items_}, m_AlphaTweenRunner{m_AlphaTweenRunner_}, validTemplate{validTemplate_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerClickHandler
    operator UnityEngine::EventSystems::IPointerClickHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerClickHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::ISubmitHandler
    operator UnityEngine::EventSystems::ISubmitHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::ISubmitHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::ICancelHandler
    operator UnityEngine::EventSystems::ICancelHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::ICancelHandler*>(this);
    }
    // Get static field: static private UnityEngine.UI.Dropdown/OptionData s_NoOptionData
    static UnityEngine::UI::Dropdown::OptionData* _get_s_NoOptionData();
    // Set static field: static private UnityEngine.UI.Dropdown/OptionData s_NoOptionData
    static void _set_s_NoOptionData(UnityEngine::UI::Dropdown::OptionData* value);
    // public UnityEngine.RectTransform get_template()
    // Offset: 0x115E464
    UnityEngine::RectTransform* get_template();
    // public System.Void set_template(UnityEngine.RectTransform value)
    // Offset: 0x115D7F8
    void set_template(UnityEngine::RectTransform* value);
    // public UnityEngine.UI.Text get_captionText()
    // Offset: 0x115E46C
    UnityEngine::UI::Text* get_captionText();
    // public System.Void set_captionText(UnityEngine.UI.Text value)
    // Offset: 0x115D820
    void set_captionText(UnityEngine::UI::Text* value);
    // public UnityEngine.UI.Image get_captionImage()
    // Offset: 0x115E474
    UnityEngine::UI::Image* get_captionImage();
    // public System.Void set_captionImage(UnityEngine.UI.Image value)
    // Offset: 0x115E47C
    void set_captionImage(UnityEngine::UI::Image* value);
    // public UnityEngine.UI.Text get_itemText()
    // Offset: 0x115E4A8
    UnityEngine::UI::Text* get_itemText();
    // public System.Void set_itemText(UnityEngine.UI.Text value)
    // Offset: 0x115D848
    void set_itemText(UnityEngine::UI::Text* value);
    // public UnityEngine.UI.Image get_itemImage()
    // Offset: 0x115E4B0
    UnityEngine::UI::Image* get_itemImage();
    // public System.Void set_itemImage(UnityEngine.UI.Image value)
    // Offset: 0x115E4B8
    void set_itemImage(UnityEngine::UI::Image* value);
    // public System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> get_options()
    // Offset: 0x115D874
    System::Collections::Generic::List_1<UnityEngine::UI::Dropdown::OptionData*>* get_options();
    // public System.Void set_options(System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> value)
    // Offset: 0x115E4E4
    void set_options(System::Collections::Generic::List_1<UnityEngine::UI::Dropdown::OptionData*>* value);
    // public UnityEngine.UI.Dropdown/DropdownEvent get_onValueChanged()
    // Offset: 0x115E518
    UnityEngine::UI::Dropdown::DropdownEvent* get_onValueChanged();
    // public System.Void set_onValueChanged(UnityEngine.UI.Dropdown/DropdownEvent value)
    // Offset: 0x115E520
    void set_onValueChanged(UnityEngine::UI::Dropdown::DropdownEvent* value);
    // public System.Single get_alphaFadeSpeed()
    // Offset: 0x115E530
    float get_alphaFadeSpeed();
    // public System.Void set_alphaFadeSpeed(System.Single value)
    // Offset: 0x115E538
    void set_alphaFadeSpeed(float value);
    // public System.Int32 get_value()
    // Offset: 0x115E540
    int get_value();
    // public System.Void set_value(System.Int32 value)
    // Offset: 0x115E548
    void set_value(int value);
    // public System.Void SetValueWithoutNotify(System.Int32 input)
    // Offset: 0x115E670
    void SetValueWithoutNotify(int input);
    // private System.Void Set(System.Int32 value, System.Boolean sendCallback)
    // Offset: 0x115E550
    void Set(int value, bool sendCallback);
    // public System.Void RefreshShownValue()
    // Offset: 0x115D890
    void RefreshShownValue();
    // public System.Void AddOptions(System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> options)
    // Offset: 0x115EB98
    void AddOptions(System::Collections::Generic::List_1<UnityEngine::UI::Dropdown::OptionData*>* options);
    // public System.Void AddOptions(System.Collections.Generic.List`1<System.String> options)
    // Offset: 0x115EC10
    void AddOptions(System::Collections::Generic::List_1<::Il2CppString*>* options);
    // public System.Void AddOptions(System.Collections.Generic.List`1<UnityEngine.Sprite> options)
    // Offset: 0x115ECFC
    void AddOptions(System::Collections::Generic::List_1<UnityEngine::Sprite*>* options);
    // public System.Void ClearOptions()
    // Offset: 0x115EDE8
    void ClearOptions();
    // private System.Void SetupTemplate()
    // Offset: 0x115EE54
    void SetupTemplate();
    // static private T GetOrAddComponent(UnityEngine.GameObject go)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T GetOrAddComponent(UnityEngine::GameObject* go) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Dropdown::GetOrAddComponent");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.UI", "Dropdown", "GetOrAddComponent", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(go)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, go);
    }
    // public System.Void Show()
    // Offset: 0x115F4EC
    void Show();
    // protected UnityEngine.GameObject CreateBlocker(UnityEngine.Canvas rootCanvas)
    // Offset: 0x1160730
    UnityEngine::GameObject* CreateBlocker(UnityEngine::Canvas* rootCanvas);
    // protected System.Void DestroyBlocker(UnityEngine.GameObject blocker)
    // Offset: 0x1160B88
    void DestroyBlocker(UnityEngine::GameObject* blocker);
    // protected UnityEngine.GameObject CreateDropdownList(UnityEngine.GameObject template)
    // Offset: 0x1160BF0
    UnityEngine::GameObject* CreateDropdownList(UnityEngine::GameObject* _template);
    // protected System.Void DestroyDropdownList(UnityEngine.GameObject dropdownList)
    // Offset: 0x1160C60
    void DestroyDropdownList(UnityEngine::GameObject* dropdownList);
    // protected UnityEngine.UI.Dropdown/DropdownItem CreateItem(UnityEngine.UI.Dropdown/DropdownItem itemTemplate)
    // Offset: 0x1160CC8
    UnityEngine::UI::Dropdown::DropdownItem* CreateItem(UnityEngine::UI::Dropdown::DropdownItem* itemTemplate);
    // protected System.Void DestroyItem(UnityEngine.UI.Dropdown/DropdownItem item)
    // Offset: 0x1160D38
    void DestroyItem(UnityEngine::UI::Dropdown::DropdownItem* item);
    // private UnityEngine.UI.Dropdown/DropdownItem AddItem(UnityEngine.UI.Dropdown/OptionData data, System.Boolean selected, UnityEngine.UI.Dropdown/DropdownItem itemTemplate, System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> items)
    // Offset: 0x1160378
    UnityEngine::UI::Dropdown::DropdownItem* AddItem(UnityEngine::UI::Dropdown::OptionData* data, bool selected, UnityEngine::UI::Dropdown::DropdownItem* itemTemplate, System::Collections::Generic::List_1<UnityEngine::UI::Dropdown::DropdownItem*>* items);
    // private System.Void AlphaFadeList(System.Single duration, System.Single alpha)
    // Offset: 0x1160D3C
    void AlphaFadeList(float duration, float alpha);
    // private System.Void AlphaFadeList(System.Single duration, System.Single start, System.Single end)
    // Offset: 0x1160618
    void AlphaFadeList(float duration, float start, float end);
    // private System.Void SetAlpha(System.Single alpha)
    // Offset: 0x1160DC4
    void SetAlpha(float alpha);
    // public System.Void Hide()
    // Offset: 0x116024C
    void Hide();
    // private System.Collections.IEnumerator DelayedDestroyDropdownList(System.Single delay)
    // Offset: 0x1160E7C
    System::Collections::IEnumerator* DelayedDestroyDropdownList(float delay);
    // private System.Void ImmediateDestroyDropdownList()
    // Offset: 0x115EA28
    void ImmediateDestroyDropdownList();
    // private System.Void OnSelectItem(UnityEngine.UI.Toggle toggle)
    // Offset: 0x1160F08
    void OnSelectItem(UnityEngine::UI::Toggle* toggle);
    // protected System.Void .ctor()
    // Offset: 0x115E678
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Dropdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown*, creationType>()));
    }
    // protected override System.Void Awake()
    // Offset: 0x115E778
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::Awake()
    void Awake();
    // protected override System.Void Start()
    // Offset: 0x115E8DC
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
    // protected override System.Void OnDisable()
    // Offset: 0x115E96C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDisable()
    void OnDisable();
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x115F4E8
    // Implemented from: UnityEngine.EventSystems.IPointerClickHandler
    // Base method: System.Void IPointerClickHandler::OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x1160244
    // Implemented from: UnityEngine.EventSystems.ISubmitHandler
    // Base method: System.Void ISubmitHandler::OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    void OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnCancel(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x1160248
    // Implemented from: UnityEngine.EventSystems.ICancelHandler
    // Base method: System.Void ICancelHandler::OnCancel(UnityEngine.EventSystems.BaseEventData eventData)
    void OnCancel(UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void .cctor()
    // Offset: 0x116104C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // UnityEngine.UI.Dropdown
  static check_size<sizeof(Dropdown), 344 + sizeof(bool)> __UnityEngine_UI_DropdownSizeCheck;
  static_assert(sizeof(Dropdown) == 0x159);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Dropdown*, "UnityEngine.UI", "Dropdown");
#pragma pack(pop)
