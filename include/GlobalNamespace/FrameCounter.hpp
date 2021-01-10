// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  // Autogenerated type: FrameCounter
  // [] Offset: FFFFFFFF
  class FrameCounter : public UnityEngine::MonoBehaviour {
    public:
    // private System.Int32 _numberOfFrames
    // Size: 0x4
    // Offset: 0x18
    int numberOfFrames;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FrameCounter
    FrameCounter(int numberOfFrames_ = {}) noexcept : numberOfFrames{numberOfFrames_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Update()
    // Offset: 0x1031244
    void Update();
    // private System.Void OnDestroy()
    // Offset: 0x1031254
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1031308
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FrameCounter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FrameCounter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FrameCounter*, creationType>()));
    }
  }; // FrameCounter
  static check_size<sizeof(FrameCounter), 24 + sizeof(int)> __GlobalNamespace_FrameCounterSizeCheck;
  static_assert(sizeof(FrameCounter) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FrameCounter*, "", "FrameCounter");
#pragma pack(pop)
