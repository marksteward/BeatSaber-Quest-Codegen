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
  // Autogenerated type: OVRAutoDestroyInMRC
  // [] Offset: FFFFFFFF
  class OVRAutoDestroyInMRC : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: OVRAutoDestroyInMRC
    OVRAutoDestroyInMRC() noexcept {}
    // private System.Void Start()
    // Offset: 0x1068CB0
    void Start();
    // private System.Void Update()
    // Offset: 0x1068DD4
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1068DD8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRAutoDestroyInMRC* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRAutoDestroyInMRC::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRAutoDestroyInMRC*, creationType>()));
    }
  }; // OVRAutoDestroyInMRC
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRAutoDestroyInMRC*, "", "OVRAutoDestroyInMRC");
