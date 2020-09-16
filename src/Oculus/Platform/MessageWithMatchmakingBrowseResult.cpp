// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Oculus.Platform.MessageWithMatchmakingBrowseResult
#include "Oculus/Platform/MessageWithMatchmakingBrowseResult.hpp"
// Including type: Oculus.Platform.Models.MatchmakingBrowseResult
#include "Oculus/Platform/Models/MatchmakingBrowseResult.hpp"
// Including type: Oculus.Platform.Models.MatchmakingEnqueueResult
#include "Oculus/Platform/Models/MatchmakingEnqueueResult.hpp"
// Including type: Oculus.Platform.Models.RoomList
#include "Oculus/Platform/Models/RoomList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithMatchmakingBrowseResult.GetDataFromMessage
Oculus::Platform::Models::MatchmakingBrowseResult* Oculus::Platform::MessageWithMatchmakingBrowseResult::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::MatchmakingBrowseResult*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithMatchmakingBrowseResult..ctor
Oculus::Platform::MessageWithMatchmakingBrowseResult* Oculus::Platform::MessageWithMatchmakingBrowseResult::New_ctor(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::New<MessageWithMatchmakingBrowseResult*>(c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithMatchmakingBrowseResult.GetMatchmakingEnqueueResult
Oculus::Platform::Models::MatchmakingEnqueueResult* Oculus::Platform::MessageWithMatchmakingBrowseResult::GetMatchmakingEnqueueResult() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::MatchmakingEnqueueResult*>(this, "GetMatchmakingEnqueueResult"));
}
// Autogenerated method: Oculus.Platform.MessageWithMatchmakingBrowseResult.GetRoomList
Oculus::Platform::Models::RoomList* Oculus::Platform::MessageWithMatchmakingBrowseResult::GetRoomList() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::RoomList*>(this, "GetRoomList"));
}
