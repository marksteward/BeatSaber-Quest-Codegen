// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.ITimeControl
  // [] Offset: FFFFFFFF
  class ITimeControl {
    public:
    // Creating value type constructor for type: ITimeControl
    ITimeControl() noexcept {}
    // public System.Void SetTime(System.Double time)
    // Offset: 0xFFFFFFFF
    void SetTime(double time);
    // public System.Void OnControlTimeStart()
    // Offset: 0xFFFFFFFF
    void OnControlTimeStart();
    // public System.Void OnControlTimeStop()
    // Offset: 0xFFFFFFFF
    void OnControlTimeStop();
  }; // UnityEngine.Timeline.ITimeControl
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ITimeControl*, "UnityEngine.Timeline", "ITimeControl");
