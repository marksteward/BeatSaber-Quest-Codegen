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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IScoreController
  class IScoreController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x35
  #pragma pack(push, 1)
  // Autogenerated type: ComboUIController
  // [TokenAttribute] Offset: FFFFFFFF
  class ComboUIController : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _comboText
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* comboText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // [InjectAttribute] Offset: 0xE05D30
    // private readonly IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    // private System.Int32 _comboLostID
    // Size: 0x4
    // Offset: 0x30
    int comboLostID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _comboLost
    // Size: 0x1
    // Offset: 0x34
    bool comboLost;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ComboUIController
    ComboUIController(TMPro::TextMeshProUGUI* comboText_ = {}, UnityEngine::Animator* animator_ = {}, GlobalNamespace::IScoreController* scoreController_ = {}, int comboLostID_ = {}, bool comboLost_ = {}) noexcept : comboText{comboText_}, animator{animator_}, scoreController{scoreController_}, comboLostID{comboLostID_}, comboLost{comboLost_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x108085C
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x1080BA8
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1080BAC
    void OnDisable();
    // private System.Void RegisterForEvents()
    // Offset: 0x10808D8
    void RegisterForEvents();
    // private System.Void UnregisterFromEvents()
    // Offset: 0x1080BB0
    void UnregisterFromEvents();
    // private System.Void HandleComboDidChange(System.Int32 combo)
    // Offset: 0x1080D50
    void HandleComboDidChange(int combo);
    // private System.Void HandleComboBreakingEventHappened()
    // Offset: 0x1080D94
    void HandleComboBreakingEventHappened();
    // public System.Void .ctor()
    // Offset: 0x1080DCC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComboUIController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ComboUIController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComboUIController*, creationType>()));
    }
  }; // ComboUIController
  #pragma pack(pop)
  static check_size<sizeof(ComboUIController), 52 + sizeof(bool)> __GlobalNamespace_ComboUIControllerSizeCheck;
  static_assert(sizeof(ComboUIController) == 0x35);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ComboUIController*, "", "ComboUIController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ComboUIController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboUIController::*)()>(&GlobalNamespace::ComboUIController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboUIController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboUIController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboUIController::*)()>(&GlobalNamespace::ComboUIController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboUIController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboUIController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboUIController::*)()>(&GlobalNamespace::ComboUIController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboUIController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboUIController::RegisterForEvents
// Il2CppName: RegisterForEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboUIController::*)()>(&GlobalNamespace::ComboUIController::RegisterForEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboUIController*), "RegisterForEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboUIController::UnregisterFromEvents
// Il2CppName: UnregisterFromEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboUIController::*)()>(&GlobalNamespace::ComboUIController::UnregisterFromEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboUIController*), "UnregisterFromEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboUIController::HandleComboDidChange
// Il2CppName: HandleComboDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboUIController::*)(int)>(&GlobalNamespace::ComboUIController::HandleComboDidChange)> {
  static const MethodInfo* get() {
    static auto* combo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboUIController*), "HandleComboDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{combo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboUIController::HandleComboBreakingEventHappened
// Il2CppName: HandleComboBreakingEventHappened
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboUIController::*)()>(&GlobalNamespace::ComboUIController::HandleComboBreakingEventHappened)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboUIController*), "HandleComboBreakingEventHappened", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboUIController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
