// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.UI.IMeshModifier
#include "UnityEngine/UI/IMeshModifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.BaseMeshEffect
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class BaseMeshEffect : public UnityEngine::EventSystems::UIBehaviour/*, public UnityEngine::UI::IMeshModifier*/ {
    public:
    // private UnityEngine.UI.Graphic m_Graphic
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Graphic* m_Graphic;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Graphic*) == 0x8);
    // Creating value type constructor for type: BaseMeshEffect
    BaseMeshEffect(UnityEngine::UI::Graphic* m_Graphic_ = {}) noexcept : m_Graphic{m_Graphic_} {}
    // Creating interface conversion operator: operator UnityEngine::UI::IMeshModifier
    operator UnityEngine::UI::IMeshModifier() noexcept {
      return *reinterpret_cast<UnityEngine::UI::IMeshModifier*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.UI.Graphic m_Graphic
    UnityEngine::UI::Graphic* _get_m_Graphic();
    // Set instance field: private UnityEngine.UI.Graphic m_Graphic
    void _set_m_Graphic(UnityEngine::UI::Graphic* value);
    // protected UnityEngine.UI.Graphic get_graphic()
    // Offset: 0x140BD4C
    UnityEngine::UI::Graphic* get_graphic();
    // public System.Void ModifyMesh(UnityEngine.Mesh mesh)
    // Offset: 0x140BFE8
    void ModifyMesh(UnityEngine::Mesh* mesh);
    // public System.Void ModifyMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0xFFFFFFFF
    void ModifyMesh(UnityEngine::UI::VertexHelper* vh);
    // protected System.Void .ctor()
    // Offset: 0x140C124
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseMeshEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::BaseMeshEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseMeshEffect*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x140BDE4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x140BE90
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x140BF3C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
  }; // UnityEngine.UI.BaseMeshEffect
  #pragma pack(pop)
  static check_size<sizeof(BaseMeshEffect), 24 + sizeof(UnityEngine::UI::Graphic*)> __UnityEngine_UI_BaseMeshEffectSizeCheck;
  static_assert(sizeof(BaseMeshEffect) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::BaseMeshEffect*, "UnityEngine.UI", "BaseMeshEffect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::BaseMeshEffect::get_graphic
// Il2CppName: get_graphic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Graphic* (UnityEngine::UI::BaseMeshEffect::*)()>(&UnityEngine::UI::BaseMeshEffect::get_graphic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::BaseMeshEffect*), "get_graphic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::BaseMeshEffect::ModifyMesh
// Il2CppName: ModifyMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::BaseMeshEffect::*)(UnityEngine::Mesh*)>(&UnityEngine::UI::BaseMeshEffect::ModifyMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::BaseMeshEffect*), "ModifyMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::BaseMeshEffect::ModifyMesh
// Il2CppName: ModifyMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::BaseMeshEffect::*)(UnityEngine::UI::VertexHelper*)>(&UnityEngine::UI::BaseMeshEffect::ModifyMesh)> {
  static const MethodInfo* get() {
    static auto* vh = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::BaseMeshEffect*), "ModifyMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vh});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::BaseMeshEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::BaseMeshEffect::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::BaseMeshEffect::*)()>(&UnityEngine::UI::BaseMeshEffect::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::BaseMeshEffect*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::BaseMeshEffect::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::BaseMeshEffect::*)()>(&UnityEngine::UI::BaseMeshEffect::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::BaseMeshEffect*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::BaseMeshEffect::OnDidApplyAnimationProperties
// Il2CppName: OnDidApplyAnimationProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::BaseMeshEffect::*)()>(&UnityEngine::UI::BaseMeshEffect::OnDidApplyAnimationProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::BaseMeshEffect*), "OnDidApplyAnimationProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
