// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.ILayoutIgnorer
  // [TokenAttribute] Offset: FFFFFFFF
  class ILayoutIgnorer : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ILayoutIgnorer
    ILayoutIgnorer() noexcept {}
    // public System.Boolean get_ignoreLayout()
    // Offset: 0xFFFFFFFF
    bool get_ignoreLayout();
  }; // UnityEngine.UI.ILayoutIgnorer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ILayoutIgnorer*, "UnityEngine.UI", "ILayoutIgnorer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::ILayoutIgnorer::get_ignoreLayout
// Il2CppName: get_ignoreLayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::ILayoutIgnorer::*)()>(&UnityEngine::UI::ILayoutIgnorer::get_ignoreLayout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ILayoutIgnorer*), "get_ignoreLayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
