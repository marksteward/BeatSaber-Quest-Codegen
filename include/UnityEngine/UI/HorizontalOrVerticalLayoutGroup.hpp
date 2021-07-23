// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.LayoutGroup
#include "UnityEngine/UI/LayoutGroup.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x62
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.HorizontalOrVerticalLayoutGroup
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class HorizontalOrVerticalLayoutGroup : public UnityEngine::UI::LayoutGroup {
    public:
    // protected System.Single m_Spacing
    // Size: 0x4
    // Offset: 0x58
    float m_Spacing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Boolean m_ChildForceExpandWidth
    // Size: 0x1
    // Offset: 0x5C
    bool m_ChildForceExpandWidth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean m_ChildForceExpandHeight
    // Size: 0x1
    // Offset: 0x5D
    bool m_ChildForceExpandHeight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean m_ChildControlWidth
    // Size: 0x1
    // Offset: 0x5E
    bool m_ChildControlWidth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean m_ChildControlHeight
    // Size: 0x1
    // Offset: 0x5F
    bool m_ChildControlHeight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean m_ChildScaleWidth
    // Size: 0x1
    // Offset: 0x60
    bool m_ChildScaleWidth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean m_ChildScaleHeight
    // Size: 0x1
    // Offset: 0x61
    bool m_ChildScaleHeight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HorizontalOrVerticalLayoutGroup
    HorizontalOrVerticalLayoutGroup(float m_Spacing_ = {}, bool m_ChildForceExpandWidth_ = {}, bool m_ChildForceExpandHeight_ = {}, bool m_ChildControlWidth_ = {}, bool m_ChildControlHeight_ = {}, bool m_ChildScaleWidth_ = {}, bool m_ChildScaleHeight_ = {}) noexcept : m_Spacing{m_Spacing_}, m_ChildForceExpandWidth{m_ChildForceExpandWidth_}, m_ChildForceExpandHeight{m_ChildForceExpandHeight_}, m_ChildControlWidth{m_ChildControlWidth_}, m_ChildControlHeight{m_ChildControlHeight_}, m_ChildScaleWidth{m_ChildScaleWidth_}, m_ChildScaleHeight{m_ChildScaleHeight_} {}
    // Get instance field: protected System.Single m_Spacing
    float _get_m_Spacing();
    // Set instance field: protected System.Single m_Spacing
    void _set_m_Spacing(float value);
    // Get instance field: protected System.Boolean m_ChildForceExpandWidth
    bool _get_m_ChildForceExpandWidth();
    // Set instance field: protected System.Boolean m_ChildForceExpandWidth
    void _set_m_ChildForceExpandWidth(bool value);
    // Get instance field: protected System.Boolean m_ChildForceExpandHeight
    bool _get_m_ChildForceExpandHeight();
    // Set instance field: protected System.Boolean m_ChildForceExpandHeight
    void _set_m_ChildForceExpandHeight(bool value);
    // Get instance field: protected System.Boolean m_ChildControlWidth
    bool _get_m_ChildControlWidth();
    // Set instance field: protected System.Boolean m_ChildControlWidth
    void _set_m_ChildControlWidth(bool value);
    // Get instance field: protected System.Boolean m_ChildControlHeight
    bool _get_m_ChildControlHeight();
    // Set instance field: protected System.Boolean m_ChildControlHeight
    void _set_m_ChildControlHeight(bool value);
    // Get instance field: protected System.Boolean m_ChildScaleWidth
    bool _get_m_ChildScaleWidth();
    // Set instance field: protected System.Boolean m_ChildScaleWidth
    void _set_m_ChildScaleWidth(bool value);
    // Get instance field: protected System.Boolean m_ChildScaleHeight
    bool _get_m_ChildScaleHeight();
    // Set instance field: protected System.Boolean m_ChildScaleHeight
    void _set_m_ChildScaleHeight(bool value);
    // public System.Single get_spacing()
    // Offset: 0x18EC51C
    float get_spacing();
    // public System.Void set_spacing(System.Single value)
    // Offset: 0x18EC524
    void set_spacing(float value);
    // public System.Boolean get_childForceExpandWidth()
    // Offset: 0x18EC588
    bool get_childForceExpandWidth();
    // public System.Void set_childForceExpandWidth(System.Boolean value)
    // Offset: 0x18EC590
    void set_childForceExpandWidth(bool value);
    // public System.Boolean get_childForceExpandHeight()
    // Offset: 0x18EC5F4
    bool get_childForceExpandHeight();
    // public System.Void set_childForceExpandHeight(System.Boolean value)
    // Offset: 0x18EC5FC
    void set_childForceExpandHeight(bool value);
    // public System.Boolean get_childControlWidth()
    // Offset: 0x18EC660
    bool get_childControlWidth();
    // public System.Void set_childControlWidth(System.Boolean value)
    // Offset: 0x18EC668
    void set_childControlWidth(bool value);
    // public System.Boolean get_childControlHeight()
    // Offset: 0x18EC6CC
    bool get_childControlHeight();
    // public System.Void set_childControlHeight(System.Boolean value)
    // Offset: 0x18EC6D4
    void set_childControlHeight(bool value);
    // public System.Boolean get_childScaleWidth()
    // Offset: 0x18EC738
    bool get_childScaleWidth();
    // public System.Void set_childScaleWidth(System.Boolean value)
    // Offset: 0x18EC740
    void set_childScaleWidth(bool value);
    // public System.Boolean get_childScaleHeight()
    // Offset: 0x18EC7A4
    bool get_childScaleHeight();
    // public System.Void set_childScaleHeight(System.Boolean value)
    // Offset: 0x18EC7AC
    void set_childScaleHeight(bool value);
    // protected System.Void CalcAlongAxis(System.Int32 axis, System.Boolean isVertical)
    // Offset: 0x18EBC94
    void CalcAlongAxis(int axis, bool isVertical);
    // protected System.Void SetChildrenAlongAxis(System.Int32 axis, System.Boolean isVertical)
    // Offset: 0x18EBF44
    void SetChildrenAlongAxis(int axis, bool isVertical);
    // private System.Void GetChildSizes(UnityEngine.RectTransform child, System.Int32 axis, System.Boolean controlSize, System.Boolean childForceExpand, out System.Single min, out System.Single preferred, out System.Single flexible)
    // Offset: 0x18EC810
    void GetChildSizes(UnityEngine::RectTransform* child, int axis, bool controlSize, bool childForceExpand, float& min, float& preferred, float& flexible);
    // protected System.Void .ctor()
    // Offset: 0x18EBC54
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HorizontalOrVerticalLayoutGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::HorizontalOrVerticalLayoutGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HorizontalOrVerticalLayoutGroup*, creationType>()));
    }
  }; // UnityEngine.UI.HorizontalOrVerticalLayoutGroup
  #pragma pack(pop)
  static check_size<sizeof(HorizontalOrVerticalLayoutGroup), 97 + sizeof(bool)> __UnityEngine_UI_HorizontalOrVerticalLayoutGroupSizeCheck;
  static_assert(sizeof(HorizontalOrVerticalLayoutGroup) == 0x62);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*, "UnityEngine.UI", "HorizontalOrVerticalLayoutGroup");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::get_spacing
