// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.MessageDictionary
#include "System/Runtime/Remoting/Messaging/MessageDictionary.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMethodReturnMessage
  class IMethodReturnMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.MethodReturnDictionary
  class MethodReturnDictionary : public System::Runtime::Remoting::Messaging::MessageDictionary {
    public:
    // Creating value type constructor for type: MethodReturnDictionary
    MethodReturnDictionary() noexcept {}
    // Get static field: static public System.String[] InternalReturnKeys
    static ::Array<::Il2CppString*>* _get_InternalReturnKeys();
    // Set static field: static public System.String[] InternalReturnKeys
    static void _set_InternalReturnKeys(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] InternalExceptionKeys
    static ::Array<::Il2CppString*>* _get_InternalExceptionKeys();
    // Set static field: static public System.String[] InternalExceptionKeys
    static void _set_InternalExceptionKeys(::Array<::Il2CppString*>* value);
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodReturnMessage message)
    // Offset: 0x1A42308
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodReturnDictionary* New_ctor(System::Runtime::Remoting::Messaging::IMethodReturnMessage* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::MethodReturnDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodReturnDictionary*, creationType>(message)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1A42914
    static void _cctor();
  }; // System.Runtime.Remoting.Messaging.MethodReturnDictionary
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MethodReturnDictionary*, "System.Runtime.Remoting.Messaging", "MethodReturnDictionary");
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodReturnDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodReturnDictionary::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
