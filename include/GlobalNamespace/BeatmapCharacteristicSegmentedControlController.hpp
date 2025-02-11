// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: IconSegmentedControl
  class IconSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCharacteristicSegmentedControlController
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapCharacteristicSegmentedControlController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatmapCharacteristicSegmentedControlController::$$c
    class $$c;
    // private HMUI.IconSegmentedControl _segmentedControl
    // Size: 0x8
    // Offset: 0x18
    HMUI::IconSegmentedControl* segmentedControl;
    // Field size check
    static_assert(sizeof(HMUI::IconSegmentedControl*) == 0x8);
    // private System.Action`2<BeatmapCharacteristicSegmentedControlController,BeatmapCharacteristicSO> didSelectBeatmapCharacteristicEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, GlobalNamespace::BeatmapCharacteristicSO*>* didSelectBeatmapCharacteristicEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // private BeatmapCharacteristicSO _selectedBeatmapCharacteristic
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapCharacteristicSO* selectedBeatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private System.Collections.Generic.List`1<BeatmapCharacteristicSO> _beatmapCharacteristics
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO*>* beatmapCharacteristics;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // Creating value type constructor for type: BeatmapCharacteristicSegmentedControlController
    BeatmapCharacteristicSegmentedControlController(HMUI::IconSegmentedControl* segmentedControl_ = {}, System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, GlobalNamespace::BeatmapCharacteristicSO*>* didSelectBeatmapCharacteristicEvent_ = {}, GlobalNamespace::BeatmapCharacteristicSO* selectedBeatmapCharacteristic_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO*>* beatmapCharacteristics_ = {}) noexcept : segmentedControl{segmentedControl_}, didSelectBeatmapCharacteristicEvent{didSelectBeatmapCharacteristicEvent_}, selectedBeatmapCharacteristic{selectedBeatmapCharacteristic_}, beatmapCharacteristics{beatmapCharacteristics_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private HMUI.IconSegmentedControl _segmentedControl
    HMUI::IconSegmentedControl* _get__segmentedControl();
    // Set instance field: private HMUI.IconSegmentedControl _segmentedControl
    void _set__segmentedControl(HMUI::IconSegmentedControl* value);
    // Get instance field: private System.Action`2<BeatmapCharacteristicSegmentedControlController,BeatmapCharacteristicSO> didSelectBeatmapCharacteristicEvent
    System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, GlobalNamespace::BeatmapCharacteristicSO*>* _get_didSelectBeatmapCharacteristicEvent();
    // Set instance field: private System.Action`2<BeatmapCharacteristicSegmentedControlController,BeatmapCharacteristicSO> didSelectBeatmapCharacteristicEvent
    void _set_didSelectBeatmapCharacteristicEvent(System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // Get instance field: private BeatmapCharacteristicSO _selectedBeatmapCharacteristic
    GlobalNamespace::BeatmapCharacteristicSO* _get__selectedBeatmapCharacteristic();
    // Set instance field: private BeatmapCharacteristicSO _selectedBeatmapCharacteristic
    void _set__selectedBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* value);
    // Get instance field: private System.Collections.Generic.List`1<BeatmapCharacteristicSO> _beatmapCharacteristics
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO*>* _get__beatmapCharacteristics();
    // Set instance field: private System.Collections.Generic.List`1<BeatmapCharacteristicSO> _beatmapCharacteristics
    void _set__beatmapCharacteristics(System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public BeatmapCharacteristicSO get_selectedBeatmapCharacteristic()
    // Offset: 0x1FD0FB4
    GlobalNamespace::BeatmapCharacteristicSO* get_selectedBeatmapCharacteristic();
    // public System.Void add_didSelectBeatmapCharacteristicEvent(System.Action`2<BeatmapCharacteristicSegmentedControlController,BeatmapCharacteristicSO> value)
    // Offset: 0x1FD0E6C
    void add_didSelectBeatmapCharacteristicEvent(System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void remove_didSelectBeatmapCharacteristicEvent(System.Action`2<BeatmapCharacteristicSegmentedControlController,BeatmapCharacteristicSO> value)
    // Offset: 0x1FD0F10
    void remove_didSelectBeatmapCharacteristicEvent(System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // protected System.Void Awake()
    // Offset: 0x1FD0FBC
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1FD1050
    void OnDestroy();
    // public System.Void SetData(IDifficultyBeatmapSet[] difficultyBeatmapSets, BeatmapCharacteristicSO selectedBeatmapCharacteristic)
    // Offset: 0x1FD112C
    void SetData(::Array<GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets, GlobalNamespace::BeatmapCharacteristicSO* selectedBeatmapCharacteristic);
    // private System.Void HandleDifficultySegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellIdx)
    // Offset: 0x1FD148C
    void HandleDifficultySegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellIdx);
    // public System.Void .ctor()
    // Offset: 0x1FD1530
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCharacteristicSegmentedControlController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapCharacteristicSegmentedControlController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCharacteristicSegmentedControlController*, creationType>()));
    }
  }; // BeatmapCharacteristicSegmentedControlController
  #pragma pack(pop)
  static check_size<sizeof(BeatmapCharacteristicSegmentedControlController), 48 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO*>*)> __GlobalNamespace_BeatmapCharacteristicSegmentedControlControllerSizeCheck;
  static_assert(sizeof(BeatmapCharacteristicSegmentedControlController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, "", "BeatmapCharacteristicSegmentedControlController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSegmentedControlController::get_selectedBeatmapCharacteristic
// Il2CppName: get_selectedBeatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::BeatmapCharacteristicSegmentedControlController::*)()>(&GlobalNamespace::BeatmapCharacteristicSegmentedControlController::get_selectedBeatmapCharacteristic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSegmentedControlController*), "get_selectedBeatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSegmentedControlController::add_didSelectBeatmapCharacteristicEvent
// Il2CppName: add_didSelectBeatmapCharacteristicEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicSegmentedControlController::*)(System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, GlobalNamespace::BeatmapCharacteristicSO*>*)>(&GlobalNamespace::BeatmapCharacteristicSegmentedControlController::add_didSelectBeatmapCharacteristicEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSegmentedControlController"), ::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSegmentedControlController*), "add_didSelectBeatmapCharacteristicEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSegmentedControlController::remove_didSelectBeatmapCharacteristicEvent
// Il2CppName: remove_didSelectBeatmapCharacteristicEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicSegmentedControlController::*)(System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController*, GlobalNamespace::BeatmapCharacteristicSO*>*)>(&GlobalNamespace::BeatmapCharacteristicSegmentedControlController::remove_didSelectBeatmapCharacteristicEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSegmentedControlController"), ::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSegmentedControlController*), "remove_didSelectBeatmapCharacteristicEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSegmentedControlController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicSegmentedControlController::*)()>(&GlobalNamespace::BeatmapCharacteristicSegmentedControlController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSegmentedControlController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSegmentedControlController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicSegmentedControlController::*)()>(&GlobalNamespace::BeatmapCharacteristicSegmentedControlController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSegmentedControlController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSegmentedControlController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicSegmentedControlController::*)(::Array<GlobalNamespace::IDifficultyBeatmapSet*>*, GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::BeatmapCharacteristicSegmentedControlController::SetData)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmapSets = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmapSet"), 1)->byval_arg;
    static auto* selectedBeatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSegmentedControlController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmapSets, selectedBeatmapCharacteristic});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSegmentedControlController::HandleDifficultySegmentedControlDidSelectCell
// Il2CppName: HandleDifficultySegmentedControlDidSelectCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicSegmentedControlController::*)(HMUI::SegmentedControl*, int)>(&GlobalNamespace::BeatmapCharacteristicSegmentedControlController::HandleDifficultySegmentedControlDidSelectCell)> {
  static const MethodInfo* get() {
    static auto* segmentedControl = &::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl")->byval_arg;
    static auto* cellIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicSegmentedControlController*), "HandleDifficultySegmentedControlDidSelectCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentedControl, cellIdx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicSegmentedControlController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
