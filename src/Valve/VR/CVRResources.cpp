// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.CVRResources
#include "Valve/VR/CVRResources.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.CVRResources..ctor
Valve::VR::CVRResources* Valve::VR::CVRResources::New_ctor(System::IntPtr pInterface) {
  return THROW_UNLESS(il2cpp_utils::New<CVRResources*>(pInterface));
}
// Autogenerated method: Valve.VR.CVRResources.LoadSharedResource
uint Valve::VR::CVRResources::LoadSharedResource(::Il2CppString* pchResourceName, ::Il2CppString* pchBuffer, uint unBufferLen) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "LoadSharedResource", pchResourceName, pchBuffer, unBufferLen));
}
// Autogenerated method: Valve.VR.CVRResources.GetResourceFullPath
uint Valve::VR::CVRResources::GetResourceFullPath(::Il2CppString* pchResourceName, ::Il2CppString* pchResourceTypeDirectory, System::Text::StringBuilder* pchPathBuffer, uint unBufferLen) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetResourceFullPath", pchResourceName, pchResourceTypeDirectory, pchPathBuffer, unBufferLen));
}
