// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.DisposableManager
#include "Zenject/DisposableManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IDisposable
  class IDisposable;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DisposableManager/Zenject.<>c__DisplayClass4_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DisposableManager::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    // public System.IDisposable disposable
    // Size: 0x8
    // Offset: 0x10
    System::IDisposable* disposable;
    // Field size check
    static_assert(sizeof(System::IDisposable*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass4_0
    $$c__DisplayClass4_0(System::IDisposable* disposable_ = {}) noexcept : disposable{disposable_} {}
    // Creating conversion operator: operator System::IDisposable*
    constexpr operator System::IDisposable*() const noexcept {
      return disposable;
    }
    // System.Boolean <.ctor>b__0(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x161A954
    bool $_ctor$b__0(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // public System.Void .ctor()
    // Offset: 0x1619DFC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisposableManager::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposableManager::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisposableManager::$$c__DisplayClass4_0*, creationType>()));
    }
  }; // Zenject.DisposableManager/Zenject.<>c__DisplayClass4_0
  #pragma pack(pop)
  static check_size<sizeof(DisposableManager::$$c__DisplayClass4_0), 16 + sizeof(System::IDisposable*)> __Zenject_DisposableManager_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(DisposableManager::$$c__DisplayClass4_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposableManager::$$c__DisplayClass4_0*, "Zenject", "DisposableManager/<>c__DisplayClass4_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DisposableManager::$$c__DisplayClass4_0::$_ctor$b__0
// Il2CppName: <.ctor>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::DisposableManager::$$c__DisplayClass4_0::*)(ModestTree::Util::ValuePair_2<System::Type*, int>*)>(&Zenject::DisposableManager::$$c__DisplayClass4_0::$_ctor$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("ModestTree.Util", "ValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DisposableManager::$$c__DisplayClass4_0*), "<.ctor>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::DisposableManager::$$c__DisplayClass4_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
