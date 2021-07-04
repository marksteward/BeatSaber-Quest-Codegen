// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Resources.ResourceManager
#include "System/Resources/ResourceManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.ResourceManager/ResourceManagerMediator
  class ResourceManager::ResourceManagerMediator : public ::Il2CppObject {
    public:
    // private System.Resources.ResourceManager _rm
    // Size: 0x8
    // Offset: 0x10
    System::Resources::ResourceManager* rm;
    // Field size check
    static_assert(sizeof(System::Resources::ResourceManager*) == 0x8);
    // Creating value type constructor for type: ResourceManagerMediator
    ResourceManagerMediator(System::Resources::ResourceManager* rm_ = {}) noexcept : rm{rm_} {}
    // Creating conversion operator: operator System::Resources::ResourceManager*
    constexpr operator System::Resources::ResourceManager*() const noexcept {
      return rm;
    }
    // System.Void .ctor(System.Resources.ResourceManager rm)
    // Offset: 0x1415254
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceManager::ResourceManagerMediator* New_ctor(System::Resources::ResourceManager* rm) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Resources::ResourceManager::ResourceManagerMediator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceManager::ResourceManagerMediator*, creationType>(rm)));
    }
  }; // System.Resources.ResourceManager/ResourceManagerMediator
  #pragma pack(pop)
  static check_size<sizeof(ResourceManager::ResourceManagerMediator), 16 + sizeof(System::Resources::ResourceManager*)> __System_Resources_ResourceManager_ResourceManagerMediatorSizeCheck;
  static_assert(sizeof(ResourceManager::ResourceManagerMediator) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceManager::ResourceManagerMediator*, "System.Resources", "ResourceManager/ResourceManagerMediator");
// Writing MetadataGetter for method: System::Resources::ResourceManager::ResourceManagerMediator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
