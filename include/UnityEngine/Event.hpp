// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x18
  // Autogenerated type: UnityEngine.Event
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D65444
  // [StaticAccessorAttribute] Offset: D65444
  class Event : public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: Event
    Event(System::IntPtr m_Ptr_ = {}) noexcept : m_Ptr{m_Ptr_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
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
    // Offset: 0x15F70DC
    UnityEngine::EventType get_rawType();
    // public UnityEngine.Vector2 get_mousePosition()
    // Offset: 0x15F711C
    UnityEngine::Vector2 get_mousePosition();
    // public UnityEngine.Vector2 get_delta()
    // Offset: 0x15F71C4
    UnityEngine::Vector2 get_delta();
    // public UnityEngine.PointerType get_pointerType()
    // Offset: 0x15F726C
    UnityEngine::PointerType get_pointerType();
    // public UnityEngine.EventModifiers get_modifiers()
    // Offset: 0x15F72AC
    UnityEngine::EventModifiers get_modifiers();
    // public System.Void set_modifiers(UnityEngine.EventModifiers value)
    // Offset: 0x15F72EC
    void set_modifiers(UnityEngine::EventModifiers value);
    // public System.Int32 get_clickCount()
    // Offset: 0x15F733C
    int get_clickCount();
    // public System.Char get_character()
    // Offset: 0x15F737C
    ::Il2CppChar get_character();
    // public System.Void set_character(System.Char value)
    // Offset: 0x15F73BC
    void set_character(::Il2CppChar value);
    // public UnityEngine.KeyCode get_keyCode()
    // Offset: 0x15F740C
    UnityEngine::KeyCode get_keyCode();
    // public System.Void set_keyCode(UnityEngine.KeyCode value)
    // Offset: 0x15F744C
    void set_keyCode(UnityEngine::KeyCode value);
    // public System.Void set_displayIndex(System.Int32 value)
    // Offset: 0x15F749C
    void set_displayIndex(int value);
    // public UnityEngine.EventType get_type()
    // Offset: 0x15F74EC
    UnityEngine::EventType get_type();
    // public System.Void set_type(UnityEngine.EventType value)
    // Offset: 0x15F752C
    void set_type(UnityEngine::EventType value);
    // public System.String get_commandName()
    // Offset: 0x15F757C
    ::Il2CppString* get_commandName();
    // private System.Void Internal_Use()
    // Offset: 0x15F75BC
    void Internal_Use();
    // static private System.IntPtr Internal_Create(System.Int32 displayIndex)
    // Offset: 0x15F75FC
    static System::IntPtr Internal_Create(int displayIndex);
    // static private System.Void Internal_Destroy(System.IntPtr ptr)
    // Offset: 0x15F763C
    static void Internal_Destroy(System::IntPtr ptr);
    // public UnityEngine.EventType GetTypeForControl(System.Int32 controlID)
    // Offset: 0x15F767C
    UnityEngine::EventType GetTypeForControl(int controlID);
    // static public System.Boolean PopEvent(UnityEngine.Event outEvent)
    // Offset: 0x15F76CC
    static bool PopEvent(UnityEngine::Event* outEvent);
    // static private System.Void Internal_SetNativeEvent(System.IntPtr ptr)
    // Offset: 0x15F770C
    static void Internal_SetNativeEvent(System::IntPtr ptr);
    // static System.Void Internal_MakeMasterEventCurrent(System.Int32 displayIndex)
    // Offset: 0x15F774C
    static void Internal_MakeMasterEventCurrent(int displayIndex);
    // public System.Void .ctor(System.Int32 displayIndex)
    // Offset: 0x15F785C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Event* New_ctor(int displayIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Event::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Event*, creationType>(displayIndex)));
    }
    // public System.Boolean get_shift()
    // Offset: 0x15F79E4
    bool get_shift();
    // public System.Boolean get_control()
    // Offset: 0x15F7A2C
    bool get_control();
    // public System.Boolean get_alt()
    // Offset: 0x15F7A74
    bool get_alt();
    // public System.Boolean get_command()
    // Offset: 0x15F7ABC
    bool get_command();
    // static public UnityEngine.Event get_current()
    // Offset: 0x15F7B04
    static UnityEngine::Event* get_current();
    // public System.Boolean get_isKey()
    // Offset: 0x15F7B54
    bool get_isKey();
    // public System.Boolean get_isMouse()
    // Offset: 0x15F7BA4
    bool get_isMouse();
    // System.Boolean get_isDirectManipulationDevice()
    // Offset: 0x15F7C0C
    bool get_isDirectManipulationDevice();
    // static public UnityEngine.Event KeyboardEvent(System.String key)
    // Offset: 0x15F7C8C
    static UnityEngine::Event* KeyboardEvent(::Il2CppString* key);
    // public System.Void Use()
    // Offset: 0x15FA20C
    void Use();
    // private System.Void get_mousePosition_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x15F7174
    void get_mousePosition_Injected(UnityEngine::Vector2& ret);
    // private System.Void get_delta_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x15F721C
    void get_delta_Injected(UnityEngine::Vector2& ret);
    // public System.Void .ctor()
    // Offset: 0x15F78B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Event* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Event::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Event*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x15F7908
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.Int32 GetHashCode()
    // Offset: 0x15F95F0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x15F96DC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0x15F9958
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Event
  static check_size<sizeof(Event), 16 + sizeof(System::IntPtr)> __UnityEngine_EventSizeCheck;
  static_assert(sizeof(Event) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Event*, "UnityEngine", "Event");
#pragma pack(pop)
