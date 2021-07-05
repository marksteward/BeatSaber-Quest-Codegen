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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Saber
  class Saber;
  // Forward declaring type: SaberModelController
  class SaberModelController;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SaberModelContainer
  class SaberModelContainer : public UnityEngine::MonoBehaviour {
    public:
    // private Saber _saber
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::Saber* saber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Saber*) == 0x8);
    // private SaberModelController _saberModelControllerPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::SaberModelController* saberModelControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberModelController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1F588
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x28
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: SaberModelContainer
    SaberModelContainer(GlobalNamespace::Saber* saber_ = {}, GlobalNamespace::SaberModelController* saberModelControllerPrefab_ = {}, Zenject::DiContainer* container_ = {}) noexcept : saber{saber_}, saberModelControllerPrefab{saberModelControllerPrefab_}, container{container_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x10B8744
    void Start();
    // public System.Void .ctor()
    // Offset: 0x10B8A70
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberModelContainer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberModelContainer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberModelContainer*, creationType>()));
    }
  }; // SaberModelContainer
  #pragma pack(pop)
  static check_size<sizeof(SaberModelContainer), 40 + sizeof(Zenject::DiContainer*)> __GlobalNamespace_SaberModelContainerSizeCheck;
  static_assert(sizeof(SaberModelContainer) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberModelContainer*, "", "SaberModelContainer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberModelContainer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberModelContainer::*)()>(&GlobalNamespace::SaberModelContainer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberModelContainer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberModelContainer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
