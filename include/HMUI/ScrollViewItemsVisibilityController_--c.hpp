// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ScrollViewItemsVisibilityController
#include "HMUI/ScrollViewItemsVisibilityController.hpp"
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
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ScrollViewItemForVisibilityController
  class ScrollViewItemForVisibilityController;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ScrollViewItemsVisibilityController/<>c
  // [CompilerGeneratedAttribute] Offset: DF7F30
  class ScrollViewItemsVisibilityController::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly HMUI.ScrollViewItemsVisibilityController/<>c <>9
    static HMUI::ScrollViewItemsVisibilityController::$$c* _get_$$9();
    // Set static field: static public readonly HMUI.ScrollViewItemsVisibilityController/<>c <>9
    static void _set_$$9(HMUI::ScrollViewItemsVisibilityController::$$c* value);
    // Get static field: static public System.Func`2<System.Tuple`2<HMUI.ScrollViewItemForVisibilityController,System.Single>,System.Single> <>9__11_0
    static System::Func_2<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController*, float>*, float>* _get_$$9__11_0();
    // Set static field: static public System.Func`2<System.Tuple`2<HMUI.ScrollViewItemForVisibilityController,System.Single>,System.Single> <>9__11_0
    static void _set_$$9__11_0(System::Func_2<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController*, float>*, float>* value);
    // Get static field: static public System.Func`2<System.Tuple`2<HMUI.ScrollViewItemForVisibilityController,System.Single>,System.Single> <>9__11_1
    static System::Func_2<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController*, float>*, float>* _get_$$9__11_1();
    // Set static field: static public System.Func`2<System.Tuple`2<HMUI.ScrollViewItemForVisibilityController,System.Single>,System.Single> <>9__11_1
    static void _set_$$9__11_1(System::Func_2<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController*, float>*, float>* value);
    // static private System.Void .cctor()
    // Offset: 0x12B88FC
    static void _cctor();
    // System.Single <Start>b__11_0(System.Tuple`2<HMUI.ScrollViewItemForVisibilityController,System.Single> item)
    // Offset: 0x12B8968
    float $Start$b__11_0(System::Tuple_2<HMUI::ScrollViewItemForVisibilityController*, float>* item);
    // System.Single <Start>b__11_1(System.Tuple`2<HMUI.ScrollViewItemForVisibilityController,System.Single> item)
    // Offset: 0x12B89B4
    float $Start$b__11_1(System::Tuple_2<HMUI::ScrollViewItemForVisibilityController*, float>* item);
    // public System.Void .ctor()
    // Offset: 0x12B8960
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScrollViewItemsVisibilityController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ScrollViewItemsVisibilityController::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScrollViewItemsVisibilityController::$$c*, creationType>()));
    }
  }; // HMUI.ScrollViewItemsVisibilityController/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScrollViewItemsVisibilityController::$$c*, "HMUI", "ScrollViewItemsVisibilityController/<>c");
// Writing MetadataGetter for method: HMUI::ScrollViewItemsVisibilityController::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HMUI::ScrollViewItemsVisibilityController::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScrollViewItemsVisibilityController::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScrollViewItemsVisibilityController::$$c::$Start$b__11_0
// Il2CppName: <Start>b__11_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::ScrollViewItemsVisibilityController::$$c::*)(System::Tuple_2<HMUI::ScrollViewItemForVisibilityController*, float>*)>(&HMUI::ScrollViewItemsVisibilityController::$$c::$Start$b__11_0)> {
  const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Tuple`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ScrollViewItemForVisibilityController"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScrollViewItemsVisibilityController::$$c*), "<Start>b__11_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: HMUI::ScrollViewItemsVisibilityController::$$c::$Start$b__11_1
// Il2CppName: <Start>b__11_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::ScrollViewItemsVisibilityController::$$c::*)(System::Tuple_2<HMUI::ScrollViewItemForVisibilityController*, float>*)>(&HMUI::ScrollViewItemsVisibilityController::$$c::$Start$b__11_1)> {
  const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Tuple`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ScrollViewItemForVisibilityController"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScrollViewItemsVisibilityController::$$c*), "<Start>b__11_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: HMUI::ScrollViewItemsVisibilityController::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
