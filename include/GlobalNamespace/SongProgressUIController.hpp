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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Slider
  class Slider;
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: SongProgressUIController
  class SongProgressUIController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Slider _slider
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Slider* slider;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Slider*) == 0x8);
    // private UnityEngine.UI.Image _progressImage
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Image* progressImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private TMPro.TextMeshProUGUI _durationMinutesText
    // Size: 0x8
    // Offset: 0x28
    TMPro::TextMeshProUGUI* durationMinutesText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _durationSecondsText
    // Size: 0x8
    // Offset: 0x30
    TMPro::TextMeshProUGUI* durationSecondsText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _progressMinutesText
    // Size: 0x8
    // Offset: 0x38
    TMPro::TextMeshProUGUI* progressMinutesText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _progressSecondsText
    // Size: 0x8
    // Offset: 0x40
    TMPro::TextMeshProUGUI* progressSecondsText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [InjectAttribute] Offset: 0xD3B368
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // private System.Int32 _prevMinutes
    // Size: 0x4
    // Offset: 0x50
    int prevMinutes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _prevSeconds
    // Size: 0x4
    // Offset: 0x54
    int prevSeconds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Text.StringBuilder _stringBuilder
    // Size: 0x8
    // Offset: 0x58
    System::Text::StringBuilder* stringBuilder;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private UnityEngine.RectTransform _progressImageRectTransform
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::RectTransform* progressImageRectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // Creating value type constructor for type: SongProgressUIController
    SongProgressUIController(UnityEngine::UI::Slider* slider_ = {}, UnityEngine::UI::Image* progressImage_ = {}, TMPro::TextMeshProUGUI* durationMinutesText_ = {}, TMPro::TextMeshProUGUI* durationSecondsText_ = {}, TMPro::TextMeshProUGUI* progressMinutesText_ = {}, TMPro::TextMeshProUGUI* progressSecondsText_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, int prevMinutes_ = {}, int prevSeconds_ = {}, System::Text::StringBuilder* stringBuilder_ = {}, UnityEngine::RectTransform* progressImageRectTransform_ = {}) noexcept : slider{slider_}, progressImage{progressImage_}, durationMinutesText{durationMinutesText_}, durationSecondsText{durationSecondsText_}, progressMinutesText{progressMinutesText_}, progressSecondsText{progressSecondsText_}, audioTimeSyncController{audioTimeSyncController_}, prevMinutes{prevMinutes_}, prevSeconds{prevSeconds_}, stringBuilder{stringBuilder_}, progressImageRectTransform{progressImageRectTransform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xF919DC
    void Start();
    // protected System.Void Update()
    // Offset: 0xF91AF4
    void Update();
    // public System.Void .ctor()
    // Offset: 0xF91CD8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongProgressUIController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongProgressUIController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongProgressUIController*, creationType>()));
    }
  }; // SongProgressUIController
  #pragma pack(pop)
  static check_size<sizeof(SongProgressUIController), 96 + sizeof(UnityEngine::RectTransform*)> __GlobalNamespace_SongProgressUIControllerSizeCheck;
  static_assert(sizeof(SongProgressUIController) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongProgressUIController*, "", "SongProgressUIController");
