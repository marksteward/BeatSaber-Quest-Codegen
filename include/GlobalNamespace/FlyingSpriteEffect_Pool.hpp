// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FlyingSpriteEffect
#include "GlobalNamespace/FlyingSpriteEffect.hpp"
// Including type: Zenject.MonoMemoryPool`1
#include "Zenject/MonoMemoryPool_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: FlyingSpriteEffect/Pool
  class FlyingSpriteEffect::Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::FlyingSpriteEffect*> {
    public:
    // Creating value type constructor for type: Pool
    Pool() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x107BB30
    // Implemented from: Zenject.MonoMemoryPool`1
    // Base method: System.Void MonoMemoryPool_1::.ctor()
    // Base method: System.Void MemoryPool_1::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingSpriteEffect::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlyingSpriteEffect::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingSpriteEffect::Pool*, creationType>()));
    }
  }; // FlyingSpriteEffect/Pool
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingSpriteEffect::Pool*, "", "FlyingSpriteEffect/Pool");
// Writing MetadataGetter for method: GlobalNamespace::FlyingSpriteEffect::Pool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
