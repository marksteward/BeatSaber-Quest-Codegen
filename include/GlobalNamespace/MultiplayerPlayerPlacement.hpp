// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerPlayerLayout
  struct MultiplayerPlayerLayout;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerPlayerPlacement
  class MultiplayerPlayerPlacement : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::MultiplayerPlayerPlacement::$$c
    class $$c;
    // Creating value type constructor for type: MultiplayerPlayerPlacement
    MultiplayerPlayerPlacement() noexcept {}
    // static public UnityEngine.Vector3 GetPlayerWorldPosition(System.Single outerCircleRadius, System.Single outerCirclePositionAngle, MultiplayerPlayerLayout layout)
    // Offset: 0x100A1F0
    static UnityEngine::Vector3 GetPlayerWorldPosition(float outerCircleRadius, float outerCirclePositionAngle, GlobalNamespace::MultiplayerPlayerLayout layout);
    // static public System.Single GetOuterCirclePositionAngleForPlayer(System.Int32 playerIndex, System.Int32 localPlayerIndex, System.Single angleBetweenPlayers)
    // Offset: 0x100A3AC
    static float GetOuterCirclePositionAngleForPlayer(int playerIndex, int localPlayerIndex, float angleBetweenPlayers);
    // static public System.Single GetOuterCircleRadius(System.Single angleBetweenPlayers, System.Single innerCircleRadius)
    // Offset: 0x100A3BC
    static float GetOuterCircleRadius(float angleBetweenPlayers, float innerCircleRadius);
    // static public System.Single GetAngleBetweenPlayersWithEvenAdjustment(System.Int32 numberOfPlayers, MultiplayerPlayerLayout layout)
    // Offset: 0x100A454
    static float GetAngleBetweenPlayersWithEvenAdjustment(int numberOfPlayers, GlobalNamespace::MultiplayerPlayerLayout layout);
    // static public System.Void SortPlayers(System.Collections.Generic.List`1<IConnectedPlayer> players)
    // Offset: 0x100A480
    static void SortPlayers(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* players);
    // static public System.Int32 GetLocalPlayerIndex(System.Collections.Generic.IList`1<IConnectedPlayer> otherPlayers, IConnectedPlayer localPlayer)
    // Offset: 0x100A574
    static int GetLocalPlayerIndex(System::Collections::Generic::IList_1<GlobalNamespace::IConnectedPlayer*>* otherPlayers, GlobalNamespace::IConnectedPlayer* localPlayer);
  }; // MultiplayerPlayerPlacement
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPlayerPlacement*, "", "MultiplayerPlayerPlacement");
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPlayerPlacement::GetPlayerWorldPosition
// Il2CppName: GetPlayerWorldPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(float, float, GlobalNamespace::MultiplayerPlayerLayout)>(&GlobalNamespace::MultiplayerPlayerPlacement::GetPlayerWorldPosition)> {
  const MethodInfo* get() {
    static auto* outerCircleRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* outerCirclePositionAngle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layout = &::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerLayout")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPlayerPlacement*), "GetPlayerWorldPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outerCircleRadius, outerCirclePositionAngle, layout});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPlayerPlacement::GetOuterCirclePositionAngleForPlayer
// Il2CppName: GetOuterCirclePositionAngleForPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(int, int, float)>(&GlobalNamespace::MultiplayerPlayerPlacement::GetOuterCirclePositionAngleForPlayer)> {
  const MethodInfo* get() {
    static auto* playerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* localPlayerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* angleBetweenPlayers = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPlayerPlacement*), "GetOuterCirclePositionAngleForPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerIndex, localPlayerIndex, angleBetweenPlayers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPlayerPlacement::GetOuterCircleRadius
// Il2CppName: GetOuterCircleRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&GlobalNamespace::MultiplayerPlayerPlacement::GetOuterCircleRadius)> {
  const MethodInfo* get() {
    static auto* angleBetweenPlayers = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* innerCircleRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPlayerPlacement*), "GetOuterCircleRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{angleBetweenPlayers, innerCircleRadius});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPlayerPlacement::GetAngleBetweenPlayersWithEvenAdjustment
// Il2CppName: GetAngleBetweenPlayersWithEvenAdjustment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(int, GlobalNamespace::MultiplayerPlayerLayout)>(&GlobalNamespace::MultiplayerPlayerPlacement::GetAngleBetweenPlayersWithEvenAdjustment)> {
  const MethodInfo* get() {
    static auto* numberOfPlayers = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* layout = &::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerLayout")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPlayerPlacement*), "GetAngleBetweenPlayersWithEvenAdjustment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numberOfPlayers, layout});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPlayerPlacement::SortPlayers
// Il2CppName: SortPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>*)>(&GlobalNamespace::MultiplayerPlayerPlacement::SortPlayers)> {
  const MethodInfo* get() {
    static auto* players = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPlayerPlacement*), "SortPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{players});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerPlayerPlacement::GetLocalPlayerIndex
// Il2CppName: GetLocalPlayerIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::Collections::Generic::IList_1<GlobalNamespace::IConnectedPlayer*>*, GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerPlayerPlacement::GetLocalPlayerIndex)> {
  const MethodInfo* get() {
    static auto* otherPlayers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")})->byval_arg;
    static auto* localPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerPlayerPlacement*), "GetLocalPlayerIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{otherPlayers, localPlayer});
  }
};
