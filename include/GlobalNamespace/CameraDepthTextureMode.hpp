// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.DepthTextureMode
#include "UnityEngine/DepthTextureMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: CameraDepthTextureMode
  class CameraDepthTextureMode : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.DepthTextureMode _depthTextureMode
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::DepthTextureMode depthTextureMode;
    // Field size check
    static_assert(sizeof(UnityEngine::DepthTextureMode) == 0x4);
    // Creating value type constructor for type: CameraDepthTextureMode
    CameraDepthTextureMode(UnityEngine::DepthTextureMode depthTextureMode_ = {}) noexcept : depthTextureMode{depthTextureMode_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x123F2A4
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x123F308
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CameraDepthTextureMode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CameraDepthTextureMode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CameraDepthTextureMode*, creationType>()));
    }
  }; // CameraDepthTextureMode
  #pragma pack(pop)
  static check_size<sizeof(CameraDepthTextureMode), 24 + sizeof(UnityEngine::DepthTextureMode)> __GlobalNamespace_CameraDepthTextureModeSizeCheck;
  static_assert(sizeof(CameraDepthTextureMode) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CameraDepthTextureMode*, "", "CameraDepthTextureMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CameraDepthTextureMode::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CameraDepthTextureMode::*)()>(&GlobalNamespace::CameraDepthTextureMode::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CameraDepthTextureMode*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CameraDepthTextureMode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
