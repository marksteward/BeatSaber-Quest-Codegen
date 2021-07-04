// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MirroredNoteController`1
#include "GlobalNamespace/MirroredNoteController_1.hpp"
// Including type: ICubeNoteControllerInitializable`1
#include "GlobalNamespace/ICubeNoteControllerInitializable_1.hpp"
// Including type: ICubeNoteTypeProvider
#include "GlobalNamespace/ICubeNoteTypeProvider.hpp"
// Including type: INoteMovementProvider
#include "GlobalNamespace/INoteMovementProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ICubeNoteMirrorable
  class ICubeNoteMirrorable;
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: NoteMovement
  class NoteMovement;
  // Forward declaring type: GameNoteType
  struct GameNoteController_GameNoteType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MirroredCubeNoteController
  class MirroredCubeNoteController : public GlobalNamespace::MirroredNoteController_1<GlobalNamespace::ICubeNoteMirrorable*>/*, public GlobalNamespace::ICubeNoteControllerInitializable_1<GlobalNamespace::MirroredCubeNoteController*>, public GlobalNamespace::ICubeNoteTypeProvider, public GlobalNamespace::INoteMovementProvider*/ {
    public:
    // Nested type: GlobalNamespace::MirroredCubeNoteController::Pool
    class Pool;
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // [InjectAttribute] Offset: 0xE19394
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE193A4
    // private System.Action`1<MirroredCubeNoteController> cubeNoteControllerDidInitEvent
    // Size: 0x8
    // Offset: 0x68
    System::Action_1<GlobalNamespace::MirroredCubeNoteController*>* cubeNoteControllerDidInitEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MirroredCubeNoteController*>*) == 0x8);
    // Creating value type constructor for type: MirroredCubeNoteController
    MirroredCubeNoteController(GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}, System::Action_1<GlobalNamespace::MirroredCubeNoteController*>* cubeNoteControllerDidInitEvent_ = {}) noexcept : materialPropertyBlockController{materialPropertyBlockController_}, colorManager{colorManager_}, cubeNoteControllerDidInitEvent{cubeNoteControllerDidInitEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ICubeNoteControllerInitializable_1<GlobalNamespace::MirroredCubeNoteController*>
    operator GlobalNamespace::ICubeNoteControllerInitializable_1<GlobalNamespace::MirroredCubeNoteController*>() noexcept {
      return *reinterpret_cast<GlobalNamespace::ICubeNoteControllerInitializable_1<GlobalNamespace::MirroredCubeNoteController*>*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::ICubeNoteTypeProvider
    operator GlobalNamespace::ICubeNoteTypeProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::ICubeNoteTypeProvider*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::INoteMovementProvider
    operator GlobalNamespace::INoteMovementProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::INoteMovementProvider*>(this);
    }
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE193B4
    // Get static field: static private readonly System.Int32 _colorId
    static int _get__colorId();
    // Set static field: static private readonly System.Int32 _colorId
    static void _set__colorId(int value);
    // public System.Void add_cubeNoteControllerDidInitEvent(System.Action`1<MirroredCubeNoteController> value)
    // Offset: 0x1091D30
    void add_cubeNoteControllerDidInitEvent(System::Action_1<GlobalNamespace::MirroredCubeNoteController*>* value);
    // public System.Void remove_cubeNoteControllerDidInitEvent(System.Action`1<MirroredCubeNoteController> value)
    // Offset: 0x1091DD4
    void remove_cubeNoteControllerDidInitEvent(System::Action_1<GlobalNamespace::MirroredCubeNoteController*>* value);
    // public NoteMovement get_noteMovement()
    // Offset: 0x1091E78
    GlobalNamespace::NoteMovement* get_noteMovement();
    // public GameNoteController/GameNoteType get_gameNoteType()
    // Offset: 0x1091F34
    GlobalNamespace::GameNoteController_GameNoteType get_gameNoteType();
    // public System.Void Mirror(ICubeNoteMirrorable noteController)
    // Offset: 0x1091FE8
    void Mirror(GlobalNamespace::ICubeNoteMirrorable* noteController);
    // public System.Void .ctor()
    // Offset: 0x10921B0
    // Implemented from: MirroredNoteController`1
    // Base method: System.Void MirroredNoteController_1::.ctor()
    // Base method: System.Void NoteControllerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MirroredCubeNoteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MirroredCubeNoteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MirroredCubeNoteController*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1092200
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // MirroredCubeNoteController
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirroredCubeNoteController*, "", "MirroredCubeNoteController");
// Writing MetadataGetter for method: GlobalNamespace::MirroredCubeNoteController::add_cubeNoteControllerDidInitEvent
// Il2CppName: add_cubeNoteControllerDidInitEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MirroredCubeNoteController::remove_cubeNoteControllerDidInitEvent
// Il2CppName: remove_cubeNoteControllerDidInitEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MirroredCubeNoteController::get_noteMovement
// Il2CppName: get_noteMovement
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MirroredCubeNoteController::get_gameNoteType
// Il2CppName: get_gameNoteType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MirroredCubeNoteController::Mirror
// Il2CppName: Mirror
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MirroredCubeNoteController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MirroredCubeNoteController::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
