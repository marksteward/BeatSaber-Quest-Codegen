// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PromoViewController
#include "GlobalNamespace/PromoViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PreviewBeatmapLevelPackSO
  class PreviewBeatmapLevelPackSO;
  // Forward declaring type: BeatmapLevelPackSO
  class BeatmapLevelPackSO;
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PromoViewController/ButtonPromoTypePair
  class PromoViewController::ButtonPromoTypePair : public ::Il2CppObject {
    public:
    // public UnityEngine.UI.Button button
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::UI::Button* button;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [NullAllowed] Offset: 0xD48B94
    // public PreviewBeatmapLevelPackSO previewLevelPack
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PreviewBeatmapLevelPackSO* previewLevelPack;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PreviewBeatmapLevelPackSO*) == 0x8);
    // [NullAllowed] Offset: 0xD48BA4
    // public BeatmapLevelPackSO levelPack
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapLevelPackSO* levelPack;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelPackSO*) == 0x8);
    // [NullAllowed] Offset: 0xD48BB4
    // public BeatmapLevelSO beatmapLevel
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapLevelSO* beatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSO*) == 0x8);
    // private IAnnotatedBeatmapLevelCollection _annotatedBeatmapLevelCollection
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAnnotatedBeatmapLevelCollection*) == 0x8);
    // Creating value type constructor for type: ButtonPromoTypePair
    ButtonPromoTypePair(UnityEngine::UI::Button* button_ = {}, GlobalNamespace::PreviewBeatmapLevelPackSO* previewLevelPack_ = {}, GlobalNamespace::BeatmapLevelPackSO* levelPack_ = {}, GlobalNamespace::BeatmapLevelSO* beatmapLevel_ = {}, GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection_ = {}) noexcept : button{button_}, previewLevelPack{previewLevelPack_}, levelPack{levelPack_}, beatmapLevel{beatmapLevel_}, annotatedBeatmapLevelCollection{annotatedBeatmapLevelCollection_} {}
    // public IAnnotatedBeatmapLevelCollection get_annotatedBeatmapLevelCollection()
    // Offset: 0xF81AA8
    GlobalNamespace::IAnnotatedBeatmapLevelCollection* get_annotatedBeatmapLevelCollection();
    // public System.Void .ctor()
    // Offset: 0xF81B78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PromoViewController::ButtonPromoTypePair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PromoViewController::ButtonPromoTypePair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PromoViewController::ButtonPromoTypePair*, creationType>()));
    }
  }; // PromoViewController/ButtonPromoTypePair
  #pragma pack(pop)
  static check_size<sizeof(PromoViewController::ButtonPromoTypePair), 48 + sizeof(GlobalNamespace::IAnnotatedBeatmapLevelCollection*)> __GlobalNamespace_PromoViewController_ButtonPromoTypePairSizeCheck;
  static_assert(sizeof(PromoViewController::ButtonPromoTypePair) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PromoViewController::ButtonPromoTypePair*, "", "PromoViewController/ButtonPromoTypePair");
