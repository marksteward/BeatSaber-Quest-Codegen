// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
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
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.InvalidTimeZoneException
  // [TypeForwardedFromAttribute] Offset: CA4748
  class InvalidTimeZoneException : public System::Exception {
    public:
    // Creating value type constructor for type: InvalidTimeZoneException
    InvalidTimeZoneException() noexcept {}
    // public System.Void .ctor(System.String message)
    // Offset: 0x169BB20
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidTimeZoneException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::InvalidTimeZoneException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidTimeZoneException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x169BB98
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception innerException)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidTimeZoneException* New_ctor(::Il2CppString* message, System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::InvalidTimeZoneException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidTimeZoneException*, creationType>(message, innerException)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x169BC18
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidTimeZoneException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::InvalidTimeZoneException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidTimeZoneException*, creationType>(info, context)));
    }
    // public System.Void .ctor()
    // Offset: 0x169BCA8
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidTimeZoneException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::InvalidTimeZoneException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidTimeZoneException*, creationType>()));
    }
  }; // System.InvalidTimeZoneException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::InvalidTimeZoneException*, "System", "InvalidTimeZoneException");
