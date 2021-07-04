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
  // Forward declaring type: UserProof
  class UserProof;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithUserProof
  class MessageWithUserProof : public Oculus::Platform::Message_1<Oculus::Platform::Models::UserProof*> {
    public:
    // Creating value type constructor for type: MessageWithUserProof
    MessageWithUserProof() noexcept {}
    // protected Oculus.Platform.Models.UserProof GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14D5CB4
    Oculus::Platform::Models::UserProof* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CB578
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithUserProof* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithUserProof::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithUserProof*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.UserProof GetUserProof()
    // Offset: 0x14D5C70
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.UserProof Message::GetUserProof()
    Oculus::Platform::Models::UserProof* GetUserProof();
  }; // Oculus.Platform.MessageWithUserProof
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithUserProof*, "Oculus.Platform", "MessageWithUserProof");
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUserProof::GetDataFromMessage
// Il2CppName: GetDataFromMessage
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUserProof::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUserProof::GetUserProof
// Il2CppName: GetUserProof
// Cannot perform method pointer template specialization from operators!
