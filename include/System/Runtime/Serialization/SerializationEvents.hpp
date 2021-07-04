// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
  // Forward declaring type: SerializationEventHandler
  class SerializationEventHandler;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.SerializationEvents
  class SerializationEvents : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<System.Reflection.MethodInfo> m_OnSerializingMethods
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Reflection::MethodInfo*>* m_OnSerializingMethods;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Reflection::MethodInfo*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Reflection.MethodInfo> m_OnSerializedMethods
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Reflection::MethodInfo*>* m_OnSerializedMethods;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Reflection::MethodInfo*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Reflection.MethodInfo> m_OnDeserializingMethods
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<System::Reflection::MethodInfo*>* m_OnDeserializingMethods;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Reflection::MethodInfo*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Reflection.MethodInfo> m_OnDeserializedMethods
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<System::Reflection::MethodInfo*>* m_OnDeserializedMethods;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Reflection::MethodInfo*>*) == 0x8);
    // Creating value type constructor for type: SerializationEvents
    SerializationEvents(System::Collections::Generic::List_1<System::Reflection::MethodInfo*>* m_OnSerializingMethods_ = {}, System::Collections::Generic::List_1<System::Reflection::MethodInfo*>* m_OnSerializedMethods_ = {}, System::Collections::Generic::List_1<System::Reflection::MethodInfo*>* m_OnDeserializingMethods_ = {}, System::Collections::Generic::List_1<System::Reflection::MethodInfo*>* m_OnDeserializedMethods_ = {}) noexcept : m_OnSerializingMethods{m_OnSerializingMethods_}, m_OnSerializedMethods{m_OnSerializedMethods_}, m_OnDeserializingMethods{m_OnDeserializingMethods_}, m_OnDeserializedMethods{m_OnDeserializedMethods_} {}
    // private System.Collections.Generic.List`1<System.Reflection.MethodInfo> GetMethodsWithAttribute(System.Type attribute, System.Type t)
    // Offset: 0x1699B28
    System::Collections::Generic::List_1<System::Reflection::MethodInfo*>* GetMethodsWithAttribute(System::Type* attribute, System::Type* t);
    // System.Void .ctor(System.Type t)
    // Offset: 0x1699D08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationEvents* New_ctor(System::Type* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::SerializationEvents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationEvents*, creationType>(t)));
    }
    // System.Boolean get_HasOnSerializingEvents()
    // Offset: 0x1699E14
    bool get_HasOnSerializingEvents();
    // System.Void InvokeOnSerializing(System.Object obj, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1699E34
    void InvokeOnSerializing(::Il2CppObject* obj, System::Runtime::Serialization::StreamingContext context);
    // System.Void InvokeOnDeserializing(System.Object obj, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1698728
    void InvokeOnDeserializing(::Il2CppObject* obj, System::Runtime::Serialization::StreamingContext context);
    // System.Void InvokeOnDeserialized(System.Object obj, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x169845C
    void InvokeOnDeserialized(::Il2CppObject* obj, System::Runtime::Serialization::StreamingContext context);
    // System.Runtime.Serialization.SerializationEventHandler AddOnSerialized(System.Object obj, System.Runtime.Serialization.SerializationEventHandler handler)
    // Offset: 0x169A064
    System::Runtime::Serialization::SerializationEventHandler* AddOnSerialized(::Il2CppObject* obj, System::Runtime::Serialization::SerializationEventHandler* handler);
    // System.Runtime.Serialization.SerializationEventHandler AddOnDeserialized(System.Object obj, System.Runtime.Serialization.SerializationEventHandler handler)
    // Offset: 0x16981B8
    System::Runtime::Serialization::SerializationEventHandler* AddOnDeserialized(::Il2CppObject* obj, System::Runtime::Serialization::SerializationEventHandler* handler);
  }; // System.Runtime.Serialization.SerializationEvents
  #pragma pack(pop)
  static check_size<sizeof(SerializationEvents), 40 + sizeof(System::Collections::Generic::List_1<System::Reflection::MethodInfo*>*)> __System_Runtime_Serialization_SerializationEventsSizeCheck;
  static_assert(sizeof(SerializationEvents) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationEvents*, "System.Runtime.Serialization", "SerializationEvents");
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEvents::GetMethodsWithAttribute
// Il2CppName: GetMethodsWithAttribute
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEvents::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEvents::get_HasOnSerializingEvents
// Il2CppName: get_HasOnSerializingEvents
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEvents::InvokeOnSerializing
// Il2CppName: InvokeOnSerializing
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEvents::InvokeOnDeserializing
// Il2CppName: InvokeOnDeserializing
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEvents::InvokeOnDeserialized
// Il2CppName: InvokeOnDeserialized
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEvents::AddOnSerialized
// Il2CppName: AddOnSerialized
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEvents::AddOnDeserialized
// Il2CppName: AddOnDeserialized
// Cannot perform method pointer template specialization from operators!
