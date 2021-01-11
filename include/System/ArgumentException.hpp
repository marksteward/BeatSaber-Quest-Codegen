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
  // Skipping declaration: Exception because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.ArgumentException
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D36D1C
  class ArgumentException : public System::SystemException {
    public:
    // private System.String m_paramName
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* m_paramName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ArgumentException
    ArgumentException(::Il2CppString* m_paramName_ = {}) noexcept : m_paramName{m_paramName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_paramName;
    }
    // public System.Void .ctor(System.String message, System.String paramName)
    // Offset: 0x1CA1DD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentException* New_ctor(::Il2CppString* message, ::Il2CppString* paramName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArgumentException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentException*, creationType>(message, paramName)));
    }
    // public System.Void .ctor()
    // Offset: 0x1CA1D30
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArgumentException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1C9F3B8
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArgumentException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x1CA1DA4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception innerException)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception innerException)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentException* New_ctor(::Il2CppString* message, System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArgumentException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentException*, creationType>(message, innerException)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1CA1E20
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArgumentException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentException*, creationType>(info, context)));
    }
    // public override System.String get_Message()
    // Offset: 0x1CA1EC0
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::Il2CppString* get_Message();
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1CA1FE0
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.ArgumentException
  static check_size<sizeof(ArgumentException), 136 + sizeof(::Il2CppString*)> __System_ArgumentExceptionSizeCheck;
  static_assert(sizeof(ArgumentException) == 0x90);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::ArgumentException*, "System", "ArgumentException");
