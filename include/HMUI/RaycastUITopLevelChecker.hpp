// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.RaycastResult
#include "UnityEngine/EventSystems/RaycastResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.RaycastUITopLevelChecker
  // [] Offset: FFFFFFFF
  class RaycastUITopLevelChecker : public UnityEngine::MonoBehaviour {
    public:
    // private System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> results
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* results;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>*) == 0x8);
    // private UnityEngine.Canvas _canvas
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Canvas* canvas;
    // Field size check
    static_assert(sizeof(UnityEngine::Canvas*) == 0x8);
    // Creating value type constructor for type: RaycastUITopLevelChecker
    RaycastUITopLevelChecker(System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* results_ = {}, UnityEngine::Canvas* canvas_ = {}) noexcept : results{results_}, canvas{canvas_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x107E33C
    void Awake();
    // public System.Boolean get_isOnTop()
    // Offset: 0x107E3C4
    bool get_isOnTop();
    // public System.Void .ctor()
    // Offset: 0x107E5E4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RaycastUITopLevelChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::RaycastUITopLevelChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RaycastUITopLevelChecker*, creationType>()));
    }
  }; // HMUI.RaycastUITopLevelChecker
  static check_size<sizeof(RaycastUITopLevelChecker), 32 + sizeof(UnityEngine::Canvas*)> __HMUI_RaycastUITopLevelCheckerSizeCheck;
  static_assert(sizeof(RaycastUITopLevelChecker) == 0x28);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(HMUI::RaycastUITopLevelChecker*, "HMUI", "RaycastUITopLevelChecker");
