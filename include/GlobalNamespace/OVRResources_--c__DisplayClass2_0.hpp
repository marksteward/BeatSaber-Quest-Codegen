// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRResources
#include "GlobalNamespace/OVRResources.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OVRResources/<>c__DisplayClass2_0
  // [CompilerGeneratedAttribute] Offset: DCD08C
  class OVRResources::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    // public System.String path
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* path;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass2_0
    $$c__DisplayClass2_0(::Il2CppString* path_ = {}) noexcept : path{path_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return path;
    }
    // System.Boolean <Load>b__0(System.String s)
    // Offset: 0x1628710
    bool $Load$b__0(::Il2CppString* s);
    // public System.Void .ctor()
    // Offset: 0x1628648
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRResources::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRResources::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRResources::$$c__DisplayClass2_0*, creationType>()));
    }
  }; // OVRResources/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(OVRResources::$$c__DisplayClass2_0), 16 + sizeof(::Il2CppString*)> __GlobalNamespace_OVRResources_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(OVRResources::$$c__DisplayClass2_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRResources::$$c__DisplayClass2_0*, "", "OVRResources/<>c__DisplayClass2_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRResources::$$c__DisplayClass2_0::$Load$b__0
// Il2CppName: <Load>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRResources::$$c__DisplayClass2_0::*)(::Il2CppString*)>(&GlobalNamespace::OVRResources::$$c__DisplayClass2_0::$Load$b__0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRResources::$$c__DisplayClass2_0*), "<Load>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRResources::$$c__DisplayClass2_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
