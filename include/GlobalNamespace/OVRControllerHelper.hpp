// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/Controller
#include "GlobalNamespace/OVRInput.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x52
  #pragma pack(push, 1)
  // Autogenerated type: OVRControllerHelper
  class OVRControllerHelper : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRControllerHelper::ControllerType
    struct ControllerType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRControllerHelper/ControllerType
    struct ControllerType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ControllerType
      constexpr ControllerType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRControllerHelper/ControllerType QuestAndRiftS
      static constexpr const int QuestAndRiftS = 1;
      // Get static field: static public OVRControllerHelper/ControllerType QuestAndRiftS
      static GlobalNamespace::OVRControllerHelper::ControllerType _get_QuestAndRiftS();
      // Set static field: static public OVRControllerHelper/ControllerType QuestAndRiftS
      static void _set_QuestAndRiftS(GlobalNamespace::OVRControllerHelper::ControllerType value);
      // static field const value: static public OVRControllerHelper/ControllerType Rift
      static constexpr const int Rift = 2;
      // Get static field: static public OVRControllerHelper/ControllerType Rift
      static GlobalNamespace::OVRControllerHelper::ControllerType _get_Rift();
      // Set static field: static public OVRControllerHelper/ControllerType Rift
      static void _set_Rift(GlobalNamespace::OVRControllerHelper::ControllerType value);
      // static field const value: static public OVRControllerHelper/ControllerType Quest2
      static constexpr const int Quest2 = 3;
      // Get static field: static public OVRControllerHelper/ControllerType Quest2
      static GlobalNamespace::OVRControllerHelper::ControllerType _get_Quest2();
      // Set static field: static public OVRControllerHelper/ControllerType Quest2
      static void _set_Quest2(GlobalNamespace::OVRControllerHelper::ControllerType value);
    }; // OVRControllerHelper/ControllerType
    #pragma pack(pop)
    static check_size<sizeof(OVRControllerHelper::ControllerType), 0 + sizeof(int)> __GlobalNamespace_OVRControllerHelper_ControllerTypeSizeCheck;
    static_assert(sizeof(OVRControllerHelper::ControllerType) == 0x4);
    // public UnityEngine.GameObject m_modelOculusTouchQuestAndRiftSLeftController
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* m_modelOculusTouchQuestAndRiftSLeftController;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject m_modelOculusTouchQuestAndRiftSRightController
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GameObject* m_modelOculusTouchQuestAndRiftSRightController;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject m_modelOculusTouchRiftLeftController
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GameObject* m_modelOculusTouchRiftLeftController;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject m_modelOculusTouchRiftRightController
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* m_modelOculusTouchRiftRightController;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject m_modelOculusTouchQuest2LeftController
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::GameObject* m_modelOculusTouchQuest2LeftController;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject m_modelOculusTouchQuest2RightController
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::GameObject* m_modelOculusTouchQuest2RightController;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public OVRInput/Controller m_controller
    // Size: 0x4
    // Offset: 0x48
    GlobalNamespace::OVRInput::Controller m_controller;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::Controller) == 0x4);
    // private OVRControllerHelper/ControllerType activeControllerType
    // Size: 0x4
    // Offset: 0x4C
    GlobalNamespace::OVRControllerHelper::ControllerType activeControllerType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRControllerHelper::ControllerType) == 0x4);
    // private System.Boolean m_prevControllerConnected
    // Size: 0x1
    // Offset: 0x50
    bool m_prevControllerConnected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_prevControllerConnectedCached
    // Size: 0x1
    // Offset: 0x51
    bool m_prevControllerConnectedCached;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OVRControllerHelper
    OVRControllerHelper(UnityEngine::GameObject* m_modelOculusTouchQuestAndRiftSLeftController_ = {}, UnityEngine::GameObject* m_modelOculusTouchQuestAndRiftSRightController_ = {}, UnityEngine::GameObject* m_modelOculusTouchRiftLeftController_ = {}, UnityEngine::GameObject* m_modelOculusTouchRiftRightController_ = {}, UnityEngine::GameObject* m_modelOculusTouchQuest2LeftController_ = {}, UnityEngine::GameObject* m_modelOculusTouchQuest2RightController_ = {}, GlobalNamespace::OVRInput::Controller m_controller_ = {}, GlobalNamespace::OVRControllerHelper::ControllerType activeControllerType_ = {}, bool m_prevControllerConnected_ = {}, bool m_prevControllerConnectedCached_ = {}) noexcept : m_modelOculusTouchQuestAndRiftSLeftController{m_modelOculusTouchQuestAndRiftSLeftController_}, m_modelOculusTouchQuestAndRiftSRightController{m_modelOculusTouchQuestAndRiftSRightController_}, m_modelOculusTouchRiftLeftController{m_modelOculusTouchRiftLeftController_}, m_modelOculusTouchRiftRightController{m_modelOculusTouchRiftRightController_}, m_modelOculusTouchQuest2LeftController{m_modelOculusTouchQuest2LeftController_}, m_modelOculusTouchQuest2RightController{m_modelOculusTouchQuest2RightController_}, m_controller{m_controller_}, activeControllerType{activeControllerType_}, m_prevControllerConnected{m_prevControllerConnected_}, m_prevControllerConnectedCached{m_prevControllerConnectedCached_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Start()
    // Offset: 0x115125C
    void Start();
    // private System.Void Update()
    // Offset: 0x115147C
    void Update();
    // public System.Void .ctor()
    // Offset: 0x11516E4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRControllerHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRControllerHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRControllerHelper*, creationType>()));
    }
  }; // OVRControllerHelper
  #pragma pack(pop)
  static check_size<sizeof(OVRControllerHelper), 81 + sizeof(bool)> __GlobalNamespace_OVRControllerHelperSizeCheck;
  static_assert(sizeof(OVRControllerHelper) == 0x52);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRControllerHelper*, "", "OVRControllerHelper");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRControllerHelper::ControllerType, "", "OVRControllerHelper/ControllerType");
