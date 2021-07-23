// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  #pragma pack(push, 1)
  // Autogenerated type: ShowTextOnGameEventController/EventTextBinding
  // [TokenAttribute] Offset: FFFFFFFF
  class ShowTextOnGameEventController::EventTextBinding : public ::Il2CppObject {
    public:
    // private Signal _signal
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::Signal* signal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [TextAreaAttribute] Offset: 0xE14568
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
    // Get instance field: private Signal _signal
    GlobalNamespace::Signal* _get__signal();
    // Set instance field: private Signal _signal
    void _set__signal(GlobalNamespace::Signal* value);
    // Get instance field: private System.String _text
    ::Il2CppString* _get__text();
    // Set instance field: private System.String _text
    void _set__text(::Il2CppString* value);
    // Get instance field: private TextFadeTransitions _textFadeTransitions
    GlobalNamespace::TextFadeTransitions* _get__textFadeTransitions();
    // Set instance field: private TextFadeTransitions _textFadeTransitions
    void _set__textFadeTransitions(GlobalNamespace::TextFadeTransitions* value);
    // public System.Void Init(TextFadeTransitions textFadeTransitions)
    // Offset: 0x1053A54
    void Init(GlobalNamespace::TextFadeTransitions* textFadeTransitions);
    // public System.Void Deinit()
    // Offset: 0x1053B50
    void Deinit();
    // private System.Void HandleGameEvent()
    // Offset: 0x1053BE4
    void HandleGameEvent();
    // public System.Void .ctor()
    // Offset: 0x1053C20
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShowTextOnGameEventController::EventTextBinding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShowTextOnGameEventController::EventTextBinding*, creationType>()));
    }
  }; // ShowTextOnGameEventController/EventTextBinding
  #pragma pack(pop)
  static check_size<sizeof(ShowTextOnGameEventController::EventTextBinding), 32 + sizeof(GlobalNamespace::TextFadeTransitions*)> __GlobalNamespace_ShowTextOnGameEventController_EventTextBindingSizeCheck;
  static_assert(sizeof(ShowTextOnGameEventController::EventTextBinding) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShowTextOnGameEventController::EventTextBinding*, "", "ShowTextOnGameEventController/EventTextBinding");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::*)(GlobalNamespace::TextFadeTransitions*)>(&GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::Init)> {
  static const MethodInfo* get() {
    static auto* textFadeTransitions = &::il2cpp_utils::GetClassFromName("", "TextFadeTransitions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowTextOnGameEventController::EventTextBinding*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textFadeTransitions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::Deinit
// Il2CppName: Deinit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::*)()>(&GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::Deinit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowTextOnGameEventController::EventTextBinding*), "Deinit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::HandleGameEvent
// Il2CppName: HandleGameEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::*)()>(&GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::HandleGameEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowTextOnGameEventController::EventTextBinding*), "HandleGameEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowTextOnGameEventController::EventTextBinding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
