// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_Dropdown
#include "TMPro/TMP_Dropdown.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_Dropdown/<>c__DisplayClass60_0
  // [CompilerGeneratedAttribute] Offset: DD5914
  class TMP_Dropdown::$$c__DisplayClass60_0 : public ::Il2CppObject {
    public:
    // public TMPro.TMP_Dropdown/DropdownItem item
    // Size: 0x8
    // Offset: 0x10
    TMPro::TMP_Dropdown::DropdownItem* item;
    // Field size check
    static_assert(sizeof(TMPro::TMP_Dropdown::DropdownItem*) == 0x8);
    // public TMPro.TMP_Dropdown <>4__this
    // Size: 0x8
    // Offset: 0x18
    TMPro::TMP_Dropdown* $$4__this;
    // Field size check
    static_assert(sizeof(TMPro::TMP_Dropdown*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass60_0
    $$c__DisplayClass60_0(TMPro::TMP_Dropdown::DropdownItem* item_ = {}, TMPro::TMP_Dropdown* $$4__this_ = {}) noexcept : item{item_}, $$4__this{$$4__this_} {}
    // System.Void <Show>b__0(System.Boolean x)
    // Offset: 0x10EC9EC
    void $Show$b__0(bool x);
    // public System.Void .ctor()
    // Offset: 0x10EBE4C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Dropdown::$$c__DisplayClass60_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_Dropdown::$$c__DisplayClass60_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Dropdown::$$c__DisplayClass60_0*, creationType>()));
    }
  }; // TMPro.TMP_Dropdown/<>c__DisplayClass60_0
  #pragma pack(pop)
  static check_size<sizeof(TMP_Dropdown::$$c__DisplayClass60_0), 24 + sizeof(TMPro::TMP_Dropdown*)> __TMPro_TMP_Dropdown_$$c__DisplayClass60_0SizeCheck;
  static_assert(sizeof(TMP_Dropdown::$$c__DisplayClass60_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Dropdown::$$c__DisplayClass60_0*, "TMPro", "TMP_Dropdown/<>c__DisplayClass60_0");
// Writing MetadataGetter for method: TMPro::TMP_Dropdown::$$c__DisplayClass60_0::$Show$b__0
// Il2CppName: <Show>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_Dropdown::$$c__DisplayClass60_0::*)(bool)>(&TMPro::TMP_Dropdown::$$c__DisplayClass60_0::$Show$b__0)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Dropdown::$$c__DisplayClass60_0*), "<Show>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Dropdown::$$c__DisplayClass60_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
