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
  // Forward declaring type: MissionNodesManager
  class MissionNodesManager;
  // Forward declaring type: MissionNodeConnection
  class MissionNodeConnection;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
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
  // Autogenerated type: MissionConnectionsGenerator
  // [ExecuteInEditMode] Offset: E11198
  class MissionConnectionsGenerator : public UnityEngine::MonoBehaviour {
    public:
    // private MissionNodesManager _missionNodesManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionNodesManager* missionNodesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNodesManager*) == 0x8);
    // private MissionNodeConnection _nodeConnectionPref
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MissionNodeConnection* nodeConnectionPref;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNodeConnection*) == 0x8);
    // private UnityEngine.GameObject _connectionsCanvas
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GameObject* connectionsCanvas;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Collections.Generic.List`1<MissionNode> _missionNodes
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<GlobalNamespace::MissionNode*>* missionNodes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MissionNode*>*) == 0x8);
    // Creating value type constructor for type: MissionConnectionsGenerator
    MissionConnectionsGenerator(GlobalNamespace::MissionNodesManager* missionNodesManager_ = {}, GlobalNamespace::MissionNodeConnection* nodeConnectionPref_ = {}, UnityEngine::GameObject* connectionsCanvas_ = {}, System::Collections::Generic::List_1<GlobalNamespace::MissionNode*>* missionNodes_ = {}) noexcept : missionNodesManager{missionNodesManager_}, nodeConnectionPref{nodeConnectionPref_}, connectionsCanvas{connectionsCanvas_}, missionNodes{missionNodes_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private MissionNode get__rootMissionNode()
    // Offset: 0x1092FFC
    GlobalNamespace::MissionNode* get__rootMissionNode();
    // private System.Void CreateNodeConnections()
    // Offset: 0x1093018
    void CreateNodeConnections();
    // private System.Void RemoveOldConnections()
    // Offset: 0x10930A0
    void RemoveOldConnections();
    // private System.Void CreateConnections(MissionNode missionNode, System.Collections.Generic.List`1<MissionNode> visitedNodes)
    // Offset: 0x109346C
    void CreateConnections(GlobalNamespace::MissionNode* missionNode, System::Collections::Generic::List_1<GlobalNamespace::MissionNode*>* visitedNodes);
    // private MissionNodeConnection CreateConnectionBetweenNodes(MissionNode parentMissionNode, MissionNode childMissionNode)
    // Offset: 0x1093604
    GlobalNamespace::MissionNodeConnection* CreateConnectionBetweenNodes(GlobalNamespace::MissionNode* parentMissionNode, GlobalNamespace::MissionNode* childMissionNode);
    // public System.Void .ctor()
    // Offset: 0x1093710
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionConnectionsGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionConnectionsGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionConnectionsGenerator*, creationType>()));
    }
  }; // MissionConnectionsGenerator
  #pragma pack(pop)
  static check_size<sizeof(MissionConnectionsGenerator), 48 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::MissionNode*>*)> __GlobalNamespace_MissionConnectionsGeneratorSizeCheck;
  static_assert(sizeof(MissionConnectionsGenerator) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionConnectionsGenerator*, "", "MissionConnectionsGenerator");
// Writing MetadataGetter for method: GlobalNamespace::MissionConnectionsGenerator::get__rootMissionNode
// Il2CppName: get__rootMissionNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionNode* (GlobalNamespace::MissionConnectionsGenerator::*)()>(&GlobalNamespace::MissionConnectionsGenerator::get__rootMissionNode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionConnectionsGenerator*), "get__rootMissionNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionConnectionsGenerator::CreateNodeConnections
// Il2CppName: CreateNodeConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionConnectionsGenerator::*)()>(&GlobalNamespace::MissionConnectionsGenerator::CreateNodeConnections)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionConnectionsGenerator*), "CreateNodeConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionConnectionsGenerator::RemoveOldConnections
// Il2CppName: RemoveOldConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionConnectionsGenerator::*)()>(&GlobalNamespace::MissionConnectionsGenerator::RemoveOldConnections)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionConnectionsGenerator*), "RemoveOldConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionConnectionsGenerator::CreateConnections
// Il2CppName: CreateConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionConnectionsGenerator::*)(GlobalNamespace::MissionNode*, System::Collections::Generic::List_1<GlobalNamespace::MissionNode*>*)>(&GlobalNamespace::MissionConnectionsGenerator::CreateConnections)> {
  const MethodInfo* get() {
    static auto* missionNode = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    static auto* visitedNodes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionConnectionsGenerator*), "CreateConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionNode, visitedNodes});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionConnectionsGenerator::CreateConnectionBetweenNodes
// Il2CppName: CreateConnectionBetweenNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionNodeConnection* (GlobalNamespace::MissionConnectionsGenerator::*)(GlobalNamespace::MissionNode*, GlobalNamespace::MissionNode*)>(&GlobalNamespace::MissionConnectionsGenerator::CreateConnectionBetweenNodes)> {
  const MethodInfo* get() {
    static auto* parentMissionNode = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    static auto* childMissionNode = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionConnectionsGenerator*), "CreateConnectionBetweenNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentMissionNode, childMissionNode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionConnectionsGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
