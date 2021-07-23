// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Camera/UnityEngine.MonoOrStereoscopicEye
  // [TokenAttribute] Offset: FFFFFFFF
  struct Camera::MonoOrStereoscopicEye/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MonoOrStereoscopicEye
    constexpr MonoOrStereoscopicEye(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Camera/UnityEngine.MonoOrStereoscopicEye Left
    static constexpr const int Left = 0;
    // Get static field: static public UnityEngine.Camera/UnityEngine.MonoOrStereoscopicEye Left
    static UnityEngine::Camera::MonoOrStereoscopicEye _get_Left();
    // Set static field: static public UnityEngine.Camera/UnityEngine.MonoOrStereoscopicEye Left
    static void _set_Left(UnityEngine::Camera::MonoOrStereoscopicEye value);
    // static field const value: static public UnityEngine.Camera/UnityEngine.MonoOrStereoscopicEye Right
    static constexpr const int Right = 1;
    // Get static field: static public UnityEngine.Camera/UnityEngine.MonoOrStereoscopicEye Right
    static UnityEngine::Camera::MonoOrStereoscopicEye _get_Right();
    // Set static field: static public UnityEngine.Camera/UnityEngine.MonoOrStereoscopicEye Right
    static void _set_Right(UnityEngine::Camera::MonoOrStereoscopicEye value);
    // static field const value: static public UnityEngine.Camera/UnityEngine.MonoOrStereoscopicEye Mono
    static constexpr const int Mono = 2;
    // Get static field: static public UnityEngine.Camera/UnityEngine.MonoOrStereoscopicEye Mono
    static UnityEngine::Camera::MonoOrStereoscopicEye _get_Mono();
    // Set static field: static public UnityEngine.Camera/UnityEngine.MonoOrStereoscopicEye Mono
    static void _set_Mono(UnityEngine::Camera::MonoOrStereoscopicEye value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // UnityEngine.Camera/UnityEngine.MonoOrStereoscopicEye
  #pragma pack(pop)
  static check_size<sizeof(Camera::MonoOrStereoscopicEye), 0 + sizeof(int)> __UnityEngine_Camera_MonoOrStereoscopicEyeSizeCheck;
  static_assert(sizeof(Camera::MonoOrStereoscopicEye) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Camera::MonoOrStereoscopicEye, "UnityEngine", "Camera/MonoOrStereoscopicEye");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