// Il2CppName: get_spacing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::HorizontalOrVerticalLayoutGroup::*)()>(&UnityEngine::UI::HorizontalOrVerticalLayoutGroup::get_spacing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*), "get_spacing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::set_spacing
// Il2CppName: set_spacing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::HorizontalOrVerticalLayoutGroup::*)(float)>(&UnityEngine::UI::HorizontalOrVerticalLayoutGroup::set_spacing)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*), "set_spacing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::get_childForceExpandWidth
// Il2CppName: get_childForceExpandWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::HorizontalOrVerticalLayoutGroup::*)()>(&UnityEngine::UI::HorizontalOrVerticalLayoutGroup::get_childForceExpandWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*), "get_childForceExpandWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::set_childForceExpandWidth
// Il2CppName: set_childForceExpandWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::HorizontalOrVerticalLayoutGroup::*)(bool)>(&UnityEngine::UI::HorizontalOrVerticalLayoutGroup::set_childForceExpandWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*), "set_childForceExpandWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::get_childForceExpandHeight
// Il2CppName: get_childForceExpandHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::HorizontalOrVerticalLayoutGroup::*)()>(&UnityEngine::UI::HorizontalOrVerticalLayoutGroup::get_childForceExpandHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*), "get_childForceExpandHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::set_childForceExpandHeight
// Il2CppName: set_childForceExpandHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::HorizontalOrVerticalLayoutGroup::*)(bool)>(&UnityEngine::UI::HorizontalOrVerticalLayoutGroup::set_childForceExpandHeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*), "set_childForceExpandHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::get_childControlWidth
// Il2CppName: get_childControlWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::HorizontalOrVerticalLayoutGroup::*)()>(&UnityEngine::UI::HorizontalOrVerticalLayoutGroup::get_childControlWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*), "get_childControlWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::set_childControlWidth
// Il2CppName: set_childControlWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::HorizontalOrVerticalLayoutGroup::*)(bool)>(&UnityEngine::UI::HorizontalOrVerticalLayoutGroup::set_childControlWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*), "set_childControlWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::get_childControlHeight
// Il2CppName: get_childControlHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::HorizontalOrVerticalLayoutGroup::*)()>(&UnityEngine::UI::HorizontalOrVerticalLayoutGroup::get_childControlHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*), "get_childControlHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::set_childControlHeight
// Il2CppName: set_childControlHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::HorizontalOrVerticalLayoutGroup::*)(bool)>(&UnityEngine::UI::HorizontalOrVerticalLayoutGroup::set_childControlHeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*), "set_childControlHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::get_childScaleWidth
// Il2CppName: get_childScaleWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::HorizontalOrVerticalLayoutGroup::*)()>(&UnityEngine::UI::HorizontalOrVerticalLayoutGroup::get_childScaleWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*), "get_childScaleWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::set_childScaleWidth
// Il2CppName: set_childScaleWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::HorizontalOrVerticalLayoutGroup::*)(bool)>(&UnityEngine::UI::HorizontalOrVerticalLayoutGroup::set_childScaleWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*), "set_childScaleWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::get_childScaleHeight
// Il2CppName: get_childScaleHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::HorizontalOrVerticalLayoutGroup::*)()>(&UnityEngine::UI::HorizontalOrVerticalLayoutGroup::get_childScaleHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*), "get_childScaleHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::set_childScaleHeight
// Il2CppName: set_childScaleHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::HorizontalOrVerticalLayoutGroup::*)(bool)>(&UnityEngine::UI::HorizontalOrVerticalLayoutGroup::set_childScaleHeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*), "set_childScaleHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::CalcAlongAxis
// Il2CppName: CalcAlongAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::HorizontalOrVerticalLayoutGroup::*)(int, bool)>(&UnityEngine::UI::HorizontalOrVerticalLayoutGroup::CalcAlongAxis)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isVertical = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*), "CalcAlongAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis, isVertical});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::SetChildrenAlongAxis
// Il2CppName: SetChildrenAlongAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::HorizontalOrVerticalLayoutGroup::*)(int, bool)>(&UnityEngine::UI::HorizontalOrVerticalLayoutGroup::SetChildrenAlongAxis)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isVertical = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*), "SetChildrenAlongAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis, isVertical});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::GetChildSizes
// Il2CppName: GetChildSizes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::HorizontalOrVerticalLayoutGroup::*)(UnityEngine::RectTransform*, int, bool, bool, float&, float&, float&)>(&UnityEngine::UI::HorizontalOrVerticalLayoutGroup::GetChildSizes)> {
  static const MethodInfo* get() {
    static auto* child = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* controlSize = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* childForceExpand = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* preferred = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* flexible = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*), "GetChildSizes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{child, axis, controlSize, childForceExpand, min, preferred, flexible});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::HorizontalOrVerticalLayoutGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
