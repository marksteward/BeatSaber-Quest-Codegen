// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Dropdown
#include "UnityEngine/UI/Dropdown.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x20
  // Autogenerated type: UnityEngine.UI.Dropdown/<>c__DisplayClass62_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D7D9E0
  class Dropdown::$$c__DisplayClass62_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.UI.Dropdown/DropdownItem item
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::UI::Dropdown::DropdownItem* item;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Dropdown::DropdownItem*) == 0x8);
    // public UnityEngine.UI.Dropdown <>4__this
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Dropdown* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Dropdown*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass62_0
    $$c__DisplayClass62_0(UnityEngine::UI::Dropdown::DropdownItem* item_ = {}, UnityEngine::UI::Dropdown* $$4__this_ = {}) noexcept : item{item_}, $$4__this{$$4__this_} {}
    // System.Void <Show>b__0(System.Boolean x)
    // Offset: 0x14C62AC
    void $Show$b__0(bool x);
    // public System.Void .ctor()
    // Offset: 0x14C62A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::$$c__DisplayClass62_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Dropdown::$$c__DisplayClass62_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::$$c__DisplayClass62_0*, creationType>()));
    }
  }; // UnityEngine.UI.Dropdown/<>c__DisplayClass62_0
  static check_size<sizeof(Dropdown::$$c__DisplayClass62_0), 24 + sizeof(UnityEngine::UI::Dropdown*)> __UnityEngine_UI_Dropdown_$$c__DisplayClass62_0SizeCheck;
  static_assert(sizeof(Dropdown::$$c__DisplayClass62_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Dropdown::$$c__DisplayClass62_0*, "UnityEngine.UI", "Dropdown/<>c__DisplayClass62_0");
#pragma pack(pop)
