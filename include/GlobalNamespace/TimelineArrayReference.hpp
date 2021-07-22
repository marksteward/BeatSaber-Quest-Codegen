// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
  // Forward declaring type: DirectionalLight
  class DirectionalLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: TimelineArrayReference
  // [TokenAttribute] Offset: FFFFFFFF
  class TimelineArrayReference : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::TimelineArrayReference::ArrayTypes
    struct ArrayTypes;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: TimelineArrayReference/ArrayTypes
    // [TokenAttribute] Offset: FFFFFFFF
    struct ArrayTypes/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ArrayTypes
      constexpr ArrayTypes(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public TimelineArrayReference/ArrayTypes TubeLight
      static constexpr const int TubeLight = 0;
      // Get static field: static public TimelineArrayReference/ArrayTypes TubeLight
      static GlobalNamespace::TimelineArrayReference::ArrayTypes _get_TubeLight();
      // Set static field: static public TimelineArrayReference/ArrayTypes TubeLight
      static void _set_TubeLight(GlobalNamespace::TimelineArrayReference::ArrayTypes value);
      // static field const value: static public TimelineArrayReference/ArrayTypes Transform
      static constexpr const int Transform = 1;
      // Get static field: static public TimelineArrayReference/ArrayTypes Transform
      static GlobalNamespace::TimelineArrayReference::ArrayTypes _get_Transform();
      // Set static field: static public TimelineArrayReference/ArrayTypes Transform
      static void _set_Transform(GlobalNamespace::TimelineArrayReference::ArrayTypes value);
      // static field const value: static public TimelineArrayReference/ArrayTypes Canvas
      static constexpr const int Canvas = 2;
      // Get static field: static public TimelineArrayReference/ArrayTypes Canvas
      static GlobalNamespace::TimelineArrayReference::ArrayTypes _get_Canvas();
      // Set static field: static public TimelineArrayReference/ArrayTypes Canvas
      static void _set_Canvas(GlobalNamespace::TimelineArrayReference::ArrayTypes value);
      // static field const value: static public TimelineArrayReference/ArrayTypes TextMeshPro
      static constexpr const int TextMeshPro = 3;
      // Get static field: static public TimelineArrayReference/ArrayTypes TextMeshPro
      static GlobalNamespace::TimelineArrayReference::ArrayTypes _get_TextMeshPro();
      // Set static field: static public TimelineArrayReference/ArrayTypes TextMeshPro
      static void _set_TextMeshPro(GlobalNamespace::TimelineArrayReference::ArrayTypes value);
      // static field const value: static public TimelineArrayReference/ArrayTypes DirectionalLight
      static constexpr const int DirectionalLight = 4;
      // Get static field: static public TimelineArrayReference/ArrayTypes DirectionalLight
      static GlobalNamespace::TimelineArrayReference::ArrayTypes _get_DirectionalLight();
      // Set static field: static public TimelineArrayReference/ArrayTypes DirectionalLight
      static void _set_DirectionalLight(GlobalNamespace::TimelineArrayReference::ArrayTypes value);
    }; // TimelineArrayReference/ArrayTypes
    #pragma pack(pop)
    static check_size<sizeof(TimelineArrayReference::ArrayTypes), 0 + sizeof(int)> __GlobalNamespace_TimelineArrayReference_ArrayTypesSizeCheck;
    static_assert(sizeof(TimelineArrayReference::ArrayTypes) == 0x4);
    // private TimelineArrayReference/ArrayTypes arrayType
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::TimelineArrayReference::ArrayTypes arrayType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TimelineArrayReference::ArrayTypes) == 0x4);
    // Padding between fields: arrayType and: tubeLightArray
    char __padding0[0x4] = {};
    // public TubeBloomPrePassLight[] _tubeLightArray
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::TubeBloomPrePassLight*>* tubeLightArray;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::TubeBloomPrePassLight*>*) == 0x8);
    // public UnityEngine.CanvasGroup[] _canvasGroupArray
    // Size: 0x8
    // Offset: 0x28
    ::Array<UnityEngine::CanvasGroup*>* canvasGroupArray;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::CanvasGroup*>*) == 0x8);
    // public TMPro.TextMeshPro[] _tmproArray
    // Size: 0x8
    // Offset: 0x30
    ::Array<TMPro::TextMeshPro*>* tmproArray;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TextMeshPro*>*) == 0x8);
    // public UnityEngine.Transform[] _transformArray
    // Size: 0x8
    // Offset: 0x38
    ::Array<UnityEngine::Transform*>* transformArray;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // public DirectionalLight[] _directionalLights
    // Size: 0x8
    // Offset: 0x40
    ::Array<GlobalNamespace::DirectionalLight*>* directionalLights;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::DirectionalLight*>*) == 0x8);
    // Creating value type constructor for type: TimelineArrayReference
    TimelineArrayReference(GlobalNamespace::TimelineArrayReference::ArrayTypes arrayType_ = {}, ::Array<GlobalNamespace::TubeBloomPrePassLight*>* tubeLightArray_ = {}, ::Array<UnityEngine::CanvasGroup*>* canvasGroupArray_ = {}, ::Array<TMPro::TextMeshPro*>* tmproArray_ = {}, ::Array<UnityEngine::Transform*>* transformArray_ = {}, ::Array<GlobalNamespace::DirectionalLight*>* directionalLights_ = {}) noexcept : arrayType{arrayType_}, tubeLightArray{tubeLightArray_}, canvasGroupArray{canvasGroupArray_}, tmproArray{tmproArray_}, transformArray{transformArray_}, directionalLights{directionalLights_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void .ctor()
    // Offset: 0x106F35C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimelineArrayReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TimelineArrayReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimelineArrayReference*, creationType>()));
    }
  }; // TimelineArrayReference
  #pragma pack(pop)
  static check_size<sizeof(TimelineArrayReference), 64 + sizeof(::Array<GlobalNamespace::DirectionalLight*>*)> __GlobalNamespace_TimelineArrayReferenceSizeCheck;
  static_assert(sizeof(TimelineArrayReference) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TimelineArrayReference*, "", "TimelineArrayReference");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TimelineArrayReference::ArrayTypes, "", "TimelineArrayReference/ArrayTypes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TimelineArrayReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
