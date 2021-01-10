// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Autogenerated type: HMUI.ScrollViewItemForVisibilityController
  // [] Offset: FFFFFFFF
  // [RequireComponent] Offset: DA6014
  class ScrollViewItemForVisibilityController : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: ScrollViewItemForVisibilityController
    ScrollViewItemForVisibilityController() noexcept {}
    // public System.Void GetWorldCorners(UnityEngine.Vector3[] fourCornersArray)
    // Offset: 0x1081064
    void GetWorldCorners(::Array<UnityEngine::Vector3>* fourCornersArray);
    // public System.Void .ctor()
    // Offset: 0x10810D4
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
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScrollViewItemForVisibilityController*, "HMUI", "ScrollViewItemForVisibilityController");
#pragma pack(pop)
