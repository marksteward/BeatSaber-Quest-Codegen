// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LeaderboardViewController
#include "GlobalNamespace/LeaderboardViewController.hpp"
// Including type: LeaderboardTableView
#include "GlobalNamespace/LeaderboardTableView.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: LoadingControl
  class LoadingControl;
  // Forward declaring type: NetEaseManager
  class NetEaseManager;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x9A
  #pragma pack(push, 1)
  // Autogenerated type: NetEaseLeaderboardViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class NetEaseLeaderboardViewController : public GlobalNamespace::LeaderboardViewController {
    public:
    // Nested type: GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14
    class $RefreshDelayed$d__14;
    // Nested type: GlobalNamespace::NetEaseLeaderboardViewController::$LoadScoresAsync$d__15
    struct $LoadScoresAsync$d__15;
    // private LeaderboardTableView _leaderboardTableView
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::LeaderboardTableView* leaderboardTableView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LeaderboardTableView*) == 0x8);
    // private LoadingControl _loadingControl
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::LoadingControl* loadingControl;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LoadingControl*) == 0x8);
    // [InjectAttribute] Offset: 0xDFE624
    // private NetEaseManager _netEaseManager
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::NetEaseManager* netEaseManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetEaseManager*) == 0x8);
    // private System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    // Size: 0x8
    // Offset: 0x88
    System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* scores;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>*) == 0x8);
    // private IDifficultyBeatmap _difficultyBeatmap
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private System.Boolean _refreshIsNeeded
    // Size: 0x1
    // Offset: 0x98
    bool refreshIsNeeded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hasScoresData
    // Size: 0x1
    // Offset: 0x99
    bool hasScoresData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NetEaseLeaderboardViewController
    NetEaseLeaderboardViewController(GlobalNamespace::LeaderboardTableView* leaderboardTableView_ = {}, GlobalNamespace::LoadingControl* loadingControl_ = {}, GlobalNamespace::NetEaseManager* netEaseManager_ = {}, System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* scores_ = {}, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap_ = {}, bool refreshIsNeeded_ = {}, bool hasScoresData_ = {}) noexcept : leaderboardTableView{leaderboardTableView_}, loadingControl{loadingControl_}, netEaseManager{netEaseManager_}, scores{scores_}, difficultyBeatmap{difficultyBeatmap_}, refreshIsNeeded{refreshIsNeeded_}, hasScoresData{hasScoresData_} {}
    // Get instance field: private LeaderboardTableView _leaderboardTableView
    GlobalNamespace::LeaderboardTableView* _get__leaderboardTableView();
    // Set instance field: private LeaderboardTableView _leaderboardTableView
    void _set__leaderboardTableView(GlobalNamespace::LeaderboardTableView* value);
    // Get instance field: private LoadingControl _loadingControl
    GlobalNamespace::LoadingControl* _get__loadingControl();
    // Set instance field: private LoadingControl _loadingControl
    void _set__loadingControl(GlobalNamespace::LoadingControl* value);
    // Get instance field: private NetEaseManager _netEaseManager
    GlobalNamespace::NetEaseManager* _get__netEaseManager();
    // Set instance field: private NetEaseManager _netEaseManager
    void _set__netEaseManager(GlobalNamespace::NetEaseManager* value);
    // Get instance field: private System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* _get__scores();
    // Set instance field: private System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    void _set__scores(System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* value);
    // Get instance field: private IDifficultyBeatmap _difficultyBeatmap
    GlobalNamespace::IDifficultyBeatmap* _get__difficultyBeatmap();
    // Set instance field: private IDifficultyBeatmap _difficultyBeatmap
    void _set__difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap* value);
    // Get instance field: private System.Boolean _refreshIsNeeded
    bool _get__refreshIsNeeded();
    // Set instance field: private System.Boolean _refreshIsNeeded
    void _set__refreshIsNeeded(bool value);
    // Get instance field: private System.Boolean _hasScoresData
    bool _get__hasScoresData();
    // Set instance field: private System.Boolean _hasScoresData
    void _set__hasScoresData(bool value);
    // private System.Void HandleLoadingControlDidPressRefreshButton()
    // Offset: 0x101033C
    void HandleLoadingControlDidPressRefreshButton();
    // public System.Void Refresh()
    // Offset: 0x100F95C
    void Refresh();
    // private System.Void Refresh(System.Boolean showLoadingIndicator, System.Boolean clear)
    // Offset: 0x100FFD0
    void Refresh(bool showLoadingIndicator, bool clear);
    // private System.Collections.IEnumerator RefreshDelayed(System.Boolean showLoadingIndicator, System.Boolean clear)
    // Offset: 0x10103BC
    System::Collections::IEnumerator* RefreshDelayed(bool showLoadingIndicator, bool clear);
    // private System.Void LoadScoresAsync()
    // Offset: 0x1010478
    void LoadScoresAsync();
    // private System.Void ClearContent()
    // Offset: 0x1010348
    void ClearContent();
    // public System.Void .ctor()
    // Offset: 0x1010538
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetEaseLeaderboardViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetEaseLeaderboardViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetEaseLeaderboardViewController*, creationType>()));
    }
    // public override System.Void SetData(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x100FF98
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::SetData(IDifficultyBeatmap difficultyBeatmap)
    void SetData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1010170
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1010234
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x1010260
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
  }; // NetEaseLeaderboardViewController
  #pragma pack(pop)
  static check_size<sizeof(NetEaseLeaderboardViewController), 153 + sizeof(bool)> __GlobalNamespace_NetEaseLeaderboardViewControllerSizeCheck;
  static_assert(sizeof(NetEaseLeaderboardViewController) == 0x9A);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseLeaderboardViewController*, "", "NetEaseLeaderboardViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::HandleLoadingControlDidPressRefreshButton
