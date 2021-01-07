// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Skipping declaration: <>c because it is already included!
  // Forward declaring type: TMP_ObjectPool`1<T>
  template<typename T>
  class TMP_ObjectPool_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // WARNING Size may be invalid!
  // Autogenerated type: TMPro.TMP_ListPool`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class TMP_ListPool_1 : public ::Il2CppObject {
    public:
    // Nested type: TMPro::TMP_ListPool_1::$$c<T>
    class $$c;
    // WARNING Size may be invalid!
    // Autogenerated type: TMPro.TMP_ListPool`1/<>c
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: D8B410
    class $$c : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = TMP_ListPool_1<T>*;
      static constexpr std::string_view NESTED_NAME = "$$c";
      // Creating value type constructor for type: $$c
      $$c() noexcept {}
      // Autogenerated static field getter
      // Get static field: static public readonly TMPro.TMP_ListPool`1/<>c<T> <>9
      static typename TMPro::TMP_ListPool_1<T>::$$c* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("$$c").WithContext("_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename TMPro::TMP_ListPool_1<T>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TMP_ListPool_1<T>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly TMPro.TMP_ListPool`1/<>c<T> <>9
      static void _set_$$9(typename TMPro::TMP_ListPool_1<T>::$$c* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("$$c").WithContext("_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TMP_ListPool_1<T>::$$c*>::get(), "<>9", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("$$c").WithContext(".cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TMP_ListPool_1<T>::$$c*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
        ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
      }
      // System.Void <.cctor>b__3_0(System.Collections.Generic.List`1<T> l)
      // Offset: 0xFFFFFFFF
      void $_cctor$b__3_0(System::Collections::Generic::List_1<T>* l) {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("$$c").WithContext("<.cctor>b__3_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<.cctor>b__3_0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(l))));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, l);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename TMP_ListPool_1<T>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("$$c").WithContext(".ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename TMP_ListPool_1<T>::$$c*, creationType>()));
      }
    }; // TMPro.TMP_ListPool`1/<>c
    // Could not write size check! Type: TMPro.TMP_ListPool`1/<>c is generic, or has no fields that are valid for size checks!
    // Creating value type constructor for type: TMP_ListPool_1
    TMP_ListPool_1() noexcept {}
    // Autogenerated static field getter
    // Get static field: static private readonly TMPro.TMP_ObjectPool`1<System.Collections.Generic.List`1<T>> s_ListPool
    static TMPro::TMP_ObjectPool_1<System::Collections::Generic::List_1<T>*>* _get_s_ListPool() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_ListPool_1").WithContext("_get_s_ListPool");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<TMPro::TMP_ObjectPool_1<System::Collections::Generic::List_1<T>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMP_ListPool_1<T>*>::get(), "s_ListPool"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly TMPro.TMP_ObjectPool`1<System.Collections.Generic.List`1<T>> s_ListPool
    static void _set_s_ListPool(TMPro::TMP_ObjectPool_1<System::Collections::Generic::List_1<T>*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_ListPool_1").WithContext("_set_s_ListPool");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMP_ListPool_1<T>*>::get(), "s_ListPool", value));
    }
    // static public System.Collections.Generic.List`1<T> Get()
    // Offset: 0xFFFFFFFF
    static System::Collections::Generic::List_1<T>* Get() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_ListPool_1").WithContext("Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMP_ListPool_1<T>*>::get(), "Get", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // static public System.Void Release(System.Collections.Generic.List`1<T> toRelease)
    // Offset: 0xFFFFFFFF
    static void Release(System::Collections::Generic::List_1<T>* toRelease) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_ListPool_1").WithContext("Release");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMP_ListPool_1<T>*>::get(), "Release", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(toRelease))));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, toRelease);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_ListPool_1").WithContext(".cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMP_ListPool_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
  }; // TMPro.TMP_ListPool`1
  // Could not write size check! Type: TMPro.TMP_ListPool`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(TMPro::TMP_ListPool_1, "TMPro", "TMP_ListPool`1");
