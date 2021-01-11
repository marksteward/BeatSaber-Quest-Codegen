// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ResultObjectiveListItemsList
  class ResultObjectiveListItemsList;
  // Forward declaring type: FireworksController
  class FireworksController;
  // Forward declaring type: SongPreviewPlayer
  class SongPreviewPlayer;
  // Forward declaring type: MissionNode
  class MissionNode;
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x128
  #pragma pack(push, 1)
  // Autogenerated type: MissionResultsViewController
  // [] Offset: FFFFFFFF
  class MissionResultsViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::MissionResultsViewController::$StartFireworksAfterDelay$d__28
    class $StartFireworksAfterDelay$d__28;
    // Nested type: GlobalNamespace::MissionResultsViewController::$$c__DisplayClass29_0
    class $$c__DisplayClass29_0;
    // private UnityEngine.GameObject _failedBannerGo
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::GameObject* failedBannerGo;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _clearedBannerGo
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::GameObject* clearedBannerGo;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private TMPro.TextMeshProUGUI _missionNameText
    // Size: 0x8
    // Offset: 0x80
    TMPro::TextMeshProUGUI* missionNameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _songNameText
    // Size: 0x8
    // Offset: 0x88
    TMPro::TextMeshProUGUI* songNameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.Sprite _successIcon
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::Sprite* successIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _successIconGlow
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::Sprite* successIconGlow;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Color _successColor
    // Size: 0x10
    // Offset: 0xA0
    UnityEngine::Color successColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Sprite _failIcon
    // Size: 0x8
    // Offset: 0xB0
    UnityEngine::Sprite* failIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _failIconGlow
    // Size: 0x8
    // Offset: 0xB8
    UnityEngine::Sprite* failIconGlow;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Color _failColor
    // Size: 0x10
    // Offset: 0xC0
    UnityEngine::Color failColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private ResultObjectiveListItemsList _resultObjectiveListItemList
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::ResultObjectiveListItemsList* resultObjectiveListItemList;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultObjectiveListItemsList*) == 0x8);
    // private UnityEngine.UI.Button _continueButton
    // Size: 0x8
    // Offset: 0xD8
    UnityEngine::UI::Button* continueButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _retryButton
    // Size: 0x8
    // Offset: 0xE0
    UnityEngine::UI::Button* retryButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [SpaceAttribute] Offset: 0xDD0528
    // private UnityEngine.AudioClip _levelClearedAudioClip
    // Size: 0x8
    // Offset: 0xE8
    UnityEngine::AudioClip* levelClearedAudioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // [InjectAttribute] Offset: 0xDD0560
    // private readonly FireworksController _fireworksController
    // Size: 0x8
    // Offset: 0xF0
    GlobalNamespace::FireworksController* fireworksController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FireworksController*) == 0x8);
    // [InjectAttribute] Offset: 0xDD0570
    // private readonly SongPreviewPlayer _songPreviewPlayer
    // Size: 0x8
    // Offset: 0xF8
    GlobalNamespace::SongPreviewPlayer* songPreviewPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPreviewPlayer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD0580
    // private System.Action`1<MissionResultsViewController> continueButtonPressedEvent
    // Size: 0x8
    // Offset: 0x100
    System::Action_1<GlobalNamespace::MissionResultsViewController*>* continueButtonPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MissionResultsViewController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD0590
    // private System.Action`1<MissionResultsViewController> retryButtonPressedEvent
    // Size: 0x8
    // Offset: 0x108
    System::Action_1<GlobalNamespace::MissionResultsViewController*>* retryButtonPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MissionResultsViewController*>*) == 0x8);
    // private MissionNode _missionNode
    // Size: 0x8
    // Offset: 0x110
    GlobalNamespace::MissionNode* missionNode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNode*) == 0x8);
    // private MissionCompletionResults _missionCompletionResults
    // Size: 0x8
    // Offset: 0x118
    GlobalNamespace::MissionCompletionResults* missionCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionCompletionResults*) == 0x8);
    // private UnityEngine.Coroutine _startFireworksAfterDelayCoroutine
    // Size: 0x8
    // Offset: 0x120
    UnityEngine::Coroutine* startFireworksAfterDelayCoroutine;
    // Field size check
    static_assert(sizeof(UnityEngine::Coroutine*) == 0x8);
    // Creating value type constructor for type: MissionResultsViewController
    MissionResultsViewController(UnityEngine::GameObject* failedBannerGo_ = {}, UnityEngine::GameObject* clearedBannerGo_ = {}, TMPro::TextMeshProUGUI* missionNameText_ = {}, TMPro::TextMeshProUGUI* songNameText_ = {}, UnityEngine::Sprite* successIcon_ = {}, UnityEngine::Sprite* successIconGlow_ = {}, UnityEngine::Color successColor_ = {}, UnityEngine::Sprite* failIcon_ = {}, UnityEngine::Sprite* failIconGlow_ = {}, UnityEngine::Color failColor_ = {}, GlobalNamespace::ResultObjectiveListItemsList* resultObjectiveListItemList_ = {}, UnityEngine::UI::Button* continueButton_ = {}, UnityEngine::UI::Button* retryButton_ = {}, UnityEngine::AudioClip* levelClearedAudioClip_ = {}, GlobalNamespace::FireworksController* fireworksController_ = {}, GlobalNamespace::SongPreviewPlayer* songPreviewPlayer_ = {}, System::Action_1<GlobalNamespace::MissionResultsViewController*>* continueButtonPressedEvent_ = {}, System::Action_1<GlobalNamespace::MissionResultsViewController*>* retryButtonPressedEvent_ = {}, GlobalNamespace::MissionNode* missionNode_ = {}, GlobalNamespace::MissionCompletionResults* missionCompletionResults_ = {}, UnityEngine::Coroutine* startFireworksAfterDelayCoroutine_ = {}) noexcept : failedBannerGo{failedBannerGo_}, clearedBannerGo{clearedBannerGo_}, missionNameText{missionNameText_}, songNameText{songNameText_}, successIcon{successIcon_}, successIconGlow{successIconGlow_}, successColor{successColor_}, failIcon{failIcon_}, failIconGlow{failIconGlow_}, failColor{failColor_}, resultObjectiveListItemList{resultObjectiveListItemList_}, continueButton{continueButton_}, retryButton{retryButton_}, levelClearedAudioClip{levelClearedAudioClip_}, fireworksController{fireworksController_}, songPreviewPlayer{songPreviewPlayer_}, continueButtonPressedEvent{continueButtonPressedEvent_}, retryButtonPressedEvent{retryButtonPressedEvent_}, missionNode{missionNode_}, missionCompletionResults{missionCompletionResults_}, startFireworksAfterDelayCoroutine{startFireworksAfterDelayCoroutine_} {}
    // public System.Void add_continueButtonPressedEvent(System.Action`1<MissionResultsViewController> value)
    // Offset: 0x101FDB0
    void add_continueButtonPressedEvent(System::Action_1<GlobalNamespace::MissionResultsViewController*>* value);
    // public System.Void remove_continueButtonPressedEvent(System.Action`1<MissionResultsViewController> value)
    // Offset: 0x101FE58
    void remove_continueButtonPressedEvent(System::Action_1<GlobalNamespace::MissionResultsViewController*>* value);
    // public System.Void add_retryButtonPressedEvent(System.Action`1<MissionResultsViewController> value)
    // Offset: 0x101FF00
    void add_retryButtonPressedEvent(System::Action_1<GlobalNamespace::MissionResultsViewController*>* value);
    // public System.Void remove_retryButtonPressedEvent(System.Action`1<MissionResultsViewController> value)
    // Offset: 0x101FFA8
    void remove_retryButtonPressedEvent(System::Action_1<GlobalNamespace::MissionResultsViewController*>* value);
    // public System.Void Init(MissionNode missionNode, MissionCompletionResults missionCompletionResults)
    // Offset: 0x1020050
    void Init(GlobalNamespace::MissionNode* missionNode, GlobalNamespace::MissionCompletionResults* missionCompletionResults);
    // private System.Collections.IEnumerator StartFireworksAfterDelay(System.Single delay)
    // Offset: 0x1020470
    System::Collections::IEnumerator* StartFireworksAfterDelay(float delay);
    // private System.Void SetDataToUI()
    // Offset: 0x102020C
    void SetDataToUI();
    // private System.Void ContinueButtonPressed()
    // Offset: 0x1020588
    void ContinueButtonPressed();
    // private System.Void RetryButtonPressed()
    // Offset: 0x10205EC
    void RetryButtonPressed();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1020088
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x10204FC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x1020650
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionResultsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionResultsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionResultsViewController*, creationType>()));
    }
  }; // MissionResultsViewController
  static check_size<sizeof(MissionResultsViewController), 288 + sizeof(UnityEngine::Coroutine*)> __GlobalNamespace_MissionResultsViewControllerSizeCheck;
  static_assert(sizeof(MissionResultsViewController) == 0x128);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionResultsViewController*, "", "MissionResultsViewController");
