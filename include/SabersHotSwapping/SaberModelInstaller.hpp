// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: SabersHotSwapping
namespace SabersHotSwapping {
  // Forward declaring type: SaberModelControllerProvider
  class SaberModelControllerProvider;
}
// Completed forward declares
// Type namespace: SabersHotSwapping
namespace SabersHotSwapping {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: SabersHotSwapping.SaberModelInstaller
  class SaberModelInstaller : public Zenject::MonoInstaller {
    public:
    // private SabersHotSwapping.SaberModelControllerProvider _saberModelControllerProviderPrefab
    // Size: 0x8
    // Offset: 0x20
    SabersHotSwapping::SaberModelControllerProvider* saberModelControllerProviderPrefab;
    // Field size check
    static_assert(sizeof(SabersHotSwapping::SaberModelControllerProvider*) == 0x8);
    // Creating value type constructor for type: SaberModelInstaller
    SaberModelInstaller(SabersHotSwapping::SaberModelControllerProvider* saberModelControllerProviderPrefab_ = {}) noexcept : saberModelControllerProviderPrefab{saberModelControllerProviderPrefab_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x10D3080
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x10D30F4
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberModelInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("SabersHotSwapping::SaberModelInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberModelInstaller*, creationType>()));
    }
  }; // SabersHotSwapping.SaberModelInstaller
  #pragma pack(pop)
  static check_size<sizeof(SaberModelInstaller), 32 + sizeof(SabersHotSwapping::SaberModelControllerProvider*)> __SabersHotSwapping_SaberModelInstallerSizeCheck;
  static_assert(sizeof(SaberModelInstaller) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(SabersHotSwapping::SaberModelInstaller*, "SabersHotSwapping", "SaberModelInstaller");
// Writing MetadataGetter for method: SabersHotSwapping::SaberModelInstaller::InstallBindings
// Il2CppName: InstallBindings
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: SabersHotSwapping::SaberModelInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
