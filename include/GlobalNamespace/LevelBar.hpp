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
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: LevelBar
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelBar : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::LevelBar::$Setup$d__12
    struct $Setup$d__12;
    // private HMUI.ImageView _songArtworkImageView
    // Size: 0x8
    // Offset: 0x18
    HMUI::ImageView* songArtworkImageView;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private TMPro.TextMeshProUGUI _songNameText
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* songNameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _authorNameText
    // Size: 0x8
    // Offset: 0x28
    TMPro::TextMeshProUGUI* authorNameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private System.Boolean _showDifficultyAndCharacteristic
    // Size: 0x1
    // Offset: 0x30
    bool showDifficultyAndCharacteristic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showDifficultyAndCharacteristic and: difficultyText
    char __padding3[0x7] = {};
    // [DrawIfAttribute] Offset: 0xE11174
    // [NullAllowed] Offset: 0xE11174
    // private TMPro.TextMeshProUGUI _difficultyText
    // Size: 0x8
    // Offset: 0x38
    TMPro::TextMeshProUGUI* difficultyText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [DrawIfAttribute] Offset: 0xE1126C
    // [NullAllowed] Offset: 0xE1126C
    // private HMUI.ImageView _characteristicIconImageView
    // Size: 0x8
    // Offset: 0x40
    HMUI::ImageView* characteristicIconImageView;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private System.Boolean _useArtworkBackground
    // Size: 0x1
    // Offset: 0x48
    bool useArtworkBackground;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useArtworkBackground and: artworkBackgroundImage
    char __padding6[0x7] = {};
    // [DrawIfAttribute] Offset: 0xE11374
    // [NullAllowed] Offset: 0xE11374
    // private HMUI.ImageView _artworkBackgroundImage
    // Size: 0x8
    // Offset: 0x50
    HMUI::ImageView* artworkBackgroundImage;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0x58
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // Creating value type constructor for type: LevelBar
    LevelBar(HMUI::ImageView* songArtworkImageView_ = {}, TMPro::TextMeshProUGUI* songNameText_ = {}, TMPro::TextMeshProUGUI* authorNameText_ = {}, bool showDifficultyAndCharacteristic_ = {}, TMPro::TextMeshProUGUI* difficultyText_ = {}, HMUI::ImageView* characteristicIconImageView_ = {}, bool useArtworkBackground_ = {}, HMUI::ImageView* artworkBackgroundImage_ = {}, System::Threading::CancellationTokenSource* cancellationTokenSource_ = {}) noexcept : songArtworkImageView{songArtworkImageView_}, songNameText{songNameText_}, authorNameText{authorNameText_}, showDifficultyAndCharacteristic{showDifficultyAndCharacteristic_}, difficultyText{difficultyText_}, characteristicIconImageView{characteristicIconImageView_}, useArtworkBackground{useArtworkBackground_}, artworkBackgroundImage{artworkBackgroundImage_}, cancellationTokenSource{cancellationTokenSource_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_hide(System.Boolean value)
    // Offset: 0x10F14A0
    void set_hide(bool value);
    // public System.Void Setup(IPreviewBeatmapLevel previewBeatmapLevel)
    // Offset: 0x10F14D8
    void Setup(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel);
    // public System.Void Setup(IPreviewBeatmapLevel previewBeatmapLevel, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty beatmapDifficulty)
    // Offset: 0x10F14E4
    void Setup(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty);
    // protected System.Void OnDestroy()
    // Offset: 0x10F15C0
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x10F15D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelBar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelBar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelBar*, creationType>()));
    }
  }; // LevelBar
  #pragma pack(pop)
  static check_size<sizeof(LevelBar), 88 + sizeof(System::Threading::CancellationTokenSource*)> __GlobalNamespace_LevelBarSizeCheck;
  static_assert(sizeof(LevelBar) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelBar*, "", "LevelBar");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelBar::set_hide
// Il2CppName: set_hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelBar::*)(bool)>(&GlobalNamespace::LevelBar::set_hide)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelBar*), "set_hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelBar::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelBar::*)(GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::LevelBar::Setup)> {
  static const MethodInfo* get() {
    static auto* previewBeatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelBar*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previewBeatmapLevel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelBar::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelBar::*)(GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::LevelBar::Setup)> {
  static const MethodInfo* get() {
    static auto* previewBeatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    static auto* beatmapDifficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelBar*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previewBeatmapLevel, beatmapCharacteristic, beatmapDifficulty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelBar::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelBar::*)()>(&GlobalNamespace::LevelBar::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelBar*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelBar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
