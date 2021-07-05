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
  // Forward declaring type: LinkedAccountList
  class LinkedAccountList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithLinkedAccountList
  class MessageWithLinkedAccountList : public Oculus::Platform::Message_1<Oculus::Platform::Models::LinkedAccountList*> {
    public:
    // Creating value type constructor for type: MessageWithLinkedAccountList
    MessageWithLinkedAccountList() noexcept {}
    // protected Oculus.Platform.Models.LinkedAccountList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14D0710
    Oculus::Platform::Models::LinkedAccountList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14D066C
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithLinkedAccountList* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithLinkedAccountList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithLinkedAccountList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.LinkedAccountList GetLinkedAccountList()
    // Offset: 0x14D06CC
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LinkedAccountList Message::GetLinkedAccountList()
    Oculus::Platform::Models::LinkedAccountList* GetLinkedAccountList();
  }; // Oculus.Platform.MessageWithLinkedAccountList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLinkedAccountList*, "Oculus.Platform", "MessageWithLinkedAccountList");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLinkedAccountList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LinkedAccountList* (Oculus::Platform::MessageWithLinkedAccountList::*)(System::IntPtr)>(&Oculus::Platform::MessageWithLinkedAccountList::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLinkedAccountList*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLinkedAccountList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLinkedAccountList::GetLinkedAccountList
// Il2CppName: GetLinkedAccountList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LinkedAccountList* (Oculus::Platform::MessageWithLinkedAccountList::*)()>(&Oculus::Platform::MessageWithLinkedAccountList::GetLinkedAccountList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLinkedAccountList*), "GetLinkedAccountList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
