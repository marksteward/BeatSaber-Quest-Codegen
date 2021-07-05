// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
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
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IProvider
  class IProvider;
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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FactoryBindInfo
  // [NoReflectionBakingAttribute] Offset: DDC514
  class FactoryBindInfo : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDDE86C
    // private System.Type <FactoryType>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Type* FactoryType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDDE87C
    // private System.Func`2<Zenject.DiContainer,Zenject.IProvider> <ProviderFunc>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* ProviderFunc;
    // Field size check
    static_assert(sizeof(System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDDE88C
    // private System.Collections.Generic.List`1<Zenject.TypeValuePair> <Arguments>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* Arguments;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*) == 0x8);
    // Creating value type constructor for type: FactoryBindInfo
    FactoryBindInfo(System::Type* FactoryType_ = {}, System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* ProviderFunc_ = {}, System::Collections::Generic::List_1<Zenject::TypeValuePair>* Arguments_ = {}) noexcept : FactoryType{FactoryType_}, ProviderFunc{ProviderFunc_}, Arguments{Arguments_} {}
    // public System.Void .ctor(System.Type factoryType)
    // Offset: 0x1634EF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryBindInfo* New_ctor(System::Type* factoryType) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryBindInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryBindInfo*, creationType>(factoryType)));
    }
    // public System.Type get_FactoryType()
    // Offset: 0x1634F74
    System::Type* get_FactoryType();
    // private System.Void set_FactoryType(System.Type value)
    // Offset: 0x1634F7C
    void set_FactoryType(System::Type* value);
    // public System.Func`2<Zenject.DiContainer,Zenject.IProvider> get_ProviderFunc()
    // Offset: 0x1634F84
    System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* get_ProviderFunc();
    // public System.Void set_ProviderFunc(System.Func`2<Zenject.DiContainer,Zenject.IProvider> value)
    // Offset: 0x1634F8C
    void set_ProviderFunc(System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* value);
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> get_Arguments()
    // Offset: 0x1634F94
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* get_Arguments();
    // public System.Void set_Arguments(System.Collections.Generic.List`1<Zenject.TypeValuePair> value)
    // Offset: 0x1634F9C
    void set_Arguments(System::Collections::Generic::List_1<Zenject::TypeValuePair>* value);
  }; // Zenject.FactoryBindInfo
  #pragma pack(pop)
  static check_size<sizeof(FactoryBindInfo), 32 + sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*)> __Zenject_FactoryBindInfoSizeCheck;
  static_assert(sizeof(FactoryBindInfo) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryBindInfo*, "Zenject", "FactoryBindInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::FactoryBindInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::FactoryBindInfo::get_FactoryType
// Il2CppName: get_FactoryType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::FactoryBindInfo::*)()>(&Zenject::FactoryBindInfo::get_FactoryType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryBindInfo*), "get_FactoryType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryBindInfo::set_FactoryType
// Il2CppName: set_FactoryType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::FactoryBindInfo::*)(System::Type*)>(&Zenject::FactoryBindInfo::set_FactoryType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryBindInfo*), "set_FactoryType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryBindInfo::get_ProviderFunc
// Il2CppName: get_ProviderFunc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* (Zenject::FactoryBindInfo::*)()>(&Zenject::FactoryBindInfo::get_ProviderFunc)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryBindInfo*), "get_ProviderFunc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryBindInfo::set_ProviderFunc
// Il2CppName: set_ProviderFunc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::FactoryBindInfo::*)(System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>*)>(&Zenject::FactoryBindInfo::set_ProviderFunc)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer"), ::il2cpp_utils::GetClassFromName("Zenject", "IProvider")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryBindInfo*), "set_ProviderFunc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryBindInfo::get_Arguments
// Il2CppName: get_Arguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<Zenject::TypeValuePair>* (Zenject::FactoryBindInfo::*)()>(&Zenject::FactoryBindInfo::get_Arguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryBindInfo*), "get_Arguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryBindInfo::set_Arguments
// Il2CppName: set_Arguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::FactoryBindInfo::*)(System::Collections::Generic::List_1<Zenject::TypeValuePair>*)>(&Zenject::FactoryBindInfo::set_Arguments)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryBindInfo*), "set_Arguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
