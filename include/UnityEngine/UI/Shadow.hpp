// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.BaseMeshEffect
#include "UnityEngine/UI/BaseMeshEffect.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.UIVertex
#include "UnityEngine/UIVertex.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Color32 because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Shadow
  // [AddComponentMenu] Offset: CEC098
  class Shadow : public UnityEngine::UI::BaseMeshEffect {
    public:
    // private UnityEngine.Color m_EffectColor
    // Size: 0x10
    // Offset: 0x20
    UnityEngine::Color m_EffectColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Vector2 m_EffectDistance
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Vector2 m_EffectDistance;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private System.Boolean m_UseGraphicAlpha
    // Size: 0x1
    // Offset: 0x38
    bool m_UseGraphicAlpha;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Shadow
    Shadow(UnityEngine::Color m_EffectColor_ = {}, UnityEngine::Vector2 m_EffectDistance_ = {}, bool m_UseGraphicAlpha_ = {}) noexcept : m_EffectColor{m_EffectColor_}, m_EffectDistance{m_EffectDistance_}, m_UseGraphicAlpha{m_UseGraphicAlpha_} {}
    // static field const value: static private System.Single kMaxEffectDistance
    static constexpr const float kMaxEffectDistance = 600;
    // Get static field: static private System.Single kMaxEffectDistance
    static float _get_kMaxEffectDistance();
    // Set static field: static private System.Single kMaxEffectDistance
    static void _set_kMaxEffectDistance(float value);
    // public UnityEngine.Color get_effectColor()
    // Offset: 0x18329B4
    UnityEngine::Color get_effectColor();
    // public System.Void set_effectColor(UnityEngine.Color value)
    // Offset: 0x18329C0
    void set_effectColor(UnityEngine::Color value);
    // public UnityEngine.Vector2 get_effectDistance()
    // Offset: 0x1832AA4
    UnityEngine::Vector2 get_effectDistance();
    // public System.Void set_effectDistance(UnityEngine.Vector2 value)
    // Offset: 0x1832AAC
    void set_effectDistance(UnityEngine::Vector2 value);
    // public System.Boolean get_useGraphicAlpha()
    // Offset: 0x1832BEC
    bool get_useGraphicAlpha();
    // public System.Void set_useGraphicAlpha(System.Boolean value)
    // Offset: 0x1832BF4
    void set_useGraphicAlpha(bool value);
    // protected System.Void ApplyShadowZeroAlloc(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, UnityEngine.Color32 color, System.Int32 start, System.Int32 end, System.Single x, System.Single y)
    // Offset: 0x182604C
    void ApplyShadowZeroAlloc(System::Collections::Generic::List_1<UnityEngine::UIVertex>* verts, UnityEngine::Color32 color, int start, int end, float x, float y);
    // protected System.Void ApplyShadow(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, UnityEngine.Color32 color, System.Int32 start, System.Int32 end, System.Single x, System.Single y)
    // Offset: 0x1832CC0
    void ApplyShadow(System::Collections::Generic::List_1<UnityEngine::UIVertex>* verts, UnityEngine::Color32 color, int start, int end, float x, float y);
    // protected System.Void .ctor()
    // Offset: 0x1825DB4
    // Implemented from: UnityEngine.UI.BaseMeshEffect
    // Base method: System.Void BaseMeshEffect::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Shadow* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Shadow::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Shadow*, creationType>()));
    }
    // public override System.Void ModifyMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x1832CC8
    // Implemented from: UnityEngine.UI.BaseMeshEffect
    // Base method: System.Void BaseMeshEffect::ModifyMesh(UnityEngine.UI.VertexHelper vh)
    void ModifyMesh(UnityEngine::UI::VertexHelper* vh);
  }; // UnityEngine.UI.Shadow
  #pragma pack(pop)
  static check_size<sizeof(Shadow), 56 + sizeof(bool)> __UnityEngine_UI_ShadowSizeCheck;
  static_assert(sizeof(Shadow) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Shadow*, "UnityEngine.UI", "Shadow");
