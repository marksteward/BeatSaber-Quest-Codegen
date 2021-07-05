// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DisappearingArrowControllerBase`1
#include "GlobalNamespace/DisappearingArrowControllerBase_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MirroredCubeNoteController
  class MirroredCubeNoteController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MirroredDisappearingArrowController
  class MirroredDisappearingArrowController : public GlobalNamespace::DisappearingArrowControllerBase_1<GlobalNamespace::MirroredCubeNoteController*> {
    public:
    // private MirroredCubeNoteController _mirroredGameNoteController
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::MirroredCubeNoteController* mirroredGameNoteController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MirroredCubeNoteController*) == 0x8);
    // Creating value type constructor for type: MirroredDisappearingArrowController
    MirroredDisappearingArrowController(GlobalNamespace::MirroredCubeNoteController* mirroredGameNoteController_ = {}) noexcept : mirroredGameNoteController{mirroredGameNoteController_} {}
    // protected MirroredCubeNoteController get_gameNoteController()
    // Offset: 0x10922B4
    GlobalNamespace::MirroredCubeNoteController* get_gameNoteController();
    // public System.Void .ctor()
    // Offset: 0x10922BC
    // Implemented from: DisappearingArrowControllerBase`1
    // Base method: System.Void DisappearingArrowControllerBase_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MirroredDisappearingArrowController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MirroredDisappearingArrowController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MirroredDisappearingArrowController*, creationType>()));
    }
  }; // MirroredDisappearingArrowController
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirroredDisappearingArrowController*, "", "MirroredDisappearingArrowController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MirroredDisappearingArrowController::get_gameNoteController
// Il2CppName: get_gameNoteController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MirroredCubeNoteController* (GlobalNamespace::MirroredDisappearingArrowController::*)()>(&GlobalNamespace::MirroredDisappearingArrowController::get_gameNoteController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredDisappearingArrowController*), "get_gameNoteController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredDisappearingArrowController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
