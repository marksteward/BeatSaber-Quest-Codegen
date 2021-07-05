// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.TaskUpdater`1
#include "Zenject/TaskUpdater_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ITickable
  class ITickable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.TickablesTaskUpdater
  class TickablesTaskUpdater : public Zenject::TaskUpdater_1<Zenject::ITickable*> {
    public:
    // Creating value type constructor for type: TickablesTaskUpdater
    TickablesTaskUpdater() noexcept {}
    // protected System.Void UpdateItem(Zenject.ITickable task)
    // Offset: 0x16ED4AC
    void UpdateItem(Zenject::ITickable* task);
    // public System.Void .ctor()
    // Offset: 0x16EBB38
    // Implemented from: Zenject.TaskUpdater`1
    // Base method: System.Void TaskUpdater_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TickablesTaskUpdater* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TickablesTaskUpdater::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TickablesTaskUpdater*, creationType>()));
    }
  }; // Zenject.TickablesTaskUpdater
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::TickablesTaskUpdater*, "Zenject", "TickablesTaskUpdater");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::TickablesTaskUpdater::UpdateItem
// Il2CppName: UpdateItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::TickablesTaskUpdater::*)(Zenject::ITickable*)>(&Zenject::TickablesTaskUpdater::UpdateItem)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("Zenject", "ITickable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::TickablesTaskUpdater*), "UpdateItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: Zenject::TickablesTaskUpdater::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
