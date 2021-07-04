// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: TMPro.TextContainerAnchors
#include "TMPro/TextContainerAnchors.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TextContainer
  // [RequireComponent] Offset: DD586C
  // [AddComponentMenu] Offset: DD586C
  class TextContainer : public UnityEngine::EventSystems::UIBehaviour {
    public:
    // private System.Boolean m_hasChanged
    // Size: 0x1
    // Offset: 0x18
    bool m_hasChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_hasChanged and: m_pivot
    char __padding0[0x3] = {};
    // private UnityEngine.Vector2 m_pivot
    // Size: 0x8
    // Offset: 0x1C
    UnityEngine::Vector2 m_pivot;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private TMPro.TextContainerAnchors m_anchorPosition
    // Size: 0x4
    // Offset: 0x24
    TMPro::TextContainerAnchors m_anchorPosition;
    // Field size check
    static_assert(sizeof(TMPro::TextContainerAnchors) == 0x4);
    // private UnityEngine.Rect m_rect
    // Size: 0x10
    // Offset: 0x28
    UnityEngine::Rect m_rect;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // private System.Boolean m_isDefaultWidth
    // Size: 0x1
    // Offset: 0x38
    bool m_isDefaultWidth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_isDefaultHeight
    // Size: 0x1
    // Offset: 0x39
    bool m_isDefaultHeight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_isAutoFitting
    // Size: 0x1
    // Offset: 0x3A
    bool m_isAutoFitting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_isAutoFitting and: m_corners
    char __padding6[0x5] = {};
    // private UnityEngine.Vector3[] m_corners
    // Size: 0x8
    // Offset: 0x40
    ::Array<UnityEngine::Vector3>* m_corners;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private UnityEngine.Vector3[] m_worldCorners
    // Size: 0x8
    // Offset: 0x48
    ::Array<UnityEngine::Vector3>* m_worldCorners;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private UnityEngine.Vector4 m_margins
    // Size: 0x10
    // Offset: 0x50
    UnityEngine::Vector4 m_margins;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector4) == 0x10);
    // private UnityEngine.RectTransform m_rectTransform
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::RectTransform* m_rectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private TMPro.TextMeshPro m_textMeshPro
    // Size: 0x8
    // Offset: 0x68
    TMPro::TextMeshPro* m_textMeshPro;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshPro*) == 0x8);
    // Creating value type constructor for type: TextContainer
    TextContainer(bool m_hasChanged_ = {}, UnityEngine::Vector2 m_pivot_ = {}, TMPro::TextContainerAnchors m_anchorPosition_ = {}, UnityEngine::Rect m_rect_ = {}, bool m_isDefaultWidth_ = {}, bool m_isDefaultHeight_ = {}, bool m_isAutoFitting_ = {}, ::Array<UnityEngine::Vector3>* m_corners_ = {}, ::Array<UnityEngine::Vector3>* m_worldCorners_ = {}, UnityEngine::Vector4 m_margins_ = {}, UnityEngine::RectTransform* m_rectTransform_ = {}, TMPro::TextMeshPro* m_textMeshPro_ = {}) noexcept : m_hasChanged{m_hasChanged_}, m_pivot{m_pivot_}, m_anchorPosition{m_anchorPosition_}, m_rect{m_rect_}, m_isDefaultWidth{m_isDefaultWidth_}, m_isDefaultHeight{m_isDefaultHeight_}, m_isAutoFitting{m_isAutoFitting_}, m_corners{m_corners_}, m_worldCorners{m_worldCorners_}, m_margins{m_margins_}, m_rectTransform{m_rectTransform_}, m_textMeshPro{m_textMeshPro_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private UnityEngine.Vector2 k_defaultSize
    static UnityEngine::Vector2 _get_k_defaultSize();
    // Set static field: static private UnityEngine.Vector2 k_defaultSize
    static void _set_k_defaultSize(UnityEngine::Vector2 value);
    // public System.Boolean get_hasChanged()
    // Offset: 0x1401F48
    bool get_hasChanged();
    // public System.Void set_hasChanged(System.Boolean value)
    // Offset: 0x1401F50
    void set_hasChanged(bool value);
    // public UnityEngine.Vector2 get_pivot()
    // Offset: 0x1401F5C
    UnityEngine::Vector2 get_pivot();
    // public System.Void set_pivot(UnityEngine.Vector2 value)
    // Offset: 0x1401F64
    void set_pivot(UnityEngine::Vector2 value);
    // public TMPro.TextContainerAnchors get_anchorPosition()
    // Offset: 0x1402490
    TMPro::TextContainerAnchors get_anchorPosition();
    // public System.Void set_anchorPosition(TMPro.TextContainerAnchors value)
    // Offset: 0x1402498
    void set_anchorPosition(TMPro::TextContainerAnchors value);
    // public UnityEngine.Rect get_rect()
    // Offset: 0x14025EC
    UnityEngine::Rect get_rect();
    // public System.Void set_rect(UnityEngine.Rect value)
    // Offset: 0x14025F8
    void set_rect(UnityEngine::Rect value);
    // public UnityEngine.Vector2 get_size()
    // Offset: 0x1402684
    UnityEngine::Vector2 get_size();
    // public System.Void set_size(UnityEngine.Vector2 value)
    // Offset: 0x14026E8
    void set_size(UnityEngine::Vector2 value);
    // public System.Single get_width()
    // Offset: 0x1402858
    float get_width();
    // public System.Void set_width(System.Single value)
    // Offset: 0x1402864
    void set_width(float value);
    // public System.Single get_height()
    // Offset: 0x14028D8
    float get_height();
    // public System.Void set_height(System.Single value)
    // Offset: 0x14028E4
    void set_height(float value);
    // public System.Boolean get_isDefaultWidth()
    // Offset: 0x1402954
    bool get_isDefaultWidth();
    // public System.Boolean get_isDefaultHeight()
    // Offset: 0x140295C
    bool get_isDefaultHeight();
    // public System.Boolean get_isAutoFitting()
    // Offset: 0x1402964
    bool get_isAutoFitting();
    // public System.Void set_isAutoFitting(System.Boolean value)
    // Offset: 0x140296C
    void set_isAutoFitting(bool value);
    // public UnityEngine.Vector3[] get_corners()
    // Offset: 0x1402978
    ::Array<UnityEngine::Vector3>* get_corners();
    // public UnityEngine.Vector3[] get_worldCorners()
    // Offset: 0x1402980
    ::Array<UnityEngine::Vector3>* get_worldCorners();
    // public UnityEngine.Vector4 get_margins()
    // Offset: 0x1402988
    UnityEngine::Vector4 get_margins();
    // public System.Void set_margins(UnityEngine.Vector4 value)
    // Offset: 0x1402994
    void set_margins(UnityEngine::Vector4 value);
    // public UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x1402A88
    UnityEngine::RectTransform* get_rectTransform();
    // public TMPro.TextMeshPro get_textMeshPro()
    // Offset: 0x1402B20
    TMPro::TextMeshPro* get_textMeshPro();
    // private System.Void OnContainerChanged()
    // Offset: 0x1402354
    void OnContainerChanged();
    // private System.Void SetRect(UnityEngine.Vector2 size)
    // Offset: 0x14027D4
    void SetRect(UnityEngine::Vector2 size);
    // private System.Void UpdateCorners()
    // Offset: 0x1402C78
    void UpdateCorners();
    // private UnityEngine.Vector2 GetPivot(TMPro.TextContainerAnchors anchor)
    // Offset: 0x14024DC
    UnityEngine::Vector2 GetPivot(TMPro::TextContainerAnchors anchor);
    // private TMPro.TextContainerAnchors GetAnchorPosition(UnityEngine.Vector2 pivot)
    // Offset: 0x1402030
    TMPro::TextContainerAnchors GetAnchorPosition(UnityEngine::Vector2 pivot);
    // protected override System.Void Awake()
    // Offset: 0x1402BB8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Awake()
    void Awake();
    // protected override System.Void OnEnable()
    // Offset: 0x1402C70
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x1402C74
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x1402EE8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
    // public System.Void .ctor()
    // Offset: 0x140307C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextContainer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TextContainer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextContainer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x14030F4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // TMPro.TextContainer
  #pragma pack(pop)
  static check_size<sizeof(TextContainer), 104 + sizeof(TMPro::TextMeshPro*)> __TMPro_TextContainerSizeCheck;
  static_assert(sizeof(TextContainer) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TextContainer*, "TMPro", "TextContainer");
// Writing MetadataGetter for method: TMPro::TextContainer::get_hasChanged
// Il2CppName: get_hasChanged
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::set_hasChanged
// Il2CppName: set_hasChanged
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::get_pivot
// Il2CppName: get_pivot
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::set_pivot
// Il2CppName: set_pivot
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::get_anchorPosition
// Il2CppName: get_anchorPosition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::set_anchorPosition
// Il2CppName: set_anchorPosition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::get_rect
// Il2CppName: get_rect
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::set_rect
// Il2CppName: set_rect
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::get_size
// Il2CppName: get_size
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::set_size
// Il2CppName: set_size
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::get_width
// Il2CppName: get_width
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::set_width
// Il2CppName: set_width
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::get_height
// Il2CppName: get_height
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::set_height
// Il2CppName: set_height
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::get_isDefaultWidth
// Il2CppName: get_isDefaultWidth
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::get_isDefaultHeight
// Il2CppName: get_isDefaultHeight
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::get_isAutoFitting
// Il2CppName: get_isAutoFitting
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::set_isAutoFitting
// Il2CppName: set_isAutoFitting
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::get_corners
// Il2CppName: get_corners
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::get_worldCorners
// Il2CppName: get_worldCorners
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::get_margins
// Il2CppName: get_margins
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::set_margins
// Il2CppName: set_margins
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::get_rectTransform
// Il2CppName: get_rectTransform
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::get_textMeshPro
// Il2CppName: get_textMeshPro
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::OnContainerChanged
// Il2CppName: OnContainerChanged
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::SetRect
// Il2CppName: SetRect
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::UpdateCorners
// Il2CppName: UpdateCorners
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::GetPivot
// Il2CppName: GetPivot
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::GetAnchorPosition
// Il2CppName: GetAnchorPosition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::Awake
// Il2CppName: Awake
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::OnEnable
// Il2CppName: OnEnable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::OnDisable
// Il2CppName: OnDisable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::OnRectTransformDimensionsChange
// Il2CppName: OnRectTransformDimensionsChange
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::TextContainer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TextContainer::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
