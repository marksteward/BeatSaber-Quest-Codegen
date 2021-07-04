// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Graphic
#include "UnityEngine/UI/Graphic.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x91
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.CurvedCanvasSettings
  // [RequireComponent] Offset: DF7508
  // [RequireComponent] Offset: DF7508
  class CurvedCanvasSettings : public UnityEngine::UI::Graphic {
    public:
    // Writing base type padding for base size: 0x89 to desired offset: 0x8C
    char ___base_padding[0x3] = {};
    // private System.Single _radius
    // Size: 0x4
    // Offset: 0x8C
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _useFlatInEditMode
    // Size: 0x1
    // Offset: 0x90
    bool useFlatInEditMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CurvedCanvasSettings
    CurvedCanvasSettings(float radius_ = {}, bool useFlatInEditMode_ = {}) noexcept : radius{radius_}, useFlatInEditMode{useFlatInEditMode_} {}
    // static field const value: static public System.Single kMaxElementWidth
    static constexpr const float kMaxElementWidth = 10;
    // Get static field: static public System.Single kMaxElementWidth
    static float _get_kMaxElementWidth();
    // Set static field: static public System.Single kMaxElementWidth
    static void _set_kMaxElementWidth(float value);
    // public System.Single get_radius()
    // Offset: 0x130ED38
    float get_radius();
    // public System.Void SetRadius(System.Single value)
    // Offset: 0x130ED40
    void SetRadius(float value);
    // private UnityEngine.Vector3 TransformPointFromCanvasTo3D(UnityEngine.Vector2 point)
    // Offset: 0x130F00C
    UnityEngine::Vector3 TransformPointFromCanvasTo3D(UnityEngine::Vector2 point);
    // static private System.Void RebuildAndSetup(UnityEngine.Transform t)
    // Offset: 0x130ED5C
    static void RebuildAndSetup(UnityEngine::Transform* t);
    // protected override System.Void Start()
    // Offset: 0x130EE50
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x130EEFC
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* vh);
    // public System.Void .ctor()
    // Offset: 0x130F0DC
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CurvedCanvasSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::CurvedCanvasSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CurvedCanvasSettings*, creationType>()));
    }
  }; // HMUI.CurvedCanvasSettings
  #pragma pack(pop)
  static check_size<sizeof(CurvedCanvasSettings), 144 + sizeof(bool)> __HMUI_CurvedCanvasSettingsSizeCheck;
  static_assert(sizeof(CurvedCanvasSettings) == 0x91);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::CurvedCanvasSettings*, "HMUI", "CurvedCanvasSettings");
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettings::get_radius
// Il2CppName: get_radius
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettings::SetRadius
// Il2CppName: SetRadius
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettings::TransformPointFromCanvasTo3D
// Il2CppName: TransformPointFromCanvasTo3D
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettings::RebuildAndSetup
// Il2CppName: RebuildAndSetup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettings::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettings::OnPopulateMesh
// Il2CppName: OnPopulateMesh
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: HMUI::CurvedCanvasSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
