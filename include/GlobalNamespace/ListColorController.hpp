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
  // [TokenAttribute] Offset: FFFFFFFF
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
    // Offset: 0x11B9E90
    void OnEnable();
    // private System.Void RefreshUI()
    // Offset: 0x11B9ED4
    void RefreshUI();
    // public System.Void Refresh(System.Boolean applyValue)
    // Offset: 0x11B9F3C
    void Refresh(bool applyValue);
    // protected System.Void .ctor()
    // Offset: 0x11BA02C
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
    // protected override System.Void IncButtonPressed()
    // Offset: 0x11B9F9C
    // Implemented from: IncDecColorController
    // Base method: System.Void IncDecColorController::IncButtonPressed()
    void IncButtonPressed();
    // protected override System.Void DecButtonPressed()
    // Offset: 0x11B9FE8
    // Implemented from: IncDecColorController
    // Base method: System.Void IncDecColorController::DecButtonPressed()
    void DecButtonPressed();
  }; // ListColorController
  #pragma pack(pop)
  static check_size<sizeof(ListColorController), 36 + sizeof(int)> __GlobalNamespace_ListColorControllerSizeCheck;
  static_assert(sizeof(ListColorController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ListColorController*, "", "ListColorController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::GetInitValues
// Il2CppName: GetInitValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ListColorController::*)(int&, int&)>(&GlobalNamespace::ListColorController::GetInitValues)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* numberOfElements = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ListColorController*), "GetInitValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, numberOfElements});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::ApplyValue
// Il2CppName: ApplyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ListColorController::*)(int)>(&GlobalNamespace::ListColorController::ApplyValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ListColorController*), "ApplyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::ColorForValue
// Il2CppName: ColorForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ListColorController::*)(int)>(&GlobalNamespace::ListColorController::ColorForValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ListColorController*), "ColorForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ListColorController::*)()>(&GlobalNamespace::ListColorController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ListColorController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::RefreshUI
// Il2CppName: RefreshUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ListColorController::*)()>(&GlobalNamespace::ListColorController::RefreshUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ListColorController*), "RefreshUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ListColorController::*)(bool)>(&GlobalNamespace::ListColorController::Refresh)> {
  static const MethodInfo* get() {
    static auto* applyValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ListColorController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{applyValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::IncButtonPressed
// Il2CppName: IncButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ListColorController::*)()>(&GlobalNamespace::ListColorController::IncButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ListColorController*), "IncButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ListColorController::DecButtonPressed
// Il2CppName: DecButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ListColorController::*)()>(&GlobalNamespace::ListColorController::DecButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ListColorController*), "DecButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
