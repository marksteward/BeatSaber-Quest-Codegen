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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UnityAPICompatibilityVersionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D7DDF0
  class UnityAPICompatibilityVersionAttribute : public System::Attribute {
    public:
    // private System.String _version
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* version;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String[] _configurationAssembliesHashes
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppString*>* configurationAssembliesHashes;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: UnityAPICompatibilityVersionAttribute
    UnityAPICompatibilityVersionAttribute(::Il2CppString* version_ = {}, ::Array<::Il2CppString*>* configurationAssembliesHashes_ = {}) noexcept : version{version_}, configurationAssembliesHashes{configurationAssembliesHashes_} {}
    // Get instance field: private System.String _version
    ::Il2CppString* _get__version();
    // Set instance field: private System.String _version
    void _set__version(::Il2CppString* value);
    // Get instance field: private System.String[] _configurationAssembliesHashes
    ::Array<::Il2CppString*>* _get__configurationAssembliesHashes();
    // Set instance field: private System.String[] _configurationAssembliesHashes
    void _set__configurationAssembliesHashes(::Array<::Il2CppString*>* value);
    // public System.Void .ctor(System.String version, System.String[] configurationAssembliesHashes)
    // Offset: 0x23056D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityAPICompatibilityVersionAttribute* New_ctor(::Il2CppString* version, ::Array<::Il2CppString*>* configurationAssembliesHashes) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UnityAPICompatibilityVersionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityAPICompatibilityVersionAttribute*, creationType>(version, configurationAssembliesHashes)));
    }
  }; // UnityEngine.UnityAPICompatibilityVersionAttribute
  #pragma pack(pop)
  static check_size<sizeof(UnityAPICompatibilityVersionAttribute), 24 + sizeof(::Array<::Il2CppString*>*)> __UnityEngine_UnityAPICompatibilityVersionAttributeSizeCheck;
  static_assert(sizeof(UnityAPICompatibilityVersionAttribute) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityAPICompatibilityVersionAttribute*, "UnityEngine", "UnityAPICompatibilityVersionAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UnityAPICompatibilityVersionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
