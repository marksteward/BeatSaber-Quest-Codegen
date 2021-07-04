// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VRUIControls.VRLaserPointer
  class VRLaserPointer : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.MeshRenderer _renderer
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::MeshRenderer* renderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // Creating value type constructor for type: VRLaserPointer
    VRLaserPointer(UnityEngine::MeshRenderer* renderer_ = {}) noexcept : renderer{renderer_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE03F8C
    // Get static field: static private readonly System.Int32 _fadeStartNormalizedDistanceId
    static int _get__fadeStartNormalizedDistanceId();
    // Set static field: static private readonly System.Int32 _fadeStartNormalizedDistanceId
    static void _set__fadeStartNormalizedDistanceId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE03F9C
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock* value);
    // public System.Void SetLocalPosition(UnityEngine.Vector3 position)
    // Offset: 0x2369620
    void SetLocalPosition(UnityEngine::Vector3 position);
    // public System.Void SetLocalScale(UnityEngine.Vector3 scale)
    // Offset: 0x236966C
    void SetLocalScale(UnityEngine::Vector3 scale);
    // public System.Void SetFadeDistance(System.Single distance)
    // Offset: 0x23696B8
    void SetFadeDistance(float distance);
    // public System.Void .ctor()
    // Offset: 0x23697CC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRLaserPointer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("VRUIControls::VRLaserPointer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRLaserPointer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x23697D4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // VRUIControls.VRLaserPointer
  #pragma pack(pop)
  static check_size<sizeof(VRLaserPointer), 24 + sizeof(UnityEngine::MeshRenderer*)> __VRUIControls_VRLaserPointerSizeCheck;
  static_assert(sizeof(VRLaserPointer) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::VRLaserPointer*, "VRUIControls", "VRLaserPointer");
// Writing MetadataGetter for method: VRUIControls::VRLaserPointer::SetLocalPosition
// Il2CppName: SetLocalPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRLaserPointer::*)(UnityEngine::Vector3)>(&VRUIControls::VRLaserPointer::SetLocalPosition)> {
  const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRLaserPointer*), "SetLocalPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRLaserPointer::SetLocalScale
// Il2CppName: SetLocalScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRLaserPointer::*)(UnityEngine::Vector3)>(&VRUIControls::VRLaserPointer::SetLocalScale)> {
  const MethodInfo* get() {
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRLaserPointer*), "SetLocalScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scale});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRLaserPointer::SetFadeDistance
// Il2CppName: SetFadeDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::VRLaserPointer::*)(float)>(&VRUIControls::VRLaserPointer::SetFadeDistance)> {
  const MethodInfo* get() {
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRLaserPointer*), "SetFadeDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distance});
  }
};
// Writing MetadataGetter for method: VRUIControls::VRLaserPointer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VRUIControls::VRLaserPointer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VRUIControls::VRLaserPointer::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::VRLaserPointer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
