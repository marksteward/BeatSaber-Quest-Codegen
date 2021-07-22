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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithLeaderboardDidUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithLeaderboardDidUpdate : public Oculus::Platform::Message_1<bool> {
    public:
    // Creating value type constructor for type: MessageWithLeaderboardDidUpdate
    MessageWithLeaderboardDidUpdate() noexcept {}
    // protected System.Boolean GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x14A3214
    bool GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x149DC38
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithLeaderboardDidUpdate* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::MessageWithLeaderboardDidUpdate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithLeaderboardDidUpdate*, creationType>(c_message)));
    }
    // public override System.Boolean GetLeaderboardDidUpdate()
    // Offset: 0x14A31D0
    // Implemented from: Oculus.Platform.Message
    // Base method: System.Boolean Message::GetLeaderboardDidUpdate()
    bool GetLeaderboardDidUpdate();
  }; // Oculus.Platform.MessageWithLeaderboardDidUpdate
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLeaderboardDidUpdate*, "Oculus.Platform", "MessageWithLeaderboardDidUpdate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLeaderboardDidUpdate::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Platform::MessageWithLeaderboardDidUpdate::*)(System::IntPtr)>(&Oculus::Platform::MessageWithLeaderboardDidUpdate::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLeaderboardDidUpdate*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLeaderboardDidUpdate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLeaderboardDidUpdate::GetLeaderboardDidUpdate
// Il2CppName: GetLeaderboardDidUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Platform::MessageWithLeaderboardDidUpdate::*)()>(&Oculus::Platform::MessageWithLeaderboardDidUpdate::GetLeaderboardDidUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLeaderboardDidUpdate*), "GetLeaderboardDidUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
