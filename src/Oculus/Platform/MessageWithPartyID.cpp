// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Oculus.Platform.MessageWithPartyID
#include "Oculus/Platform/MessageWithPartyID.hpp"
// Including type: Oculus.Platform.Models.PartyID
#include "Oculus/Platform/Models/PartyID.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithPartyID.GetDataFromMessage
Oculus::Platform::Models::PartyID* Oculus::Platform::MessageWithPartyID::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::PartyID*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithPartyID..ctor
Oculus::Platform::MessageWithPartyID* Oculus::Platform::MessageWithPartyID::New_ctor(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::New<MessageWithPartyID*>(c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithPartyID.GetPartyID
Oculus::Platform::Models::PartyID* Oculus::Platform::MessageWithPartyID::GetPartyID() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::PartyID*>(this, "GetPartyID"));
}
