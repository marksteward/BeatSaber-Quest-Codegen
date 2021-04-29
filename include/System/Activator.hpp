// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
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
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Activator
  // [ComDefaultInterfaceAttribute] Offset: CA400C
  // [ClassInterfaceAttribute] Offset: CA400C
  // [ComVisibleAttribute] Offset: CA400C
  class Activator : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Activator
    Activator() noexcept {}
    // static public System.Object CreateInstance(System.Type type, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Object[] args, System.Globalization.CultureInfo culture)
    // Offset: 0x18CDCF0
    static ::Il2CppObject* CreateInstance(System::Type* type, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* args, System::Globalization::CultureInfo* culture);
    // static public System.Object CreateInstance(System.Type type, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Object[] args, System.Globalization.CultureInfo culture, System.Object[] activationAttributes)
    // Offset: 0x18CDCF8
    static ::Il2CppObject* CreateInstance(System::Type* type, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* args, System::Globalization::CultureInfo* culture, ::Array<::Il2CppObject*>* activationAttributes);
    // static public System.Object CreateInstance(System.Type type, params System.Object[] args)
    // Offset: 0x18CDF1C
    static ::Il2CppObject* CreateInstance(System::Type* type, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Object CreateInstance(System.Type type, params System.Object[] args)
    static ::Il2CppObject* CreateInstance(System::Type* type, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Object CreateInstance(System.Type type, params System.Object[] args)
    template<class ...TParams>
    static ::Il2CppObject* CreateInstance(System::Type* type, TParams&&... args) {
      return CreateInstance(type, {args...});
    }
    // static public System.Object CreateInstance(System.Type type)
    // Offset: 0x18BD14C
    static ::Il2CppObject* CreateInstance(System::Type* type);
    // static public System.Object CreateInstance(System.Type type, System.Boolean nonPublic)
    // Offset: 0x18CDF34
    static ::Il2CppObject* CreateInstance(System::Type* type, bool nonPublic);
    // static public T CreateInstance()
    // Offset: 0xFFFFFFFF
    template<class T>
    static T CreateInstance() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Activator::CreateInstance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System", "Activator", "CreateInstance", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
  }; // System.Activator
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Activator*, "System", "Activator");
