// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ITestFilter
#include "NUnit/Framework/Interfaces/ITestFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::TestRunner::GUI
namespace UnityEngine::TestTools::TestRunner::GUI {
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: TNode
  class TNode;
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.GUI
namespace UnityEngine::TestTools::TestRunner::GUI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.GUI.SynchronousFilter
  // [] Offset: FFFFFFFF
  class SynchronousFilter : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::ITestFilter*/ {
    public:
    // Nested type: UnityEngine::TestTools::TestRunner::GUI::SynchronousFilter::$$c
    class $$c;
    // Creating value type constructor for type: SynchronousFilter
    SynchronousFilter() noexcept {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ITestFilter
    operator NUnit::Framework::Interfaces::ITestFilter() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ITestFilter*>(this);
    }
    // public NUnit.Framework.Interfaces.TNode ToXml(System.Boolean recursive)
    // Offset: 0x1195584
    // Implemented from: NUnit.Framework.Interfaces.IXmlNodeBuilder
    // Base method: NUnit.Framework.Interfaces.TNode IXmlNodeBuilder::ToXml(System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* ToXml(bool recursive);
    // public NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x11955EC
    // Implemented from: NUnit.Framework.Interfaces.IXmlNodeBuilder
    // Base method: NUnit.Framework.Interfaces.TNode IXmlNodeBuilder::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
    // public System.Boolean Pass(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1195648
    // Implemented from: NUnit.Framework.Interfaces.ITestFilter
    // Base method: System.Boolean ITestFilter::Pass(NUnit.Framework.Interfaces.ITest test)
    bool Pass(NUnit::Framework::Interfaces::ITest* test);
    // public System.Boolean IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1195EB0
    // Implemented from: NUnit.Framework.Interfaces.ITestFilter
    // Base method: System.Boolean ITestFilter::IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    bool IsExplicitMatch(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void .ctor()
    // Offset: 0x1195EB4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SynchronousFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::GUI::SynchronousFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SynchronousFilter*, creationType>()));
    }
  }; // UnityEngine.TestTools.TestRunner.GUI.SynchronousFilter
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::GUI::SynchronousFilter*, "UnityEngine.TestTools.TestRunner.GUI", "SynchronousFilter");
