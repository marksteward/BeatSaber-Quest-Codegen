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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IScoreController
  class IScoreController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: FeverModeUIPanel
  class FeverModeUIPanel : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.RectTransform _feverBGTextRectTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::RectTransform* feverBGTextRectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // [InjectAttribute] Offset: 0xE1B8C4
    // private IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    // private System.Single _feverTextRectWidth
    // Size: 0x4
    // Offset: 0x28
    float feverTextRectWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: FeverModeUIPanel
    FeverModeUIPanel(UnityEngine::RectTransform* feverBGTextRectTransform_ = {}, GlobalNamespace::IScoreController* scoreController_ = {}, float feverTextRectWidth_ = {}) noexcept : feverBGTextRectTransform{feverBGTextRectTransform_}, scoreController{scoreController_}, feverTextRectWidth{feverTextRectWidth_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1041C8C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1041F3C
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x104217C
    void Update();
    // private System.Void SetProgress(System.Single progress)
    // Offset: 0x1041ED8
    void SetProgress(float progress);
    // private System.Void HandleFeverModeDidStart()
    // Offset: 0x10422C8
    void HandleFeverModeDidStart();
    // private System.Void HandleFeverModeDidFinish()
    // Offset: 0x10422D0
    void HandleFeverModeDidFinish();
    // private System.Void HandleFeverModeChargeProgressDidChange(System.Single progress)
    // Offset: 0x10422D8
    void HandleFeverModeChargeProgressDidChange(float progress);
    // public System.Void .ctor()
    // Offset: 0x10422DC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FeverModeUIPanel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FeverModeUIPanel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FeverModeUIPanel*, creationType>()));
    }
  }; // FeverModeUIPanel
  #pragma pack(pop)
  static check_size<sizeof(FeverModeUIPanel), 40 + sizeof(float)> __GlobalNamespace_FeverModeUIPanelSizeCheck;
  static_assert(sizeof(FeverModeUIPanel) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FeverModeUIPanel*, "", "FeverModeUIPanel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FeverModeUIPanel::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FeverModeUIPanel::*)()>(&GlobalNamespace::FeverModeUIPanel::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FeverModeUIPanel*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FeverModeUIPanel::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FeverModeUIPanel::*)()>(&GlobalNamespace::FeverModeUIPanel::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FeverModeUIPanel*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FeverModeUIPanel::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FeverModeUIPanel::*)()>(&GlobalNamespace::FeverModeUIPanel::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FeverModeUIPanel*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FeverModeUIPanel::SetProgress
// Il2CppName: SetProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FeverModeUIPanel::*)(float)>(&GlobalNamespace::FeverModeUIPanel::SetProgress)> {
  static const MethodInfo* get() {
    static auto* progress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FeverModeUIPanel*), "SetProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progress});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FeverModeUIPanel::HandleFeverModeDidStart
// Il2CppName: HandleFeverModeDidStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FeverModeUIPanel::*)()>(&GlobalNamespace::FeverModeUIPanel::HandleFeverModeDidStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FeverModeUIPanel*), "HandleFeverModeDidStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FeverModeUIPanel::HandleFeverModeDidFinish
// Il2CppName: HandleFeverModeDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FeverModeUIPanel::*)()>(&GlobalNamespace::FeverModeUIPanel::HandleFeverModeDidFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FeverModeUIPanel*), "HandleFeverModeDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FeverModeUIPanel::HandleFeverModeChargeProgressDidChange
// Il2CppName: HandleFeverModeChargeProgressDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FeverModeUIPanel::*)(float)>(&GlobalNamespace::FeverModeUIPanel::HandleFeverModeChargeProgressDidChange)> {
  static const MethodInfo* get() {
    static auto* progress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FeverModeUIPanel*), "HandleFeverModeChargeProgressDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progress});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FeverModeUIPanel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
