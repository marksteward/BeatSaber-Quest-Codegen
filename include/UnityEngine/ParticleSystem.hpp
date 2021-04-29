// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystemStopBehavior
  struct ParticleSystemStopBehavior;
  // Skipping declaration: Particle because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ParticleSystem
  // [UsedByNativeCodeAttribute] Offset: CE6EFC
  // [RequireComponent] Offset: CE6EFC
  // [NativeHeaderAttribute] Offset: CE6EFC
  // [NativeHeaderAttribute] Offset: CE6EFC
  // [NativeHeaderAttribute] Offset: CE6EFC
  // [NativeHeaderAttribute] Offset: CE6EFC
  // [NativeHeaderAttribute] Offset: CE6EFC
  // [NativeHeaderAttribute] Offset: CE6EFC
  // [NativeHeaderAttribute] Offset: CE6EFC
  // [NativeHeaderAttribute] Offset: CE6EFC
  class ParticleSystem : public UnityEngine::Component {
    public:
    // Nested type: UnityEngine::ParticleSystem::MainModule
    struct MainModule;
    // Nested type: UnityEngine::ParticleSystem::EmissionModule
    struct EmissionModule;
    // Nested type: UnityEngine::ParticleSystem::ShapeModule
    struct ShapeModule;
    // Nested type: UnityEngine::ParticleSystem::Particle
    struct Particle;
    // Nested type: UnityEngine::ParticleSystem::MinMaxCurve
    struct MinMaxCurve;
    // Nested type: UnityEngine::ParticleSystem::MinMaxGradient
    struct MinMaxGradient;
    // Nested type: UnityEngine::ParticleSystem::EmitParams
    struct EmitParams;
    // Size: 0x84
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.ParticleSystem/Particle
    // [RequiredByNativeCodeAttribute] Offset: CE7098
    struct Particle/*, public System::ValueType*/ {
      public:
      // private UnityEngine.Vector3 m_Position
      // Size: 0xC
      // Offset: 0x0
      UnityEngine::Vector3 m_Position;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_Velocity
      // Size: 0xC
      // Offset: 0xC
      UnityEngine::Vector3 m_Velocity;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_AnimatedVelocity
      // Size: 0xC
      // Offset: 0x18
      UnityEngine::Vector3 m_AnimatedVelocity;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_InitialVelocity
      // Size: 0xC
      // Offset: 0x24
      UnityEngine::Vector3 m_InitialVelocity;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_AxisOfRotation
      // Size: 0xC
      // Offset: 0x30
      UnityEngine::Vector3 m_AxisOfRotation;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_Rotation
      // Size: 0xC
      // Offset: 0x3C
      UnityEngine::Vector3 m_Rotation;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_AngularVelocity
      // Size: 0xC
      // Offset: 0x48
      UnityEngine::Vector3 m_AngularVelocity;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_StartSize
      // Size: 0xC
      // Offset: 0x54
      UnityEngine::Vector3 m_StartSize;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Color32 m_StartColor
      // Size: 0x4
      // Offset: 0x60
      UnityEngine::Color32 m_StartColor;
      // Field size check
      static_assert(sizeof(UnityEngine::Color32) == 0x4);
      // private System.UInt32 m_RandomSeed
      // Size: 0x4
      // Offset: 0x64
      uint m_RandomSeed;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      // private System.UInt32 m_ParentRandomSeed
      // Size: 0x4
      // Offset: 0x68
      uint m_ParentRandomSeed;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      // private System.Single m_Lifetime
      // Size: 0x4
      // Offset: 0x6C
      float m_Lifetime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.Single m_StartLifetime
      // Size: 0x4
      // Offset: 0x70
      float m_StartLifetime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.Int32 m_MeshIndex
      // Size: 0x4
      // Offset: 0x74
      int m_MeshIndex;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Single m_EmitAccumulator0
      // Size: 0x4
      // Offset: 0x78
      float m_EmitAccumulator0;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.Single m_EmitAccumulator1
      // Size: 0x4
      // Offset: 0x7C
      float m_EmitAccumulator1;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.UInt32 m_Flags
      // Size: 0x4
      // Offset: 0x80
      uint m_Flags;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      // Creating value type constructor for type: Particle
      constexpr Particle(UnityEngine::Vector3 m_Position_ = {}, UnityEngine::Vector3 m_Velocity_ = {}, UnityEngine::Vector3 m_AnimatedVelocity_ = {}, UnityEngine::Vector3 m_InitialVelocity_ = {}, UnityEngine::Vector3 m_AxisOfRotation_ = {}, UnityEngine::Vector3 m_Rotation_ = {}, UnityEngine::Vector3 m_AngularVelocity_ = {}, UnityEngine::Vector3 m_StartSize_ = {}, UnityEngine::Color32 m_StartColor_ = {}, uint m_RandomSeed_ = {}, uint m_ParentRandomSeed_ = {}, float m_Lifetime_ = {}, float m_StartLifetime_ = {}, int m_MeshIndex_ = {}, float m_EmitAccumulator0_ = {}, float m_EmitAccumulator1_ = {}, uint m_Flags_ = {}) noexcept : m_Position{m_Position_}, m_Velocity{m_Velocity_}, m_AnimatedVelocity{m_AnimatedVelocity_}, m_InitialVelocity{m_InitialVelocity_}, m_AxisOfRotation{m_AxisOfRotation_}, m_Rotation{m_Rotation_}, m_AngularVelocity{m_AngularVelocity_}, m_StartSize{m_StartSize_}, m_StartColor{m_StartColor_}, m_RandomSeed{m_RandomSeed_}, m_ParentRandomSeed{m_ParentRandomSeed_}, m_Lifetime{m_Lifetime_}, m_StartLifetime{m_StartLifetime_}, m_MeshIndex{m_MeshIndex_}, m_EmitAccumulator0{m_EmitAccumulator0_}, m_EmitAccumulator1{m_EmitAccumulator1_}, m_Flags{m_Flags_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void set_lifetime(System.Single value)
      // Offset: 0xE2EA9C
      void set_lifetime(float value);
      // public System.Void set_position(UnityEngine.Vector3 value)
      // Offset: 0xE2EAA4
      void set_position(UnityEngine::Vector3 value);
      // public System.Void set_velocity(UnityEngine.Vector3 value)
      // Offset: 0xE2EAB0
      void set_velocity(UnityEngine::Vector3 value);
      // public System.Void set_remainingLifetime(System.Single value)
      // Offset: 0xE2EABC
      void set_remainingLifetime(float value);
      // public System.Void set_startLifetime(System.Single value)
      // Offset: 0xE2EAC4
      void set_startLifetime(float value);
      // public System.Void set_startColor(UnityEngine.Color32 value)
      // Offset: 0xE2EACC
      void set_startColor(UnityEngine::Color32 value);
      // public System.Void set_randomSeed(System.UInt32 value)
      // Offset: 0xE2EAD4
      void set_randomSeed(uint value);
      // public System.Void set_startSize(System.Single value)
      // Offset: 0xE2EADC
      void set_startSize(float value);
      // public System.Void set_rotation3D(UnityEngine.Vector3 value)
      // Offset: 0xE2EB2C
      void set_rotation3D(UnityEngine::Vector3 value);
      // public System.Void set_angularVelocity3D(UnityEngine.Vector3 value)
      // Offset: 0xE2EB34
      void set_angularVelocity3D(UnityEngine::Vector3 value);
    }; // UnityEngine.ParticleSystem/Particle
    #pragma pack(pop)
    static check_size<sizeof(ParticleSystem::Particle), 128 + sizeof(uint)> __UnityEngine_ParticleSystem_ParticleSizeCheck;
    static_assert(sizeof(ParticleSystem::Particle) == 0x84);
    // Creating value type constructor for type: ParticleSystem
    ParticleSystem() noexcept {}
    // public System.Void Emit(UnityEngine.Vector3 position, UnityEngine.Vector3 velocity, System.Single size, System.Single lifetime, UnityEngine.Color32 color)
    // Offset: 0x21AB778
    void Emit(UnityEngine::Vector3 position, UnityEngine::Vector3 velocity, float size, float lifetime, UnityEngine::Color32 color);
    // public System.Void Emit(UnityEngine.ParticleSystem/Particle particle)
    // Offset: 0x21ABB04
    void Emit(UnityEngine::ParticleSystem::Particle particle);
    // public System.Int32 get_particleCount()
    // Offset: 0x21ABB54
    int get_particleCount();
    // public System.Single get_time()
    // Offset: 0x21ABB94
    float get_time();
    // public System.UInt32 get_randomSeed()
    // Offset: 0x21ABBD4
    uint get_randomSeed();
    // public System.Void set_randomSeed(System.UInt32 value)
    // Offset: 0x21ABC14
    void set_randomSeed(uint value);
    // public System.Boolean get_useAutoRandomSeed()
    // Offset: 0x21ABC64
    bool get_useAutoRandomSeed();
    // public System.Void set_useAutoRandomSeed(System.Boolean value)
    // Offset: 0x21ABCA4
    void set_useAutoRandomSeed(bool value);
    // public System.Void SetParticles(out UnityEngine.ParticleSystem/Particle[] particles, System.Int32 size, System.Int32 offset)
    // Offset: 0x21ABCF4
    void SetParticles(::Array<UnityEngine::ParticleSystem::Particle>*& particles, int size, int offset);
    // public System.Void SetParticles(out UnityEngine.ParticleSystem/Particle[] particles, System.Int32 size)
    // Offset: 0x21ABD5C
    void SetParticles(::Array<UnityEngine::ParticleSystem::Particle>*& particles, int size);
    // public System.Int32 GetParticles(out UnityEngine.ParticleSystem/Particle[] particles, System.Int32 size, System.Int32 offset)
    // Offset: 0x21ABDB8
    int GetParticles(::Array<UnityEngine::ParticleSystem::Particle>*& particles, int size, int offset);
    // public System.Int32 GetParticles(out UnityEngine.ParticleSystem/Particle[] particles, System.Int32 size)
    // Offset: 0x21ABE20
    int GetParticles(::Array<UnityEngine::ParticleSystem::Particle>*& particles, int size);
    // public System.Int32 GetParticles(out UnityEngine.ParticleSystem/Particle[] particles)
    // Offset: 0x21ABE7C
    int GetParticles(::Array<UnityEngine::ParticleSystem::Particle>*& particles);
    // public System.Void Simulate(System.Single t, System.Boolean withChildren, System.Boolean restart, System.Boolean fixedTimeStep)
    // Offset: 0x21ABED4
    void Simulate(float t, bool withChildren, bool restart, bool fixedTimeStep);
    // public System.Void Simulate(System.Single t, System.Boolean withChildren, System.Boolean restart)
    // Offset: 0x21ABF4C
    void Simulate(float t, bool withChildren, bool restart);
    // public System.Void Play(System.Boolean withChildren)
    // Offset: 0x21ABFB8
    void Play(bool withChildren);
    // public System.Void Stop(System.Boolean withChildren, UnityEngine.ParticleSystemStopBehavior stopBehavior)
    // Offset: 0x21AC008
    void Stop(bool withChildren, UnityEngine::ParticleSystemStopBehavior stopBehavior);
    // public System.Void Clear(System.Boolean withChildren)
    // Offset: 0x21AC060
    void Clear(bool withChildren);
    // public System.Void Clear()
    // Offset: 0x21AC0B0
    void Clear();
    // public System.Void Emit(System.Int32 count)
    // Offset: 0x21AC0F4
    void Emit(int count);
    // private System.Void Emit_Internal(System.Int32 count)
    // Offset: 0x21AC144
    void Emit_Internal(int count);
    // public System.Void Emit(UnityEngine.ParticleSystem/EmitParams emitParams, System.Int32 count)
    // Offset: 0x21AC194
    void Emit(UnityEngine::ParticleSystem::EmitParams emitParams, int count);
    // private System.Void EmitOld_Internal(ref UnityEngine.ParticleSystem/Particle particle)
    // Offset: 0x21ABAB4
    void EmitOld_Internal(UnityEngine::ParticleSystem::Particle& particle);
    // public UnityEngine.ParticleSystem/MainModule get_main()
    // Offset: 0x21AC244
    UnityEngine::ParticleSystem::MainModule get_main();
    // public UnityEngine.ParticleSystem/EmissionModule get_emission()
    // Offset: 0x21AC250
    UnityEngine::ParticleSystem::EmissionModule get_emission();
    // public UnityEngine.ParticleSystem/ShapeModule get_shape()
    // Offset: 0x21AC25C
    UnityEngine::ParticleSystem::ShapeModule get_shape();
    // private System.Void Emit_Injected(ref UnityEngine.ParticleSystem/EmitParams emitParams, System.Int32 count)
    // Offset: 0x21AC1EC
    void Emit_Injected(UnityEngine::ParticleSystem::EmitParams& emitParams, int count);
  }; // UnityEngine.ParticleSystem
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem*, "UnityEngine", "ParticleSystem");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem::Particle, "UnityEngine", "ParticleSystem/Particle");
