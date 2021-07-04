// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CutScoreBuffer
#include "GlobalNamespace/CutScoreBuffer.hpp"
// Including type: Zenject.MemoryPool`1
#include "Zenject/MemoryPool_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: CutScoreBuffer/Pool
  class CutScoreBuffer::Pool : public Zenject::MemoryPool_1<GlobalNamespace::CutScoreBuffer*> {
    public:
    // Creating value type constructor for type: Pool
    Pool() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x119B060
    // Implemented from: Zenject.MemoryPool`1
    // Base method: System.Void MemoryPool_1::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CutScoreBuffer::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CutScoreBuffer::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CutScoreBuffer::Pool*, creationType>()));
    }
  }; // CutScoreBuffer/Pool
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CutScoreBuffer::Pool*, "", "CutScoreBuffer/Pool");
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::Pool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
