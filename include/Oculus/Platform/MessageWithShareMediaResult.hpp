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
  // Forward declaring type: ShareMediaResult
  class ShareMediaResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithShareMediaResult
  class MessageWithShareMediaResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::ShareMediaResult*> {
    public:
    // Creating value type constructor for type: MessageWithShareMediaResult
    MessageWithShareMediaResult() noexcept {}
    // protected Oculus.Platform.Models.ShareMediaResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14D4E28
    Oculus::Platform::Models::ShareMediaResult* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CB2D8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithShareMediaResult* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithShareMediaResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithShareMediaResult*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.ShareMediaResult GetShareMediaResult()
    // Offset: 0x14D4DE4
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.ShareMediaResult Message::GetShareMediaResult()
    Oculus::Platform::Models::ShareMediaResult* GetShareMediaResult();
  }; // Oculus.Platform.MessageWithShareMediaResult
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithShareMediaResult*, "Oculus.Platform", "MessageWithShareMediaResult");
// Writing MetadataGetter for method: Oculus::Platform::MessageWithShareMediaResult::GetDataFromMessage
// Il2CppName: GetDataFromMessage
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithShareMediaResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithShareMediaResult::GetShareMediaResult
// Il2CppName: GetShareMediaResult
// Cannot perform method pointer template specialization from operators!
