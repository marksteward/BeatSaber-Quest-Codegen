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
  // Forward declaring type: MissionNode
  class MissionNode;
  // Forward declaring type: MissionStagesManager
  class MissionStagesManager;
  // Forward declaring type: CampaignProgressModel
  class CampaignProgressModel;
  // Forward declaring type: MissionNodeConnection
  class MissionNodeConnection;
  // Forward declaring type: MissionNodeVisualController
  class MissionNodeVisualController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x59
  #pragma pack(push, 1)
  // Autogenerated type: MissionNodesManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionNodesManager : public UnityEngine::MonoBehaviour {
    public:
    // private MissionNode _rootMissionNode
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionNode* rootMissionNode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNode*) == 0x8);
    // private MissionNode _finalMissionNode
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MissionNode* finalMissionNode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNode*) == 0x8);
    // private MissionStagesManager _missionStagesManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MissionStagesManager* missionStagesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionStagesManager*) == 0x8);
    // private UnityEngine.GameObject _connectionsParentObject
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* connectionsParentObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _missionNodesParentObject
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::GameObject* missionNodesParentObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0xE0D94C
    // private CampaignProgressModel _missionProgressModel
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::CampaignProgressModel* missionProgressModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CampaignProgressModel*) == 0x8);
    // private MissionNodeConnection[] _allMissionNodeConnections
    // Size: 0x8
    // Offset: 0x48
    ::Array<GlobalNamespace::MissionNodeConnection*>* allMissionNodeConnections;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MissionNodeConnection*>*) == 0x8);
    // private MissionNode[] _allMissionNodes
    // Size: 0x8
    // Offset: 0x50
    ::Array<GlobalNamespace::MissionNode*>* allMissionNodes;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MissionNode*>*) == 0x8);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x58
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MissionNodesManager
    MissionNodesManager(GlobalNamespace::MissionNode* rootMissionNode_ = {}, GlobalNamespace::MissionNode* finalMissionNode_ = {}, GlobalNamespace::MissionStagesManager* missionStagesManager_ = {}, UnityEngine::GameObject* connectionsParentObject_ = {}, UnityEngine::GameObject* missionNodesParentObject_ = {}, GlobalNamespace::CampaignProgressModel* missionProgressModel_ = {}, ::Array<GlobalNamespace::MissionNodeConnection*>* allMissionNodeConnections_ = {}, ::Array<GlobalNamespace::MissionNode*>* allMissionNodes_ = {}, bool isInitialized_ = {}) noexcept : rootMissionNode{rootMissionNode_}, finalMissionNode{finalMissionNode_}, missionStagesManager{missionStagesManager_}, connectionsParentObject{connectionsParentObject_}, missionNodesParentObject{missionNodesParentObject_}, missionProgressModel{missionProgressModel_}, allMissionNodeConnections{allMissionNodeConnections_}, allMissionNodes{allMissionNodes_}, isInitialized{isInitialized_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public MissionNode get_rootMissionNode()
    // Offset: 0x1136410
    GlobalNamespace::MissionNode* get_rootMissionNode();
    // public MissionNode get_finalMissionNode()
    // Offset: 0x1136418
    GlobalNamespace::MissionNode* get_finalMissionNode();
    // public MissionStagesManager get_missionStagesManager()
    // Offset: 0x1136420
    GlobalNamespace::MissionStagesManager* get_missionStagesManager();
    // public CampaignProgressModel get_missionProgressModel()
    // Offset: 0x1136428
    GlobalNamespace::CampaignProgressModel* get_missionProgressModel();
    // public MissionNode[] get_allMissionNodes()
    // Offset: 0x1136430
    ::Array<GlobalNamespace::MissionNode*>* get_allMissionNodes();
    // public System.Boolean get_IsInitialized()
    // Offset: 0x1136438
    bool get_IsInitialized();
    // protected System.Void Awake()
    // Offset: 0x1136440
    void Awake();
    // public System.Void SetupNodeMap()
    // Offset: 0x1133C18
    void SetupNodeMap();
    // public System.Boolean MissionWasCleared(MissionNode missionNode)
    // Offset: 0x11368B0
    bool MissionWasCleared(GlobalNamespace::MissionNode* missionNode);
    // public MissionNode GetMissionNodeWithModelClearedStateInconsistency()
    // Offset: 0x1133820
    GlobalNamespace::MissionNode* GetMissionNodeWithModelClearedStateInconsistency();
    // public System.Boolean DidFirstLockedMissionStageChange()
    // Offset: 0x1134ACC
    bool DidFirstLockedMissionStageChange();
    // public System.Void UpdateStageLockText()
    // Offset: 0x1134A8C
    void UpdateStageLockText();
    // public MissionNode GetTopMostNotClearedMissionNode()
    // Offset: 0x11339C0
    GlobalNamespace::MissionNode* GetTopMostNotClearedMissionNode();
    // private System.Void GetAllMissionNodes()
    // Offset: 0x1136478
    void GetAllMissionNodes();
    // private System.Collections.Generic.HashSet`1<MissionNode> GetAllMissionNodes(MissionNode node, System.Collections.Generic.HashSet`1<MissionNode> visited)
    // Offset: 0x1136A78
    System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode*>* GetAllMissionNodes(GlobalNamespace::MissionNode* node, System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode*>* visited);
    // public MissionNodeConnection[] GetNewEnabledConnection()
    // Offset: 0x1134760
    ::Array<GlobalNamespace::MissionNodeConnection*>* GetNewEnabledConnection();
    // private System.Void ResetAllNodes()
    // Offset: 0x11365E0
    void ResetAllNodes();
    // private System.Void SetupStages()
    // Offset: 0x1136648
    void SetupStages();
    // private System.Void RegisterAllNodes()
    // Offset: 0x113650C
    void RegisterAllNodes();
    // private System.Void SetupNodeTree(MissionNodeVisualController node, System.Boolean parentCleared)
    // Offset: 0x11366B0
    void SetupNodeTree(GlobalNamespace::MissionNodeVisualController* node, bool parentCleared);
    // private System.Boolean IsNodeInteractable(MissionNodeVisualController node, System.Boolean parentCleared)
    // Offset: 0x1136B68
    bool IsNodeInteractable(GlobalNamespace::MissionNodeVisualController* node, bool parentCleared);
    // private System.Void SetupNodeConnections()
    // Offset: 0x11367E0
    void SetupNodeConnections();
    // public System.Void .ctor()
    // Offset: 0x1136C78
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionNodesManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionNodesManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionNodesManager*, creationType>()));
    }
  }; // MissionNodesManager
  #pragma pack(pop)
  static check_size<sizeof(MissionNodesManager), 88 + sizeof(bool)> __GlobalNamespace_MissionNodesManagerSizeCheck;
  static_assert(sizeof(MissionNodesManager) == 0x59);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodesManager*, "", "MissionNodesManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::get_rootMissionNode
