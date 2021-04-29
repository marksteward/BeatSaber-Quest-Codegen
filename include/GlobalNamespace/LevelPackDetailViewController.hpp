// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LoadingControl
  class LoadingControl;
  // Forward declaring type: KawaseBlurRendererSO
  class KawaseBlurRendererSO;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: DlcPromoExperimentModel
  class DlcPromoExperimentModel;
  // Forward declaring type: EventBinder
  class EventBinder;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD8
  #pragma pack(push, 1)
  // Autogenerated type: LevelPackDetailViewController
  class LevelPackDetailViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::LevelPackDetailViewController::ContentType
    struct ContentType;
    // Nested type: GlobalNamespace::LevelPackDetailViewController::$$c__DisplayClass15_0
    class $$c__DisplayClass15_0;
    // Nested type: GlobalNamespace::LevelPackDetailViewController::$RefreshAvailabilityAsync$d__18
    struct $RefreshAvailabilityAsync$d__18;
    // Nested type: GlobalNamespace::LevelPackDetailViewController::$OpenLevelPackProductStoreAsync$d__20
    struct $OpenLevelPackProductStoreAsync$d__20;
    // private UnityEngine.GameObject _detailWrapper
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::GameObject* detailWrapper;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private HMUI.ImageView _packImage
    // Size: 0x8
    // Offset: 0x78
    HMUI::ImageView* packImage;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private UnityEngine.UI.Button _buyButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* buyButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.GameObject _buyContainer
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::GameObject* buyContainer;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private LoadingControl _loadingControl
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::LoadingControl* loadingControl;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LoadingControl*) == 0x8);
    // private UnityEngine.GameObject _requireInternetContainer
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::GameObject* requireInternetContainer;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [SpaceAttribute] Offset: 0xD4440C
    // private KawaseBlurRendererSO _kawaseBlurRenderer
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::KawaseBlurRendererSO*) == 0x8);
    // [InjectAttribute] Offset: 0xD44444
    // private AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel*) == 0x8);
    // [InjectAttribute] Offset: 0xD44454
    // private DlcPromoExperimentModel _dlcPromoExperimentModel
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::DlcPromoExperimentModel* dlcPromoExperimentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DlcPromoExperimentModel*) == 0x8);
    // private EventBinder _eventBinder
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::EventBinder* eventBinder;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EventBinder*) == 0x8);
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0xC0
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // private IBeatmapLevelPack _pack
    // Size: 0x8
    // Offset: 0xC8
    GlobalNamespace::IBeatmapLevelPack* pack;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelPack*) == 0x8);
    // private UnityEngine.Sprite _blurredPackArtwork
    // Size: 0x8
    // Offset: 0xD0
    UnityEngine::Sprite* blurredPackArtwork;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // Creating value type constructor for type: LevelPackDetailViewController
    LevelPackDetailViewController(UnityEngine::GameObject* detailWrapper_ = {}, HMUI::ImageView* packImage_ = {}, UnityEngine::UI::Button* buyButton_ = {}, UnityEngine::GameObject* buyContainer_ = {}, GlobalNamespace::LoadingControl* loadingControl_ = {}, UnityEngine::GameObject* requireInternetContainer_ = {}, GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer_ = {}, GlobalNamespace::AdditionalContentModel* additionalContentModel_ = {}, GlobalNamespace::DlcPromoExperimentModel* dlcPromoExperimentModel_ = {}, GlobalNamespace::EventBinder* eventBinder_ = {}, System::Threading::CancellationTokenSource* cancellationTokenSource_ = {}, GlobalNamespace::IBeatmapLevelPack* pack_ = {}, UnityEngine::Sprite* blurredPackArtwork_ = {}) noexcept : detailWrapper{detailWrapper_}, packImage{packImage_}, buyButton{buyButton_}, buyContainer{buyContainer_}, loadingControl{loadingControl_}, requireInternetContainer{requireInternetContainer_}, kawaseBlurRenderer{kawaseBlurRenderer_}, additionalContentModel{additionalContentModel_}, dlcPromoExperimentModel{dlcPromoExperimentModel_}, eventBinder{eventBinder_}, cancellationTokenSource{cancellationTokenSource_}, pack{pack_}, blurredPackArtwork{blurredPackArtwork_} {}
    // public System.Void SetData(IBeatmapLevelPack pack)
    // Offset: 0x111DEEC
    void SetData(GlobalNamespace::IBeatmapLevelPack* pack);
    // private System.Void RefreshAvailabilityAsync()
    // Offset: 0x112608C
    void RefreshAvailabilityAsync();
    // private System.Void BuyPackButtonWasPressed()
    // Offset: 0x11264AC
    void BuyPackButtonWasPressed();
    // private System.Void OpenLevelPackProductStoreAsync()
    // Offset: 0x11265B0
    void OpenLevelPackProductStoreAsync();
    // private System.Void ShowContent(LevelPackDetailViewController/ContentType contentType, System.String errorText)
    // Offset: 0x1126670
    void ShowContent(GlobalNamespace::LevelPackDetailViewController::ContentType contentType, ::Il2CppString* errorText);
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0x1126928
    void HandleAdditionalContentModelDidInvalidateData();
    // private System.Void <DidActivate>b__15_0()
    // Offset: 0x1126994
    void $DidActivate$b__15_0();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x112614C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x11262F4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x11263A0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x112692C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelPackDetailViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelPackDetailViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelPackDetailViewController*, creationType>()));
    }
  }; // LevelPackDetailViewController
  #pragma pack(pop)
  static check_size<sizeof(LevelPackDetailViewController), 208 + sizeof(UnityEngine::Sprite*)> __GlobalNamespace_LevelPackDetailViewControllerSizeCheck;
  static_assert(sizeof(LevelPackDetailViewController) == 0xD8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelPackDetailViewController*, "", "LevelPackDetailViewController");
