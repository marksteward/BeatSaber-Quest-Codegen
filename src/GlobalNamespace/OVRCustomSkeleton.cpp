// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: OVRCustomSkeleton
#include "GlobalNamespace/OVRCustomSkeleton.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: OVRPlugin/Skeleton
#include "GlobalNamespace/OVRPlugin_Skeleton.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVRCustomSkeleton.get_CustomBones
System::Collections::Generic::List_1<UnityEngine::Transform*>* GlobalNamespace::OVRCustomSkeleton::get_CustomBones() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<UnityEngine::Transform*>*>(this, "get_CustomBones"));
}
// Autogenerated method: OVRCustomSkeleton.InitializeBones
void GlobalNamespace::OVRCustomSkeleton::InitializeBones(GlobalNamespace::OVRPlugin::Skeleton skeleton) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitializeBones", skeleton));
}
// Autogenerated method: OVRCustomSkeleton..ctor
GlobalNamespace::OVRCustomSkeleton* GlobalNamespace::OVRCustomSkeleton::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<OVRCustomSkeleton*>());
}
