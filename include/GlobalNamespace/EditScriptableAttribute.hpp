// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: EditScriptableAttribute
  // [] Offset: FFFFFFFF
  class EditScriptableAttribute : public UnityEngine::PropertyAttribute {
    public:
    // Creating value type constructor for type: EditScriptableAttribute
    EditScriptableAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x102E4E0
    // Implemented from: UnityEngine.PropertyAttribute
    // Base method: System.Void PropertyAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditScriptableAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EditScriptableAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditScriptableAttribute*, creationType>()));
    }
  }; // EditScriptableAttribute
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EditScriptableAttribute*, "", "EditScriptableAttribute");
#pragma pack(pop)
