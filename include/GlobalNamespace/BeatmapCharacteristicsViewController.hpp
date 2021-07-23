// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Forward declaring type: BeatmapCharacteristicsTableView
  class BeatmapCharacteristicsTableView;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCharacteristicsViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapCharacteristicsViewController : public HMUI::ViewController {
    public:
    // private BeatmapCharacteristicsTableView _beatmapCharacteristicsTableView
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::BeatmapCharacteristicsTableView* beatmapCharacteristicsTableView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicsTableView*) == 0x8);
    // private System.Action`1<BeatmapCharacteristicSO> didSelectBeatmapCharacteristicEvent
    // Size: 0x8
    // Offset: 0x78
    System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* didSelectBeatmapCharacteristicEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicCollectionSO*) == 0x8);
    // private System.Int32 _selectedBeatmapCharacteristicNum
    // Size: 0x4
    // Offset: 0x88
    int selectedBeatmapCharacteristicNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BeatmapCharacteristicsViewController
    BeatmapCharacteristicsViewController(GlobalNamespace::BeatmapCharacteristicsTableView* beatmapCharacteristicsTableView_ = {}, System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* didSelectBeatmapCharacteristicEvent_ = {}, GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection_ = {}, int selectedBeatmapCharacteristicNum_ = {}) noexcept : beatmapCharacteristicsTableView{beatmapCharacteristicsTableView_}, didSelectBeatmapCharacteristicEvent{didSelectBeatmapCharacteristicEvent_}, beatmapCharacteristicCollection{beatmapCharacteristicCollection_}, selectedBeatmapCharacteristicNum{selectedBeatmapCharacteristicNum_} {}
    // Get instance field: private BeatmapCharacteristicsTableView _beatmapCharacteristicsTableView
    GlobalNamespace::BeatmapCharacteristicsTableView* _get__beatmapCharacteristicsTableView();
    // Set instance field: private BeatmapCharacteristicsTableView _beatmapCharacteristicsTableView
    void _set__beatmapCharacteristicsTableView(GlobalNamespace::BeatmapCharacteristicsTableView* value);
    // Get instance field: private System.Action`1<BeatmapCharacteristicSO> didSelectBeatmapCharacteristicEvent
    System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* _get_didSelectBeatmapCharacteristicEvent();
    // Set instance field: private System.Action`1<BeatmapCharacteristicSO> didSelectBeatmapCharacteristicEvent
    void _set_didSelectBeatmapCharacteristicEvent(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // Get instance field: private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    GlobalNamespace::BeatmapCharacteristicCollectionSO* _get__beatmapCharacteristicCollection();
    // Set instance field: private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    void _set__beatmapCharacteristicCollection(GlobalNamespace::BeatmapCharacteristicCollectionSO* value);
    // Get instance field: private System.Int32 _selectedBeatmapCharacteristicNum
    int _get__selectedBeatmapCharacteristicNum();
    // Set instance field: private System.Int32 _selectedBeatmapCharacteristicNum
    void _set__selectedBeatmapCharacteristicNum(int value);
    // public BeatmapCharacteristicCollectionSO get_beatmapCharacteristicCollection()
    // Offset: 0x118D040
    GlobalNamespace::BeatmapCharacteristicCollectionSO* get_beatmapCharacteristicCollection();
    // public BeatmapCharacteristicSO get_selectedBeatmapCharacteristic()
    // Offset: 0x118D048
    GlobalNamespace::BeatmapCharacteristicSO* get_selectedBeatmapCharacteristic();
    // public System.Void add_didSelectBeatmapCharacteristicEvent(System.Action`1<BeatmapCharacteristicSO> value)
    // Offset: 0x118CEF8
    void add_didSelectBeatmapCharacteristicEvent(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void remove_didSelectBeatmapCharacteristicEvent(System.Action`1<BeatmapCharacteristicSO> value)
    // Offset: 0x118CF9C
    void remove_didSelectBeatmapCharacteristicEvent(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void SetData(BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection, System.Int32 selectedCharacteristicNum)
    // Offset: 0x118D268
    void SetData(GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection, int selectedCharacteristicNum);
    // private System.Void HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic(BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x118D2C8
    void HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // public System.Void .ctor()
    // Offset: 0x118D3E4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCharacteristicsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapCharacteristicsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCharacteristicsViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x118D108
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x118D1C0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // BeatmapCharacteristicsViewController
  #pragma pack(pop)
  static check_size<sizeof(BeatmapCharacteristicsViewController), 136 + sizeof(int)> __GlobalNamespace_BeatmapCharacteristicsViewControllerSizeCheck;
  static_assert(sizeof(BeatmapCharacteristicsViewController) == 0x8C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicsViewController*, "", "BeatmapCharacteristicsViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsViewController::get_beatmapCharacteristicCollection
// Il2CppName: get_beatmapCharacteristicCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicCollectionSO* (GlobalNamespace::BeatmapCharacteristicsViewController::*)()>(&GlobalNamespace::BeatmapCharacteristicsViewController::get_beatmapCharacteristicCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsViewController*), "get_beatmapCharacteristicCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsViewController::get_selectedBeatmapCharacteristic
// Il2CppName: get_selectedBeatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::BeatmapCharacteristicsViewController::*)()>(&GlobalNamespace::BeatmapCharacteristicsViewController::get_selectedBeatmapCharacteristic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsViewController*), "get_selectedBeatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsViewController::add_didSelectBeatmapCharacteristicEvent
// Il2CppName: add_didSelectBeatmapCharacteristicEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsViewController::*)(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>*)>(&GlobalNamespace::BeatmapCharacteristicsViewController::add_didSelectBeatmapCharacteristicEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsViewController*), "add_didSelectBeatmapCharacteristicEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsViewController::remove_didSelectBeatmapCharacteristicEvent
// Il2CppName: remove_didSelectBeatmapCharacteristicEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsViewController::*)(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>*)>(&GlobalNamespace::BeatmapCharacteristicsViewController::remove_didSelectBeatmapCharacteristicEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsViewController*), "remove_didSelectBeatmapCharacteristicEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsViewController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsViewController::*)(GlobalNamespace::BeatmapCharacteristicCollectionSO*, int)>(&GlobalNamespace::BeatmapCharacteristicsViewController::SetData)> {
  static const MethodInfo* get() {
    static auto* beatmapCharacteristicCollection = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicCollectionSO")->byval_arg;
    static auto* selectedCharacteristicNum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsViewController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapCharacteristicCollection, selectedCharacteristicNum});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsViewController::HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic
// Il2CppName: HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsViewController::*)(GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::BeatmapCharacteristicsViewController::HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic)> {
  static const MethodInfo* get() {
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsViewController*), "HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapCharacteristic});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsViewController::*)(bool, bool, bool)>(&GlobalNamespace::BeatmapCharacteristicsViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCharacteristicsViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCharacteristicsViewController::*)(bool, bool)>(&GlobalNamespace::BeatmapCharacteristicsViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCharacteristicsViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
