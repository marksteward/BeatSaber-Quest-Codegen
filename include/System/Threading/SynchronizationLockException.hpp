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
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.SynchronizationLockException
  // [ComVisibleAttribute] Offset: CA7E1C
  class SynchronizationLockException : public System::SystemException {
    public:
    // Creating value type constructor for type: SynchronizationLockException
    SynchronizationLockException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x17047DC
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SynchronizationLockException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SynchronizationLockException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SynchronizationLockException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x16FFFE4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SynchronizationLockException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SynchronizationLockException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SynchronizationLockException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1704850
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SynchronizationLockException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SynchronizationLockException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SynchronizationLockException*, creationType>(info, context)));
    }
  }; // System.Threading.SynchronizationLockException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::SynchronizationLockException*, "System.Threading", "SynchronizationLockException");
