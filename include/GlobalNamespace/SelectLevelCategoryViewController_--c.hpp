// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SelectLevelCategoryViewController
#include "GlobalNamespace/SelectLevelCategoryViewController.hpp"
// Including type: HMUI.IconSegmentedControl
#include "HMUI/IconSegmentedControl.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SelectLevelCategoryViewController/<>c
  // [CompilerGeneratedAttribute] Offset: E12818
  class SelectLevelCategoryViewController::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly SelectLevelCategoryViewController/<>c <>9
    static GlobalNamespace::SelectLevelCategoryViewController::$$c* _get_$$9();
    // Set static field: static public readonly SelectLevelCategoryViewController/<>c <>9
    static void _set_$$9(GlobalNamespace::SelectLevelCategoryViewController::$$c* value);
    // Get static field: static public System.Func`2<SelectLevelCategoryViewController/LevelCategoryInfo,HMUI.IconSegmentedControl/DataItem> <>9__11_1
    static System::Func_2<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*, HMUI::IconSegmentedControl::DataItem*>* _get_$$9__11_1();
    // Set static field: static public System.Func`2<SelectLevelCategoryViewController/LevelCategoryInfo,HMUI.IconSegmentedControl/DataItem> <>9__11_1
    static void _set_$$9__11_1(System::Func_2<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*, HMUI::IconSegmentedControl::DataItem*>* value);
    // Get static field: static public System.Func`2<SelectLevelCategoryViewController/LevelCategoryInfo,SelectLevelCategoryViewController/LevelCategory> <>9__11_2
    static System::Func_2<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* _get_$$9__11_2();
    // Set static field: static public System.Func`2<SelectLevelCategoryViewController/LevelCategoryInfo,SelectLevelCategoryViewController/LevelCategory> <>9__11_2
    static void _set_$$9__11_2(System::Func_2<GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*, GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>* value);
    // static private System.Void .cctor()
    // Offset: 0x10DA1FC
    static void _cctor();
    // HMUI.IconSegmentedControl/DataItem <Setup>b__11_1(SelectLevelCategoryViewController/LevelCategoryInfo x)
    // Offset: 0x10DA268
    HMUI::IconSegmentedControl::DataItem* $Setup$b__11_1(GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo* x);
    // SelectLevelCategoryViewController/LevelCategory <Setup>b__11_2(SelectLevelCategoryViewController/LevelCategoryInfo x)
    // Offset: 0x10DA2F4
    GlobalNamespace::SelectLevelCategoryViewController::LevelCategory $Setup$b__11_2(GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo* x);
    // public System.Void .ctor()
    // Offset: 0x10DA260
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectLevelCategoryViewController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SelectLevelCategoryViewController::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectLevelCategoryViewController::$$c*, creationType>()));
    }
  }; // SelectLevelCategoryViewController/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectLevelCategoryViewController::$$c*, "", "SelectLevelCategoryViewController/<>c");
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelCategoryViewController::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SelectLevelCategoryViewController::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLevelCategoryViewController::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelCategoryViewController::$$c::$Setup$b__11_1
// Il2CppName: <Setup>b__11_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::IconSegmentedControl::DataItem* (GlobalNamespace::SelectLevelCategoryViewController::$$c::*)(GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*)>(&GlobalNamespace::SelectLevelCategoryViewController::$$c::$Setup$b__11_1)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "SelectLevelCategoryViewController/LevelCategoryInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLevelCategoryViewController::$$c*), "<Setup>b__11_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelCategoryViewController::$$c::$Setup$b__11_2
// Il2CppName: <Setup>b__11_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory (GlobalNamespace::SelectLevelCategoryViewController::$$c::*)(GlobalNamespace::SelectLevelCategoryViewController::LevelCategoryInfo*)>(&GlobalNamespace::SelectLevelCategoryViewController::$$c::$Setup$b__11_2)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "SelectLevelCategoryViewController/LevelCategoryInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLevelCategoryViewController::$$c*), "<Setup>b__11_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelCategoryViewController::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
