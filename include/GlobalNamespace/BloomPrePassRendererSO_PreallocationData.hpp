// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassRendererSO
#include "GlobalNamespace/BloomPrePassRendererSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassLightTypeSO
  class BloomPrePassLightTypeSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassRendererSO/PreallocationData
  // [] Offset: FFFFFFFF
  class BloomPrePassRendererSO::PreallocationData : public ::Il2CppObject {
    public:
    // public BloomPrePassLightTypeSO lightType
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BloomPrePassLightTypeSO* lightType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassLightTypeSO*) == 0x8);
    // public System.Int32 preallocateCount
    // Size: 0x4
    // Offset: 0x18
    int preallocateCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PreallocationData
    PreallocationData(GlobalNamespace::BloomPrePassLightTypeSO* lightType_ = {}, int preallocateCount_ = {}) noexcept : lightType{lightType_}, preallocateCount{preallocateCount_} {}
    // public System.Void .ctor()
    // Offset: 0x1877DE0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassRendererSO::PreallocationData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassRendererSO::PreallocationData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassRendererSO::PreallocationData*, creationType>()));
    }
  }; // BloomPrePassRendererSO/PreallocationData
  static check_size<sizeof(BloomPrePassRendererSO::PreallocationData), 24 + sizeof(int)> __GlobalNamespace_BloomPrePassRendererSO_PreallocationDataSizeCheck;
  static_assert(sizeof(BloomPrePassRendererSO::PreallocationData) == 0x1C);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassRendererSO::PreallocationData*, "", "BloomPrePassRendererSO/PreallocationData");
