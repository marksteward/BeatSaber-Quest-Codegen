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
  // Autogenerated type: Zenject.IFixedTickable
  // [TokenAttribute] Offset: FFFFFFFF
  class IFixedTickable : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IFixedTickable
    IFixedTickable() noexcept {}
    // public System.Void FixedTick()
    // Offset: 0xFFFFFFFF
    void FixedTick();
  }; // Zenject.IFixedTickable
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::IFixedTickable*, "Zenject", "IFixedTickable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::IFixedTickable::FixedTick
// Il2CppName: FixedTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IFixedTickable::*)()>(&Zenject::IFixedTickable::FixedTick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IFixedTickable*), "FixedTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
