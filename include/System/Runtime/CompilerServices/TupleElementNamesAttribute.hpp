// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.TupleElementNamesAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D6C040
  // [CLSCompliantAttribute] Offset: D6C040
  class TupleElementNamesAttribute : public System::Attribute {
    public:
    // private readonly System.String[] _transformNames
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppString*>* transformNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: TupleElementNamesAttribute
    TupleElementNamesAttribute(::Array<::Il2CppString*>* transformNames_ = {}) noexcept : transformNames{transformNames_} {}
    // Creating conversion operator: operator ::Array<::Il2CppString*>*
    constexpr operator ::Array<::Il2CppString*>*() const noexcept {
      return transformNames;
    }
    // Get instance field: private readonly System.String[] _transformNames
    ::Array<::Il2CppString*>* _get__transformNames();
    // Set instance field: private readonly System.String[] _transformNames
    void _set__transformNames(::Array<::Il2CppString*>* value);
    // public System.Void .ctor(System.String[] transformNames)
    // Offset: 0x13F06C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TupleElementNamesAttribute* New_ctor(::Array<::Il2CppString*>* transformNames) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::TupleElementNamesAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TupleElementNamesAttribute*, creationType>(transformNames)));
    }
  }; // System.Runtime.CompilerServices.TupleElementNamesAttribute
  #pragma pack(pop)
  static check_size<sizeof(TupleElementNamesAttribute), 16 + sizeof(::Array<::Il2CppString*>*)> __System_Runtime_CompilerServices_TupleElementNamesAttributeSizeCheck;
  static_assert(sizeof(TupleElementNamesAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::TupleElementNamesAttribute*, "System.Runtime.CompilerServices", "TupleElementNamesAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::TupleElementNamesAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
