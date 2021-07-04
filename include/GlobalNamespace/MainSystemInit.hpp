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
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: AudioManagerSO
  class AudioManagerSO;
  // Forward declaring type: PerceivedLoudnessPerLevelSO
  class PerceivedLoudnessPerLevelSO;
  // Forward declaring type: AvatarDataModel
  class AvatarDataModel;
  // Forward declaring type: AvatarPartsModelSO
  class AvatarPartsModelSO;
  // Forward declaring type: SkinColorSetSO
  class SkinColorSetSO;
  // Forward declaring type: MirrorRendererGraphicsSettingsPresets
  class MirrorRendererGraphicsSettingsPresets;
  // Forward declaring type: MainEffectGraphicsSettingsPresetsSO
  class MainEffectGraphicsSettingsPresetsSO;
  // Forward declaring type: BloomPrePassGraphicsSettingsPresetsSO
  class BloomPrePassGraphicsSettingsPresetsSO;
  // Forward declaring type: MirrorRendererSO
  class MirrorRendererSO;
  // Forward declaring type: MainEffectContainerSO
  class MainEffectContainerSO;
  // Forward declaring type: BloomPrePassEffectContainerSO
  class BloomPrePassEffectContainerSO;
  // Forward declaring type: SongPackMaskModelSO
  class SongPackMaskModelSO;
  // Forward declaring type: MultiplayerMockSettings
  class MultiplayerMockSettings;
  // Forward declaring type: AppStaticSettingsSO
  class AppStaticSettingsSO;
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MultiplayerLevelScenesTransitionSetupDataSO
  class MultiplayerLevelScenesTransitionSetupDataSO;
  // Forward declaring type: TimeHelper
  class TimeHelper;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: CampaignProgressModel
  class CampaignProgressModel;
  // Forward declaring type: BeatmapLevelsModel
  class BeatmapLevelsModel;
  // Forward declaring type: CustomLevelLoader
  class CustomLevelLoader;
  // Forward declaring type: CachedMediaAsyncLoader
  class CachedMediaAsyncLoader;
  // Forward declaring type: ExternalCamerasManager
  class ExternalCamerasManager;
  // Forward declaring type: MultiplayerSessionManager
  class MultiplayerSessionManager;
  // Forward declaring type: LocalNetworkPlayerModel
  class LocalNetworkPlayerModel;
  // Forward declaring type: UnifiedNetworkPlayerModel
  class UnifiedNetworkPlayerModel;
  // Forward declaring type: NetworkPlayerEntitlementChecker
  class NetworkPlayerEntitlementChecker;
  // Forward declaring type: HapticFeedbackController
  class HapticFeedbackController;
  // Forward declaring type: BloomPrePassLightsUpdateSystem
  class BloomPrePassLightsUpdateSystem;
  // Forward declaring type: NodePoseSyncStateManager
  class NodePoseSyncStateManager;
  // Forward declaring type: AlwaysOwnedContentContainerSO
  class AlwaysOwnedContentContainerSO;
  // Forward declaring type: PSVRHelper
  class PSVRHelper;
  // Forward declaring type: OculusVRHelper
  class OculusVRHelper;
  // Forward declaring type: OpenVRHelper
  class OpenVRHelper;
  // Forward declaring type: DevicelessVRHelper
  class DevicelessVRHelper;
  // Forward declaring type: TestPlatformAdditionalContentModel
  class TestPlatformAdditionalContentModel;
  // Forward declaring type: PS4PlatformAdditionalContentModel
  class PS4PlatformAdditionalContentModel;
  // Forward declaring type: OculusPlatformAdditionalContentModel
  class OculusPlatformAdditionalContentModel;
  // Forward declaring type: SteamPlatformAdditionalContentModel
  class SteamPlatformAdditionalContentModel;
  // Forward declaring type: SteamLevelProductsModelSO
  class SteamLevelProductsModelSO;
  // Forward declaring type: OculusLevelProductsModelSO
  class OculusLevelProductsModelSO;
  // Forward declaring type: PS4LevelProductsModelSO
  class PS4LevelProductsModelSO;
  // Forward declaring type: PS4LeaderboardIdsModelSO
  class PS4LeaderboardIdsModelSO;
  // Forward declaring type: RichPresenceManager
  class RichPresenceManager;
  // Forward declaring type: DlcPromoExperimentDataSO
  class DlcPromoExperimentDataSO;
  // Forward declaring type: NetworkConfigSO
  class NetworkConfigSO;
  // Forward declaring type: MockMultiplayerSessionManager
  class MockMultiplayerSessionManager;
  // Forward declaring type: SteamNetworkPlayerModel
  class SteamNetworkPlayerModel;
  // Forward declaring type: OculusNetworkPlayerModel
  class OculusNetworkPlayerModel;
  // Forward declaring type: PS4NetworkPlayerModel
  class PS4NetworkPlayerModel;
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: LeaderboardScoreUploader
  class LeaderboardScoreUploader;
  // Forward declaring type: PlatformLeaderboardsModel
  class PlatformLeaderboardsModel;
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: MockPlayersModel
  class MockPlayersModel;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
}
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: ServerManager
  class ServerManager;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1F0
  #pragma pack(push, 1)
  // Autogenerated type: MainSystemInit
  class MainSystemInit : public UnityEngine::MonoBehaviour {
    public:
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // private AudioManagerSO _audioManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AudioManagerSO* audioManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioManagerSO*) == 0x8);
    // private PerceivedLoudnessPerLevelSO _perceivedLoudnessPerLevel
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PerceivedLoudnessPerLevelSO* perceivedLoudnessPerLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PerceivedLoudnessPerLevelSO*) == 0x8);
    // private AvatarDataModel _avatarDataModel
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::AvatarDataModel* avatarDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarDataModel*) == 0x8);
    // private AvatarPartsModelSO _avatarPartsModel
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::AvatarPartsModelSO* avatarPartsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartsModelSO*) == 0x8);
    // private SkinColorSetSO _skinColorSet
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::SkinColorSetSO* skinColorSet;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SkinColorSetSO*) == 0x8);
    // private MirrorRendererGraphicsSettingsPresets _mirrorRendererGraphicsSettingsPresets
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::MirrorRendererGraphicsSettingsPresets* mirrorRendererGraphicsSettingsPresets;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MirrorRendererGraphicsSettingsPresets*) == 0x8);
    // private MainEffectGraphicsSettingsPresetsSO _mainEffectGraphicsSettingsPresets
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* mainEffectGraphicsSettingsPresets;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainEffectGraphicsSettingsPresetsSO*) == 0x8);
    // private BloomPrePassGraphicsSettingsPresetsSO _bloomPrePassGraphicsSettingsPresets
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO* bloomPrePassGraphicsSettingsPresets;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO*) == 0x8);
    // private MirrorRendererSO _mirrorRenderer
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::MirrorRendererSO* mirrorRenderer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MirrorRendererSO*) == 0x8);
    // private MainEffectContainerSO _mainEffectContainer
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::MainEffectContainerSO* mainEffectContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainEffectContainerSO*) == 0x8);
    // private BloomPrePassEffectContainerSO _bloomPrePassEffectContainer
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::BloomPrePassEffectContainerSO* bloomPrePassEffectContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassEffectContainerSO*) == 0x8);
    // private SongPackMaskModelSO _songPackMaskModel
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::SongPackMaskModelSO* songPackMaskModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMaskModelSO*) == 0x8);
    // private MultiplayerMockSettings _multiplayerMockSettings
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::MultiplayerMockSettings* multiplayerMockSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerMockSettings*) == 0x8);
    // [SpaceAttribute] Offset: 0xE14510
    // private AppStaticSettingsSO _appStaticSettings
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::AppStaticSettingsSO* appStaticSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppStaticSettingsSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE14548
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // private MissionLevelScenesTransitionSetupDataSO _missionLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*) == 0x8);
    // private MultiplayerLevelScenesTransitionSetupDataSO _multiplayerLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE145A0
    // private TimeHelper _timeHelperPrefab
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::TimeHelper* timeHelperPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TimeHelper*) == 0x8);
    // private PlayerDataModel _playerDataModelPrefab
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::PlayerDataModel* playerDataModelPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // private CampaignProgressModel _campaignProgressModelPrefab
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::CampaignProgressModel* campaignProgressModelPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CampaignProgressModel*) == 0x8);
    // private BeatmapLevelsModel _beatmapLevelsModelPrefab
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModelPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelsModel*) == 0x8);
    // private CustomLevelLoader _customLevelLoaderPrefab
    // Size: 0x8
    // Offset: 0xC8
    GlobalNamespace::CustomLevelLoader* customLevelLoaderPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CustomLevelLoader*) == 0x8);
    // private CachedMediaAsyncLoader _cachedMediaAsyncLoaderPrefab
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::CachedMediaAsyncLoader* cachedMediaAsyncLoaderPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CachedMediaAsyncLoader*) == 0x8);
    // private ExternalCamerasManager _externalCamerasManagerPrefab
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::ExternalCamerasManager* externalCamerasManagerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ExternalCamerasManager*) == 0x8);
    // private MultiplayerSessionManager _multiplayerSessionManagerPrefab
    // Size: 0x8
    // Offset: 0xE0
    GlobalNamespace::MultiplayerSessionManager* multiplayerSessionManagerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerSessionManager*) == 0x8);
    // private LocalNetworkPlayerModel _localNetworkPlayerModelPrefab
    // Size: 0x8
    // Offset: 0xE8
    GlobalNamespace::LocalNetworkPlayerModel* localNetworkPlayerModelPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalNetworkPlayerModel*) == 0x8);
    // private UnifiedNetworkPlayerModel _unifiedNetworkModelPrefab
    // Size: 0x8
    // Offset: 0xF0
    GlobalNamespace::UnifiedNetworkPlayerModel* unifiedNetworkModelPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UnifiedNetworkPlayerModel*) == 0x8);
    // private NetworkPlayerEntitlementChecker _networkPlayerEntitlementCheckerPrefab
    // Size: 0x8
    // Offset: 0xF8
    GlobalNamespace::NetworkPlayerEntitlementChecker* networkPlayerEntitlementCheckerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetworkPlayerEntitlementChecker*) == 0x8);
    // private HapticFeedbackController _hapticFeedbackControllerPrefab
    // Size: 0x8
    // Offset: 0x100
    GlobalNamespace::HapticFeedbackController* hapticFeedbackControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HapticFeedbackController*) == 0x8);
    // private Tweening.TweeningManager _tweeningManagerPrefab
    // Size: 0x8
    // Offset: 0x108
    Tweening::TweeningManager* tweeningManagerPrefab;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // private BloomPrePassLightsUpdateSystem _lightsUpdateSystemPrefab
    // Size: 0x8
    // Offset: 0x110
    GlobalNamespace::BloomPrePassLightsUpdateSystem* lightsUpdateSystemPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassLightsUpdateSystem*) == 0x8);
    // [SpaceAttribute] Offset: 0xE146A8
    // private NodePoseSyncStateManager _nodePoseSyncStateManagerPrefab
    // Size: 0x8
    // Offset: 0x118
    GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManagerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NodePoseSyncStateManager*) == 0x8);
    // [SpaceAttribute] Offset: 0xE146E0
    // private AlwaysOwnedContentContainerSO _alwaysOwnedContentContainer
    // Size: 0x8
    // Offset: 0x120
    GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AlwaysOwnedContentContainerSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE14718
    // private PSVRHelper _psVRHelperPrefab
    // Size: 0x8
    // Offset: 0x128
    GlobalNamespace::PSVRHelper* psVRHelperPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PSVRHelper*) == 0x8);
    // private OculusVRHelper _oculusVRHelperPrefab
    // Size: 0x8
    // Offset: 0x130
    GlobalNamespace::OculusVRHelper* oculusVRHelperPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusVRHelper*) == 0x8);
    // private OpenVRHelper _openVRHelperPrefab
    // Size: 0x8
    // Offset: 0x138
    GlobalNamespace::OpenVRHelper* openVRHelperPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OpenVRHelper*) == 0x8);
    // private DevicelessVRHelper _devicelessVRHelperPrefab
    // Size: 0x8
    // Offset: 0x140
    GlobalNamespace::DevicelessVRHelper* devicelessVRHelperPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DevicelessVRHelper*) == 0x8);
    // [SpaceAttribute] Offset: 0xE14780
    // private TestPlatformAdditionalContentModel _testPlatformAdditionalContentModelPrefab
    // Size: 0x8
    // Offset: 0x148
    GlobalNamespace::TestPlatformAdditionalContentModel* testPlatformAdditionalContentModelPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TestPlatformAdditionalContentModel*) == 0x8);
    // private PS4PlatformAdditionalContentModel _ps4PlatformAdditionalContentModelPrefab
    // Size: 0x8
    // Offset: 0x150
    GlobalNamespace::PS4PlatformAdditionalContentModel* ps4PlatformAdditionalContentModelPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PS4PlatformAdditionalContentModel*) == 0x8);
    // private OculusPlatformAdditionalContentModel _oculusPlatformAdditionalContentModelPrefab
    // Size: 0x8
    // Offset: 0x158
    GlobalNamespace::OculusPlatformAdditionalContentModel* oculusPlatformAdditionalContentModelPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusPlatformAdditionalContentModel*) == 0x8);
    // private SteamPlatformAdditionalContentModel _steamPlatformAdditionalContentModelPrefab
    // Size: 0x8
    // Offset: 0x160
    GlobalNamespace::SteamPlatformAdditionalContentModel* steamPlatformAdditionalContentModelPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamPlatformAdditionalContentModel*) == 0x8);
    // [SpaceAttribute] Offset: 0xE147E8
    // private SteamLevelProductsModelSO _steamLevelProductsModel
    // Size: 0x8
    // Offset: 0x168
    GlobalNamespace::SteamLevelProductsModelSO* steamLevelProductsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamLevelProductsModelSO*) == 0x8);
    // private OculusLevelProductsModelSO _oculusLevelProducsModel
    // Size: 0x8
    // Offset: 0x170
    GlobalNamespace::OculusLevelProductsModelSO* oculusLevelProducsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusLevelProductsModelSO*) == 0x8);
    // private PS4LevelProductsModelSO _ps4LevelProductsModel
    // Size: 0x8
    // Offset: 0x178
    GlobalNamespace::PS4LevelProductsModelSO* ps4LevelProductsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PS4LevelProductsModelSO*) == 0x8);
    // private PS4LeaderboardIdsModelSO _ps4LeaderboardIdsModel
    // Size: 0x8
    // Offset: 0x180
    GlobalNamespace::PS4LeaderboardIdsModelSO* ps4LeaderboardIdsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PS4LeaderboardIdsModelSO*) == 0x8);
    // private OnlineServices.ServerManager _onlineServicesServerManagerPrefab
    // Size: 0x8
    // Offset: 0x188
    OnlineServices::ServerManager* onlineServicesServerManagerPrefab;
    // Field size check
    static_assert(sizeof(OnlineServices::ServerManager*) == 0x8);
    // private RichPresenceManager _richPresenceManagerPrefab
    // Size: 0x8
    // Offset: 0x190
    GlobalNamespace::RichPresenceManager* richPresenceManagerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RichPresenceManager*) == 0x8);
    // private DlcPromoExperimentDataSO _dlcPromoExperimentData
    // Size: 0x8
    // Offset: 0x198
    GlobalNamespace::DlcPromoExperimentDataSO* dlcPromoExperimentData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DlcPromoExperimentDataSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE14880
    // private NetworkConfigSO _networkConfig
    // Size: 0x8
    // Offset: 0x1A0
    GlobalNamespace::NetworkConfigSO* networkConfig;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetworkConfigSO*) == 0x8);
    // private MockMultiplayerSessionManager _mockMultiplayerSessionManagerPrefab
    // Size: 0x8
    // Offset: 0x1A8
    GlobalNamespace::MockMultiplayerSessionManager* mockMultiplayerSessionManagerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockMultiplayerSessionManager*) == 0x8);
    // private SteamNetworkPlayerModel _steamNetworkPlayerModelPrefab
    // Size: 0x8
    // Offset: 0x1B0
    GlobalNamespace::SteamNetworkPlayerModel* steamNetworkPlayerModelPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamNetworkPlayerModel*) == 0x8);
    // private OculusNetworkPlayerModel _oculusNetworkPlayerModelPrefab
    // Size: 0x8
    // Offset: 0x1B8
    GlobalNamespace::OculusNetworkPlayerModel* oculusNetworkPlayerModelPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusNetworkPlayerModel*) == 0x8);
    // private PS4NetworkPlayerModel _ps4NetworkPlayerModelPrefab
    // Size: 0x8
    // Offset: 0x1C0
    GlobalNamespace::PS4NetworkPlayerModel* ps4NetworkPlayerModelPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PS4NetworkPlayerModel*) == 0x8);
    // [SpaceAttribute] Offset: 0xE148F8
    // private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Size: 0x8
    // Offset: 0x1C8
    GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicCollectionSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE14930
    // private LeaderboardScoreUploader _leaderboardScoreUploader
    // Size: 0x8
    // Offset: 0x1D0
    GlobalNamespace::LeaderboardScoreUploader* leaderboardScoreUploader;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LeaderboardScoreUploader*) == 0x8);
    // private PlatformLeaderboardsModel _platformLeaderboardsModel
    // Size: 0x8
    // Offset: 0x1D8
    GlobalNamespace::PlatformLeaderboardsModel* platformLeaderboardsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformLeaderboardsModel*) == 0x8);
    // private BeatmapLevelSO _anyBeatmapLevelSO
    // Size: 0x8
    // Offset: 0x1E0
    GlobalNamespace::BeatmapLevelSO* anyBeatmapLevelSO;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSO*) == 0x8);
    // private MockPlayersModel _mockPlayersModel
    // Size: 0x8
    // Offset: 0x1E8
    GlobalNamespace::MockPlayersModel* mockPlayersModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockPlayersModel*) == 0x8);
    // Creating value type constructor for type: MainSystemInit
    MainSystemInit(GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}, GlobalNamespace::AudioManagerSO* audioManager_ = {}, GlobalNamespace::PerceivedLoudnessPerLevelSO* perceivedLoudnessPerLevel_ = {}, GlobalNamespace::AvatarDataModel* avatarDataModel_ = {}, GlobalNamespace::AvatarPartsModelSO* avatarPartsModel_ = {}, GlobalNamespace::SkinColorSetSO* skinColorSet_ = {}, GlobalNamespace::MirrorRendererGraphicsSettingsPresets* mirrorRendererGraphicsSettingsPresets_ = {}, GlobalNamespace::MainEffectGraphicsSettingsPresetsSO* mainEffectGraphicsSettingsPresets_ = {}, GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO* bloomPrePassGraphicsSettingsPresets_ = {}, GlobalNamespace::MirrorRendererSO* mirrorRenderer_ = {}, GlobalNamespace::MainEffectContainerSO* mainEffectContainer_ = {}, GlobalNamespace::BloomPrePassEffectContainerSO* bloomPrePassEffectContainer_ = {}, GlobalNamespace::SongPackMaskModelSO* songPackMaskModel_ = {}, GlobalNamespace::MultiplayerMockSettings* multiplayerMockSettings_ = {}, GlobalNamespace::AppStaticSettingsSO* appStaticSettings_ = {}, GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData_ = {}, GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData_ = {}, GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData_ = {}, GlobalNamespace::TimeHelper* timeHelperPrefab_ = {}, GlobalNamespace::PlayerDataModel* playerDataModelPrefab_ = {}, GlobalNamespace::CampaignProgressModel* campaignProgressModelPrefab_ = {}, GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModelPrefab_ = {}, GlobalNamespace::CustomLevelLoader* customLevelLoaderPrefab_ = {}, GlobalNamespace::CachedMediaAsyncLoader* cachedMediaAsyncLoaderPrefab_ = {}, GlobalNamespace::ExternalCamerasManager* externalCamerasManagerPrefab_ = {}, GlobalNamespace::MultiplayerSessionManager* multiplayerSessionManagerPrefab_ = {}, GlobalNamespace::LocalNetworkPlayerModel* localNetworkPlayerModelPrefab_ = {}, GlobalNamespace::UnifiedNetworkPlayerModel* unifiedNetworkModelPrefab_ = {}, GlobalNamespace::NetworkPlayerEntitlementChecker* networkPlayerEntitlementCheckerPrefab_ = {}, GlobalNamespace::HapticFeedbackController* hapticFeedbackControllerPrefab_ = {}, Tweening::TweeningManager* tweeningManagerPrefab_ = {}, GlobalNamespace::BloomPrePassLightsUpdateSystem* lightsUpdateSystemPrefab_ = {}, GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManagerPrefab_ = {}, GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer_ = {}, GlobalNamespace::PSVRHelper* psVRHelperPrefab_ = {}, GlobalNamespace::OculusVRHelper* oculusVRHelperPrefab_ = {}, GlobalNamespace::OpenVRHelper* openVRHelperPrefab_ = {}, GlobalNamespace::DevicelessVRHelper* devicelessVRHelperPrefab_ = {}, GlobalNamespace::TestPlatformAdditionalContentModel* testPlatformAdditionalContentModelPrefab_ = {}, GlobalNamespace::PS4PlatformAdditionalContentModel* ps4PlatformAdditionalContentModelPrefab_ = {}, GlobalNamespace::OculusPlatformAdditionalContentModel* oculusPlatformAdditionalContentModelPrefab_ = {}, GlobalNamespace::SteamPlatformAdditionalContentModel* steamPlatformAdditionalContentModelPrefab_ = {}, GlobalNamespace::SteamLevelProductsModelSO* steamLevelProductsModel_ = {}, GlobalNamespace::OculusLevelProductsModelSO* oculusLevelProducsModel_ = {}, GlobalNamespace::PS4LevelProductsModelSO* ps4LevelProductsModel_ = {}, GlobalNamespace::PS4LeaderboardIdsModelSO* ps4LeaderboardIdsModel_ = {}, OnlineServices::ServerManager* onlineServicesServerManagerPrefab_ = {}, GlobalNamespace::RichPresenceManager* richPresenceManagerPrefab_ = {}, GlobalNamespace::DlcPromoExperimentDataSO* dlcPromoExperimentData_ = {}, GlobalNamespace::NetworkConfigSO* networkConfig_ = {}, GlobalNamespace::MockMultiplayerSessionManager* mockMultiplayerSessionManagerPrefab_ = {}, GlobalNamespace::SteamNetworkPlayerModel* steamNetworkPlayerModelPrefab_ = {}, GlobalNamespace::OculusNetworkPlayerModel* oculusNetworkPlayerModelPrefab_ = {}, GlobalNamespace::PS4NetworkPlayerModel* ps4NetworkPlayerModelPrefab_ = {}, GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection_ = {}, GlobalNamespace::LeaderboardScoreUploader* leaderboardScoreUploader_ = {}, GlobalNamespace::PlatformLeaderboardsModel* platformLeaderboardsModel_ = {}, GlobalNamespace::BeatmapLevelSO* anyBeatmapLevelSO_ = {}, GlobalNamespace::MockPlayersModel* mockPlayersModel_ = {}) noexcept : mainSettingsModel{mainSettingsModel_}, audioManager{audioManager_}, perceivedLoudnessPerLevel{perceivedLoudnessPerLevel_}, avatarDataModel{avatarDataModel_}, avatarPartsModel{avatarPartsModel_}, skinColorSet{skinColorSet_}, mirrorRendererGraphicsSettingsPresets{mirrorRendererGraphicsSettingsPresets_}, mainEffectGraphicsSettingsPresets{mainEffectGraphicsSettingsPresets_}, bloomPrePassGraphicsSettingsPresets{bloomPrePassGraphicsSettingsPresets_}, mirrorRenderer{mirrorRenderer_}, mainEffectContainer{mainEffectContainer_}, bloomPrePassEffectContainer{bloomPrePassEffectContainer_}, songPackMaskModel{songPackMaskModel_}, multiplayerMockSettings{multiplayerMockSettings_}, appStaticSettings{appStaticSettings_}, standardLevelScenesTransitionSetupData{standardLevelScenesTransitionSetupData_}, missionLevelScenesTransitionSetupData{missionLevelScenesTransitionSetupData_}, multiplayerLevelScenesTransitionSetupData{multiplayerLevelScenesTransitionSetupData_}, timeHelperPrefab{timeHelperPrefab_}, playerDataModelPrefab{playerDataModelPrefab_}, campaignProgressModelPrefab{campaignProgressModelPrefab_}, beatmapLevelsModelPrefab{beatmapLevelsModelPrefab_}, customLevelLoaderPrefab{customLevelLoaderPrefab_}, cachedMediaAsyncLoaderPrefab{cachedMediaAsyncLoaderPrefab_}, externalCamerasManagerPrefab{externalCamerasManagerPrefab_}, multiplayerSessionManagerPrefab{multiplayerSessionManagerPrefab_}, localNetworkPlayerModelPrefab{localNetworkPlayerModelPrefab_}, unifiedNetworkModelPrefab{unifiedNetworkModelPrefab_}, networkPlayerEntitlementCheckerPrefab{networkPlayerEntitlementCheckerPrefab_}, hapticFeedbackControllerPrefab{hapticFeedbackControllerPrefab_}, tweeningManagerPrefab{tweeningManagerPrefab_}, lightsUpdateSystemPrefab{lightsUpdateSystemPrefab_}, nodePoseSyncStateManagerPrefab{nodePoseSyncStateManagerPrefab_}, alwaysOwnedContentContainer{alwaysOwnedContentContainer_}, psVRHelperPrefab{psVRHelperPrefab_}, oculusVRHelperPrefab{oculusVRHelperPrefab_}, openVRHelperPrefab{openVRHelperPrefab_}, devicelessVRHelperPrefab{devicelessVRHelperPrefab_}, testPlatformAdditionalContentModelPrefab{testPlatformAdditionalContentModelPrefab_}, ps4PlatformAdditionalContentModelPrefab{ps4PlatformAdditionalContentModelPrefab_}, oculusPlatformAdditionalContentModelPrefab{oculusPlatformAdditionalContentModelPrefab_}, steamPlatformAdditionalContentModelPrefab{steamPlatformAdditionalContentModelPrefab_}, steamLevelProductsModel{steamLevelProductsModel_}, oculusLevelProducsModel{oculusLevelProducsModel_}, ps4LevelProductsModel{ps4LevelProductsModel_}, ps4LeaderboardIdsModel{ps4LeaderboardIdsModel_}, onlineServicesServerManagerPrefab{onlineServicesServerManagerPrefab_}, richPresenceManagerPrefab{richPresenceManagerPrefab_}, dlcPromoExperimentData{dlcPromoExperimentData_}, networkConfig{networkConfig_}, mockMultiplayerSessionManagerPrefab{mockMultiplayerSessionManagerPrefab_}, steamNetworkPlayerModelPrefab{steamNetworkPlayerModelPrefab_}, oculusNetworkPlayerModelPrefab{oculusNetworkPlayerModelPrefab_}, ps4NetworkPlayerModelPrefab{ps4NetworkPlayerModelPrefab_}, beatmapCharacteristicCollection{beatmapCharacteristicCollection_}, leaderboardScoreUploader{leaderboardScoreUploader_}, platformLeaderboardsModel{platformLeaderboardsModel_}, anyBeatmapLevelSO{anyBeatmapLevelSO_}, mockPlayersModel{mockPlayersModel_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Init()
    // Offset: 0x2404D3C
    void Init();
    // public System.Void PreInstall(MockPlayersModel mockPlayersModel)
    // Offset: 0x24050F4
    void PreInstall(GlobalNamespace::MockPlayersModel* mockPlayersModel);
    // public System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0x24050FC
    void InstallBindings(Zenject::DiContainer* container);
    // private System.Void InstallRichPresence(Zenject.DiContainer container)
    // Offset: 0x240630C
    void InstallRichPresence(Zenject::DiContainer* container);
    // private System.Void InstallOculusDestinationBindings(Zenject.DiContainer container)
    // Offset: 0x2406230
    void InstallOculusDestinationBindings(Zenject::DiContainer* container);
    // private System.Void InstallPlatformLeaderboardsModel(Zenject.DiContainer container)
    // Offset: 0x24063CC
    void InstallPlatformLeaderboardsModel(Zenject::DiContainer* container);
    // private System.Boolean IsRunningFromNUnit()
    // Offset: 0x2406228
    bool IsRunningFromNUnit();
    // public System.Void .ctor()
    // Offset: 0x2406510
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainSystemInit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainSystemInit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainSystemInit*, creationType>()));
    }
  }; // MainSystemInit
  #pragma pack(pop)
  static check_size<sizeof(MainSystemInit), 488 + sizeof(GlobalNamespace::MockPlayersModel*)> __GlobalNamespace_MainSystemInitSizeCheck;
  static_assert(sizeof(MainSystemInit) == 0x1F0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSystemInit*, "", "MainSystemInit");
// Writing MetadataGetter for method: GlobalNamespace::MainSystemInit::Init
// Il2CppName: Init
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MainSystemInit::PreInstall
// Il2CppName: PreInstall
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MainSystemInit::InstallBindings
// Il2CppName: InstallBindings
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MainSystemInit::InstallRichPresence
// Il2CppName: InstallRichPresence
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MainSystemInit::InstallOculusDestinationBindings
// Il2CppName: InstallOculusDestinationBindings
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MainSystemInit::InstallPlatformLeaderboardsModel
// Il2CppName: InstallPlatformLeaderboardsModel
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MainSystemInit::IsRunningFromNUnit
// Il2CppName: IsRunningFromNUnit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MainSystemInit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
