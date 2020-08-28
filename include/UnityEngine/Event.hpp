// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: EventType
  struct EventType;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: PointerType
  struct PointerType;
  // Forward declaring type: EventModifiers
  struct EventModifiers;
  // Forward declaring type: KeyCode
  struct KeyCode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Event
  class Event : public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const {
      return m_Ptr;
    }
    // Get static field: static private UnityEngine.Event s_Current
    static UnityEngine::Event* _get_s_Current();
    // Set static field: static private UnityEngine.Event s_Current
    static void _set_s_Current(UnityEngine::Event* value);
    // Get static field: static private UnityEngine.Event s_MasterEvent
    static UnityEngine::Event* _get_s_MasterEvent();
    // Set static field: static private UnityEngine.Event s_MasterEvent
    static void _set_s_MasterEvent(UnityEngine::Event* value);
    // public UnityEngine.EventType get_rawType()
    // Offset: 0x125F5C0
    UnityEngine::EventType get_rawType();
    // public UnityEngine.Vector2 get_mousePosition()
    // Offset: 0x125F600
    UnityEngine::Vector2 get_mousePosition();
    // public UnityEngine.Vector2 get_delta()
    // Offset: 0x125F6A8
    UnityEngine::Vector2 get_delta();
    // public UnityEngine.PointerType get_pointerType()
    // Offset: 0x125F750
    UnityEngine::PointerType get_pointerType();
    // public UnityEngine.EventModifiers get_modifiers()
    // Offset: 0x125F790
    UnityEngine::EventModifiers get_modifiers();
    // public System.Void set_modifiers(UnityEngine.EventModifiers value)
    // Offset: 0x125F7D0
    void set_modifiers(UnityEngine::EventModifiers value);
    // public System.Int32 get_clickCount()
    // Offset: 0x125F820
    int get_clickCount();
    // public System.Char get_character()
    // Offset: 0x125F860
    ::Il2CppChar get_character();
    // public System.Void set_character(System.Char value)
    // Offset: 0x125F8A0
    void set_character(::Il2CppChar value);
    // public UnityEngine.KeyCode get_keyCode()
    // Offset: 0x125F8F0
    UnityEngine::KeyCode get_keyCode();
    // public System.Void set_keyCode(UnityEngine.KeyCode value)
    // Offset: 0x125F930
    void set_keyCode(UnityEngine::KeyCode value);
    // public System.Void set_displayIndex(System.Int32 value)
    // Offset: 0x125F980
    void set_displayIndex(int value);
    // public UnityEngine.EventType get_type()
    // Offset: 0x125F9D0
    UnityEngine::EventType get_type();
    // public System.Void set_type(UnityEngine.EventType value)
    // Offset: 0x125FA10
    void set_type(UnityEngine::EventType value);
    // public System.String get_commandName()
    // Offset: 0x125FA60
    ::Il2CppString* get_commandName();
    // private System.Void Internal_Use()
    // Offset: 0x125FAA0
    void Internal_Use();
    // static private System.IntPtr Internal_Create(System.Int32 displayIndex)
    // Offset: 0x125FAE0
    static System::IntPtr Internal_Create(int displayIndex);
    // static private System.Void Internal_Destroy(System.IntPtr ptr)
    // Offset: 0x125FB20
    static void Internal_Destroy(System::IntPtr ptr);
    // public UnityEngine.EventType GetTypeForControl(System.Int32 controlID)
    // Offset: 0x125FB60
    UnityEngine::EventType GetTypeForControl(int controlID);
    // static public System.Boolean PopEvent(UnityEngine.Event outEvent)
    // Offset: 0x125FBB0
    static bool PopEvent(UnityEngine::Event* outEvent);
    // static private System.Void Internal_SetNativeEvent(System.IntPtr ptr)
    // Offset: 0x125FBF0
    static void Internal_SetNativeEvent(System::IntPtr ptr);
    // static System.Void Internal_MakeMasterEventCurrent(System.Int32 displayIndex)
    // Offset: 0x125FC30
    static void Internal_MakeMasterEventCurrent(int displayIndex);
    // public System.Void .ctor(System.Int32 displayIndex)
    // Offset: 0x125FD40
    static Event* New_ctor(int displayIndex);
    // public System.Boolean get_shift()
    // Offset: 0x125FEC8
    bool get_shift();
    // public System.Boolean get_control()
    // Offset: 0x125FF10
    bool get_control();
    // public System.Boolean get_alt()
    // Offset: 0x125FF58
    bool get_alt();
    // public System.Boolean get_command()
    // Offset: 0x125FFA0
    bool get_command();
    // static public UnityEngine.Event get_current()
    // Offset: 0x125FFE8
    static UnityEngine::Event* get_current();
    // public System.Boolean get_isKey()
    // Offset: 0x1260038
    bool get_isKey();
    // public System.Boolean get_isMouse()
    // Offset: 0x1260088
    bool get_isMouse();
    // System.Boolean get_isDirectManipulationDevice()
    // Offset: 0x12600F0
    bool get_isDirectManipulationDevice();
    // static public UnityEngine.Event KeyboardEvent(System.String key)
    // Offset: 0x1260170
    static UnityEngine::Event* KeyboardEvent(::Il2CppString* key);
    // public System.Void Use()
    // Offset: 0x12626F0
    void Use();
    // private System.Void get_mousePosition_Injected(UnityEngine.Vector2 ret)
    // Offset: 0x125F658
    void get_mousePosition_Injected(UnityEngine::Vector2& ret);
    // private System.Void get_delta_Injected(UnityEngine.Vector2 ret)
    // Offset: 0x125F700
    void get_delta_Injected(UnityEngine::Vector2& ret);
    // public System.Void .ctor()
    // Offset: 0x125FD9C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Event* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x125FDEC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.Int32 GetHashCode()
    // Offset: 0x1261AD4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1261BC0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0x1261E3C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Event
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Event*, "UnityEngine", "Event");
#pragma pack(pop)
