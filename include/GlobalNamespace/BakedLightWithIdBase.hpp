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
  // Autogenerated type: BakedLightWithIdBase
  class BakedLightWithIdBase : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: BakedLightWithIdBase
    BakedLightWithIdBase() noexcept {}
    // public System.Int32 get_id()
    // Offset: 0xFFFFFFFF
    int get_id();
    // public System.Void SetupLightSource(System.Single intensityMultiplier)
    // Offset: 0xFFFFFFFF
    void SetupLightSource(float intensityMultiplier);
    // protected System.Void .ctor()
    // Offset: 0x235D9E0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BakedLightWithIdBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BakedLightWithIdBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BakedLightWithIdBase*, creationType>()));
    }
  }; // BakedLightWithIdBase
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BakedLightWithIdBase*, "", "BakedLightWithIdBase");
// Writing MetadataGetter for method: GlobalNamespace::BakedLightWithIdBase::get_id
// Il2CppName: get_id
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BakedLightWithIdBase::SetupLightSource
// Il2CppName: SetupLightSource
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BakedLightWithIdBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
