// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberModelController
  class SaberModelController;
}
// Completed forward declares
// Type namespace: SabersHotSwapping
namespace SabersHotSwapping {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SabersHotSwapping.SabersLibrarySO
  class SabersLibrarySO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private SaberModelController[] _saberModelControllerPrefabs
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::SaberModelController*>* saberModelControllerPrefabs;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SaberModelController*>*) == 0x8);
    // Creating value type constructor for type: SabersLibrarySO
    SabersLibrarySO(::Array<GlobalNamespace::SaberModelController*>* saberModelControllerPrefabs_ = {}) noexcept : saberModelControllerPrefabs{saberModelControllerPrefabs_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public SaberModelController[] get_saberModelControllerPrefabs()
    // Offset: 0x10E1F64
    ::Array<GlobalNamespace::SaberModelController*>* get_saberModelControllerPrefabs();
    // public System.Int32 get_sabersCount()
    // Offset: 0x10E1EBC
    int get_sabersCount();
    // public System.Void .ctor()
    // Offset: 0x10E1F6C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SabersLibrarySO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("SabersHotSwapping::SabersLibrarySO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SabersLibrarySO*, creationType>()));
    }
  }; // SabersHotSwapping.SabersLibrarySO
  #pragma pack(pop)
  static check_size<sizeof(SabersLibrarySO), 24 + sizeof(::Array<GlobalNamespace::SaberModelController*>*)> __SabersHotSwapping_SabersLibrarySOSizeCheck;
  static_assert(sizeof(SabersLibrarySO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(SabersHotSwapping::SabersLibrarySO*, "SabersHotSwapping", "SabersLibrarySO");