// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameplayModifiers
#include "GlobalNamespace/GameplayModifiers.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IGameEnergyCounter
  // [TokenAttribute] Offset: FFFFFFFF
  class IGameEnergyCounter {
    public:
    // Creating value type constructor for type: IGameEnergyCounter
    IGameEnergyCounter() noexcept {}
    // public System.Boolean get_isInitialized()
    // Offset: 0xFFFFFFFF
    bool get_isInitialized();
    // public System.Single get_energy()
    // Offset: 0xFFFFFFFF
    float get_energy();
    // public System.Int32 get_batteryEnergy()
    // Offset: 0xFFFFFFFF
    int get_batteryEnergy();
    // public System.Int32 get_batteryLives()
    // Offset: 0xFFFFFFFF
    int get_batteryLives();
    // public GameplayModifiers/EnergyType get_energyType()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::GameplayModifiers::EnergyType get_energyType();
    // public System.Boolean get_noFail()
    // Offset: 0xFFFFFFFF
    bool get_noFail();
    // public System.Boolean get_instaFail()
    // Offset: 0xFFFFFFFF
    bool get_instaFail();
    // public System.Boolean get_failOnSaberClash()
    // Offset: 0xFFFFFFFF
    bool get_failOnSaberClash();
    // public System.Void add_didInitEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_didInitEvent(System::Action* value);
    // public System.Void remove_didInitEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_didInitEvent(System::Action* value);
    // public System.Void add_gameEnergyDidReach0Event(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_gameEnergyDidReach0Event(System::Action* value);
    // public System.Void remove_gameEnergyDidReach0Event(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_gameEnergyDidReach0Event(System::Action* value);
    // public System.Void add_gameEnergyDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0xFFFFFFFF
    void add_gameEnergyDidChangeEvent(System::Action_1<float>* value);
    // public System.Void remove_gameEnergyDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0xFFFFFFFF
    void remove_gameEnergyDidChangeEvent(System::Action_1<float>* value);
  }; // IGameEnergyCounter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IGameEnergyCounter*, "", "IGameEnergyCounter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IGameEnergyCounter::get_isInitialized
// Il2CppName: get_isInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IGameEnergyCounter::*)()>(&GlobalNamespace::IGameEnergyCounter::get_isInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGameEnergyCounter*), "get_isInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGameEnergyCounter::get_energy
// Il2CppName: get_energy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::IGameEnergyCounter::*)()>(&GlobalNamespace::IGameEnergyCounter::get_energy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGameEnergyCounter*), "get_energy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGameEnergyCounter::get_batteryEnergy
// Il2CppName: get_batteryEnergy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IGameEnergyCounter::*)()>(&GlobalNamespace::IGameEnergyCounter::get_batteryEnergy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGameEnergyCounter*), "get_batteryEnergy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGameEnergyCounter::get_batteryLives
// Il2CppName: get_batteryLives
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IGameEnergyCounter::*)()>(&GlobalNamespace::IGameEnergyCounter::get_batteryLives)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGameEnergyCounter*), "get_batteryLives", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGameEnergyCounter::get_energyType
// Il2CppName: get_energyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers::EnergyType (GlobalNamespace::IGameEnergyCounter::*)()>(&GlobalNamespace::IGameEnergyCounter::get_energyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGameEnergyCounter*), "get_energyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGameEnergyCounter::get_noFail
// Il2CppName: get_noFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IGameEnergyCounter::*)()>(&GlobalNamespace::IGameEnergyCounter::get_noFail)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGameEnergyCounter*), "get_noFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGameEnergyCounter::get_instaFail
// Il2CppName: get_instaFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IGameEnergyCounter::*)()>(&GlobalNamespace::IGameEnergyCounter::get_instaFail)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGameEnergyCounter*), "get_instaFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGameEnergyCounter::get_failOnSaberClash
// Il2CppName: get_failOnSaberClash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IGameEnergyCounter::*)()>(&GlobalNamespace::IGameEnergyCounter::get_failOnSaberClash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGameEnergyCounter*), "get_failOnSaberClash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGameEnergyCounter::add_didInitEvent
// Il2CppName: add_didInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IGameEnergyCounter::*)(System::Action*)>(&GlobalNamespace::IGameEnergyCounter::add_didInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGameEnergyCounter*), "add_didInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGameEnergyCounter::remove_didInitEvent
// Il2CppName: remove_didInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IGameEnergyCounter::*)(System::Action*)>(&GlobalNamespace::IGameEnergyCounter::remove_didInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGameEnergyCounter*), "remove_didInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGameEnergyCounter::add_gameEnergyDidReach0Event
// Il2CppName: add_gameEnergyDidReach0Event
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IGameEnergyCounter::*)(System::Action*)>(&GlobalNamespace::IGameEnergyCounter::add_gameEnergyDidReach0Event)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGameEnergyCounter*), "add_gameEnergyDidReach0Event", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGameEnergyCounter::remove_gameEnergyDidReach0Event
// Il2CppName: remove_gameEnergyDidReach0Event
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IGameEnergyCounter::*)(System::Action*)>(&GlobalNamespace::IGameEnergyCounter::remove_gameEnergyDidReach0Event)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGameEnergyCounter*), "remove_gameEnergyDidReach0Event", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGameEnergyCounter::add_gameEnergyDidChangeEvent
// Il2CppName: add_gameEnergyDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IGameEnergyCounter::*)(System::Action_1<float>*)>(&GlobalNamespace::IGameEnergyCounter::add_gameEnergyDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGameEnergyCounter*), "add_gameEnergyDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGameEnergyCounter::remove_gameEnergyDidChangeEvent
// Il2CppName: remove_gameEnergyDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IGameEnergyCounter::*)(System::Action_1<float>*)>(&GlobalNamespace::IGameEnergyCounter::remove_gameEnergyDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGameEnergyCounter*), "remove_gameEnergyDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
