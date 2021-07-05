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
  // Forward declaring type: StepValuePicker
  class StepValuePicker;
  // Forward declaring type: MultiplayerSpectatorController
  class MultiplayerSpectatorController;
  // Forward declaring type: IMultiplayerSpectatingSpot
  class IMultiplayerSpectatingSpot;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerSpectatingSpotPickerViewController
  class MultiplayerSpectatingSpotPickerViewController : public UnityEngine::MonoBehaviour {
    public:
    // private StepValuePicker _stepValuePicker
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::StepValuePicker* stepValuePicker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StepValuePicker*) == 0x8);
    // [InjectAttribute] Offset: 0xE1C444
    // private readonly MultiplayerSpectatorController _spectatorController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerSpectatorController* spectatorController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerSpectatorController*) == 0x8);
    // Creating value type constructor for type: MultiplayerSpectatingSpotPickerViewController
    MultiplayerSpectatingSpotPickerViewController(GlobalNamespace::StepValuePicker* stepValuePicker_ = {}, GlobalNamespace::MultiplayerSpectatorController* spectatorController_ = {}) noexcept : stepValuePicker{stepValuePicker_}, spectatorController{spectatorController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1012E28
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x10130E4
    void OnDestroy();
    // private System.Void HandleSpectatingSpotDidChangeEvent(IMultiplayerSpectatingSpot spectatingSpot)
    // Offset: 0x1013310
    void HandleSpectatingSpotDidChangeEvent(GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot);
    // private System.Void RefreshSpectatingSpotName()
    // Offset: 0x1012F40
    void RefreshSpectatingSpotName();
    // private System.Void HandleIncButtonWasPressed()
    // Offset: 0x1013314
    void HandleIncButtonWasPressed();
    // private System.Void HandleDecButtonWasPressed()
    // Offset: 0x1013378
    void HandleDecButtonWasPressed();
    // public System.Void .ctor()
    // Offset: 0x10133DC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerSpectatingSpotPickerViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerSpectatingSpotPickerViewController*, creationType>()));
    }
  }; // MultiplayerSpectatingSpotPickerViewController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerSpectatingSpotPickerViewController), 32 + sizeof(GlobalNamespace::MultiplayerSpectatorController*)> __GlobalNamespace_MultiplayerSpectatingSpotPickerViewControllerSizeCheck;
  static_assert(sizeof(MultiplayerSpectatingSpotPickerViewController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*, "", "MultiplayerSpectatingSpotPickerViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::*)()>(&GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::*)()>(&GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::HandleSpectatingSpotDidChangeEvent
// Il2CppName: HandleSpectatingSpotDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::*)(GlobalNamespace::IMultiplayerSpectatingSpot*)>(&GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::HandleSpectatingSpotDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* spectatingSpot = &::il2cpp_utils::GetClassFromName("", "IMultiplayerSpectatingSpot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*), "HandleSpectatingSpotDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spectatingSpot});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::RefreshSpectatingSpotName
// Il2CppName: RefreshSpectatingSpotName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::*)()>(&GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::RefreshSpectatingSpotName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*), "RefreshSpectatingSpotName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::HandleIncButtonWasPressed
// Il2CppName: HandleIncButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::*)()>(&GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::HandleIncButtonWasPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*), "HandleIncButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::HandleDecButtonWasPressed
// Il2CppName: HandleDecButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::*)()>(&GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::HandleDecButtonWasPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSpectatingSpotPickerViewController*), "HandleDecButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSpectatingSpotPickerViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
