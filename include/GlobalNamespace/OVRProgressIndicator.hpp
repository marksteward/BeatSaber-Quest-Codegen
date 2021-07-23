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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: OVRProgressIndicator
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRProgressIndicator : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.MeshRenderer progressImage
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::MeshRenderer* progressImage;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // [RangeAttribute] Offset: 0xDBD590
    // public System.Single currentProgress
    // Size: 0x4
    // Offset: 0x20
    float currentProgress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: OVRProgressIndicator
    OVRProgressIndicator(UnityEngine::MeshRenderer* progressImage_ = {}, float currentProgress_ = {}) noexcept : progressImage{progressImage_}, currentProgress{currentProgress_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: public UnityEngine.MeshRenderer progressImage
    UnityEngine::MeshRenderer* _get_progressImage();
    // Set instance field: public UnityEngine.MeshRenderer progressImage
    void _set_progressImage(UnityEngine::MeshRenderer* value);
    // Get instance field: public System.Single currentProgress
    float _get_currentProgress();
    // Set instance field: public System.Single currentProgress
    void _set_currentProgress(float value);
    // private System.Void Awake()
    // Offset: 0x15F84AC
    void Awake();
    // private System.Void Update()
    // Offset: 0x15F84CC
    void Update();
    // public System.Void .ctor()
    // Offset: 0x15F8540
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRProgressIndicator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRProgressIndicator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRProgressIndicator*, creationType>()));
    }
  }; // OVRProgressIndicator
  #pragma pack(pop)
  static check_size<sizeof(OVRProgressIndicator), 32 + sizeof(float)> __GlobalNamespace_OVRProgressIndicatorSizeCheck;
  static_assert(sizeof(OVRProgressIndicator) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRProgressIndicator*, "", "OVRProgressIndicator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRProgressIndicator::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRProgressIndicator::*)()>(&GlobalNamespace::OVRProgressIndicator::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRProgressIndicator*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRProgressIndicator::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRProgressIndicator::*)()>(&GlobalNamespace::OVRProgressIndicator::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRProgressIndicator*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRProgressIndicator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
