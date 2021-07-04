// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: ParametricBoxFrameController
  // [RequireComponent] Offset: DF57B0
  // [RequireComponent] Offset: DF57B0
  // [ExecuteInEditMode] Offset: DF57B0
  class ParametricBoxFrameController : public UnityEngine::MonoBehaviour {
    public:
    // public System.Single width
    // Size: 0x4
    // Offset: 0x18
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single height
    // Size: 0x4
    // Offset: 0x1C
    float height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single length
    // Size: 0x4
    // Offset: 0x20
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single edgeSize
    // Size: 0x4
    // Offset: 0x24
    float edgeSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x28
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // Creating value type constructor for type: ParametricBoxFrameController
    ParametricBoxFrameController(float width_ = {}, float height_ = {}, float length_ = {}, float edgeSize_ = {}, UnityEngine::Color color_ = {}, UnityEngine::MeshRenderer* meshRenderer_ = {}, GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController_ = {}) noexcept : width{width_}, height{height_}, length{length_}, edgeSize{edgeSize_}, color{color_}, meshRenderer{meshRenderer_}, materialPropertyBlockController{materialPropertyBlockController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF60B8
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF60C8
    // Get static field: static private readonly System.Int32 _sizeParamsID
    static int _get__sizeParamsID();
    // Set static field: static private readonly System.Int32 _sizeParamsID
    static void _set__sizeParamsID(int value);
    // public System.Void set_localPosition(UnityEngine.Vector3 value)
    // Offset: 0x1D90E00
    void set_localPosition(UnityEngine::Vector3 value);
    // protected System.Void Awake()
    // Offset: 0x1D90E4C
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x1D90E6C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1D91018
    void OnDisable();
    // public System.Void Refresh()
    // Offset: 0x1D90EA0
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0x1D91038
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParametricBoxFrameController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ParametricBoxFrameController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParametricBoxFrameController*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D9104C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // ParametricBoxFrameController
  #pragma pack(pop)
  static check_size<sizeof(ParametricBoxFrameController), 64 + sizeof(GlobalNamespace::MaterialPropertyBlockController*)> __GlobalNamespace_ParametricBoxFrameControllerSizeCheck;
  static_assert(sizeof(ParametricBoxFrameController) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParametricBoxFrameController*, "", "ParametricBoxFrameController");
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxFrameController::set_localPosition
// Il2CppName: set_localPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParametricBoxFrameController::*)(UnityEngine::Vector3)>(&GlobalNamespace::ParametricBoxFrameController::set_localPosition)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParametricBoxFrameController*), "set_localPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxFrameController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParametricBoxFrameController::*)()>(&GlobalNamespace::ParametricBoxFrameController::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParametricBoxFrameController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxFrameController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParametricBoxFrameController::*)()>(&GlobalNamespace::ParametricBoxFrameController::OnEnable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParametricBoxFrameController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxFrameController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParametricBoxFrameController::*)()>(&GlobalNamespace::ParametricBoxFrameController::OnDisable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParametricBoxFrameController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxFrameController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParametricBoxFrameController::*)()>(&GlobalNamespace::ParametricBoxFrameController::Refresh)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParametricBoxFrameController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxFrameController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ParametricBoxFrameController::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ParametricBoxFrameController::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParametricBoxFrameController*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
