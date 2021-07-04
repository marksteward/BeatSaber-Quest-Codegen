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
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0xA4
  #pragma pack(push, 1)
  // Autogenerated type: System.TypeLoadException
  // [ComVisibleAttribute] Offset: D7B008
  class TypeLoadException : public System::SystemException {
    public:
    // private System.String ClassName
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* ClassName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String AssemblyName
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppString* AssemblyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String MessageArg
    // Size: 0x8
    // Offset: 0x98
    ::Il2CppString* MessageArg;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Int32 ResourceId
    // Size: 0x4
    // Offset: 0xA0
    int ResourceId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TypeLoadException
    TypeLoadException(::Il2CppString* ClassName_ = {}, ::Il2CppString* AssemblyName_ = {}, ::Il2CppString* MessageArg_ = {}, int ResourceId_ = {}) noexcept : ClassName{ClassName_}, AssemblyName{AssemblyName_}, MessageArg{MessageArg_}, ResourceId{ResourceId_} {}
    // private System.Void SetMessageField()
    // Offset: 0x232B64C
    void SetMessageField();
    // private System.Void .ctor(System.String className, System.String assemblyName)
    // Offset: 0x232B750
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeLoadException* New_ctor(::Il2CppString* className, ::Il2CppString* assemblyName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeLoadException*, creationType>(className, assemblyName)));
    }
    // private System.Void .ctor(System.String className, System.String assemblyName, System.String messageArg, System.Int32 resourceId)
    // Offset: 0x232B75C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeLoadException* New_ctor(::Il2CppString* className, ::Il2CppString* assemblyName, ::Il2CppString* messageArg, int resourceId) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeLoadException*, creationType>(className, assemblyName, messageArg, resourceId)));
    }
    // public System.Void .ctor()
    // Offset: 0x232B5B4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeLoadException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeLoadException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x232AE88
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeLoadException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeLoadException*, creationType>(message)));
    }
    // public override System.String get_Message()
    // Offset: 0x232B628
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::Il2CppString* get_Message();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x232B7C8
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeLoadException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeLoadException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeLoadException*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x232B8EC
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.TypeLoadException
  #pragma pack(pop)
  static check_size<sizeof(TypeLoadException), 160 + sizeof(int)> __System_TypeLoadExceptionSizeCheck;
  static_assert(sizeof(TypeLoadException) == 0xA4);
}
DEFINE_IL2CPP_ARG_TYPE(System::TypeLoadException*, "System", "TypeLoadException");
// Writing MetadataGetter for method: System::TypeLoadException::SetMessageField
// Il2CppName: SetMessageField
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::TypeLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TypeLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TypeLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TypeLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TypeLoadException::get_Message
// Il2CppName: get_Message
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::TypeLoadException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TypeLoadException::GetObjectData
// Il2CppName: GetObjectData
// Cannot perform method pointer template specialization from operators!
