// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.GraphicRaycaster
#include "UnityEngine/UI/GraphicRaycaster.hpp"
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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  // Autogenerated type: UnityEngine.UI.GraphicRaycaster/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D7DA00
  class GraphicRaycaster::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.UI.GraphicRaycaster/<>c <>9
    static UnityEngine::UI::GraphicRaycaster::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UI.GraphicRaycaster/<>c <>9
    static void _set_$$9(UnityEngine::UI::GraphicRaycaster::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.UI.Graphic> <>9__24_0
    static System::Comparison_1<UnityEngine::UI::Graphic*>* _get_$$9__24_0();
    // Set static field: static public System.Comparison`1<UnityEngine.UI.Graphic> <>9__24_0
    static void _set_$$9__24_0(System::Comparison_1<UnityEngine::UI::Graphic*>* value);
    // static private System.Void .cctor()
    // Offset: 0x14CB900
    static void _cctor();
    // System.Int32 <Raycast>b__24_0(UnityEngine.UI.Graphic g1, UnityEngine.UI.Graphic g2)
    // Offset: 0x14CB970
    int $Raycast$b__24_0(UnityEngine::UI::Graphic* g1, UnityEngine::UI::Graphic* g2);
    // public System.Void .ctor()
    // Offset: 0x14CB968
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GraphicRaycaster::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::GraphicRaycaster::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GraphicRaycaster::$$c*, creationType>()));
    }
  }; // UnityEngine.UI.GraphicRaycaster/<>c
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::GraphicRaycaster::$$c*, "UnityEngine.UI", "GraphicRaycaster/<>c");
#pragma pack(pop)
