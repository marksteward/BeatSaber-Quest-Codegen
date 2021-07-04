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
    // [InjectAttribute] Offset: 0xE1BC8C
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
    // protected System.Void Start()
    // Offset: 0x10D7FEC
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x10D8274
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x10D8278
    void OnDisable();
    // private System.Void RegisterForEvents()
    // Offset: 0x10D80CC
    void RegisterForEvents();
    // private System.Void UnregisterFromEvents()
    // Offset: 0x10D827C
    void UnregisterFromEvents();
    // protected System.Void Update()
    // Offset: 0x10D837C
    void Update();
    // private System.Void HandleMultiplierDidChange(System.Int32 multiplier, System.Single progress)
    // Offset: 0x10D8488
    void HandleMultiplierDidChange(int multiplier, float progress);
    // public System.Void .ctor()
    // Offset: 0x10D8568
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
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::OnEnable
// Il2CppName: OnEnable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::OnDisable
// Il2CppName: OnDisable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::RegisterForEvents
// Il2CppName: RegisterForEvents
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::UnregisterFromEvents
// Il2CppName: UnregisterFromEvents
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::Update
// Il2CppName: Update
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::HandleMultiplierDidChange
// Il2CppName: HandleMultiplierDidChange
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierUIController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
