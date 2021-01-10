// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
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
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  // Autogenerated type: UnityEngine.Plane
  // [] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: D4B8D0
  struct Plane/*, public System::ValueType*/ {
    public:
    // private UnityEngine.Vector3 m_Normal
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 m_Normal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single m_Distance
    // Size: 0x4
    // Offset: 0xC
    float m_Distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Plane
    constexpr Plane(UnityEngine::Vector3 m_Normal_ = {}, float m_Distance_ = {}) noexcept : m_Normal{m_Normal_}, m_Distance{m_Distance_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // static field const value: static System.Int32 size
    static constexpr const int size = 16;
    // Get static field: static System.Int32 size
    static int _get_size();
    // Set static field: static System.Int32 size
    static void _set_size(int value);
    // public UnityEngine.Vector3 get_normal()
    // Offset: 0xCA6E2C
    UnityEngine::Vector3 get_normal();
    // public System.Void .ctor(UnityEngine.Vector3 inNormal, UnityEngine.Vector3 inPoint)
    // Offset: 0xCA6E38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Plane(UnityEngine::Vector3 inNormal, UnityEngine::Vector3 inPoint) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Plane::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inNormal, inPoint)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, inNormal, inPoint);
    }
    // public System.Void .ctor(UnityEngine.Vector3 a, UnityEngine.Vector3 b, UnityEngine.Vector3 c)
    // Offset: 0xCA6E40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Plane(UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3 c) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Plane::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(a, b, c)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, a, b, c);
    }
    // public System.Void SetNormalAndPosition(UnityEngine.Vector3 inNormal, UnityEngine.Vector3 inPoint)
    // Offset: 0xCA6E58
    void SetNormalAndPosition(UnityEngine::Vector3 inNormal, UnityEngine::Vector3 inPoint);
    // public UnityEngine.Vector3 ClosestPointOnPlane(UnityEngine.Vector3 point)
    // Offset: 0xCA6E60
    UnityEngine::Vector3 ClosestPointOnPlane(UnityEngine::Vector3 point);
    // public System.Single GetDistanceToPoint(UnityEngine.Vector3 point)
    // Offset: 0xCA6E68
    float GetDistanceToPoint(UnityEngine::Vector3 point);
    // public System.Boolean SameSide(UnityEngine.Vector3 inPt0, UnityEngine.Vector3 inPt1)
    // Offset: 0xCA6E70
    bool SameSide(UnityEngine::Vector3 inPt0, UnityEngine::Vector3 inPt1);
    // public System.Boolean Raycast(UnityEngine.Ray ray, out System.Single enter)
    // Offset: 0xCA6E78
    bool Raycast(UnityEngine::Ray ray, float& enter);
    // public override System.String ToString()
    // Offset: 0xCA6EB0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Plane
  static check_size<sizeof(Plane), 12 + sizeof(float)> __UnityEngine_PlaneSizeCheck;
  static_assert(sizeof(Plane) == 0x10);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Plane, "UnityEngine", "Plane");
#pragma pack(pop)
