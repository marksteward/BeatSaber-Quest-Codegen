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
  // Forward declaring type: InvitePanelResultInfo
  class InvitePanelResultInfo;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithInvitePanelResultInfo
  class MessageWithInvitePanelResultInfo : public Oculus::Platform::Message_1<Oculus::Platform::Models::InvitePanelResultInfo*> {
    public:
    // Creating value type constructor for type: MessageWithInvitePanelResultInfo
    MessageWithInvitePanelResultInfo() noexcept {}
    // protected Oculus.Platform.Models.InvitePanelResultInfo GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14CF600
    Oculus::Platform::Models::InvitePanelResultInfo* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14CF55C
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithInvitePanelResultInfo* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithInvitePanelResultInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithInvitePanelResultInfo*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.InvitePanelResultInfo GetInvitePanelResultInfo()
    // Offset: 0x14CF5BC
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.InvitePanelResultInfo Message::GetInvitePanelResultInfo()
    Oculus::Platform::Models::InvitePanelResultInfo* GetInvitePanelResultInfo();
  }; // Oculus.Platform.MessageWithInvitePanelResultInfo
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithInvitePanelResultInfo*, "Oculus.Platform", "MessageWithInvitePanelResultInfo");
// Writing MetadataGetter for method: Oculus::Platform::MessageWithInvitePanelResultInfo::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::InvitePanelResultInfo* (Oculus::Platform::MessageWithInvitePanelResultInfo::*)(System::IntPtr)>(&Oculus::Platform::MessageWithInvitePanelResultInfo::GetDataFromMessage)> {
  const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithInvitePanelResultInfo*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithInvitePanelResultInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithInvitePanelResultInfo::GetInvitePanelResultInfo
// Il2CppName: GetInvitePanelResultInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::InvitePanelResultInfo* (Oculus::Platform::MessageWithInvitePanelResultInfo::*)()>(&Oculus::Platform::MessageWithInvitePanelResultInfo::GetInvitePanelResultInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithInvitePanelResultInfo*), "GetInvitePanelResultInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
