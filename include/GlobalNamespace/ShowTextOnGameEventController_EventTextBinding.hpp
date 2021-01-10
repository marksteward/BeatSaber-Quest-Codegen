// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ShowTextOnGameEventController
#include "GlobalNamespace/ShowTextOnGameEventController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
  // Forward declaring type: TextFadeTransitions
  class TextFadeTransitions;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: ShowTextOnGameEventController/EventTextBinding
  // [] Offset: FFFFFFFF
  class ShowTextOnGameEventController::EventTextBinding : public ::Il2CppObject {
    public:
    // private Signal _signal
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::Signal* signal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [TextAreaAttribute] Offset: 0xDD3F6C
    // private System.String _text
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private TextFadeTransitions _textFadeTransitions
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::TextFadeTransitions* textFadeTransitions;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TextFadeTransitions*) == 0x8);
    // Creating value type constructor for type: EventTextBinding
    EventTextBinding(GlobalNamespace::Signal* signal_ = {}, ::Il2CppString* text_ = {}, GlobalNamespace::TextFadeTransitions* textFadeTransitions_ = {}) noexcept : signal{signal_}, text{text_}, textFadeTransitions{textFadeTransitions_} {}
    // public System.Void Init(TextFadeTransitions textFadeTransitions)
    // Offset: 0xFCD97C
    void Init(GlobalNamespace::TextFadeTransitions* textFadeTransitions);
    // public System.Void Deinit()
    // Offset: 0xFCDA84
    void Deinit();
    // private System.Void HandleGameEvent()
    // Offset: 0xFCDB18
    void HandleGameEvent();
    // public System.Void .ctor()
    // Offset: 0xFCDB54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShowTextOnGameEventController::EventTextBinding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShowTextOnGameEventController::EventTextBinding*, creationType>()));
    }
  }; // ShowTextOnGameEventController/EventTextBinding
  static check_size<sizeof(ShowTextOnGameEventController::EventTextBinding), 32 + sizeof(GlobalNamespace::TextFadeTransitions*)> __GlobalNamespace_ShowTextOnGameEventController_EventTextBindingSizeCheck;
  static_assert(sizeof(ShowTextOnGameEventController::EventTextBinding) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShowTextOnGameEventController::EventTextBinding*, "", "ShowTextOnGameEventController/EventTextBinding");
#pragma pack(pop)
