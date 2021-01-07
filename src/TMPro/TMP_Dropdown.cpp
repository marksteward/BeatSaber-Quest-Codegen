// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_Dropdown
#include "TMPro/TMP_Dropdown.hpp"
// Including type: TMPro.TMP_Dropdown/DropdownItem
#include "TMPro/TMP_Dropdown_DropdownItem.hpp"
// Including type: TMPro.TMP_Dropdown/OptionData
#include "TMPro/TMP_Dropdown_OptionData.hpp"
// Including type: TMPro.TMP_Dropdown/OptionDataList
#include "TMPro/TMP_Dropdown_OptionDataList.hpp"
// Including type: TMPro.TMP_Dropdown/DropdownEvent
#include "TMPro/TMP_Dropdown_DropdownEvent.hpp"
// Including type: TMPro.TMP_Dropdown/<>c__DisplayClass60_0
#include "TMPro/TMP_Dropdown_--c__DisplayClass60_0.hpp"
// Including type: TMPro.TMP_Dropdown/<DelayedDestroyDropdownList>d__72
#include "TMPro/TMP_Dropdown_-DelayedDestroyDropdownList-d__72.hpp"
// Including type: UnityEngine.RectTransform
#include "UnityEngine/RectTransform.hpp"
// Including type: TMPro.TMP_Text
#include "TMPro/TMP_Text.hpp"
// Including type: UnityEngine.UI.Image
#include "UnityEngine/UI/Image.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: TMPro.TweenRunner`1
#include "TMPro/TweenRunner_1.hpp"
// Including type: UnityEngine.Sprite
#include "UnityEngine/Sprite.hpp"
// Including type: UnityEngine.Canvas
#include "UnityEngine/Canvas.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: UnityEngine.UI.Toggle
#include "UnityEngine/UI/Toggle.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData
#include "UnityEngine/EventSystems/PointerEventData.hpp"
// Including type: UnityEngine.EventSystems.BaseEventData
#include "UnityEngine/EventSystems/BaseEventData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private TMPro.TMP_Dropdown/OptionData s_NoOptionData
TMPro::TMP_Dropdown::OptionData* TMPro::TMP_Dropdown::_get_s_NoOptionData() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("_get_s_NoOptionData");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<TMPro::TMP_Dropdown::OptionData*>("TMPro", "TMP_Dropdown", "s_NoOptionData"));
}
// Autogenerated static field setter
// Set static field: static private TMPro.TMP_Dropdown/OptionData s_NoOptionData
void TMPro::TMP_Dropdown::_set_s_NoOptionData(TMPro::TMP_Dropdown::OptionData* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("_set_s_NoOptionData");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("TMPro", "TMP_Dropdown", "s_NoOptionData", value));
}
// Autogenerated method: TMPro.TMP_Dropdown.get_template
UnityEngine::RectTransform* TMPro::TMP_Dropdown::get_template() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("get_template");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_template", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::RectTransform*, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.set_template
void TMPro::TMP_Dropdown::set_template(UnityEngine::RectTransform* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("set_template");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_template", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: TMPro.TMP_Dropdown.get_captionText
TMPro::TMP_Text* TMPro::TMP_Dropdown::get_captionText() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("get_captionText");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_captionText", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<TMPro::TMP_Text*, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.set_captionText
void TMPro::TMP_Dropdown::set_captionText(TMPro::TMP_Text* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("set_captionText");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_captionText", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: TMPro.TMP_Dropdown.get_captionImage
UnityEngine::UI::Image* TMPro::TMP_Dropdown::get_captionImage() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("get_captionImage");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_captionImage", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::UI::Image*, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.set_captionImage
void TMPro::TMP_Dropdown::set_captionImage(UnityEngine::UI::Image* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("set_captionImage");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_captionImage", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: TMPro.TMP_Dropdown.get_itemText
TMPro::TMP_Text* TMPro::TMP_Dropdown::get_itemText() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("get_itemText");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_itemText", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<TMPro::TMP_Text*, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.set_itemText
void TMPro::TMP_Dropdown::set_itemText(TMPro::TMP_Text* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("set_itemText");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_itemText", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: TMPro.TMP_Dropdown.get_itemImage
UnityEngine::UI::Image* TMPro::TMP_Dropdown::get_itemImage() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("get_itemImage");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_itemImage", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::UI::Image*, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.set_itemImage
void TMPro::TMP_Dropdown::set_itemImage(UnityEngine::UI::Image* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("set_itemImage");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_itemImage", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: TMPro.TMP_Dropdown.get_options
System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>* TMPro::TMP_Dropdown::get_options() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("get_options");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_options", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>*, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.set_options
void TMPro::TMP_Dropdown::set_options(System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("set_options");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_options", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: TMPro.TMP_Dropdown.get_onValueChanged
TMPro::TMP_Dropdown::DropdownEvent* TMPro::TMP_Dropdown::get_onValueChanged() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("get_onValueChanged");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_onValueChanged", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<TMPro::TMP_Dropdown::DropdownEvent*, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.set_onValueChanged
void TMPro::TMP_Dropdown::set_onValueChanged(TMPro::TMP_Dropdown::DropdownEvent* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("set_onValueChanged");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_onValueChanged", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: TMPro.TMP_Dropdown.get_value
int TMPro::TMP_Dropdown::get_value() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("get_value");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_value", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.set_value
void TMPro::TMP_Dropdown::set_value(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("set_value");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_value", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: TMPro.TMP_Dropdown.SetValueWithoutNotify
void TMPro::TMP_Dropdown::SetValueWithoutNotify(int input) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("SetValueWithoutNotify");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetValueWithoutNotify", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(input)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, input);
}
// Autogenerated method: TMPro.TMP_Dropdown.SetValue
void TMPro::TMP_Dropdown::SetValue(int value, bool sendCallback) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("SetValue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetValue", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value, sendCallback)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value, sendCallback);
}
// Autogenerated method: TMPro.TMP_Dropdown.get_IsExpanded
bool TMPro::TMP_Dropdown::get_IsExpanded() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("get_IsExpanded");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_IsExpanded", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.RefreshShownValue
void TMPro::TMP_Dropdown::RefreshShownValue() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("RefreshShownValue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "RefreshShownValue", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.AddOptions
void TMPro::TMP_Dropdown::AddOptions(System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>* options) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("AddOptions");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AddOptions", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(options)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, options);
}
// Autogenerated method: TMPro.TMP_Dropdown.AddOptions
void TMPro::TMP_Dropdown::AddOptions(System::Collections::Generic::List_1<::Il2CppString*>* options) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("AddOptions");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AddOptions", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(options)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, options);
}
// Autogenerated method: TMPro.TMP_Dropdown.AddOptions
void TMPro::TMP_Dropdown::AddOptions(System::Collections::Generic::List_1<UnityEngine::Sprite*>* options) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("AddOptions");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AddOptions", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(options)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, options);
}
// Autogenerated method: TMPro.TMP_Dropdown.ClearOptions
void TMPro::TMP_Dropdown::ClearOptions() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("ClearOptions");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ClearOptions", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.SetupTemplate
void TMPro::TMP_Dropdown::SetupTemplate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("SetupTemplate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetupTemplate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.Show
void TMPro::TMP_Dropdown::Show() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("Show");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Show", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.CreateBlocker
UnityEngine::GameObject* TMPro::TMP_Dropdown::CreateBlocker(UnityEngine::Canvas* rootCanvas) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("CreateBlocker");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateBlocker", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(rootCanvas)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::GameObject*, false>(this, ___internal__method, rootCanvas);
}
// Autogenerated method: TMPro.TMP_Dropdown.DestroyBlocker
void TMPro::TMP_Dropdown::DestroyBlocker(UnityEngine::GameObject* blocker) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("DestroyBlocker");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "DestroyBlocker", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(blocker)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, blocker);
}
// Autogenerated method: TMPro.TMP_Dropdown.CreateDropdownList
UnityEngine::GameObject* TMPro::TMP_Dropdown::CreateDropdownList(UnityEngine::GameObject* _template) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("CreateDropdownList");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateDropdownList", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(_template)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::GameObject*, false>(this, ___internal__method, _template);
}
// Autogenerated method: TMPro.TMP_Dropdown.DestroyDropdownList
void TMPro::TMP_Dropdown::DestroyDropdownList(UnityEngine::GameObject* dropdownList) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("DestroyDropdownList");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "DestroyDropdownList", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(dropdownList)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, dropdownList);
}
// Autogenerated method: TMPro.TMP_Dropdown.CreateItem
TMPro::TMP_Dropdown::DropdownItem* TMPro::TMP_Dropdown::CreateItem(TMPro::TMP_Dropdown::DropdownItem* itemTemplate) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("CreateItem");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateItem", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(itemTemplate)));
  return ::il2cpp_utils::RunMethodThrow<TMPro::TMP_Dropdown::DropdownItem*, false>(this, ___internal__method, itemTemplate);
}
// Autogenerated method: TMPro.TMP_Dropdown.DestroyItem
void TMPro::TMP_Dropdown::DestroyItem(TMPro::TMP_Dropdown::DropdownItem* item) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("DestroyItem");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "DestroyItem", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, item);
}
// Autogenerated method: TMPro.TMP_Dropdown.AddItem
TMPro::TMP_Dropdown::DropdownItem* TMPro::TMP_Dropdown::AddItem(TMPro::TMP_Dropdown::OptionData* data, bool selected, TMPro::TMP_Dropdown::DropdownItem* itemTemplate, System::Collections::Generic::List_1<TMPro::TMP_Dropdown::DropdownItem*>* items) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("AddItem");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AddItem", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(data, selected, itemTemplate, items)));
  return ::il2cpp_utils::RunMethodThrow<TMPro::TMP_Dropdown::DropdownItem*, false>(this, ___internal__method, data, selected, itemTemplate, items);
}
// Autogenerated method: TMPro.TMP_Dropdown.AlphaFadeList
void TMPro::TMP_Dropdown::AlphaFadeList(float duration, float alpha) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("AlphaFadeList");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AlphaFadeList", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(duration, alpha)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, duration, alpha);
}
// Autogenerated method: TMPro.TMP_Dropdown.AlphaFadeList
void TMPro::TMP_Dropdown::AlphaFadeList(float duration, float start, float end) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("AlphaFadeList");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AlphaFadeList", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(duration, start, end)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, duration, start, end);
}
// Autogenerated method: TMPro.TMP_Dropdown.SetAlpha
void TMPro::TMP_Dropdown::SetAlpha(float alpha) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("SetAlpha");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetAlpha", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(alpha)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, alpha);
}
// Autogenerated method: TMPro.TMP_Dropdown.Hide
void TMPro::TMP_Dropdown::Hide() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("Hide");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Hide", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.DelayedDestroyDropdownList
System::Collections::IEnumerator* TMPro::TMP_Dropdown::DelayedDestroyDropdownList(float delay) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("DelayedDestroyDropdownList");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "DelayedDestroyDropdownList", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(delay)));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method, delay);
}
// Autogenerated method: TMPro.TMP_Dropdown.ImmediateDestroyDropdownList
void TMPro::TMP_Dropdown::ImmediateDestroyDropdownList() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("ImmediateDestroyDropdownList");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ImmediateDestroyDropdownList", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.OnSelectItem
void TMPro::TMP_Dropdown::OnSelectItem(UnityEngine::UI::Toggle* toggle) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("OnSelectItem");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnSelectItem", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(toggle)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, toggle);
}
// Autogenerated method: TMPro.TMP_Dropdown.Awake
void TMPro::TMP_Dropdown::Awake() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("Awake");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Awake", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.Start
void TMPro::TMP_Dropdown::Start() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("Start");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Start", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.OnDisable
void TMPro::TMP_Dropdown::OnDisable() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("OnDisable");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnDisable", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: TMPro.TMP_Dropdown.OnPointerClick
void TMPro::TMP_Dropdown::OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("OnPointerClick");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnPointerClick", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(eventData)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, eventData);
}
// Autogenerated method: TMPro.TMP_Dropdown.OnSubmit
void TMPro::TMP_Dropdown::OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("OnSubmit");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnSubmit", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(eventData)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, eventData);
}
// Autogenerated method: TMPro.TMP_Dropdown.OnCancel
void TMPro::TMP_Dropdown::OnCancel(UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext("OnCancel");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnCancel", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(eventData)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, eventData);
}
// Autogenerated method: TMPro.TMP_Dropdown..cctor
void TMPro::TMP_Dropdown::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_Dropdown").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("TMPro", "TMP_Dropdown", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
