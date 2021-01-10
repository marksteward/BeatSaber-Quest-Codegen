// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.PropertyInfo
#include "System/Reflection/PropertyInfo.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: RuntimeModule
  class RuntimeModule;
  // Forward declaring type: Module
  class Module;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  // Autogenerated type: System.Reflection.RuntimePropertyInfo
  // [] Offset: FFFFFFFF
  class RuntimePropertyInfo : public System::Reflection::PropertyInfo/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // Creating value type constructor for type: RuntimePropertyInfo
    RuntimePropertyInfo() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // System.Reflection.BindingFlags get_BindingFlags()
    // Offset: 0x15D15C8
    System::Reflection::BindingFlags get_BindingFlags();
    // System.RuntimeType GetDeclaringTypeInternal()
    // Offset: 0x15D15F4
    System::RuntimeType* GetDeclaringTypeInternal();
    // private System.RuntimeType get_ReflectedTypeInternal()
    // Offset: 0x15D1680
    System::RuntimeType* get_ReflectedTypeInternal();
    // System.Reflection.RuntimeModule GetRuntimeModule()
    // Offset: 0x15D15D4
    System::Reflection::RuntimeModule* GetRuntimeModule();
    // private System.String FormatNameAndSig(System.Boolean serialization)
    // Offset: 0x15D1714
    ::Il2CppString* FormatNameAndSig(bool serialization);
    // System.String SerializationToString()
    // Offset: 0x15C944C
    ::Il2CppString* SerializationToString();
    // public override System.Reflection.Module get_Module()
    // Offset: 0x15D15D0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.Module MemberInfo::get_Module()
    System::Reflection::Module* get_Module();
    // public override System.String ToString()
    // Offset: 0x15D170C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x15D1868
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // protected System.Void .ctor()
    // Offset: 0x15CEE24
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Void PropertyInfo::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimePropertyInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::RuntimePropertyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimePropertyInfo*, creationType>()));
    }
  }; // System.Reflection.RuntimePropertyInfo
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RuntimePropertyInfo*, "System.Reflection", "RuntimePropertyInfo");
#pragma pack(pop)
