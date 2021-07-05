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
    // Offset: 0x1699A80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationEventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::SerializationEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1697B9C
    void Invoke(System::Runtime::Serialization::StreamingContext context);
    // public System.IAsyncResult BeginInvoke(System.Runtime.Serialization.StreamingContext context, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1699A90
    System::IAsyncResult* BeginInvoke(System::Runtime::Serialization::StreamingContext context, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1699B1C
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Runtime.Serialization.SerializationEventHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationEventHandler*, "System.Runtime.Serialization", "SerializationEventHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationEventHandler::*)(System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::SerializationEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Runtime::Serialization::SerializationEventHandler::*)(System::Runtime::Serialization::StreamingContext, System::AsyncCallback*, ::Il2CppObject*)>(&System::Runtime::Serialization::SerializationEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, callback, object});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationEventHandler::*)(System::IAsyncResult*)>(&System::Runtime::Serialization::SerializationEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
