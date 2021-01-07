// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_TrackedCamera
#include "GlobalNamespace/SteamVR_TrackedCamera.hpp"
// Including type: SteamVR_TrackedCamera/VideoStreamTexture
#include "GlobalNamespace/SteamVR_TrackedCamera_VideoStreamTexture.hpp"
// Including type: SteamVR_TrackedCamera/VideoStream
#include "GlobalNamespace/SteamVR_TrackedCamera_VideoStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private SteamVR_TrackedCamera/VideoStreamTexture[] distorted
::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*>* GlobalNamespace::SteamVR_TrackedCamera::_get_distorted() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SteamVR_TrackedCamera").WithContext("_get_distorted");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*>*>("", "SteamVR_TrackedCamera", "distorted"));
}
// Autogenerated static field setter
// Set static field: static private SteamVR_TrackedCamera/VideoStreamTexture[] distorted
void GlobalNamespace::SteamVR_TrackedCamera::_set_distorted(::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SteamVR_TrackedCamera").WithContext("_set_distorted");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SteamVR_TrackedCamera", "distorted", value));
}
// Autogenerated static field getter
// Get static field: static private SteamVR_TrackedCamera/VideoStreamTexture[] undistorted
::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*>* GlobalNamespace::SteamVR_TrackedCamera::_get_undistorted() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SteamVR_TrackedCamera").WithContext("_get_undistorted");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*>*>("", "SteamVR_TrackedCamera", "undistorted"));
}
// Autogenerated static field setter
// Set static field: static private SteamVR_TrackedCamera/VideoStreamTexture[] undistorted
void GlobalNamespace::SteamVR_TrackedCamera::_set_undistorted(::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SteamVR_TrackedCamera").WithContext("_set_undistorted");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SteamVR_TrackedCamera", "undistorted", value));
}
// Autogenerated static field getter
// Get static field: static private SteamVR_TrackedCamera/VideoStream[] videostreams
::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStream*>* GlobalNamespace::SteamVR_TrackedCamera::_get_videostreams() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SteamVR_TrackedCamera").WithContext("_get_videostreams");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStream*>*>("", "SteamVR_TrackedCamera", "videostreams"));
}
// Autogenerated static field setter
// Set static field: static private SteamVR_TrackedCamera/VideoStream[] videostreams
void GlobalNamespace::SteamVR_TrackedCamera::_set_videostreams(::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStream*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SteamVR_TrackedCamera").WithContext("_set_videostreams");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SteamVR_TrackedCamera", "videostreams", value));
}
// Autogenerated method: SteamVR_TrackedCamera.Distorted
GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture* GlobalNamespace::SteamVR_TrackedCamera::Distorted(int deviceIndex) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SteamVR_TrackedCamera").WithContext("Distorted");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "SteamVR_TrackedCamera", "Distorted", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(deviceIndex)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, deviceIndex);
}
// Autogenerated method: SteamVR_TrackedCamera.Undistorted
GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture* GlobalNamespace::SteamVR_TrackedCamera::Undistorted(int deviceIndex) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SteamVR_TrackedCamera").WithContext("Undistorted");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "SteamVR_TrackedCamera", "Undistorted", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(deviceIndex)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, deviceIndex);
}
// Autogenerated method: SteamVR_TrackedCamera.Source
GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture* GlobalNamespace::SteamVR_TrackedCamera::Source(bool undistorted, int deviceIndex) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SteamVR_TrackedCamera").WithContext("Source");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "SteamVR_TrackedCamera", "Source", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(undistorted, deviceIndex)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, undistorted, deviceIndex);
}
// Autogenerated method: SteamVR_TrackedCamera.Stream
GlobalNamespace::SteamVR_TrackedCamera::VideoStream* GlobalNamespace::SteamVR_TrackedCamera::Stream(uint deviceIndex) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SteamVR_TrackedCamera").WithContext("Stream");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "SteamVR_TrackedCamera", "Stream", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(deviceIndex)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::SteamVR_TrackedCamera::VideoStream*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, deviceIndex);
}
