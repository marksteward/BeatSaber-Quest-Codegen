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
  // Forward declaring type: InstalledApplicationList
  class InstalledApplicationList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithInstalledApplicationList
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithInstalledApplicationList : public Oculus::Platform::Message_1<Oculus::Platform::Models::InstalledApplicationList*> {
    public:
    // Creating value type constructor for type: MessageWithInstalledApplicationList
    MessageWithInstalledApplicationList() noexcept {}
    // protected Oculus.Platform.Models.InstalledApplicationList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14A24F0
    Oculus::Platform::Models::InstalledApplicationList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x14A244C
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithInstalledApplicationList* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithInstalledApplicationList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithInstalledApplicationList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.InstalledApplicationList GetInstalledApplicationList()
    // Offset: 0x14A24AC
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.InstalledApplicationList Message::GetInstalledApplicationList()
    Oculus::Platform::Models::InstalledApplicationList* GetInstalledApplicationList();
  }; // Oculus.Platform.MessageWithInstalledApplicationList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithInstalledApplicationList*, "Oculus.Platform", "MessageWithInstalledApplicationList");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithInstalledApplicationList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::InstalledApplicationList* (Oculus::Platform::MessageWithInstalledApplicationList::*)(System::IntPtr)>(&Oculus::Platform::MessageWithInstalledApplicationList::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithInstalledApplicationList*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithInstalledApplicationList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithInstalledApplicationList::GetInstalledApplicationList
// Il2CppName: GetInstalledApplicationList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::InstalledApplicationList* (Oculus::Platform::MessageWithInstalledApplicationList::*)()>(&Oculus::Platform::MessageWithInstalledApplicationList::GetInstalledApplicationList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithInstalledApplicationList*), "GetInstalledApplicationList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
