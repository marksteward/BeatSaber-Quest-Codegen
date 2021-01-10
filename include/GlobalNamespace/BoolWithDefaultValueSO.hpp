// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BoolSO
#include "GlobalNamespace/BoolSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BoolWithDefaultValueSO
  // [] Offset: FFFFFFFF
  class BoolWithDefaultValueSO : public GlobalNamespace::BoolSO {
    public:
    // private System.Boolean _defaultValue
    // Size: 0x1
    // Offset: 0x21
    bool defaultValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: BoolWithDefaultValueSO
    BoolWithDefaultValueSO(bool defaultValue_ = {}) noexcept : defaultValue{defaultValue_} {}
    // protected override System.Void OnEnable()
    // Offset: 0x102AB00
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x102ABA0
    // Implemented from: BoolSO
    // Base method: System.Void BoolSO::.ctor()
    // Base method: System.Void ObservableVariableSO_1::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoolWithDefaultValueSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BoolWithDefaultValueSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoolWithDefaultValueSO*, creationType>()));
    }
  }; // BoolWithDefaultValueSO
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BoolWithDefaultValueSO*, "", "BoolWithDefaultValueSO");
