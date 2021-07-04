// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IncDecSettingsController
#include "GlobalNamespace/IncDecSettingsController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ListSettingsController
  class ListSettingsController : public GlobalNamespace::IncDecSettingsController {
    public:
    // private System.Int32 _idx
    // Size: 0x4
    // Offset: 0x20
    int idx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _numberOfElements
    // Size: 0x4
    // Offset: 0x24
    int numberOfElements;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ListSettingsController
    ListSettingsController(int idx_ = {}, int numberOfElements_ = {}) noexcept : idx{idx_}, numberOfElements{numberOfElements_} {}
    // protected System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0xFFFFFFFF
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected System.Void ApplyValue(System.Int32 idx)
    // Offset: 0xFFFFFFFF
    void ApplyValue(int idx);
    // protected System.String TextForValue(System.Int32 idx)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* TextForValue(int idx);
    // protected System.Void OnEnable()
    // Offset: 0x1205C9C
    void OnEnable();
    // private System.Void RefreshUI()
    // Offset: 0x1205CE0
    void RefreshUI();
    // public System.Void Refresh(System.Boolean applyValue)
    // Offset: 0x1205D4C
    void Refresh(bool applyValue);
    // protected override System.Void IncButtonPressed()
    // Offset: 0x1205DAC
    // Implemented from: IncDecSettingsController
    // Base method: System.Void IncDecSettingsController::IncButtonPressed()
    void IncButtonPressed();
    // protected override System.Void DecButtonPressed()
    // Offset: 0x1205DF8
    // Implemented from: IncDecSettingsController
    // Base method: System.Void IncDecSettingsController::DecButtonPressed()
    void DecButtonPressed();
    // protected System.Void .ctor()
    // Offset: 0x1205E3C
    // Implemented from: IncDecSettingsController
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListSettingsController*, creationType>()));
    }
  }; // ListSettingsController
  #pragma pack(pop)
  static check_size<sizeof(ListSettingsController), 36 + sizeof(int)> __GlobalNamespace_ListSettingsControllerSizeCheck;
  static_assert(sizeof(ListSettingsController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ListSettingsController*, "", "ListSettingsController");
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::GetInitValues
// Il2CppName: GetInitValues
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::ApplyValue
// Il2CppName: ApplyValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::TextForValue
// Il2CppName: TextForValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::OnEnable
// Il2CppName: OnEnable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::RefreshUI
// Il2CppName: RefreshUI
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::Refresh
// Il2CppName: Refresh
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::IncButtonPressed
// Il2CppName: IncButtonPressed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::DecButtonPressed
// Il2CppName: DecButtonPressed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ListSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
