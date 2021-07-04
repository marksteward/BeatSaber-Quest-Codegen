// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextSegmentedControl
  class TextSegmentedControl;
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDifficultySegmentedControlController
  class BeatmapDifficultySegmentedControlController : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.TextSegmentedControl _difficultySegmentedControl
    // Size: 0x8
    // Offset: 0x18
    HMUI::TextSegmentedControl* difficultySegmentedControl;
    // Field size check
    static_assert(sizeof(HMUI::TextSegmentedControl*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE2448C
    // private System.Action`2<BeatmapDifficultySegmentedControlController,BeatmapDifficulty> didSelectDifficultyEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_2<GlobalNamespace::BeatmapDifficultySegmentedControlController*, GlobalNamespace::BeatmapDifficulty>* didSelectDifficultyEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::BeatmapDifficultySegmentedControlController*, GlobalNamespace::BeatmapDifficulty>*) == 0x8);
    // private System.Collections.Generic.List`1<BeatmapDifficulty> _difficulties
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapDifficulty>* difficulties;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapDifficulty>*) == 0x8);
    // private BeatmapDifficulty _selectedDifficulty
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::BeatmapDifficulty selectedDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Creating value type constructor for type: BeatmapDifficultySegmentedControlController
    BeatmapDifficultySegmentedControlController(HMUI::TextSegmentedControl* difficultySegmentedControl_ = {}, System::Action_2<GlobalNamespace::BeatmapDifficultySegmentedControlController*, GlobalNamespace::BeatmapDifficulty>* didSelectDifficultyEvent_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapDifficulty>* difficulties_ = {}, GlobalNamespace::BeatmapDifficulty selectedDifficulty_ = {}) noexcept : difficultySegmentedControl{difficultySegmentedControl_}, didSelectDifficultyEvent{didSelectDifficultyEvent_}, difficulties{difficulties_}, selectedDifficulty{selectedDifficulty_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didSelectDifficultyEvent(System.Action`2<BeatmapDifficultySegmentedControlController,BeatmapDifficulty> value)
    // Offset: 0x11C73FC
    void add_didSelectDifficultyEvent(System::Action_2<GlobalNamespace::BeatmapDifficultySegmentedControlController*, GlobalNamespace::BeatmapDifficulty>* value);
    // public System.Void remove_didSelectDifficultyEvent(System.Action`2<BeatmapDifficultySegmentedControlController,BeatmapDifficulty> value)
    // Offset: 0x11C74A0
    void remove_didSelectDifficultyEvent(System::Action_2<GlobalNamespace::BeatmapDifficultySegmentedControlController*, GlobalNamespace::BeatmapDifficulty>* value);
    // public BeatmapDifficulty get_selectedDifficulty()
    // Offset: 0x11C7544
    GlobalNamespace::BeatmapDifficulty get_selectedDifficulty();
    // protected System.Void Awake()
    // Offset: 0x11C754C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x11C75E0
    void OnDestroy();
    // private System.Int32 GetClosestDifficultyIndex(BeatmapDifficulty searchDifficulty)
    // Offset: 0x11C76BC
    int GetClosestDifficultyIndex(GlobalNamespace::BeatmapDifficulty searchDifficulty);
    // private System.Void HandleDifficultySegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellIdx)
    // Offset: 0x11C77C4
    void HandleDifficultySegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellIdx);
    // public System.Void SetData(IDifficultyBeatmap[] difficultyBeatmaps, BeatmapDifficulty selectedDifficulty)
    // Offset: 0x11C7868
    void SetData(::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps, GlobalNamespace::BeatmapDifficulty selectedDifficulty);
    // public System.Void .ctor()
    // Offset: 0x11C7AF8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDifficultySegmentedControlController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapDifficultySegmentedControlController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDifficultySegmentedControlController*, creationType>()));
    }
  }; // BeatmapDifficultySegmentedControlController
  #pragma pack(pop)
  static check_size<sizeof(BeatmapDifficultySegmentedControlController), 48 + sizeof(GlobalNamespace::BeatmapDifficulty)> __GlobalNamespace_BeatmapDifficultySegmentedControlControllerSizeCheck;
  static_assert(sizeof(BeatmapDifficultySegmentedControlController) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDifficultySegmentedControlController*, "", "BeatmapDifficultySegmentedControlController");
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultySegmentedControlController::add_didSelectDifficultyEvent
// Il2CppName: add_didSelectDifficultyEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDifficultySegmentedControlController::*)(System::Action_2<GlobalNamespace::BeatmapDifficultySegmentedControlController*, GlobalNamespace::BeatmapDifficulty>*)>(&GlobalNamespace::BeatmapDifficultySegmentedControlController::add_didSelectDifficultyEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapDifficultySegmentedControlController"), ::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultySegmentedControlController*), "add_didSelectDifficultyEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultySegmentedControlController::remove_didSelectDifficultyEvent
// Il2CppName: remove_didSelectDifficultyEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDifficultySegmentedControlController::*)(System::Action_2<GlobalNamespace::BeatmapDifficultySegmentedControlController*, GlobalNamespace::BeatmapDifficulty>*)>(&GlobalNamespace::BeatmapDifficultySegmentedControlController::remove_didSelectDifficultyEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapDifficultySegmentedControlController"), ::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultySegmentedControlController*), "remove_didSelectDifficultyEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultySegmentedControlController::get_selectedDifficulty
// Il2CppName: get_selectedDifficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapDifficulty (GlobalNamespace::BeatmapDifficultySegmentedControlController::*)()>(&GlobalNamespace::BeatmapDifficultySegmentedControlController::get_selectedDifficulty)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultySegmentedControlController*), "get_selectedDifficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultySegmentedControlController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDifficultySegmentedControlController::*)()>(&GlobalNamespace::BeatmapDifficultySegmentedControlController::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultySegmentedControlController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultySegmentedControlController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDifficultySegmentedControlController::*)()>(&GlobalNamespace::BeatmapDifficultySegmentedControlController::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultySegmentedControlController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultySegmentedControlController::GetClosestDifficultyIndex
// Il2CppName: GetClosestDifficultyIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapDifficultySegmentedControlController::*)(GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::BeatmapDifficultySegmentedControlController::GetClosestDifficultyIndex)> {
  const MethodInfo* get() {
    static auto* searchDifficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultySegmentedControlController*), "GetClosestDifficultyIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{searchDifficulty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultySegmentedControlController::HandleDifficultySegmentedControlDidSelectCell
// Il2CppName: HandleDifficultySegmentedControlDidSelectCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDifficultySegmentedControlController::*)(HMUI::SegmentedControl*, int)>(&GlobalNamespace::BeatmapDifficultySegmentedControlController::HandleDifficultySegmentedControlDidSelectCell)> {
  const MethodInfo* get() {
    static auto* segmentedControl = &::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl")->byval_arg;
    static auto* cellIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultySegmentedControlController*), "HandleDifficultySegmentedControlDidSelectCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentedControl, cellIdx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultySegmentedControlController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDifficultySegmentedControlController::*)(::Array<GlobalNamespace::IDifficultyBeatmap*>*, GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::BeatmapDifficultySegmentedControlController::SetData)> {
  const MethodInfo* get() {
    static auto* difficultyBeatmaps = &classof(::Array<::Array<GlobalNamespace::IDifficultyBeatmap*>*>*)->byval_arg;
    static auto* selectedDifficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDifficultySegmentedControlController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmaps, selectedDifficulty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDifficultySegmentedControlController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
