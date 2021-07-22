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
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ScrollViewItemForVisibilityController
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: DE24DC
  class ScrollViewItemForVisibilityController : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: ScrollViewItemForVisibilityController
    ScrollViewItemForVisibilityController() noexcept {}
    // public System.Void GetWorldCorners(UnityEngine.Vector3[] fourCornersArray)
    // Offset: 0x1299640
    void GetWorldCorners(::Array<UnityEngine::Vector3>* fourCornersArray);
    // public System.Void .ctor()
    // Offset: 0x12996B0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScrollViewItemForVisibilityController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ScrollViewItemForVisibilityController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScrollViewItemForVisibilityController*, creationType>()));
    }
  }; // HMUI.ScrollViewItemForVisibilityController
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScrollViewItemForVisibilityController*, "HMUI", "ScrollViewItemForVisibilityController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ScrollViewItemForVisibilityController::GetWorldCorners
// Il2CppName: GetWorldCorners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScrollViewItemForVisibilityController::*)(::Array<UnityEngine::Vector3>*)>(&HMUI::ScrollViewItemForVisibilityController::GetWorldCorners)> {
  static const MethodInfo* get() {
    static auto* fourCornersArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScrollViewItemForVisibilityController*), "GetWorldCorners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fourCornersArray});
  }
};
// Writing MetadataGetter for method: HMUI::ScrollViewItemForVisibilityController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
