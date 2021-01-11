// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AndroidJavaProxy
#include "UnityEngine/AndroidJavaProxy.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVROnCompleteListener
  // [] Offset: FFFFFFFF
  class OVROnCompleteListener : public UnityEngine::AndroidJavaProxy {
    public:
    // Creating value type constructor for type: OVROnCompleteListener
    OVROnCompleteListener() noexcept {}
    // public System.Void onSuccess()
    // Offset: 0xFFFFFFFF
    void onSuccess();
    // public System.Void onFailure()
    // Offset: 0xFFFFFFFF
    void onFailure();
    // public System.Void .ctor()
    // Offset: 0x1235FA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVROnCompleteListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVROnCompleteListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVROnCompleteListener*, creationType>()));
    }
  }; // OVROnCompleteListener
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVROnCompleteListener*, "", "OVROnCompleteListener");
