// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Autogenerated type: System.Threading.SemaphoreFullException
  // [] Offset: FFFFFFFF
  // [TypeForwardedFromAttribute] Offset: D39AB4
  // [ComVisibleAttribute] Offset: D39AB4
  class SemaphoreFullException : public System::SystemException {
    public:
    // Creating value type constructor for type: SemaphoreFullException
    SemaphoreFullException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1D0A40C
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SemaphoreFullException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SemaphoreFullException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SemaphoreFullException*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1D0A46C
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SemaphoreFullException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SemaphoreFullException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SemaphoreFullException*, creationType>(info, context)));
    }
  }; // System.Threading.SemaphoreFullException
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::SemaphoreFullException*, "System.Threading", "SemaphoreFullException");
#pragma pack(pop)
