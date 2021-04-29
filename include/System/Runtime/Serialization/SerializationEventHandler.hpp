// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Skipping declaration: StreamingContext because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.SerializationEventHandler
  class SerializationEventHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: SerializationEventHandler
    SerializationEventHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1508AA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationEventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::SerializationEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1506BC4
    void Invoke(System::Runtime::Serialization::StreamingContext context);
    // public System.IAsyncResult BeginInvoke(System.Runtime.Serialization.StreamingContext context, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1508AB8
    System::IAsyncResult* BeginInvoke(System::Runtime::Serialization::StreamingContext context, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1508B44
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Runtime.Serialization.SerializationEventHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationEventHandler*, "System.Runtime.Serialization", "SerializationEventHandler");
