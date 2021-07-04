// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IncDecColorController
#include "GlobalNamespace/IncDecColorController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ListColorController
  class ListColorController : public GlobalNamespace::IncDecColorController {
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
    // Creating value type constructor for type: ListColorController
    ListColorController(int idx_ = {}, int numberOfElements_ = {}) noexcept : idx{idx_}, numberOfElements{numberOfElements_} {}
    // protected System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0xFFFFFFFF
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected System.Void ApplyValue(System.Int32 idx)
    // Offset: 0xFFFFFFFF
    void ApplyValue(int idx);
    // protected UnityEngine.Color ColorForValue(System.Int32 idx)
    // Offset: 0xFFFFFFFF
    UnityEngine::Color ColorForValue(int idx);
    // protected System.Void OnEnable()
    // Offset: 0x1205A8C
    void OnEnable();
    // private System.Void RefreshUI()
    // Offset: 0x1205AD0
    void RefreshUI();
    // public System.Void Refresh(System.Boolean applyValue)
    // Offset: 0x1205B38
    void Refresh(bool applyValue);
    // protected override System.Void IncButtonPressed()
    // Offset: 0x1205B98
    // Implemented from: IncDecColorController
    // Base method: System.Void IncDecColorController::IncButtonPressed()
    void IncButtonPressed();
    // protected override System.Void DecButtonPressed()
    // Offset: 0x1205BE4
    // Implemented from: IncDecColorController
    // Base method: System.Void IncDecColorController::DecButtonPressed()
    void DecButtonPressed();
    // protected System.Void .ctor()
    // Offset: 0x1205C28
    // Implemented from: IncDecColorController
    // Base method: System.Void IncDecColorController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListColorController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListColorController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListColorController*, creationType>()));
    }
  }; // ListColorController
  #pragma pack(pop)
  static check_size<sizeof(ListColorController), 36 + sizeof(int)> __GlobalNamespace_ListColorControllerSizeCheck;
  static_assert(sizeof(ListColorController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ListColorController*, "", "ListColorController");
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::GetInitValues
// Il2CppName: GetInitValues
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::ApplyValue
// Il2CppName: ApplyValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::ColorForValue
// Il2CppName: ColorForValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::OnEnable
// Il2CppName: OnEnable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::RefreshUI
// Il2CppName: RefreshUI
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::Refresh
// Il2CppName: Refresh
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::IncButtonPressed
// Il2CppName: IncButtonPressed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::DecButtonPressed
// Il2CppName: DecButtonPressed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
