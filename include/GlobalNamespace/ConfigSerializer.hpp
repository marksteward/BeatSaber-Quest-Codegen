// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ConfigSerializer
  // [TokenAttribute] Offset: FFFFFFFF
  class ConfigSerializer : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ConfigSerializer
    ConfigSerializer() noexcept {}
    // static public System.Void SaveConfig(System.Object config, System.String filePath)
    // Offset: 0x120F36C
    static void SaveConfig(::Il2CppObject* config, ::Il2CppString* filePath);
    // static public System.Boolean LoadConfig(System.Object config, System.String filePath)
    // Offset: 0x120F7A4
    static bool LoadConfig(::Il2CppObject* config, ::Il2CppString* filePath);
    // public System.Void .ctor()
    // Offset: 0x120FD6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConfigSerializer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ConfigSerializer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConfigSerializer*, creationType>()));
    }
  }; // ConfigSerializer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConfigSerializer*, "", "ConfigSerializer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConfigSerializer::SaveConfig
// Il2CppName: SaveConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppString*)>(&GlobalNamespace::ConfigSerializer::SaveConfig)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConfigSerializer*), "SaveConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config, filePath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConfigSerializer::LoadConfig
// Il2CppName: LoadConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, ::Il2CppString*)>(&GlobalNamespace::ConfigSerializer::LoadConfig)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConfigSerializer*), "LoadConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config, filePath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConfigSerializer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
