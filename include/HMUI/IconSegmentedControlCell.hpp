// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.SegmentedControlCell
#include "HMUI/SegmentedControlCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHint
  class HoverHint;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.IconSegmentedControlCell
  // [TokenAttribute] Offset: FFFFFFFF
  class IconSegmentedControlCell : public HMUI::SegmentedControlCell {
    public:
    // private UnityEngine.UI.Image _icon
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::UI::Image* icon;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private HMUI.HoverHint _hoverHint
    // Size: 0x8
    // Offset: 0x50
    HMUI::HoverHint* hoverHint;
    // Field size check
    static_assert(sizeof(HMUI::HoverHint*) == 0x8);
    // [NullAllowed] Offset: 0xDE2F30
    // private UnityEngine.GameObject _backgroundGameObject
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::GameObject* backgroundGameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // Creating value type constructor for type: IconSegmentedControlCell
    IconSegmentedControlCell(UnityEngine::UI::Image* icon_ = {}, HMUI::HoverHint* hoverHint_ = {}, UnityEngine::GameObject* backgroundGameObject_ = {}) noexcept : icon{icon_}, hoverHint{hoverHint_}, backgroundGameObject{backgroundGameObject_} {}
    // public UnityEngine.Sprite get_sprite()
    // Offset: 0x1311CE8
    UnityEngine::Sprite* get_sprite();
    // public System.Void set_sprite(UnityEngine.Sprite value)
    // Offset: 0x1311B28
    void set_sprite(UnityEngine::Sprite* value);
    // public System.Void set_hintText(System.String value)
    // Offset: 0x1311B44
    void set_hintText(::Il2CppString* value);
    // public System.Void set_iconSize(System.Single value)
    // Offset: 0x1311C0C
    void set_iconSize(float value);
    // public System.Void set_hideBackgroundImage(System.Boolean value)
    // Offset: 0x1311B60
    void set_hideBackgroundImage(bool value);
    // public System.Void .ctor()
    // Offset: 0x1311D04
    // Implemented from: HMUI.SegmentedControlCell
    // Base method: System.Void SegmentedControlCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IconSegmentedControlCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::IconSegmentedControlCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IconSegmentedControlCell*, creationType>()));
    }
  }; // HMUI.IconSegmentedControlCell
  #pragma pack(pop)
  static check_size<sizeof(IconSegmentedControlCell), 88 + sizeof(UnityEngine::GameObject*)> __HMUI_IconSegmentedControlCellSizeCheck;
  static_assert(sizeof(IconSegmentedControlCell) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::IconSegmentedControlCell*, "HMUI", "IconSegmentedControlCell");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::IconSegmentedControlCell::get_sprite
// Il2CppName: get_sprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (HMUI::IconSegmentedControlCell::*)()>(&HMUI::IconSegmentedControlCell::get_sprite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControlCell*), "get_sprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControlCell::set_sprite
// Il2CppName: set_sprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::IconSegmentedControlCell::*)(UnityEngine::Sprite*)>(&HMUI::IconSegmentedControlCell::set_sprite)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControlCell*), "set_sprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControlCell::set_hintText
// Il2CppName: set_hintText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::IconSegmentedControlCell::*)(::Il2CppString*)>(&HMUI::IconSegmentedControlCell::set_hintText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControlCell*), "set_hintText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControlCell::set_iconSize
// Il2CppName: set_iconSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::IconSegmentedControlCell::*)(float)>(&HMUI::IconSegmentedControlCell::set_iconSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControlCell*), "set_iconSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControlCell::set_hideBackgroundImage
// Il2CppName: set_hideBackgroundImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::IconSegmentedControlCell::*)(bool)>(&HMUI::IconSegmentedControlCell::set_hideBackgroundImage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControlCell*), "set_hideBackgroundImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControlCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
