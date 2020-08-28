// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ColorSO
#include "GlobalNamespace/ColorSO.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SimpleColorSO
  class SimpleColorSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultipliedAndAddedColorSO
  class MultipliedAndAddedColorSO : public GlobalNamespace::ColorSO {
    public:
    // private SimpleColorSO _baseColor
    // Offset: 0x18
    GlobalNamespace::SimpleColorSO* baseColor;
    // private UnityEngine.Color _multiplierColor
    // Offset: 0x20
    UnityEngine::Color multiplierColor;
    // private UnityEngine.Color _addColor
    // Offset: 0x30
    UnityEngine::Color addColor;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public override UnityEngine.Color get_color()
    // Offset: 0x1980DD0
    // Implemented from: ColorSO
    // Base method: UnityEngine.Color ColorSO::get_color()
    UnityEngine::Color get_color();
    // public System.Void .ctor()
    // Offset: 0x1980E50
    // Implemented from: ColorSO
    // Base method: System.Void ColorSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultipliedAndAddedColorSO* New_ctor();
  }; // MultipliedAndAddedColorSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultipliedAndAddedColorSO*, "", "MultipliedAndAddedColorSO");
#pragma pack(pop)
