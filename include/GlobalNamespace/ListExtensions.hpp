// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Random
  class Random;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ListExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ListExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ListExtensions
    ListExtensions() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD46FFC
    // Get static field: static private readonly System.Random _random
    static System::Random* _get__random();
    // Set static field: static private readonly System.Random _random
    static void _set__random(System::Random* value);
    // static public System.Int32 IndexOf(System.Collections.Generic.IReadOnlyList`1<T> self, T item)
    // Offset: 0xFFFFFFFF
    template<class T>
    static int IndexOf(System::Collections::Generic::IReadOnlyList_1<T>* self, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListExtensions::IndexOf");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "ListExtensions", "IndexOf", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(self), ::il2cpp_utils::ExtractType(item)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, self, item);
    }
    // static public System.Void ShuffleInPlace(System.Collections.Generic.IList`1<T> list)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void ShuffleInPlace(System::Collections::Generic::IList_1<T>* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ListExtensions::ShuffleInPlace");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "ListExtensions", "ShuffleInPlace", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list);
    }
    // static private System.Void .cctor()
    // Offset: 0x10D0504
    static void _cctor();
  }; // ListExtensions
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ListExtensions*, "", "ListExtensions");
