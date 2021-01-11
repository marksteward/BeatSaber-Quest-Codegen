// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Utils
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class SteamVR_Utils : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::SteamVR_Utils::RigidTransform
    struct RigidTransform;
    // Nested type: GlobalNamespace::SteamVR_Utils::SystemFn
    class SystemFn;
    // Creating value type constructor for type: SteamVR_Utils
    SteamVR_Utils() noexcept {}
    // static public UnityEngine.Quaternion Slerp(UnityEngine.Quaternion A, UnityEngine.Quaternion B, System.Single t)
    // Offset: 0x135C648
    static UnityEngine::Quaternion Slerp(UnityEngine::Quaternion A, UnityEngine::Quaternion B, float t);
    // static public UnityEngine.Vector3 Lerp(UnityEngine.Vector3 A, UnityEngine.Vector3 B, System.Single t)
    // Offset: 0x135C810
    static UnityEngine::Vector3 Lerp(UnityEngine::Vector3 A, UnityEngine::Vector3 B, float t);
    // static public System.Single Lerp(System.Single A, System.Single B, System.Single t)
    // Offset: 0x135C868
    static float Lerp(float A, float B, float t);
    // static public System.Double Lerp(System.Double A, System.Double B, System.Double t)
    // Offset: 0x135C878
    static double Lerp(double A, double B, double t);
    // static public System.Single InverseLerp(UnityEngine.Vector3 A, UnityEngine.Vector3 B, UnityEngine.Vector3 result)
    // Offset: 0x135C888
    static float InverseLerp(UnityEngine::Vector3 A, UnityEngine::Vector3 B, UnityEngine::Vector3 result);
    // static public System.Single InverseLerp(System.Single A, System.Single B, System.Single result)
    // Offset: 0x135C98C
    static float InverseLerp(float A, float B, float result);
    // static public System.Double InverseLerp(System.Double A, System.Double B, System.Double result)
    // Offset: 0x135C99C
    static double InverseLerp(double A, double B, double result);
    // static public System.Single Saturate(System.Single A)
    // Offset: 0x135C9AC
    static float Saturate(float A);
    // static public UnityEngine.Vector2 Saturate(UnityEngine.Vector2 A)
    // Offset: 0x135C9C8
    static UnityEngine::Vector2 Saturate(UnityEngine::Vector2 A);
    // static public System.Single Abs(System.Single A)
    // Offset: 0x135CA14
    static float Abs(float A);
    // static public UnityEngine.Vector2 Abs(UnityEngine.Vector2 A)
    // Offset: 0x135CA24
    static UnityEngine::Vector2 Abs(UnityEngine::Vector2 A);
    // static private System.Single _copysign(System.Single sizeval, System.Single signval)
    // Offset: 0x135CA68
    static float _copysign(float sizeval, float signval);
    // static public UnityEngine.Quaternion GetRotation(UnityEngine.Matrix4x4 matrix)
    // Offset: 0x135CB24
    static UnityEngine::Quaternion GetRotation(UnityEngine::Matrix4x4 matrix);
    // static public UnityEngine.Vector3 GetPosition(UnityEngine.Matrix4x4 matrix)
    // Offset: 0x135CCF0
    static UnityEngine::Vector3 GetPosition(UnityEngine::Matrix4x4 matrix);
    // static public UnityEngine.Vector3 GetScale(UnityEngine.Matrix4x4 m)
    // Offset: 0x135CD2C
    static UnityEngine::Vector3 GetScale(UnityEngine::Matrix4x4 m);
    // static public System.Object CallSystemFn(SteamVR_Utils/SystemFn fn, params System.Object[] args)
    // Offset: 0x135CE64
    static ::Il2CppObject* CallSystemFn(GlobalNamespace::SteamVR_Utils::SystemFn* fn, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Object CallSystemFn(SteamVR_Utils/SystemFn fn, params System.Object[] args)
    static ::Il2CppObject* CallSystemFn(GlobalNamespace::SteamVR_Utils::SystemFn* fn, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Object CallSystemFn(SteamVR_Utils/SystemFn fn, params System.Object[] args)
    template<class ...TParams>
    static ::Il2CppObject* CallSystemFn(GlobalNamespace::SteamVR_Utils::SystemFn* fn, TParams&&... args) {
      return CallSystemFn(fn, {args...});
    }
    // static public System.Void TakeStereoScreenshot(System.UInt32 screenshotHandle, UnityEngine.GameObject target, System.Int32 cellSize, System.Single ipd, ref System.String previewFilename, ref System.String VRFilename)
    // Offset: 0x135D3D4
    static void TakeStereoScreenshot(uint screenshotHandle, UnityEngine::GameObject* target, int cellSize, float ipd, ::Il2CppString*& previewFilename, ::Il2CppString*& VRFilename);
  }; // SteamVR_Utils
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Utils*, "", "SteamVR_Utils");
