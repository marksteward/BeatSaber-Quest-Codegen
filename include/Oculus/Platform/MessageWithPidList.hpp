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
  // Forward declaring type: PidList
  class PidList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithPidList
  class MessageWithPidList : public Oculus::Platform::Message_1<Oculus::Platform::Models::PidList*> {
    public:
    // Creating value type constructor for type: MessageWithPidList
    MessageWithPidList() noexcept {}
    // protected Oculus.Platform.Models.PidList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14D3470
    Oculus::Platform::Models::PidList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CAEB8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithPidList* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithPidList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithPidList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.PidList GetPidList()
    // Offset: 0x14D342C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.PidList Message::GetPidList()
    Oculus::Platform::Models::PidList* GetPidList();
  }; // Oculus.Platform.MessageWithPidList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithPidList*, "Oculus.Platform", "MessageWithPidList");
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPidList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPidList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPidList::GetPidList
// Il2CppName: GetPidList
// Cannot perform method pointer template specialization from operators!
