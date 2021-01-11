// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: SmoothCameraSmoothnessSettingsController
  // [] Offset: FFFFFFFF
  class SmoothCameraSmoothnessSettingsController : public GlobalNamespace::ListSettingsController {
    public:
    // private FloatSO _smoothCameraPositionSmooth
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::FloatSO* smoothCameraPositionSmooth;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // private FloatSO _smoothCameraRotationSmooth
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::FloatSO* smoothCameraRotationSmooth;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // private System.Single[] _smoothnesses
    // Size: 0x8
    // Offset: 0x38
    ::Array<float>* smoothnesses;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // Creating value type constructor for type: SmoothCameraSmoothnessSettingsController
    SmoothCameraSmoothnessSettingsController(GlobalNamespace::FloatSO* smoothCameraPositionSmooth_ = {}, GlobalNamespace::FloatSO* smoothCameraRotationSmooth_ = {}, ::Array<float>* smoothnesses_ = {}) noexcept : smoothCameraPositionSmooth{smoothCameraPositionSmooth_}, smoothCameraRotationSmooth{smoothCameraRotationSmooth_}, smoothnesses{smoothnesses_} {}
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0xF39110
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0xF39238
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0xF392F4
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::Il2CppString* TextForValue(int idx);
    // public System.Void .ctor()
    // Offset: 0xF393C4
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SmoothCameraSmoothnessSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SmoothCameraSmoothnessSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SmoothCameraSmoothnessSettingsController*, creationType>()));
    }
  }; // SmoothCameraSmoothnessSettingsController
  static check_size<sizeof(SmoothCameraSmoothnessSettingsController), 56 + sizeof(::Array<float>*)> __GlobalNamespace_SmoothCameraSmoothnessSettingsControllerSizeCheck;
  static_assert(sizeof(SmoothCameraSmoothnessSettingsController) == 0x40);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SmoothCameraSmoothnessSettingsController*, "", "SmoothCameraSmoothnessSettingsController");
