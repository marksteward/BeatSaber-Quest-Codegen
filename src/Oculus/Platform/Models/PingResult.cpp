// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Oculus.Platform.Models.PingResult
#include "Oculus/Platform/Models/PingResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.Models.PingResult..ctor
Oculus::Platform::Models::PingResult* Oculus::Platform::Models::PingResult::New_ctor(uint64_t id, System::Nullable_1<uint64_t> pingTimeUsec) {
  return THROW_UNLESS(il2cpp_utils::New<PingResult*>(id, pingTimeUsec));
}
// Autogenerated method: Oculus.Platform.Models.PingResult.get_ID
uint64_t Oculus::Platform::Models::PingResult::get_ID() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>(this, "get_ID"));
}
// Autogenerated method: Oculus.Platform.Models.PingResult.set_ID
void Oculus::Platform::Models::PingResult::set_ID(uint64_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_ID", value));
}
// Autogenerated method: Oculus.Platform.Models.PingResult.get_PingTimeUsec
uint64_t Oculus::Platform::Models::PingResult::get_PingTimeUsec() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>(this, "get_PingTimeUsec"));
}
// Autogenerated method: Oculus.Platform.Models.PingResult.get_IsTimeout
bool Oculus::Platform::Models::PingResult::get_IsTimeout() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsTimeout"));
}
