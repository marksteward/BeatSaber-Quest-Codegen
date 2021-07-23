// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PrefabResourceBindingFinalizer
#include "Zenject/PrefabResourceBindingFinalizer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IProvider
  class IProvider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PrefabResourceBindingFinalizer/Zenject.<>c__DisplayClass6_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PrefabResourceBindingFinalizer::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    // public Zenject.PrefabResourceBindingFinalizer <>4__this
    // Size: 0x8
    // Offset: 0x10
    Zenject::PrefabResourceBindingFinalizer* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::PrefabResourceBindingFinalizer*) == 0x8);
    // public Zenject.DiContainer container
    // Size: 0x8
    // Offset: 0x18
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass6_0
    $$c__DisplayClass6_0(Zenject::PrefabResourceBindingFinalizer* $$4__this_ = {}, Zenject::DiContainer* container_ = {}) noexcept : $$4__this{$$4__this_}, container{container_} {}
    // Get instance field: public Zenject.PrefabResourceBindingFinalizer <>4__this
    Zenject::PrefabResourceBindingFinalizer* _get_$$4__this();
    // Set instance field: public Zenject.PrefabResourceBindingFinalizer <>4__this
    void _set_$$4__this(Zenject::PrefabResourceBindingFinalizer* value);
    // Get instance field: public Zenject.DiContainer container
    Zenject::DiContainer* _get_container();
    // Set instance field: public Zenject.DiContainer container
    void _set_container(Zenject::DiContainer* value);
    // Zenject.IProvider <FinalizeBindingSelf>b__0(Zenject.DiContainer _, System.Type contractType)
    // Offset: 0x16C91E8
    Zenject::IProvider* $FinalizeBindingSelf$b__0(Zenject::DiContainer* _, System::Type* contractType);
    // public System.Void .ctor()
    // Offset: 0x16C9040
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabResourceBindingFinalizer::$$c__DisplayClass6_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass6_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabResourceBindingFinalizer::$$c__DisplayClass6_0*, creationType>()));
    }
  }; // Zenject.PrefabResourceBindingFinalizer/Zenject.<>c__DisplayClass6_0
  #pragma pack(pop)
  static check_size<sizeof(PrefabResourceBindingFinalizer::$$c__DisplayClass6_0), 24 + sizeof(Zenject::DiContainer*)> __Zenject_PrefabResourceBindingFinalizer_$$c__DisplayClass6_0SizeCheck;
  static_assert(sizeof(PrefabResourceBindingFinalizer::$$c__DisplayClass6_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass6_0*, "Zenject", "PrefabResourceBindingFinalizer/<>c__DisplayClass6_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass6_0::$FinalizeBindingSelf$b__0
// Il2CppName: <FinalizeBindingSelf>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider* (Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass6_0::*)(Zenject::DiContainer*, System::Type*)>(&Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass6_0::$FinalizeBindingSelf$b__0)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* contractType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass6_0*), "<FinalizeBindingSelf>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_, contractType});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass6_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
