// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LineTriangleIntersection
  // [] Offset: FFFFFFFF
  class LineTriangleIntersection : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: LineTriangleIntersection
    LineTriangleIntersection() noexcept {}
    // static public System.Boolean Intersects(UnityEngine.Ray ray, UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, UnityEngine.Vector3 p2)
    // Offset: 0x103781C
    static bool Intersects(UnityEngine::Ray ray, UnityEngine::Vector3 p0, UnityEngine::Vector3 p1, UnityEngine::Vector3 p2);
    // public System.Void .ctor()
    // Offset: 0x1037824
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LineTriangleIntersection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LineTriangleIntersection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LineTriangleIntersection*, creationType>()));
    }
  }; // LineTriangleIntersection
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LineTriangleIntersection*, "", "LineTriangleIntersection");