// Il2CppName: HandleLoadingControlDidPressRefreshButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseLeaderboardViewController::*)()>(&GlobalNamespace::NetEaseLeaderboardViewController::HandleLoadingControlDidPressRefreshButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLeaderboardViewController*), "HandleLoadingControlDidPressRefreshButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseLeaderboardViewController::*)()>(&GlobalNamespace::NetEaseLeaderboardViewController::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLeaderboardViewController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseLeaderboardViewController::*)(bool, bool)>(&GlobalNamespace::NetEaseLeaderboardViewController::Refresh)> {
  static const MethodInfo* get() {
    static auto* showLoadingIndicator = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* clear = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLeaderboardViewController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{showLoadingIndicator, clear});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::RefreshDelayed
// Il2CppName: RefreshDelayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::NetEaseLeaderboardViewController::*)(bool, bool)>(&GlobalNamespace::NetEaseLeaderboardViewController::RefreshDelayed)> {
  static const MethodInfo* get() {
    static auto* showLoadingIndicator = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* clear = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLeaderboardViewController*), "RefreshDelayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{showLoadingIndicator, clear});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::LoadScoresAsync
// Il2CppName: LoadScoresAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseLeaderboardViewController::*)()>(&GlobalNamespace::NetEaseLeaderboardViewController::LoadScoresAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLeaderboardViewController*), "LoadScoresAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::ClearContent
// Il2CppName: ClearContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseLeaderboardViewController::*)()>(&GlobalNamespace::NetEaseLeaderboardViewController::ClearContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLeaderboardViewController*), "ClearContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseLeaderboardViewController::*)(GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::NetEaseLeaderboardViewController::SetData)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLeaderboardViewController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseLeaderboardViewController::*)(bool, bool, bool)>(&GlobalNamespace::NetEaseLeaderboardViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLeaderboardViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseLeaderboardViewController::*)(bool, bool)>(&GlobalNamespace::NetEaseLeaderboardViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLeaderboardViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseLeaderboardViewController::*)()>(&GlobalNamespace::NetEaseLeaderboardViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLeaderboardViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
