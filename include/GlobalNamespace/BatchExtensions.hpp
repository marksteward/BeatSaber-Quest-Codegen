// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: BatchExtensions
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class BatchExtensions : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BatchExtensions::$Batch$d__0_1<T>
    template<typename T>
    class $Batch$d__0_1;
    // Creating value type constructor for type: BatchExtensions
    BatchExtensions() noexcept {}
    // static public System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<T>> Batch(System.Collections.Generic.IEnumerable`1<T> enumerable, System.Int32 batchSize)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::IEnumerable_1<System::Collections::Generic::List_1<T>*>* Batch(System::Collections::Generic::IEnumerable_1<T>* enumerable, int batchSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BatchExtensions::Batch");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "BatchExtensions", "Batch", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(enumerable, batchSize)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<System::Collections::Generic::List_1<T>*>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, enumerable, batchSize);
    }
  }; // BatchExtensions
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BatchExtensions*, "", "BatchExtensions");
#pragma pack(pop)
