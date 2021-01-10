// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestFilter
#include "NUnit/Framework/Internal/TestFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: TNode
  class TNode;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Filters
namespace NUnit::Framework::Internal::Filters {
  // Size: 0x19
  // Autogenerated type: NUnit.Framework.Internal.Filters.ValueMatchFilter
  // [] Offset: FFFFFFFF
  class ValueMatchFilter : public NUnit::Framework::Internal::TestFilter {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDB341C
    // private System.String <ExpectedValue>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* ExpectedValue;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDB342C
    // private System.Boolean <IsRegex>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool IsRegex;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ValueMatchFilter
    ValueMatchFilter(::Il2CppString* ExpectedValue_ = {}, bool IsRegex_ = {}) noexcept : ExpectedValue{ExpectedValue_}, IsRegex{IsRegex_} {}
    // public System.String get_ExpectedValue()
    // Offset: 0x13F38F0
    ::Il2CppString* get_ExpectedValue();
    // private System.Void set_ExpectedValue(System.String value)
    // Offset: 0x13F38F8
    void set_ExpectedValue(::Il2CppString* value);
    // public System.Boolean get_IsRegex()
    // Offset: 0x13F3900
    bool get_IsRegex();
    // public System.Void set_IsRegex(System.Boolean value)
    // Offset: 0x13F3908
    void set_IsRegex(bool value);
    // public System.Void .ctor(System.String expectedValue)
    // Offset: 0x13F255C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueMatchFilter* New_ctor(::Il2CppString* expectedValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Filters::ValueMatchFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueMatchFilter*, creationType>(expectedValue)));
    }
    // protected System.Boolean Match(System.String input)
    // Offset: 0x13F29D8
    bool Match(::Il2CppString* input);
    // protected System.String get_ElementName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_ElementName();
    // public override NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x13F3914
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: NUnit.Framework.Interfaces.TNode TestFilter::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
  }; // NUnit.Framework.Internal.Filters.ValueMatchFilter
  static check_size<sizeof(ValueMatchFilter), 24 + sizeof(bool)> __NUnit_Framework_Internal_Filters_ValueMatchFilterSizeCheck;
  static_assert(sizeof(ValueMatchFilter) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Filters::ValueMatchFilter*, "NUnit.Framework.Internal.Filters", "ValueMatchFilter");
#pragma pack(pop)
