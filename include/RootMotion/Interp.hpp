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
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: InterpolationMode
  struct InterpolationMode;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.Interp
  class Interp : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Interp
    Interp() noexcept {}
    // static public System.Single Float(System.Single t, RootMotion.InterpolationMode mode)
    // Offset: 0x1AB13DC
    static float Float(float t, RootMotion::InterpolationMode mode);
    // static public UnityEngine.Vector3 V3(UnityEngine.Vector3 v1, UnityEngine.Vector3 v2, System.Single t, RootMotion.InterpolationMode mode)
    // Offset: 0x1AB1E44
    static UnityEngine::Vector3 V3(UnityEngine::Vector3 v1, UnityEngine::Vector3 v2, float t, RootMotion::InterpolationMode mode);
    // static public System.Single LerpValue(System.Single value, System.Single target, System.Single increaseSpeed, System.Single decreaseSpeed)
    // Offset: 0x1AB1F4C
    static float LerpValue(float value, float target, float increaseSpeed, float decreaseSpeed);
    // static private System.Single None(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB1748
    static float None(float t, float b, float c);
    // static private System.Single InOutCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB1754
    static float InOutCubic(float t, float b, float c);
    // static private System.Single InOutQuintic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB1778
    static float InOutQuintic(float t, float b, float c);
    // static private System.Single InQuintic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB17B4
    static float InQuintic(float t, float b, float c);
    // static private System.Single InQuartic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB17CC
    static float InQuartic(float t, float b, float c);
    // static private System.Single InCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB17E0
    static float InCubic(float t, float b, float c);
    // static private System.Single InQuadratic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB17F4
    static float InQuadratic(float t, float b, float c);
    // static private System.Single OutQuintic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB1804
    static float OutQuintic(float t, float b, float c);
    // static private System.Single OutQuartic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB184C
    static float OutQuartic(float t, float b, float c);
    // static private System.Single OutCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB1884
    static float OutCubic(float t, float b, float c);
    // static private System.Single OutInCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB18AC
    static float OutInCubic(float t, float b, float c);
    // static private System.Single OutInQuartic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB2048
    static float OutInQuartic(float t, float b, float c);
    // static private System.Single BackInCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB18E0
    static float BackInCubic(float t, float b, float c);
    // static private System.Single BackInQuartic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB1908
    static float BackInQuartic(float t, float b, float c);
    // static private System.Single OutBackCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB1938
    static float OutBackCubic(float t, float b, float c);
    // static private System.Single OutBackQuartic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB196C
    static float OutBackQuartic(float t, float b, float c);
    // static private System.Single OutElasticSmall(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB19B0
    static float OutElasticSmall(float t, float b, float c);
    // static private System.Single OutElasticBig(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB1A14
    static float OutElasticBig(float t, float b, float c);
    // static private System.Single InElasticSmall(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB1A78
    static float InElasticSmall(float t, float b, float c);
    // static private System.Single InElasticBig(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB1ACC
    static float InElasticBig(float t, float b, float c);
    // static private System.Single InSine(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB1B20
    static float InSine(float t, float b, float c);
    // static private System.Single OutSine(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB1BB8
    static float OutSine(float t, float b, float c);
    // static private System.Single InOutSine(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB1C4C
    static float InOutSine(float t, float b, float c);
    // static private System.Single InElastic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB207C
    static float InElastic(float t, float b, float c);
    // static private System.Single OutElastic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB1CF0
    static float OutElastic(float t, float b, float c);
    // static private System.Single InBack(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB1DD4
    static float InBack(float t, float b, float c);
    // static private System.Single OutBack(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1AB1E04
    static float OutBack(float t, float b, float c);
    // public System.Void .ctor()
    // Offset: 0x1AB2164
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Interp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::Interp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Interp*, creationType>()));
    }
  }; // RootMotion.Interp
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Interp*, "RootMotion", "Interp");
// Writing MetadataGetter for method: RootMotion::Interp::Float
// Il2CppName: Float
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::V3
// Il2CppName: V3
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::LerpValue
// Il2CppName: LerpValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::None
// Il2CppName: None
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::InOutCubic
// Il2CppName: InOutCubic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::InOutQuintic
// Il2CppName: InOutQuintic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::InQuintic
// Il2CppName: InQuintic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::InQuartic
// Il2CppName: InQuartic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::InCubic
// Il2CppName: InCubic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::InQuadratic
// Il2CppName: InQuadratic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::OutQuintic
// Il2CppName: OutQuintic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::OutQuartic
// Il2CppName: OutQuartic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::OutCubic
// Il2CppName: OutCubic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::OutInCubic
// Il2CppName: OutInCubic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::OutInQuartic
// Il2CppName: OutInQuartic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::BackInCubic
// Il2CppName: BackInCubic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::BackInQuartic
// Il2CppName: BackInQuartic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::OutBackCubic
// Il2CppName: OutBackCubic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::OutBackQuartic
// Il2CppName: OutBackQuartic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::OutElasticSmall
// Il2CppName: OutElasticSmall
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::OutElasticBig
// Il2CppName: OutElasticBig
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::InElasticSmall
// Il2CppName: InElasticSmall
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::InElasticBig
// Il2CppName: InElasticBig
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::InSine
// Il2CppName: InSine
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::OutSine
// Il2CppName: OutSine
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::InOutSine
// Il2CppName: InOutSine
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::InElastic
// Il2CppName: InElastic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::OutElastic
// Il2CppName: OutElastic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::InBack
// Il2CppName: InBack
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::OutBack
// Il2CppName: OutBack
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: RootMotion::Interp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
