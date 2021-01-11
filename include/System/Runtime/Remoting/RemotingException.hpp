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
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.RemotingException
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3AC30
  class RemotingException : public System::SystemException {
    public:
    // Creating value type constructor for type: RemotingException
    RemotingException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1338080
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemotingException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::RemotingException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemotingException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x132A9D0
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemotingException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::RemotingException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemotingException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1338088
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemotingException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::RemotingException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemotingException*, creationType>(info, context)));
    }
    // public System.Void .ctor(System.String message, System.Exception InnerException)
    // Offset: 0x1338090
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception InnerException)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception InnerException)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemotingException* New_ctor(::Il2CppString* message, System::Exception* InnerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::RemotingException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemotingException*, creationType>(message, InnerException)));
    }
  }; // System.Runtime.Remoting.RemotingException
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::RemotingException*, "System.Runtime.Remoting", "RemotingException");
