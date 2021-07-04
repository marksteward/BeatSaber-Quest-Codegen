// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IOpenVRHaptics
#include "GlobalNamespace/IOpenVRHaptics.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SimpleOpenVrOpenVrHaptics
  class SimpleOpenVrOpenVrHaptics : public ::Il2CppObject/*, public GlobalNamespace::IOpenVRHaptics*/ {
    public:
    // Creating value type constructor for type: SimpleOpenVrOpenVrHaptics
    SimpleOpenVrOpenVrHaptics() noexcept {}
    // Creating interface conversion operator: operator GlobalNamespace::IOpenVRHaptics
    operator GlobalNamespace::IOpenVRHaptics() noexcept {
      return *reinterpret_cast<GlobalNamespace::IOpenVRHaptics*>(this);
    }
    // public System.Void TriggerHapticPulse(UnityEngine.XR.XRNode node, System.Single duration, System.Single strength, System.Single frequency)
    // Offset: 0x2389FBC
    void TriggerHapticPulse(UnityEngine::XR::XRNode node, float duration, float strength, float frequency);
    // public System.Void Destroy()
    // Offset: 0x238A0C4
    void Destroy();
    // public System.Void .ctor()
    // Offset: 0x238A0C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleOpenVrOpenVrHaptics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleOpenVrOpenVrHaptics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleOpenVrOpenVrHaptics*, creationType>()));
    }
  }; // SimpleOpenVrOpenVrHaptics
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleOpenVrOpenVrHaptics*, "", "SimpleOpenVrOpenVrHaptics");
// Writing MetadataGetter for method: GlobalNamespace::SimpleOpenVrOpenVrHaptics::TriggerHapticPulse
// Il2CppName: TriggerHapticPulse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleOpenVrOpenVrHaptics::*)(UnityEngine::XR::XRNode, float, float, float)>(&GlobalNamespace::SimpleOpenVrOpenVrHaptics::TriggerHapticPulse)> {
  const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* strength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleOpenVrOpenVrHaptics*), "TriggerHapticPulse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, duration, strength, frequency});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleOpenVrOpenVrHaptics::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleOpenVrOpenVrHaptics::*)()>(&GlobalNamespace::SimpleOpenVrOpenVrHaptics::Destroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleOpenVrOpenVrHaptics*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleOpenVrOpenVrHaptics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
