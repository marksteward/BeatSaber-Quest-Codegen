// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ResultsEnvironmentManager
#include "GlobalNamespace/ResultsEnvironmentManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ResultsEnvironmentManager/<>c__DisplayClass3_0
  // [CompilerGeneratedAttribute] Offset: E12038
  class ResultsEnvironmentManager::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public System.String keyword
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* keyword;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass3_0
    $$c__DisplayClass3_0(::Il2CppString* keyword_ = {}) noexcept : keyword{keyword_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return keyword;
    }
    // System.Boolean <GetResultEnvironmentControllerForKeyword>b__0(ResultsEnvironmentManager/ResultEnvironmentControllerWithKeyword controllerWithKeyword)
    // Offset: 0x10AFDD8
    bool $GetResultEnvironmentControllerForKeyword$b__0(GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword* controllerWithKeyword);
    // public System.Void .ctor()
    // Offset: 0x10AFC70
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultsEnvironmentManager::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ResultsEnvironmentManager::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultsEnvironmentManager::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // ResultsEnvironmentManager/<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(ResultsEnvironmentManager::$$c__DisplayClass3_0), 16 + sizeof(::Il2CppString*)> __GlobalNamespace_ResultsEnvironmentManager_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(ResultsEnvironmentManager::$$c__DisplayClass3_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResultsEnvironmentManager::$$c__DisplayClass3_0*, "", "ResultsEnvironmentManager/<>c__DisplayClass3_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ResultsEnvironmentManager::$$c__DisplayClass3_0::$GetResultEnvironmentControllerForKeyword$b__0
// Il2CppName: <GetResultEnvironmentControllerForKeyword>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ResultsEnvironmentManager::$$c__DisplayClass3_0::*)(GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword*)>(&GlobalNamespace::ResultsEnvironmentManager::$$c__DisplayClass3_0::$GetResultEnvironmentControllerForKeyword$b__0)> {
  static const MethodInfo* get() {
    static auto* controllerWithKeyword = &::il2cpp_utils::GetClassFromName("", "ResultsEnvironmentManager/ResultEnvironmentControllerWithKeyword")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultsEnvironmentManager::$$c__DisplayClass3_0*), "<GetResultEnvironmentControllerForKeyword>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controllerWithKeyword});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultsEnvironmentManager::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
