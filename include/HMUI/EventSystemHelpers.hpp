// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.EventSystemHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class EventSystemHelpers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: EventSystemHelpers
    EventSystemHelpers() noexcept {}
    // static public System.Boolean IsInputFieldSelected()
    // Offset: 0x1308868
    static bool IsInputFieldSelected();
  }; // HMUI.EventSystemHelpers
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::EventSystemHelpers*, "HMUI", "EventSystemHelpers");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::EventSystemHelpers::IsInputFieldSelected
// Il2CppName: IsInputFieldSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&HMUI::EventSystemHelpers::IsInputFieldSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::EventSystemHelpers*), "IsInputFieldSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
