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
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x62
  #pragma pack(push, 1)
  // Autogenerated type: WaypointsTestMenuViewController
  class WaypointsTestMenuViewController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13
    class $CheckBeatmaps$d__13;
    // private UnityEngine.UI.Button _btsButton
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Button* btsButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _cancelButton
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Button* cancelButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private TMPro.TextMeshProUGUI _progressText
    // Size: 0x8
    // Offset: 0x28
    TMPro::TextMeshProUGUI* progressText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [SpaceAttribute] Offset: 0xE13834
    // private StandardLevelScenesTransitionSetupDataSO _waypointsTestScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* waypointsTestScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // private System.Collections.Generic.List`1<BeatmapLevelSO> _levels
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelSO*>* levels;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelSO*>*) == 0x8);
    // private System.Collections.Generic.List`1<BeatmapCharacteristicSO> _characteristics
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO*>* characteristics;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // [InjectAttribute] Offset: 0xE1388C
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE1389C
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x58
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private System.Boolean _isCancelled
    // Size: 0x1
    // Offset: 0x60
    bool isCancelled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _waitingForLevelFinish
    // Size: 0x1
    // Offset: 0x61
    bool waitingForLevelFinish;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: WaypointsTestMenuViewController
    WaypointsTestMenuViewController(UnityEngine::UI::Button* btsButton_ = {}, UnityEngine::UI::Button* cancelButton_ = {}, TMPro::TextMeshProUGUI* progressText_ = {}, GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* waypointsTestScenesTransitionSetupData_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelSO*>* levels_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO*>* characteristics_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, bool isCancelled_ = {}, bool waitingForLevelFinish_ = {}) noexcept : btsButton{btsButton_}, cancelButton{cancelButton_}, progressText{progressText_}, waypointsTestScenesTransitionSetupData{waypointsTestScenesTransitionSetupData_}, levels{levels_}, characteristics{characteristics_}, gameScenesManager{gameScenesManager_}, playerDataModel{playerDataModel_}, buttonBinder{buttonBinder_}, isCancelled{isCancelled_}, waitingForLevelFinish{waitingForLevelFinish_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Start()
    // Offset: 0x1DB2788
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x1DB28AC
    void OnDestroy();
    // private System.Collections.IEnumerator CheckBeatmaps(System.Collections.Generic.List`1<BeatmapLevelSO> levels)
    // Offset: 0x1DB2998
    System::Collections::IEnumerator* CheckBeatmaps(System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelSO*>* levels);
    // private System.Void HandleMainGameSceneDidFinish(StandardLevelScenesTransitionSetupDataSO data, LevelCompletionResults results)
    // Offset: 0x1DB2A40
    void HandleMainGameSceneDidFinish(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* data, GlobalNamespace::LevelCompletionResults* results);
    // private System.Void <Start>b__11_0()
    // Offset: 0x1DB2AE4
    void $Start$b__11_0();
    // private System.Void <Start>b__11_1()
    // Offset: 0x1DB2B78
    void $Start$b__11_1();
    // private System.Void <HandleMainGameSceneDidFinish>b__14_0(Zenject.DiContainer container)
    // Offset: 0x1DB2BC8
    void $HandleMainGameSceneDidFinish$b__14_0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x1DB2ADC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaypointsTestMenuViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::WaypointsTestMenuViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaypointsTestMenuViewController*, creationType>()));
    }
  }; // WaypointsTestMenuViewController
  #pragma pack(pop)
  static check_size<sizeof(WaypointsTestMenuViewController), 97 + sizeof(bool)> __GlobalNamespace_WaypointsTestMenuViewControllerSizeCheck;
  static_assert(sizeof(WaypointsTestMenuViewController) == 0x62);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::WaypointsTestMenuViewController*, "", "WaypointsTestMenuViewController");
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::OnDestroy
// Il2CppName: OnDestroy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::CheckBeatmaps
// Il2CppName: CheckBeatmaps
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::HandleMainGameSceneDidFinish
// Il2CppName: HandleMainGameSceneDidFinish
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::$Start$b__11_0
// Il2CppName: <Start>b__11_0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::$Start$b__11_1
// Il2CppName: <Start>b__11_1
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::$HandleMainGameSceneDidFinish$b__14_0
// Il2CppName: <HandleMainGameSceneDidFinish>b__14_0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
