// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.LODParameters
  struct LODParameters/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Rendering::LODParameters>*/ {
    public:
    // private System.Int32 m_IsOrthographic
    // Size: 0x4
    // Offset: 0x0
    int m_IsOrthographic;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector3 m_CameraPosition
    // Size: 0xC
    // Offset: 0x4
    UnityEngine::Vector3 m_CameraPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single m_FieldOfView
    // Size: 0x4
    // Offset: 0x10
    float m_FieldOfView;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_OrthoSize
    // Size: 0x4
    // Offset: 0x14
    float m_OrthoSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_CameraPixelHeight
    // Size: 0x4
    // Offset: 0x18
    int m_CameraPixelHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LODParameters
    constexpr LODParameters(int m_IsOrthographic_ = {}, UnityEngine::Vector3 m_CameraPosition_ = {}, float m_FieldOfView_ = {}, float m_OrthoSize_ = {}, int m_CameraPixelHeight_ = {}) noexcept : m_IsOrthographic{m_IsOrthographic_}, m_CameraPosition{m_CameraPosition_}, m_FieldOfView{m_FieldOfView_}, m_OrthoSize{m_OrthoSize_}, m_CameraPixelHeight{m_CameraPixelHeight_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Rendering::LODParameters>
    operator System::IEquatable_1<UnityEngine::Rendering::LODParameters>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Rendering::LODParameters>*>(this);
    }
    // public System.Boolean Equals(UnityEngine.Rendering.LODParameters other)
    // Offset: 0xF0671C
    bool Equals(UnityEngine::Rendering::LODParameters other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF06754
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF0675C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Rendering.LODParameters
  #pragma pack(pop)
  static check_size<sizeof(LODParameters), 24 + sizeof(int)> __UnityEngine_Rendering_LODParametersSizeCheck;
  static_assert(sizeof(LODParameters) == 0x1C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::LODParameters, "UnityEngine.Rendering", "LODParameters");
// Writing MetadataGetter for method: UnityEngine::Rendering::LODParameters::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Rendering::LODParameters::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Rendering::LODParameters::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