// Il2CppName: get_rootMissionNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionNode* (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::get_rootMissionNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "get_rootMissionNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::get_finalMissionNode
// Il2CppName: get_finalMissionNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionNode* (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::get_finalMissionNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "get_finalMissionNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::get_missionStagesManager
// Il2CppName: get_missionStagesManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionStagesManager* (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::get_missionStagesManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "get_missionStagesManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::get_missionProgressModel
// Il2CppName: get_missionProgressModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::CampaignProgressModel* (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::get_missionProgressModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "get_missionProgressModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::get_allMissionNodes
// Il2CppName: get_allMissionNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::MissionNode*>* (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::get_allMissionNodes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "get_allMissionNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::get_IsInitialized
// Il2CppName: get_IsInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::get_IsInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "get_IsInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::SetupNodeMap
// Il2CppName: SetupNodeMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::SetupNodeMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "SetupNodeMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::MissionWasCleared
// Il2CppName: MissionWasCleared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionNodesManager::*)(GlobalNamespace::MissionNode*)>(&GlobalNamespace::MissionNodesManager::MissionWasCleared)> {
  static const MethodInfo* get() {
    static auto* missionNode = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "MissionWasCleared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionNode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::GetMissionNodeWithModelClearedStateInconsistency
// Il2CppName: GetMissionNodeWithModelClearedStateInconsistency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionNode* (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::GetMissionNodeWithModelClearedStateInconsistency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "GetMissionNodeWithModelClearedStateInconsistency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::DidFirstLockedMissionStageChange
// Il2CppName: DidFirstLockedMissionStageChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::DidFirstLockedMissionStageChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "DidFirstLockedMissionStageChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::UpdateStageLockText
// Il2CppName: UpdateStageLockText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::UpdateStageLockText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "UpdateStageLockText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::GetTopMostNotClearedMissionNode
// Il2CppName: GetTopMostNotClearedMissionNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionNode* (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::GetTopMostNotClearedMissionNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "GetTopMostNotClearedMissionNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::GetAllMissionNodes
// Il2CppName: GetAllMissionNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::GetAllMissionNodes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "GetAllMissionNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::GetAllMissionNodes
// Il2CppName: GetAllMissionNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode*>* (GlobalNamespace::MissionNodesManager::*)(GlobalNamespace::MissionNode*, System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode*>*)>(&GlobalNamespace::MissionNodesManager::GetAllMissionNodes)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    static auto* visited = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "GetAllMissionNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, visited});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::GetNewEnabledConnection
// Il2CppName: GetNewEnabledConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::MissionNodeConnection*>* (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::GetNewEnabledConnection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "GetNewEnabledConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::ResetAllNodes
// Il2CppName: ResetAllNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::ResetAllNodes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "ResetAllNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::SetupStages
// Il2CppName: SetupStages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::SetupStages)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "SetupStages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::RegisterAllNodes
// Il2CppName: RegisterAllNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::RegisterAllNodes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "RegisterAllNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::SetupNodeTree
// Il2CppName: SetupNodeTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodesManager::*)(GlobalNamespace::MissionNodeVisualController*, bool)>(&GlobalNamespace::MissionNodesManager::SetupNodeTree)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("", "MissionNodeVisualController")->byval_arg;
    static auto* parentCleared = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "SetupNodeTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, parentCleared});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::IsNodeInteractable
// Il2CppName: IsNodeInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionNodesManager::*)(GlobalNamespace::MissionNodeVisualController*, bool)>(&GlobalNamespace::MissionNodesManager::IsNodeInteractable)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("", "MissionNodeVisualController")->byval_arg;
    static auto* parentCleared = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "IsNodeInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, parentCleared});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::SetupNodeConnections
// Il2CppName: SetupNodeConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodesManager::*)()>(&GlobalNamespace::MissionNodesManager::SetupNodeConnections)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodesManager*), "SetupNodeConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodesManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
