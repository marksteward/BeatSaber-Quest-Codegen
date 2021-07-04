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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AmbiguousMatchException
  // [ComVisibleAttribute] Offset: D7B6AC
  class AmbiguousMatchException : public System::SystemException {
    public:
    // Creating value type constructor for type: AmbiguousMatchException
    AmbiguousMatchException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1C736C4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmbiguousMatchException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::AmbiguousMatchException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmbiguousMatchException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1C73738
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmbiguousMatchException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::AmbiguousMatchException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmbiguousMatchException*, creationType>(message)));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1C7376C
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmbiguousMatchException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::AmbiguousMatchException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmbiguousMatchException*, creationType>(info, context)));
    }
  }; // System.Reflection.AmbiguousMatchException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AmbiguousMatchException*, "System.Reflection", "AmbiguousMatchException");
// Writing MetadataGetter for method: System::Reflection::AmbiguousMatchException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::AmbiguousMatchException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::AmbiguousMatchException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
