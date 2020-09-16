// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Oculus.Platform.MessageWithApplicationVersion
#include "Oculus/Platform/MessageWithApplicationVersion.hpp"
// Including type: Oculus.Platform.Models.ApplicationVersion
#include "Oculus/Platform/Models/ApplicationVersion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithApplicationVersion.GetDataFromMessage
Oculus::Platform::Models::ApplicationVersion* Oculus::Platform::MessageWithApplicationVersion::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::ApplicationVersion*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithApplicationVersion..ctor
Oculus::Platform::MessageWithApplicationVersion* Oculus::Platform::MessageWithApplicationVersion::New_ctor(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::New<MessageWithApplicationVersion*>(c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithApplicationVersion.GetApplicationVersion
Oculus::Platform::Models::ApplicationVersion* Oculus::Platform::MessageWithApplicationVersion::GetApplicationVersion() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::ApplicationVersion*>(this, "GetApplicationVersion"));
}
