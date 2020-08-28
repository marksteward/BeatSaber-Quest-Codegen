// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteController
  class NoteController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextMesh
  class TextMesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteVisualDebuger
  class NoteVisualDebuger : public UnityEngine::MonoBehaviour {
    public:
    // private NoteController _noteController
    // Offset: 0x18
    GlobalNamespace::NoteController* noteController;
    // private UnityEngine.TextMesh _text
    // Offset: 0x20
    UnityEngine::TextMesh* text;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // protected System.Void Update()
    // Offset: 0xC32BD4
    void Update();
    // public System.Void .ctor()
    // Offset: 0xC32EC8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NoteVisualDebuger* New_ctor();
  }; // NoteVisualDebuger
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteVisualDebuger*, "", "NoteVisualDebuger");
#pragma pack(pop)
