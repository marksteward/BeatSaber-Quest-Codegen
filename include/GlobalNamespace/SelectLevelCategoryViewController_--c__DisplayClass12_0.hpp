// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SelectLevelCategoryViewController
#include "GlobalNamespace/SelectLevelCategoryViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: SelectLevelCategoryViewController/<>c__DisplayClass12_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SelectLevelCategoryViewController::$$c__DisplayClass12_0 : public ::Il2CppObject {
    public:
    // public SelectLevelCategoryViewController/LevelCategory[] enabledLevelCategories
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* enabledLevelCategories;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass12_0
    $$c__DisplayClass12_0(::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* enabledLevelCategories_ = {}) noexcept : enabledLevelCategories{enabledLevelCategories_} {}
    // Creating conversion operator: operator ::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>*
    constexpr operator ::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>*() const noexcept {
      return enabledLevelCategories;
    }
    // Get instance field: public SelectLevelCategoryViewController/LevelCategory[] enabledLevelCategories
    ::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* _get_enabledLevelCategories();
    // Set instance field: public SelectLevelCategoryViewController/LevelCategory[] enabledLevelCategories
    void _set_enabledLevelCategories(::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* value);
    // System.Boolean <Setup>b__0(SelectLevelCategoryViewController/LevelCategoryInfo data)
    // Offset: 0x1F85F28
    bool $Setup$b__0(GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo* data);
    // public System.Void .ctor()
    // Offset: 0x1F85AAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectLevelCategoryViewController::$$c__DisplayClass12_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SelectLevelCategoryViewController::$$c__DisplayClass12_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectLevelCategoryViewController::$$c__DisplayClass12_0*, creationType>()));
    }
  }; // SelectLevelCategoryViewController/<>c__DisplayClass12_0
  #pragma pack(pop)
  static check_size<sizeof(SelectLevelCategoryViewController::$$c__DisplayClass12_0), 16 + sizeof(::Array<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>*)> __GlobalNamespace_SelectLevelCategoryViewController_$$c__DisplayClass12_0SizeCheck;
  static_assert(sizeof(SelectLevelCategoryViewController::$$c__DisplayClass12_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectLevelCategoryViewController::$$c__DisplayClass12_0*, "", "SelectLevelCategoryViewController/<>c__DisplayClass12_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelCategoryViewController::$$c__DisplayClass12_0::$Setup$b__0
// Il2CppName: <Setup>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SelectLevelCategoryViewController::$$c__DisplayClass12_0::*)(GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*)>(&GlobalNamespace::SelectLevelCategoryViewController::$$c__DisplayClass12_0::$Setup$b__0)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("", "SelectLevelCategoryViewController/LevelCategoryInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLevelCategoryViewController::$$c__DisplayClass12_0*), "<Setup>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelCategoryViewController::$$c__DisplayClass12_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
