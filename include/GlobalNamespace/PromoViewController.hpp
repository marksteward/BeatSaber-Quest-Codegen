// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  // Autogenerated type: PromoViewController
  // [] Offset: FFFFFFFF
  class PromoViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::PromoViewController::ButtonPromoTypePair
    class ButtonPromoTypePair;
    // Nested type: GlobalNamespace::PromoViewController::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // private PromoViewController/ButtonPromoTypePair[] _elements
    // Size: 0x8
    // Offset: 0x70
    ::Array<GlobalNamespace::PromoViewController::ButtonPromoTypePair*>* elements;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PromoViewController::ButtonPromoTypePair*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD13B4
    // private System.Action`3<PromoViewController,IAnnotatedBeatmapLevelCollection,IPreviewBeatmapLevel> promoButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x78
    System::Action_3<GlobalNamespace::PromoViewController*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::IPreviewBeatmapLevel*>* promoButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_3<GlobalNamespace::PromoViewController*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::IPreviewBeatmapLevel*>*) == 0x8);
    // Creating value type constructor for type: PromoViewController
    PromoViewController(::Array<GlobalNamespace::PromoViewController::ButtonPromoTypePair*>* elements_ = {}, System::Action_3<GlobalNamespace::PromoViewController*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::IPreviewBeatmapLevel*>* promoButtonWasPressedEvent_ = {}) noexcept : elements{elements_}, promoButtonWasPressedEvent{promoButtonWasPressedEvent_} {}
    // public System.Void add_promoButtonWasPressedEvent(System.Action`3<PromoViewController,IAnnotatedBeatmapLevelCollection,IPreviewBeatmapLevel> value)
    // Offset: 0xF2DB04
    void add_promoButtonWasPressedEvent(System::Action_3<GlobalNamespace::PromoViewController*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // public System.Void remove_promoButtonWasPressedEvent(System.Action`3<PromoViewController,IAnnotatedBeatmapLevelCollection,IPreviewBeatmapLevel> value)
    // Offset: 0xF2DBA8
    void remove_promoButtonWasPressedEvent(System::Action_3<GlobalNamespace::PromoViewController*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xF2DC4C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0xF2DD9C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PromoViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PromoViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PromoViewController*, creationType>()));
    }
  }; // PromoViewController
  static check_size<sizeof(PromoViewController), 120 + sizeof(System::Action_3<GlobalNamespace::PromoViewController*, GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::IPreviewBeatmapLevel*>*)> __GlobalNamespace_PromoViewControllerSizeCheck;
  static_assert(sizeof(PromoViewController) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PromoViewController*, "", "PromoViewController");
#pragma pack(pop)
