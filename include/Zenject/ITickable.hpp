// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ITickable
  class ITickable {
    public:
    // Creating value type constructor for type: ITickable
    ITickable() noexcept {}
    // public System.Void Tick()
    // Offset: 0xFFFFFFFF
    void Tick();
  }; // Zenject.ITickable
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ITickable*, "Zenject", "ITickable");
// Writing MetadataGetter for method: Zenject::ITickable::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ITickable::*)()>(&Zenject::ITickable::Tick)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ITickable*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
