// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass64_0
  // [CompilerGeneratedAttribute] Offset: DDDF9C
  class FromBinder::$$c__DisplayClass64_0 : public ::Il2CppObject {
    public:
    // public System.Type concreteType
    // Size: 0x8
    // Offset: 0x10
    System::Type* concreteType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass64_0
    $$c__DisplayClass64_0(System::Type* concreteType_ = {}) noexcept : concreteType{concreteType_} {}
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return concreteType;
    }
    // System.Collections.Generic.IEnumerable`1<System.Object> <FromComponentsSibling>b__1(Zenject.InjectContext ctx)
    // Offset: 0x163BDA8
    System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* $FromComponentsSibling$b__1(Zenject::InjectContext* ctx);
    // public System.Void .ctor()
    // Offset: 0x163A51C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass64_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass64_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass64_0*, creationType>()));
    }
  }; // Zenject.FromBinder/<>c__DisplayClass64_0
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass64_0), 16 + sizeof(System::Type*)> __Zenject_FromBinder_$$c__DisplayClass64_0SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass64_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass64_0*, "Zenject", "FromBinder/<>c__DisplayClass64_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass64_0::$FromComponentsSibling$b__1
// Il2CppName: <FromComponentsSibling>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* (Zenject::FromBinder::$$c__DisplayClass64_0::*)(Zenject::InjectContext*)>(&Zenject::FromBinder::$$c__DisplayClass64_0::$FromComponentsSibling$b__1)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass64_0*), "<FromComponentsSibling>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass64_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
