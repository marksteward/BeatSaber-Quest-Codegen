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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: DroppedFramesLabel
  // [TokenAttribute] Offset: FFFFFFFF
  class DroppedFramesLabel : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private System.Int32 _expectedFrameRate
    // Size: 0x4
    // Offset: 0x20
    int expectedFrameRate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _resetInterval
    // Size: 0x4
    // Offset: 0x24
    int resetInterval;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _totalNumberOfDroppedFrames
    // Size: 0x4
    // Offset: 0x28
    int totalNumberOfDroppedFrames;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _syncedFrameTime
    // Size: 0x4
    // Offset: 0x2C
    float syncedFrameTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _intervalTime
    // Size: 0x4
    // Offset: 0x30
    float intervalTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxFrameTimeInInterval
    // Size: 0x4
    // Offset: 0x34
    float maxFrameTimeInInterval;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _frameCountInInterval
    // Size: 0x4
    // Offset: 0x38
    int frameCountInInterval;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DroppedFramesLabel
    DroppedFramesLabel(TMPro::TextMeshProUGUI* text_ = {}, int expectedFrameRate_ = {}, int resetInterval_ = {}, int totalNumberOfDroppedFrames_ = {}, float syncedFrameTime_ = {}, float intervalTime_ = {}, float maxFrameTimeInInterval_ = {}, int frameCountInInterval_ = {}) noexcept : text{text_}, expectedFrameRate{expectedFrameRate_}, resetInterval{resetInterval_}, totalNumberOfDroppedFrames{totalNumberOfDroppedFrames_}, syncedFrameTime{syncedFrameTime_}, intervalTime{intervalTime_}, maxFrameTimeInInterval{maxFrameTimeInInterval_}, frameCountInInterval{frameCountInInterval_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1211C4C
    void Start();
    // protected System.Void Update()
    // Offset: 0x1211CC0
    void Update();
    // private System.Void RefreshText()
    // Offset: 0x1211DAC
    void RefreshText();
    // public System.Void .ctor()
    // Offset: 0x1211ED0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DroppedFramesLabel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DroppedFramesLabel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DroppedFramesLabel*, creationType>()));
    }
  }; // DroppedFramesLabel
  #pragma pack(pop)
  static check_size<sizeof(DroppedFramesLabel), 56 + sizeof(int)> __GlobalNamespace_DroppedFramesLabelSizeCheck;
  static_assert(sizeof(DroppedFramesLabel) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DroppedFramesLabel*, "", "DroppedFramesLabel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DroppedFramesLabel::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DroppedFramesLabel::*)()>(&GlobalNamespace::DroppedFramesLabel::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DroppedFramesLabel*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DroppedFramesLabel::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DroppedFramesLabel::*)()>(&GlobalNamespace::DroppedFramesLabel::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DroppedFramesLabel*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DroppedFramesLabel::RefreshText
// Il2CppName: RefreshText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DroppedFramesLabel::*)()>(&GlobalNamespace::DroppedFramesLabel::RefreshText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DroppedFramesLabel*), "RefreshText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DroppedFramesLabel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
