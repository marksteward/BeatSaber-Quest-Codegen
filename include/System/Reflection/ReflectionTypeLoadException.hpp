// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.SystemException
#include "System/SystemException.hpp"
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
  // Skipping declaration: Exception because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.ReflectionTypeLoadException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D69764
  class ReflectionTypeLoadException : public System::SystemException {
    public:
    // private System.Type[] _classes
    // Size: 0x8
    // Offset: 0x88
    ::Array<System::Type*>* classes;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // private System.Exception[] _exceptions
    // Size: 0x8
    // Offset: 0x90
    ::Array<System::Exception*>* exceptions;
    // Field size check
    static_assert(sizeof(::Array<System::Exception*>*) == 0x8);
    // Creating value type constructor for type: ReflectionTypeLoadException
    ReflectionTypeLoadException(::Array<System::Type*>* classes_ = {}, ::Array<System::Exception*>* exceptions_ = {}) noexcept : classes{classes_}, exceptions{exceptions_} {}
    // public System.Void .ctor(System.Type[] classes, System.Exception[] exceptions)
    // Offset: 0x1CB45E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeLoadException* New_ctor(::Array<System::Type*>* classes, ::Array<System::Exception*>* exceptions) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::ReflectionTypeLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeLoadException*, creationType>(classes, exceptions)));
    }
    // private System.Void .ctor()
    // Offset: 0x1CB4570
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeLoadException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::ReflectionTypeLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeLoadException*, creationType>()));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1CB4630
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeLoadException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::ReflectionTypeLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeLoadException*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1CB4790
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.Reflection.ReflectionTypeLoadException
  #pragma pack(pop)
  static check_size<sizeof(ReflectionTypeLoadException), 144 + sizeof(::Array<System::Exception*>*)> __System_Reflection_ReflectionTypeLoadExceptionSizeCheck;
  static_assert(sizeof(ReflectionTypeLoadException) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::ReflectionTypeLoadException*, "System.Reflection", "ReflectionTypeLoadException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::ReflectionTypeLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::ReflectionTypeLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::ReflectionTypeLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::ReflectionTypeLoadException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::ReflectionTypeLoadException::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Reflection::ReflectionTypeLoadException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ReflectionTypeLoadException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
