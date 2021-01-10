// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Autogenerated type: UnityEngine.UI.HorizontalOrVerticalLayoutGroup
  // [] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: D7CF2C
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
    // public System.Single get_spacing()
    // Offset: 0x14CD29C
    float get_spacing();
    // public System.Void set_spacing(System.Single value)
    // Offset: 0x14CD2A4
    void set_spacing(float value);
    // public System.Boolean get_childForceExpandWidth()
    // Offset: 0x14CD308
    bool get_childForceExpandWidth();
    // public System.Void set_childForceExpandWidth(System.Boolean value)
    // Offset: 0x14CD310
    void set_childForceExpandWidth(bool value);
    // public System.Boolean get_childForceExpandHeight()
    // Offset: 0x14CD374
    bool get_childForceExpandHeight();
    // public System.Void set_childForceExpandHeight(System.Boolean value)
    // Offset: 0x14CD37C
    void set_childForceExpandHeight(bool value);
    // public System.Boolean get_childControlWidth()
    // Offset: 0x14CD3E0
    bool get_childControlWidth();
    // public System.Void set_childControlWidth(System.Boolean value)
    // Offset: 0x14CD3E8
    void set_childControlWidth(bool value);
    // public System.Boolean get_childControlHeight()
    // Offset: 0x14CD44C
    bool get_childControlHeight();
    // public System.Void set_childControlHeight(System.Boolean value)
    // Offset: 0x14CD454
    void set_childControlHeight(bool value);
    // public System.Boolean get_childScaleWidth()
    // Offset: 0x14CD4B8
    bool get_childScaleWidth();
    // public System.Void set_childScaleWidth(System.Boolean value)
    // Offset: 0x14CD4C0
    void set_childScaleWidth(bool value);
    // public System.Boolean get_childScaleHeight()
    // Offset: 0x14CD524
    bool get_childScaleHeight();
    // public System.Void set_childScaleHeight(System.Boolean value)
    // Offset: 0x14CD52C
    void set_childScaleHeight(bool value);
    // protected System.Void CalcAlongAxis(System.Int32 axis, System.Boolean isVertical)
    // Offset: 0x14CCA14
    void CalcAlongAxis(int axis, bool isVertical);
    // protected System.Void SetChildrenAlongAxis(System.Int32 axis, System.Boolean isVertical)
    // Offset: 0x14CCCC4
    void SetChildrenAlongAxis(int axis, bool isVertical);
    // private System.Void GetChildSizes(UnityEngine.RectTransform child, System.Int32 axis, System.Boolean controlSize, System.Boolean childForceExpand, out System.Single min, out System.Single preferred, out System.Single flexible)
    // Offset: 0x14CD590
    void GetChildSizes(UnityEngine::RectTransform* child, int axis, bool controlSize, bool childForceExpand, float& min, float& preferred, float& flexible);
    // protected System.Void .ctor()
    // Offset: 0x14CC9D4
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
  static check_size<sizeof(HorizontalOrVerticalLayoutGroup), 97 + sizeof(bool)> __UnityEngine_UI_HorizontalOrVerticalLayoutGroupSizeCheck;
  static_assert(sizeof(HorizontalOrVerticalLayoutGroup) == 0x62);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::HorizontalOrVerticalLayoutGroup*, "UnityEngine.UI", "HorizontalOrVerticalLayoutGroup");
#pragma pack(pop)
