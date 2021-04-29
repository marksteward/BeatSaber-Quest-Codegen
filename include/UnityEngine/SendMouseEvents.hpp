// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Skipping declaration: HitInfo because it is already included!
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SendMouseEvents
  class SendMouseEvents : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::SendMouseEvents::HitInfo
    struct HitInfo;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.SendMouseEvents/HitInfo
    struct HitInfo/*, public System::ValueType*/ {
      public:
      // public UnityEngine.GameObject target
      // Size: 0x8
      // Offset: 0x0
      UnityEngine::GameObject* target;
      // Field size check
      static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
      // public UnityEngine.Camera camera
      // Size: 0x8
      // Offset: 0x8
      UnityEngine::Camera* camera;
      // Field size check
      static_assert(sizeof(UnityEngine::Camera*) == 0x8);
      // Creating value type constructor for type: HitInfo
      constexpr HitInfo(UnityEngine::GameObject* target_ = {}, UnityEngine::Camera* camera_ = {}) noexcept : target{target_}, camera{camera_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void SendMessage(System.String name)
      // Offset: 0xE2F698
      void SendMessage(::Il2CppString* name);
      // static public System.Boolean Compare(UnityEngine.SendMouseEvents/HitInfo lhs, UnityEngine.SendMouseEvents/HitInfo rhs)
      // Offset: 0x21B1D08
      static bool Compare(UnityEngine::SendMouseEvents::HitInfo lhs, UnityEngine::SendMouseEvents::HitInfo rhs);
    }; // UnityEngine.SendMouseEvents/HitInfo
    #pragma pack(pop)
    static check_size<sizeof(SendMouseEvents::HitInfo), 8 + sizeof(UnityEngine::Camera*)> __UnityEngine_SendMouseEvents_HitInfoSizeCheck;
    static_assert(sizeof(SendMouseEvents::HitInfo) == 0x10);
    // Creating value type constructor for type: SendMouseEvents
    SendMouseEvents() noexcept {}
    // Get static field: static private System.Boolean s_MouseUsed
    static bool _get_s_MouseUsed();
    // Set static field: static private System.Boolean s_MouseUsed
    static void _set_s_MouseUsed(bool value);
    // Get static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_LastHit
    static ::Array<UnityEngine::SendMouseEvents::HitInfo>* _get_m_LastHit();
    // Set static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_LastHit
    static void _set_m_LastHit(::Array<UnityEngine::SendMouseEvents::HitInfo>* value);
    // Get static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_MouseDownHit
    static ::Array<UnityEngine::SendMouseEvents::HitInfo>* _get_m_MouseDownHit();
    // Set static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_MouseDownHit
    static void _set_m_MouseDownHit(::Array<UnityEngine::SendMouseEvents::HitInfo>* value);
    // Get static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_CurrentHit
    static ::Array<UnityEngine::SendMouseEvents::HitInfo>* _get_m_CurrentHit();
    // Set static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_CurrentHit
    static void _set_m_CurrentHit(::Array<UnityEngine::SendMouseEvents::HitInfo>* value);
    // Get static field: static private UnityEngine.Camera[] m_Cameras
    static ::Array<UnityEngine::Camera*>* _get_m_Cameras();
    // Set static field: static private UnityEngine.Camera[] m_Cameras
    static void _set_m_Cameras(::Array<UnityEngine::Camera*>* value);
    // static private System.Void SetMouseMoved()
    // Offset: 0x21B0D10
    static void SetMouseMoved();
    // static private System.Void DoSendMouseEvents(System.Int32 skipRTCameras)
    // Offset: 0x21B0D7C
    static void DoSendMouseEvents(int skipRTCameras);
    // static private System.Void SendEvents(System.Int32 i, UnityEngine.SendMouseEvents/HitInfo hit)
    // Offset: 0x21B1778
    static void SendEvents(int i, UnityEngine::SendMouseEvents::HitInfo hit);
    // static private System.Void .cctor()
    // Offset: 0x21B1DD4
    static void _cctor();
  }; // UnityEngine.SendMouseEvents
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SendMouseEvents*, "UnityEngine", "SendMouseEvents");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SendMouseEvents::HitInfo, "UnityEngine", "SendMouseEvents/HitInfo");
