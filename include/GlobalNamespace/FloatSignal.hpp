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
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: FloatSignal
  class FloatSignal : public GlobalNamespace::GenericSignal_1<float> {
    public:
    // Creating value type constructor for type: FloatSignal
    FloatSignal() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1246650
    // Implemented from: GenericSignal`1
    // Base method: System.Void GenericSignal_1::.ctor()
    // Base method: System.Void Signal::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloatSignal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FloatSignal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloatSignal*, creationType>()));
    }
  }; // FloatSignal
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FloatSignal*, "", "FloatSignal");
// Writing MetadataGetter for method: GlobalNamespace::FloatSignal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
