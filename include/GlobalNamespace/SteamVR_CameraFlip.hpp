// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_CameraFlip
  // [ExecuteInEditMode] Offset: DD1FA4
  class SteamVR_CameraFlip : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: SteamVR_CameraFlip
    SteamVR_CameraFlip() noexcept {}
    // private System.Void Awake()
    // Offset: 0x13CB4E0
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x13CB57C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_CameraFlip* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_CameraFlip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_CameraFlip*, creationType>()));
    }
  }; // SteamVR_CameraFlip
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_CameraFlip*, "", "SteamVR_CameraFlip");
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_CameraFlip::Awake
// Il2CppName: Awake
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_CameraFlip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
