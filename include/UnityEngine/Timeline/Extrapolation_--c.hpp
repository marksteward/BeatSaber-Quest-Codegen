// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.Extrapolation
#include "UnityEngine/Timeline/Extrapolation.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.Extrapolation/<>c
  // [CompilerGeneratedAttribute] Offset: CFD0E0
  class Extrapolation::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.Timeline.Extrapolation/<>c <>9
    static UnityEngine::Timeline::Extrapolation::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Timeline.Extrapolation/<>c <>9
    static void _set_$$9(UnityEngine::Timeline::Extrapolation::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.Timeline.TimelineClip> <>9__2_0
    static System::Comparison_1<UnityEngine::Timeline::TimelineClip*>* _get_$$9__2_0();
    // Set static field: static public System.Comparison`1<UnityEngine.Timeline.TimelineClip> <>9__2_0
    static void _set_$$9__2_0(System::Comparison_1<UnityEngine::Timeline::TimelineClip*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1687FC4
    static void _cctor();
    // System.Int32 <SortClipsByStartTime>b__2_0(UnityEngine.Timeline.TimelineClip clip1, UnityEngine.Timeline.TimelineClip clip2)
    // Offset: 0x1688030
    int $SortClipsByStartTime$b__2_0(UnityEngine::Timeline::TimelineClip* clip1, UnityEngine::Timeline::TimelineClip* clip2);
    // public System.Void .ctor()
    // Offset: 0x1688028
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Extrapolation::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::Extrapolation::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Extrapolation::$$c*, creationType>()));
    }
  }; // UnityEngine.Timeline.Extrapolation/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::Extrapolation::$$c*, "UnityEngine.Timeline", "Extrapolation/<>c");
