// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.IconSegmentedControl
#include "HMUI/IconSegmentedControl.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.IconSegmentedControl/HMUI.DataItem
  // [TokenAttribute] Offset: FFFFFFFF
  class IconSegmentedControl::DataItem : public ::Il2CppObject {
    public:
    // private UnityEngine.Sprite <icon>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Sprite* icon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private System.String <hintText>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* hintText;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DataItem
    DataItem(UnityEngine::Sprite* icon_ = {}, ::Il2CppString* hintText_ = {}) noexcept : icon{icon_}, hintText{hintText_} {}
    // public UnityEngine.Sprite get_icon()
    // Offset: 0x1311C90
    UnityEngine::Sprite* get_icon();
    // private System.Void set_icon(UnityEngine.Sprite value)
    // Offset: 0x1311C98
    void set_icon(UnityEngine::Sprite* value);
    // public System.String get_hintText()
    // Offset: 0x1311CA0
    ::Il2CppString* get_hintText();
    // private System.Void set_hintText(System.String value)
    // Offset: 0x1311CA8
    void set_hintText(::Il2CppString* value);
    // public System.Void .ctor(UnityEngine.Sprite icon, System.String hintText)
    // Offset: 0x1311CB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IconSegmentedControl::DataItem* New_ctor(UnityEngine::Sprite* icon, ::Il2CppString* hintText) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::IconSegmentedControl::DataItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IconSegmentedControl::DataItem*, creationType>(icon, hintText)));
    }
  }; // HMUI.IconSegmentedControl/HMUI.DataItem
  #pragma pack(pop)
  static check_size<sizeof(IconSegmentedControl::DataItem), 24 + sizeof(::Il2CppString*)> __HMUI_IconSegmentedControl_DataItemSizeCheck;
  static_assert(sizeof(IconSegmentedControl::DataItem) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::IconSegmentedControl::DataItem*, "HMUI", "IconSegmentedControl/DataItem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::IconSegmentedControl::DataItem::get_icon
// Il2CppName: get_icon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (HMUI::IconSegmentedControl::DataItem::*)()>(&HMUI::IconSegmentedControl::DataItem::get_icon)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControl::DataItem*), "get_icon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControl::DataItem::set_icon
// Il2CppName: set_icon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::IconSegmentedControl::DataItem::*)(UnityEngine::Sprite*)>(&HMUI::IconSegmentedControl::DataItem::set_icon)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControl::DataItem*), "set_icon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControl::DataItem::get_hintText
// Il2CppName: get_hintText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (HMUI::IconSegmentedControl::DataItem::*)()>(&HMUI::IconSegmentedControl::DataItem::get_hintText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControl::DataItem*), "get_hintText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControl::DataItem::set_hintText
// Il2CppName: set_hintText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::IconSegmentedControl::DataItem::*)(::Il2CppString*)>(&HMUI::IconSegmentedControl::DataItem::set_hintText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControl::DataItem*), "set_hintText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControl::DataItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
