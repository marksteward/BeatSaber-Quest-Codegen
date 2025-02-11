// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
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
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: ScoreMultiplierUIController
  // [TokenAttribute] Offset: FFFFFFFF
  class ScoreMultiplierUIController : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI[] _multiplierTexts
    // Size: 0x8
    // Offset: 0x18
    ::Array<TMPro::TextMeshProUGUI*>* multiplierTexts;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TextMeshProUGUI*>*) == 0x8);
    // private UnityEngine.UI.Image _multiplierProgressImage
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Image* multiplierProgressImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.Animator _multiplierAnimator
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Animator* multiplierAnimator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // [InjectAttribute] Offset: 0xEB2D94
    // private IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    // private System.Int32 _prevMultiplier
    // Size: 0x4
    // Offset: 0x38
    int prevMultiplier;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _multiplierIncreasedTriggerId
    // Size: 0x4
    // Offset: 0x3C
    int multiplierIncreasedTriggerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _progressTarget
    // Size: 0x4
    // Offset: 0x40
    float progressTarget;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: ScoreMultiplierUIController
    ScoreMultiplierUIController(::Array<TMPro::TextMeshProUGUI*>* multiplierTexts_ = {}, UnityEngine::UI::Image* multiplierProgressImage_ = {}, UnityEngine::Animator* multiplierAnimator_ = {}, GlobalNamespace::IScoreController* scoreController_ = {}, int prevMultiplier_ = {}, int multiplierIncreasedTriggerId_ = {}, float progressTarget_ = {}) noexcept : multiplierTexts{multiplierTexts_}, multiplierProgressImage{multiplierProgressImage_}, multiplierAnimator{multiplierAnimator_}, scoreController{scoreController_}, prevMultiplier{prevMultiplier_}, multiplierIncreasedTriggerId{multiplierIncreasedTriggerId_}, progressTarget{progressTarget_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private TMPro.TextMeshProUGUI[] _multiplierTexts
    ::Array<TMPro::TextMeshProUGUI*>* _get__multiplierTexts();
    // Set instance field: private TMPro.TextMeshProUGUI[] _multiplierTexts
    void _set__multiplierTexts(::Array<TMPro::TextMeshProUGUI*>* value);
    // Get instance field: private UnityEngine.UI.Image _multiplierProgressImage
    UnityEngine::UI::Image* _get__multiplierProgressImage();
    // Set instance field: private UnityEngine.UI.Image _multiplierProgressImage
    void _set__multiplierProgressImage(UnityEngine::UI::Image* value);
    // Get instance field: private UnityEngine.Animator _multiplierAnimator
    UnityEngine::Animator* _get__multiplierAnimator();
    // Set instance field: private UnityEngine.Animator _multiplierAnimator
    void _set__multiplierAnimator(UnityEngine::Animator* value);
    // Get instance field: private IScoreController _scoreController
    GlobalNamespace::IScoreController* _get__scoreController();
    // Set instance field: private IScoreController _scoreController
    void _set__scoreController(GlobalNamespace::IScoreController* value);
    // Get instance field: private System.Int32 _prevMultiplier
    int _get__prevMultiplier();
    // Set instance field: private System.Int32 _prevMultiplier
    void _set__prevMultiplier(int value);
    // Get instance field: private System.Int32 _multiplierIncreasedTriggerId
    int _get__multiplierIncreasedTriggerId();
    // Set instance field: private System.Int32 _multiplierIncreasedTriggerId
    void _set__multiplierIncreasedTriggerId(int value);
    // Get instance field: private System.Single _progressTarget
    float _get__progressTarget();
    // Set instance field: private System.Single _progressTarget
    void _set__progressTarget(float value);
    // protected System.Void Start()
    // Offset: 0x1F83AC0
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x1F83D48
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1F83D4C
    void OnDisable();
    // private System.Void RegisterForEvents()
    // Offset: 0x1F83BA0
    void RegisterForEvents();
    // private System.Void UnregisterFromEvents()
    // Offset: 0x1F83D50
    void UnregisterFromEvents();
    // protected System.Void Update()
    // Offset: 0x1F83E50
    void Update();
    // private System.Void HandleMultiplierDidChange(System.Int32 multiplier, System.Single progress)
    // Offset: 0x1F83F5C
    void HandleMultiplierDidChange(int multiplier, float progress);
    // public System.Void .ctor()
    // Offset: 0x1F8403C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreMultiplierUIController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScoreMultiplierUIController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreMultiplierUIController*, creationType>()));
    }
  }; // ScoreMultiplierUIController
  #pragma pack(pop)
  static check_size<sizeof(ScoreMultiplierUIController), 64 + sizeof(float)> __GlobalNamespace_ScoreMultiplierUIControllerSizeCheck;
  static_assert(sizeof(ScoreMultiplierUIController) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreMultiplierUIController*, "", "ScoreMultiplierUIController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMultiplierUIController::*)()>(&GlobalNamespace::ScoreMultiplierUIController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierUIController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMultiplierUIController::*)()>(&GlobalNamespace::ScoreMultiplierUIController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierUIController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMultiplierUIController::*)()>(&GlobalNamespace::ScoreMultiplierUIController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierUIController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::RegisterForEvents
// Il2CppName: RegisterForEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMultiplierUIController::*)()>(&GlobalNamespace::ScoreMultiplierUIController::RegisterForEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierUIController*), "RegisterForEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::UnregisterFromEvents
// Il2CppName: UnregisterFromEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMultiplierUIController::*)()>(&GlobalNamespace::ScoreMultiplierUIController::UnregisterFromEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierUIController*), "UnregisterFromEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMultiplierUIController::*)()>(&GlobalNamespace::ScoreMultiplierUIController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierUIController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::HandleMultiplierDidChange
// Il2CppName: HandleMultiplierDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMultiplierUIController::*)(int, float)>(&GlobalNamespace::ScoreMultiplierUIController::HandleMultiplierDidChange)> {
  static const MethodInfo* get() {
    static auto* multiplier = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* progress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierUIController*), "HandleMultiplierDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplier, progress});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
