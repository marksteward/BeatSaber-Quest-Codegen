// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: NUnit.Framework.Internal.Filters.CompositeFilter
#include "NUnit/Framework/Internal/Filters/CompositeFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Skipping declaration: ITestFilter because it is already included!
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Filters
namespace NUnit::Framework::Internal::Filters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Filters.AndFilter
  // [] Offset: FFFFFFFF
  class AndFilter : public NUnit::Framework::Internal::Filters::CompositeFilter {
    public:
    // Creating value type constructor for type: AndFilter
    AndFilter() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x13F1A7C
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Void CompositeFilter::.ctor()
    // Base method: System.Void TestFilter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Filters::AndFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndFilter*, creationType>()));
    }
    // public System.Void .ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
    // Offset: 0x13F1B1C
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Void CompositeFilter::.ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndFilter* New_ctor(::Array<NUnit::Framework::Interfaces::ITestFilter*>* filters) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Filters::AndFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndFilter*, creationType>(filters)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndFilter* New_ctor(std::initializer_list<NUnit::Framework::Interfaces::ITestFilter*> filters) {
      return New_ctor<creationType>(::Array<NUnit::Framework::Interfaces::ITestFilter*>::New(filters));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(params NUnit.Framework.Interfaces.ITestFilter[] filters)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static AndFilter* New_ctor(TParams&&... filters) {
      return New_ctor<creationType>({filters...});
    }
    // public override System.Boolean Pass(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x13F1BCC
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Boolean CompositeFilter::Pass(NUnit.Framework.Interfaces.ITest test)
    bool Pass(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x13F1F08
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Boolean CompositeFilter::Match(NUnit.Framework.Interfaces.ITest test)
    bool Match(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x13F220C
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Boolean CompositeFilter::IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    bool IsExplicitMatch(NUnit::Framework::Interfaces::ITest* test);
    // protected override System.String get_ElementName()
    // Offset: 0x13F2510
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.String CompositeFilter::get_ElementName()
    ::Il2CppString* get_ElementName();
  }; // NUnit.Framework.Internal.Filters.AndFilter
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Filters::AndFilter*, "NUnit.Framework.Internal.Filters", "AndFilter");
