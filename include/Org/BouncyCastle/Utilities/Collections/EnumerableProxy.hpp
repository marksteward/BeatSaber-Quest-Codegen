// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities.Collections
namespace Org::BouncyCastle::Utilities::Collections {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Collections.EnumerableProxy
  // [] Offset: FFFFFFFF
  class EnumerableProxy : public ::Il2CppObject/*, public System::Collections::IEnumerable*/ {
    public:
    // private readonly System.Collections.IEnumerable inner
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IEnumerable* inner;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerable*) == 0x8);
    // Creating value type constructor for type: EnumerableProxy
    EnumerableProxy(System::Collections::IEnumerable* inner_ = {}) noexcept : inner{inner_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerable
    operator System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerable*>(this);
    }
    // Creating conversion operator: operator System::Collections::IEnumerable*
    constexpr operator System::Collections::IEnumerable*() const noexcept {
      return inner;
    }
    // public System.Void .ctor(System.Collections.IEnumerable inner)
    // Offset: 0x10E1664
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumerableProxy* New_ctor(System::Collections::IEnumerable* inner) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Utilities::Collections::EnumerableProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumerableProxy*, creationType>(inner)));
    }
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x10E1708
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Org.BouncyCastle.Utilities.Collections.EnumerableProxy
  static check_size<sizeof(EnumerableProxy), 16 + sizeof(System::Collections::IEnumerable*)> __Org_BouncyCastle_Utilities_Collections_EnumerableProxySizeCheck;
  static_assert(sizeof(EnumerableProxy) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::EnumerableProxy*, "Org.BouncyCastle.Utilities.Collections", "EnumerableProxy");
