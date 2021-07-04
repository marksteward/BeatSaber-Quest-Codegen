// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.TypeEntry
#include "System/Runtime/Remoting/TypeEntry.hpp"
// Including type: System.Runtime.Remoting.WellKnownObjectMode
#include "System/Runtime/Remoting/WellKnownObjectMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.WellKnownServiceTypeEntry
  // [ComVisibleAttribute] Offset: D7E16C
  class WellKnownServiceTypeEntry : public System::Runtime::Remoting::TypeEntry {
    public:
    // private System.Type obj_type
    // Size: 0x8
    // Offset: 0x20
    System::Type* obj_type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.String obj_uri
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* obj_uri;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Runtime.Remoting.WellKnownObjectMode obj_mode
    // Size: 0x4
    // Offset: 0x30
    System::Runtime::Remoting::WellKnownObjectMode obj_mode;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::WellKnownObjectMode) == 0x4);
    // Creating value type constructor for type: WellKnownServiceTypeEntry
    WellKnownServiceTypeEntry(System::Type* obj_type_ = {}, ::Il2CppString* obj_uri_ = {}, System::Runtime::Remoting::WellKnownObjectMode obj_mode_ = {}) noexcept : obj_type{obj_type_}, obj_uri{obj_uri_}, obj_mode{obj_mode_} {}
    // public System.Void .ctor(System.String typeName, System.String assemblyName, System.String objectUri, System.Runtime.Remoting.WellKnownObjectMode mode)
    // Offset: 0x1602EE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WellKnownServiceTypeEntry* New_ctor(::Il2CppString* typeName, ::Il2CppString* assemblyName, ::Il2CppString* objectUri, System::Runtime::Remoting::WellKnownObjectMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::WellKnownServiceTypeEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WellKnownServiceTypeEntry*, creationType>(typeName, assemblyName, objectUri, mode)));
    }
    // public System.Runtime.Remoting.WellKnownObjectMode get_Mode()
    // Offset: 0x160301C
    System::Runtime::Remoting::WellKnownObjectMode get_Mode();
    // public System.Type get_ObjectType()
    // Offset: 0x1603024
    System::Type* get_ObjectType();
    // public System.String get_ObjectUri()
    // Offset: 0x160302C
    ::Il2CppString* get_ObjectUri();
    // public override System.String ToString()
    // Offset: 0x1603034
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Runtime.Remoting.WellKnownServiceTypeEntry
  #pragma pack(pop)
  static check_size<sizeof(WellKnownServiceTypeEntry), 48 + sizeof(System::Runtime::Remoting::WellKnownObjectMode)> __System_Runtime_Remoting_WellKnownServiceTypeEntrySizeCheck;
  static_assert(sizeof(WellKnownServiceTypeEntry) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::WellKnownServiceTypeEntry*, "System.Runtime.Remoting", "WellKnownServiceTypeEntry");
// Writing MetadataGetter for method: System::Runtime::Remoting::WellKnownServiceTypeEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::WellKnownServiceTypeEntry::get_Mode
// Il2CppName: get_Mode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectType
// Il2CppName: get_ObjectType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectUri
// Il2CppName: get_ObjectUri
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::WellKnownServiceTypeEntry::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
