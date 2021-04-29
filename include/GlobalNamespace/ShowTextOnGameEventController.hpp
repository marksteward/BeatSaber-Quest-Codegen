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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TextFadeTransitions
  class TextFadeTransitions;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ShowTextOnGameEventController
  class ShowTextOnGameEventController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ShowTextOnGameEventController::EventTextBinding
    class EventTextBinding;
    // private TextFadeTransitions _textFadeTransitions
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::TextFadeTransitions* textFadeTransitions;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TextFadeTransitions*) == 0x8);
    // private ShowTextOnGameEventController/EventTextBinding[] _eventTextBindings
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::ShowTextOnGameEventController::EventTextBinding*>* eventTextBindings;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::ShowTextOnGameEventController::EventTextBinding*>*) == 0x8);
    // Creating value type constructor for type: ShowTextOnGameEventController
    ShowTextOnGameEventController(GlobalNamespace::TextFadeTransitions* textFadeTransitions_ = {}, ::Array<GlobalNamespace::ShowTextOnGameEventController::EventTextBinding*>* eventTextBindings_ = {}) noexcept : textFadeTransitions{textFadeTransitions_}, eventTextBindings{eventTextBindings_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x105CF0C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x105D018
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x105D10C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShowTextOnGameEventController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ShowTextOnGameEventController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShowTextOnGameEventController*, creationType>()));
    }
  }; // ShowTextOnGameEventController
  #pragma pack(pop)
  static check_size<sizeof(ShowTextOnGameEventController), 32 + sizeof(::Array<GlobalNamespace::ShowTextOnGameEventController::EventTextBinding*>*)> __GlobalNamespace_ShowTextOnGameEventControllerSizeCheck;
  static_assert(sizeof(ShowTextOnGameEventController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShowTextOnGameEventController*, "", "ShowTextOnGameEventController");
