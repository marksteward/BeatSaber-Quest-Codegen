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
    // Offset: 0x10E2AE4
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0x10E2C00
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0x10E2CBC
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::Il2CppString* TextForValue(int idx);
    // public System.Void .ctor()
    // Offset: 0x10E2D8C
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
  #pragma pack(pop)
  static check_size<sizeof(SmoothCameraSmoothnessSettingsController), 56 + sizeof(::Array<float>*)> __GlobalNamespace_SmoothCameraSmoothnessSettingsControllerSizeCheck;
  static_assert(sizeof(SmoothCameraSmoothnessSettingsController) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SmoothCameraSmoothnessSettingsController*, "", "SmoothCameraSmoothnessSettingsController");
// Writing MetadataGetter for method: GlobalNamespace::SmoothCameraSmoothnessSettingsController::GetInitValues
// Il2CppName: GetInitValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SmoothCameraSmoothnessSettingsController::*)(int&, int&)>(&GlobalNamespace::SmoothCameraSmoothnessSettingsController::GetInitValues)> {
  const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* numberOfElements = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmoothCameraSmoothnessSettingsController*), "GetInitValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, numberOfElements});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SmoothCameraSmoothnessSettingsController::ApplyValue
// Il2CppName: ApplyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SmoothCameraSmoothnessSettingsController::*)(int)>(&GlobalNamespace::SmoothCameraSmoothnessSettingsController::ApplyValue)> {
  const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmoothCameraSmoothnessSettingsController*), "ApplyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SmoothCameraSmoothnessSettingsController::TextForValue
// Il2CppName: TextForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::SmoothCameraSmoothnessSettingsController::*)(int)>(&GlobalNamespace::SmoothCameraSmoothnessSettingsController::TextForValue)> {
  const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmoothCameraSmoothnessSettingsController*), "TextForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SmoothCameraSmoothnessSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
