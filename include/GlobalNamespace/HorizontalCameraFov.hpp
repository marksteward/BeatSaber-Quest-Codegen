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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: HorizontalCameraFov
  // [RequireComponent] Offset: DE2E44
  class HorizontalCameraFov : public UnityEngine::MonoBehaviour {
    public:
    // public System.Single _horizontalFOV
    // Size: 0x4
    // Offset: 0x18
    float horizontalFOV;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: HorizontalCameraFov
    HorizontalCameraFov(float horizontalFOV_ = {}) noexcept : horizontalFOV{horizontalFOV_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x124B77C
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x124B868
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HorizontalCameraFov* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HorizontalCameraFov::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HorizontalCameraFov*, creationType>()));
    }
  }; // HorizontalCameraFov
  #pragma pack(pop)
  static check_size<sizeof(HorizontalCameraFov), 24 + sizeof(float)> __GlobalNamespace_HorizontalCameraFovSizeCheck;
  static_assert(sizeof(HorizontalCameraFov) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HorizontalCameraFov*, "", "HorizontalCameraFov");
// Writing MetadataGetter for method: GlobalNamespace::HorizontalCameraFov::Awake
// Il2CppName: Awake
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::HorizontalCameraFov::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
