// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AssetReferenceUIRestriction
  // [AttributeUsageAttribute] Offset: E0156C
  class AssetReferenceUIRestriction : public System::Attribute {
    public:
    // Creating value type constructor for type: AssetReferenceUIRestriction
    AssetReferenceUIRestriction() noexcept {}
    // public System.Boolean ValidateAsset(UnityEngine.Object obj)
    // Offset: 0x23A2AC0
    bool ValidateAsset(UnityEngine::Object* obj);
    // public System.Boolean ValidateAsset(System.String path)
    // Offset: 0x23A2AC8
    bool ValidateAsset(::Il2CppString* path);
    // public System.Void .ctor()
    // Offset: 0x23A2998
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetReferenceUIRestriction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AssetReferenceUIRestriction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetReferenceUIRestriction*, creationType>()));
    }
  }; // UnityEngine.AssetReferenceUIRestriction
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetReferenceUIRestriction*, "UnityEngine", "AssetReferenceUIRestriction");