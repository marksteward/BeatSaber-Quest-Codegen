// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.IAnimatorIkHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class IAnimatorIkHandler : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IAnimatorIkHandler
    IAnimatorIkHandler() noexcept {}
    // public System.Void OnAnimatorIk()
    // Offset: 0xFFFFFFFF
    void OnAnimatorIk();
  }; // Zenject.IAnimatorIkHandler
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::IAnimatorIkHandler*, "Zenject", "IAnimatorIkHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::IAnimatorIkHandler::OnAnimatorIk
// Il2CppName: OnAnimatorIk
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IAnimatorIkHandler::*)()>(&Zenject::IAnimatorIkHandler::OnAnimatorIk)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IAnimatorIkHandler*), "OnAnimatorIk", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
