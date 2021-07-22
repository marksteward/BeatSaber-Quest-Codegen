// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorByMethodBase
#include "Zenject/SubContainerCreatorByMethodBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`5<T1, T2, T3, T4, T5>
  template<typename T1, typename T2, typename T3, typename T4, typename T5>
  class Action_5;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.SubContainerCreatorByMethod`4
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  class SubContainerCreatorByMethod_4 : public Zenject::SubContainerCreatorByMethodBase {
    public:
    // private readonly System.Action`5<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4> _installMethod
    // Size: 0x8
    // Offset: 0x0
    System::Action_5<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installMethod;
    // Field size check
    static_assert(sizeof(System::Action_5<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>*) == 0x8);
    // Creating value type constructor for type: SubContainerCreatorByMethod_4
    SubContainerCreatorByMethod_4(System::Action_5<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installMethod_ = {}) noexcept : installMethod{installMethod_} {}
    // Creating conversion operator: operator System::Action_5<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>*
    constexpr operator System::Action_5<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>*() const noexcept {
      return installMethod;
    }
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.SubContainerCreatorBindInfo containerBindInfo, System.Action`5<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4> installMethod)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByMethod_4<TParam1, TParam2, TParam3, TParam4>* New_ctor(Zenject::DiContainer* container, Zenject::SubContainerCreatorBindInfo* containerBindInfo, System::Action_5<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByMethod_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByMethod_4<TParam1, TParam2, TParam3, TParam4>*, creationType>(container, containerBindInfo, installMethod)));
    }
    // public override Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.SubContainerCreatorByMethodBase
    // Base method: Zenject.DiContainer SubContainerCreatorByMethodBase::CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByMethod_4::CreateSubContainer");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateSubContainer", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(args), ::il2cpp_utils::ExtractType(context)})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::DiContainer*, false>(this, ___internal__method, args, context);
    }
  }; // Zenject.SubContainerCreatorByMethod`4
  // Could not write size check! Type: Zenject.SubContainerCreatorByMethod`4 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::SubContainerCreatorByMethod_4, "Zenject", "SubContainerCreatorByMethod`4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
