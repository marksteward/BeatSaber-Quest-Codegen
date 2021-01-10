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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionToggle
  class MissionToggle;
  // Forward declaring type: MissionNode
  class MissionNode;
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
  // Size: 0x3C
  // Autogenerated type: MissionNodeVisualController
  // [] Offset: FFFFFFFF
  class MissionNodeVisualController : public UnityEngine::MonoBehaviour {
    public:
    // private MissionToggle _missionToggle
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionToggle* missionToggle;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionToggle*) == 0x8);
    // private MissionNode _missionNode
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MissionNode* missionNode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNode*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCE77C
    // private System.Action`1<MissionNodeVisualController> nodeWasSelectEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<GlobalNamespace::MissionNodeVisualController*>* nodeWasSelectEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MissionNodeVisualController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCE78C
    // private System.Action`1<MissionNodeVisualController> nodeWasDisplayedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<GlobalNamespace::MissionNodeVisualController*>* nodeWasDisplayedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MissionNodeVisualController*>*) == 0x8);
    // private System.Boolean _selected
    // Size: 0x1
    // Offset: 0x38
    bool selected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x39
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _cleared
    // Size: 0x1
    // Offset: 0x3A
    bool cleared;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _interactable
    // Size: 0x1
    // Offset: 0x3B
    bool interactable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MissionNodeVisualController
    MissionNodeVisualController(GlobalNamespace::MissionToggle* missionToggle_ = {}, GlobalNamespace::MissionNode* missionNode_ = {}, System::Action_1<GlobalNamespace::MissionNodeVisualController*>* nodeWasSelectEvent_ = {}, System::Action_1<GlobalNamespace::MissionNodeVisualController*>* nodeWasDisplayedEvent_ = {}, bool selected_ = {}, bool isInitialized_ = {}, bool cleared_ = {}, bool interactable_ = {}) noexcept : missionToggle{missionToggle_}, missionNode{missionNode_}, nodeWasSelectEvent{nodeWasSelectEvent_}, nodeWasDisplayedEvent{nodeWasDisplayedEvent_}, selected{selected_}, isInitialized{isInitialized_}, cleared{cleared_}, interactable{interactable_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_nodeWasSelectEvent(System.Action`1<MissionNodeVisualController> value)
    // Offset: 0x101C960
    void add_nodeWasSelectEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController*>* value);
    // public System.Void remove_nodeWasSelectEvent(System.Action`1<MissionNodeVisualController> value)
    // Offset: 0x101CC0C
    void remove_nodeWasSelectEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController*>* value);
    // public System.Void add_nodeWasDisplayedEvent(System.Action`1<MissionNodeVisualController> value)
    // Offset: 0x101CA04
    void add_nodeWasDisplayedEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController*>* value);
    // public System.Void remove_nodeWasDisplayedEvent(System.Action`1<MissionNodeVisualController> value)
    // Offset: 0x101CCB0
    void remove_nodeWasDisplayedEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController*>* value);
    // public MissionNode get_missionNode()
    // Offset: 0x101CEC8
    GlobalNamespace::MissionNode* get_missionNode();
    // public System.Boolean get_selected()
    // Offset: 0x101CED0
    bool get_selected();
    // public System.Boolean get_isInitialized()
    // Offset: 0x101CED8
    bool get_isInitialized();
    // public System.Boolean get_cleared()
    // Offset: 0x101CEE0
    bool get_cleared();
    // public System.Boolean get_interactable()
    // Offset: 0x101CEE8
    bool get_interactable();
    // public System.Void SetSelected(System.Boolean value)
    // Offset: 0x101C7EC
    void SetSelected(bool value);
    // protected System.Void OnEnable()
    // Offset: 0x101CF00
    void OnEnable();
    // protected System.Void Awake()
    // Offset: 0x101CF64
    void Awake();
    // protected System.Void Start()
    // Offset: 0x101D0B8
    void Start();
    // public System.Void Reset()
    // Offset: 0x101D114
    void Reset();
    // protected System.Void OnDestroy()
    // Offset: 0x101D11C
    void OnDestroy();
    // public System.Void Init()
    // Offset: 0x101D0BC
    void Init();
    // public System.Void Setup(System.Boolean cleared, System.Boolean interactable)
    // Offset: 0x101D30C
    void Setup(bool cleared, bool interactable);
    // private System.Void SetupToggle()
    // Offset: 0x101D2B0
    void SetupToggle();
    // public System.Void SetMissionCleared()
    // Offset: 0x101B59C
    void SetMissionCleared();
    // public System.Void SetInteractable()
    // Offset: 0x101BE38
    void SetInteractable();
    // public System.Void ChangeNodeSelection(System.Boolean selected)
    // Offset: 0x101D2E8
    void ChangeNodeSelection(bool selected);
    // private System.Void HandleMissionToggleSelectionDidChange(MissionToggle toggle)
    // Offset: 0x101D3E4
    void HandleMissionToggleSelectionDidChange(GlobalNamespace::MissionToggle* toggle);
    // public System.Void .ctor()
    // Offset: 0x101D468
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionNodeVisualController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionNodeVisualController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionNodeVisualController*, creationType>()));
    }
  }; // MissionNodeVisualController
  static check_size<sizeof(MissionNodeVisualController), 59 + sizeof(bool)> __GlobalNamespace_MissionNodeVisualControllerSizeCheck;
  static_assert(sizeof(MissionNodeVisualController) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodeVisualController*, "", "MissionNodeVisualController");
#pragma pack(pop)
