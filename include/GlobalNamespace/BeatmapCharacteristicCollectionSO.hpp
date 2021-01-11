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
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCharacteristicCollectionSO
  // [] Offset: FFFFFFFF
  class BeatmapCharacteristicCollectionSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private BeatmapCharacteristicSO[] _beatmapCharacteristics
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* beatmapCharacteristics;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // Creating value type constructor for type: BeatmapCharacteristicCollectionSO
    BeatmapCharacteristicCollectionSO(::Array<GlobalNamespace::BeatmapCharacteristicSO*>* beatmapCharacteristics_ = {}) noexcept : beatmapCharacteristics{beatmapCharacteristics_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public BeatmapCharacteristicSO[] get_beatmapCharacteristics()
    // Offset: 0x1A7BA30
    ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* get_beatmapCharacteristics();
    // public System.Void set_beatmapCharacteristics(BeatmapCharacteristicSO[] value)
    // Offset: 0x1A7BA38
    void set_beatmapCharacteristics(::Array<GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public BeatmapCharacteristicSO GetBeatmapCharacteristicBySerializedName(System.String serializedName)
    // Offset: 0x1A7BA40
    GlobalNamespace::BeatmapCharacteristicSO* GetBeatmapCharacteristicBySerializedName(::Il2CppString* serializedName);
    // public System.Boolean ContainsBeatmapCharacteristic(BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x1A7BACC
    bool ContainsBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // public System.Void .ctor()
    // Offset: 0x1A7BBAC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCharacteristicCollectionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapCharacteristicCollectionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCharacteristicCollectionSO*, creationType>()));
    }
  }; // BeatmapCharacteristicCollectionSO
  static check_size<sizeof(BeatmapCharacteristicCollectionSO), 24 + sizeof(::Array<GlobalNamespace::BeatmapCharacteristicSO*>*)> __GlobalNamespace_BeatmapCharacteristicCollectionSOSizeCheck;
  static_assert(sizeof(BeatmapCharacteristicCollectionSO) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicCollectionSO*, "", "BeatmapCharacteristicCollectionSO");
