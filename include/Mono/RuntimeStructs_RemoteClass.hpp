// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Mono
namespace Mono {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.RuntimeStructs/Mono.RemoteClass
  // [TokenAttribute] Offset: FFFFFFFF
  struct RuntimeStructs::RemoteClass/*, public System::ValueType*/ {
    public:
    // System.IntPtr default_vtable
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr default_vtable;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // System.IntPtr xdomain_vtable
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr xdomain_vtable;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Mono.RuntimeStructs/Mono.MonoClass* proxy_class
    // Size: 0x8
    // Offset: 0x10
    Mono::RuntimeStructs::MonoClass* proxy_class;
    // Field size check
    static_assert(sizeof(Mono::RuntimeStructs::MonoClass*) == 0x8);
    // System.IntPtr proxy_class_name
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr proxy_class_name;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // System.UInt32 interface_count
    // Size: 0x4
    // Offset: 0x20
    uint interface_count;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: RemoteClass
    constexpr RemoteClass(System::IntPtr default_vtable_ = {}, System::IntPtr xdomain_vtable_ = {}, Mono::RuntimeStructs::MonoClass* proxy_class_ = {}, System::IntPtr proxy_class_name_ = {}, uint interface_count_ = {}) noexcept : default_vtable{default_vtable_}, xdomain_vtable{xdomain_vtable_}, proxy_class{proxy_class_}, proxy_class_name{proxy_class_name_}, interface_count{interface_count_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: System.IntPtr default_vtable
    System::IntPtr _get_default_vtable();
    // Set instance field: System.IntPtr default_vtable
    void _set_default_vtable(System::IntPtr value);
    // Get instance field: System.IntPtr xdomain_vtable
    System::IntPtr _get_xdomain_vtable();
    // Set instance field: System.IntPtr xdomain_vtable
    void _set_xdomain_vtable(System::IntPtr value);
    // Get instance field: Mono.RuntimeStructs/Mono.MonoClass* proxy_class
    Mono::RuntimeStructs::MonoClass* _get_proxy_class();
    // Set instance field: Mono.RuntimeStructs/Mono.MonoClass* proxy_class
    void _set_proxy_class(Mono::RuntimeStructs::MonoClass* value);
    // Get instance field: System.IntPtr proxy_class_name
    System::IntPtr _get_proxy_class_name();
    // Set instance field: System.IntPtr proxy_class_name
    void _set_proxy_class_name(System::IntPtr value);
    // Get instance field: System.UInt32 interface_count
    uint _get_interface_count();
    // Set instance field: System.UInt32 interface_count
    void _set_interface_count(uint value);
  }; // Mono.RuntimeStructs/Mono.RemoteClass
  #pragma pack(pop)
  static check_size<sizeof(RuntimeStructs::RemoteClass), 32 + sizeof(uint)> __Mono_RuntimeStructs_RemoteClassSizeCheck;
  static_assert(sizeof(RuntimeStructs::RemoteClass) == 0x24);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeStructs::RemoteClass, "Mono", "RuntimeStructs/RemoteClass");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
