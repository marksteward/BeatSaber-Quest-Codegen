// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.UVEditing
#include "UnityEngine/ProBuilder/MeshOperations/UVEditing.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x14
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.UVEditing/<>c__DisplayClass13_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DE323C
  class UVEditing::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    // public System.Int32 b
    // Size: 0x4
    // Offset: 0x10
    int b;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass13_0
    $$c__DisplayClass13_0(int b_ = {}) noexcept : b{b_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return b;
    }
    // System.Boolean <SewUVs>b__0(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> x)
    // Offset: 0x13976CC
    bool $SewUVs$b__0(System::Collections::Generic::KeyValuePair_2<int, int> x);
    // public System.Void .ctor()
    // Offset: 0x1395C84
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UVEditing::$$c__DisplayClass13_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass13_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UVEditing::$$c__DisplayClass13_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.UVEditing/<>c__DisplayClass13_0
  static check_size<sizeof(UVEditing::$$c__DisplayClass13_0), 16 + sizeof(int)> __UnityEngine_ProBuilder_MeshOperations_UVEditing_$$c__DisplayClass13_0SizeCheck;
  static_assert(sizeof(UVEditing::$$c__DisplayClass13_0) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UVEditing::$$c__DisplayClass13_0*, "UnityEngine.ProBuilder.MeshOperations", "UVEditing/<>c__DisplayClass13_0");
#pragma pack(pop)
