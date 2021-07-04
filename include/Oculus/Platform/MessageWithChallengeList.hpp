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
  // Forward declaring type: ChallengeList
  class ChallengeList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithChallengeList
  class MessageWithChallengeList : public Oculus::Platform::Message_1<Oculus::Platform::Models::ChallengeList*> {
    public:
    // Creating value type constructor for type: MessageWithChallengeList
    MessageWithChallengeList() noexcept {}
    // protected Oculus.Platform.Models.ChallengeList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14CDDE0
    Oculus::Platform::Models::ChallengeList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CA498
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithChallengeList* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithChallengeList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithChallengeList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.ChallengeList GetChallengeList()
    // Offset: 0x14CDD9C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.ChallengeList Message::GetChallengeList()
    Oculus::Platform::Models::ChallengeList* GetChallengeList();
  }; // Oculus.Platform.MessageWithChallengeList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithChallengeList*, "Oculus.Platform", "MessageWithChallengeList");
// Writing MetadataGetter for method: Oculus::Platform::MessageWithChallengeList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithChallengeList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithChallengeList::GetChallengeList
// Il2CppName: GetChallengeList
// Cannot perform method pointer template specialization from operators!
