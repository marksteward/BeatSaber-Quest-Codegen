// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserDataStoreUpdateResponse
  class UserDataStoreUpdateResponse;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithUserDataStoreUpdateResponse
  class MessageWithUserDataStoreUpdateResponse : public Oculus::Platform::Message_1<Oculus::Platform::Models::UserDataStoreUpdateResponse*> {
    public:
    // Creating value type constructor for type: MessageWithUserDataStoreUpdateResponse
    MessageWithUserDataStoreUpdateResponse() noexcept {}
    // protected Oculus.Platform.Models.UserDataStoreUpdateResponse GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14D5868
    Oculus::Platform::Models::UserDataStoreUpdateResponse* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CB518
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithUserDataStoreUpdateResponse* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithUserDataStoreUpdateResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithUserDataStoreUpdateResponse*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.UserDataStoreUpdateResponse GetUserDataStoreUpdateResponse()
    // Offset: 0x14D5824
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.UserDataStoreUpdateResponse Message::GetUserDataStoreUpdateResponse()
    Oculus::Platform::Models::UserDataStoreUpdateResponse* GetUserDataStoreUpdateResponse();
  }; // Oculus.Platform.MessageWithUserDataStoreUpdateResponse
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithUserDataStoreUpdateResponse*, "Oculus.Platform", "MessageWithUserDataStoreUpdateResponse");
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUserDataStoreUpdateResponse::GetDataFromMessage
// Il2CppName: GetDataFromMessage
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUserDataStoreUpdateResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUserDataStoreUpdateResponse::GetUserDataStoreUpdateResponse
// Il2CppName: GetUserDataStoreUpdateResponse
// Cannot perform method pointer template specialization from operators!
