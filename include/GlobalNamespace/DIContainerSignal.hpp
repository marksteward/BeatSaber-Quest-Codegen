// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GenericSignal`1
#include "GlobalNamespace/GenericSignal_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: DIContainerSignal
  // [CreateAssetMenuAttribute] Offset: DE3000
  class DIContainerSignal : public GlobalNamespace::GenericSignal_1<Zenject::DiContainer*> {
    public:
    // Creating value type constructor for type: DIContainerSignal
    DIContainerSignal() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1240C08
    // Implemented from: GenericSignal`1
    // Base method: System.Void GenericSignal_1::.ctor()
    // Base method: System.Void Signal::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DIContainerSignal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DIContainerSignal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DIContainerSignal*, creationType>()));
    }
  }; // DIContainerSignal
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DIContainerSignal*, "", "DIContainerSignal");
// Writing MetadataGetter for method: GlobalNamespace::DIContainerSignal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
