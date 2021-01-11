// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.IOException
#include "System/IO/IOException.hpp"
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
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.EndOfStreamException
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D392FC
  class EndOfStreamException : public System::IO::IOException {
    public:
    // Creating value type constructor for type: EndOfStreamException
    EndOfStreamException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1436340
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EndOfStreamException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::EndOfStreamException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EndOfStreamException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x14363C8
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EndOfStreamException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::EndOfStreamException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EndOfStreamException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1436410
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EndOfStreamException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::EndOfStreamException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EndOfStreamException*, creationType>(info, context)));
    }
  }; // System.IO.EndOfStreamException
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::IO::EndOfStreamException*, "System.IO", "EndOfStreamException");
