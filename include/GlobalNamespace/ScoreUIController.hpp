// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScoreController
  class ScoreController;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ScoreUIController
  class ScoreUIController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ScoreUIController::InitData
    class InitData;
    // Nested type: GlobalNamespace::ScoreUIController::ScoreDisplayType
    struct ScoreDisplayType;
    // private TMPro.TextMeshProUGUI _scoreText
    // Offset: 0x18
    TMPro::TextMeshProUGUI* scoreText;
    // private ScoreUIController/InitData _initData
    // Offset: 0x20
    GlobalNamespace::ScoreUIController::InitData* initData;
    // private ScoreController _scoreController
    // Offset: 0x28
    GlobalNamespace::ScoreController* scoreController;
    // private System.Text.StringBuilder _stringBuilder
    // Offset: 0x30
    System::Text::StringBuilder* stringBuilder;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // static field const value: static private System.Int32 kMaxNumberOfDigits
    static constexpr const int kMaxNumberOfDigits = 9;
    // Get static field: static private System.Int32 kMaxNumberOfDigits
    static int _get_kMaxNumberOfDigits();
    // Set static field: static private System.Int32 kMaxNumberOfDigits
    static void _set_kMaxNumberOfDigits(int value);
    // protected System.Void Start()
    // Offset: 0xC2D8C0
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0xC2DC60
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xC2DC64
    void OnDisable();
    // private System.Void RegisterForEvents()
    // Offset: 0xC2D944
    void RegisterForEvents();
    // private System.Void UnregisterFromEvents()
    // Offset: 0xC2DC68
    void UnregisterFromEvents();
    // private System.Void HandleScoreDidChangeRealtime(System.Int32 rawScore, System.Int32 modifiedScore)
    // Offset: 0xC2DD40
    void HandleScoreDidChangeRealtime(int rawScore, int modifiedScore);
    // protected System.Void UpdateScore(System.Int32 rawScore, System.Int32 modifiedScore)
    // Offset: 0xC2DA58
    void UpdateScore(int rawScore, int modifiedScore);
    // private System.Void Append000Number(System.Text.StringBuilder stringBuilder, System.Int32 number)
    // Offset: 0xC2DD44
    void Append000Number(System::Text::StringBuilder* stringBuilder, int number);
    // public System.Void .ctor()
    // Offset: 0xC2DDF4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ScoreUIController* New_ctor();
  }; // ScoreUIController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreUIController*, "", "ScoreUIController");
#pragma pack(pop)
