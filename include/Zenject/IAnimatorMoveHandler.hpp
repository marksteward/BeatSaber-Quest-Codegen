// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.IAnimatorMoveHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class IAnimatorMoveHandler {
    public:
    // Creating value type constructor for type: IAnimatorMoveHandler
    IAnimatorMoveHandler() noexcept {}
    // public System.Void OnAnimatorMove()
    // Offset: 0xFFFFFFFF
    void OnAnimatorMove();
  }; // Zenject.IAnimatorMoveHandler
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::IAnimatorMoveHandler*, "Zenject", "IAnimatorMoveHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::IAnimatorMoveHandler::OnAnimatorMove
// Il2CppName: OnAnimatorMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IAnimatorMoveHandler::*)()>(&Zenject::IAnimatorMoveHandler::OnAnimatorMove)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IAnimatorMoveHandler*), "OnAnimatorMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
