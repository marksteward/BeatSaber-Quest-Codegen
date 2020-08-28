// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
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
  // Autogenerated type: LeaderboardEntry
  class LeaderboardEntry : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _scoreText
    // Offset: 0x18
    TMPro::TextMeshProUGUI* scoreText;
    // private TMPro.TextMeshProUGUI _playerNameText
    // Offset: 0x20
    TMPro::TextMeshProUGUI* playerNameText;
    // private TMPro.TextMeshProUGUI _rankText
    // Offset: 0x28
    TMPro::TextMeshProUGUI* rankText;
    // private UnityEngine.Color _color
    // Offset: 0x30
    UnityEngine::Color color;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public System.Void SetScore(System.Int32 score, System.String playerName, System.Int32 rank, System.Boolean highlighted, System.Boolean showSeparator)
    // Offset: 0xB467C8
    void SetScore(int score, ::Il2CppString* playerName, int rank, bool highlighted, bool showSeparator);
    // public System.Void .ctor()
    // Offset: 0xB46968
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LeaderboardEntry* New_ctor();
  }; // LeaderboardEntry
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardEntry*, "", "LeaderboardEntry");
#pragma pack(pop)
