// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.RuntimeModule
#include "System/Reflection/RuntimeModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: RuntimeAssembly
  class RuntimeAssembly;
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Skipping declaration: StreamingContext because it is already included!
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.MonoModule
  // [ComVisibleAttribute] Offset: D7C508
  // [ClassInterfaceAttribute] Offset: D7C508
  // [ComDefaultInterfaceAttribute] Offset: D7C508
  class MonoModule : public System::Reflection::RuntimeModule {
    public:
    // Creating value type constructor for type: MonoModule
    MonoModule() noexcept {}
    // System.Reflection.RuntimeAssembly GetRuntimeAssembly()
    // Offset: 0x1C80BB4
    System::Reflection::RuntimeAssembly* GetRuntimeAssembly();
    // public override System.Reflection.Assembly get_Assembly()
    // Offset: 0x1C809D4
    // Implemented from: System.Reflection.Module
    // Base method: System.Reflection.Assembly Module::get_Assembly()
    System::Reflection::Assembly* get_Assembly();
    // public override System.String get_ScopeName()
    // Offset: 0x1C809DC
    // Implemented from: System.Reflection.Module
    // Base method: System.String Module::get_ScopeName()
    ::Il2CppString* get_ScopeName();
    // public override System.Guid get_ModuleVersionId()
    // Offset: 0x1C809E4
    // Implemented from: System.Reflection.Module
    // Base method: System.Guid Module::get_ModuleVersionId()
    System::Guid get_ModuleVersionId();
    // public override System.Boolean IsResource()
    // Offset: 0x1C809F0
    // Implemented from: System.Reflection.Module
    // Base method: System.Boolean Module::IsResource()
    bool IsResource();
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1C809F8
    // Implemented from: System.Reflection.Module
    // Base method: System.Object[] Module::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1C80A78
    // Implemented from: System.Reflection.Module
    // Base method: System.Boolean Module::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1C80AF8
    // Implemented from: System.Reflection.Module
    // Base method: System.Void Module::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Void .ctor()
    // Offset: 0x1C80C34
    // Implemented from: System.Reflection.RuntimeModule
    // Base method: System.Void RuntimeModule::.ctor()
    // Base method: System.Void Module::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoModule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::MonoModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoModule*, creationType>()));
    }
  }; // System.Reflection.MonoModule
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoModule*, "System.Reflection", "MonoModule");
// Writing MetadataGetter for method: System::Reflection::MonoModule::GetRuntimeAssembly
// Il2CppName: GetRuntimeAssembly
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::MonoModule::get_Assembly
// Il2CppName: get_Assembly
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::MonoModule::get_ScopeName
// Il2CppName: get_ScopeName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::MonoModule::get_ModuleVersionId
// Il2CppName: get_ModuleVersionId
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::MonoModule::IsResource
// Il2CppName: IsResource
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::MonoModule::GetCustomAttributes
// Il2CppName: GetCustomAttributes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::MonoModule::IsDefined
// Il2CppName: IsDefined
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::MonoModule::GetObjectData
// Il2CppName: GetObjectData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::MonoModule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
