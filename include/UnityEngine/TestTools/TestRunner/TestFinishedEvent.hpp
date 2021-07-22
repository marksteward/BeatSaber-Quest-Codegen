// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.TestTools.TestRunner.TestFinishedEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class TestFinishedEvent : public UnityEngine::Events::UnityEvent_1<NUnit::Framework::Interfaces::ITestResult*> {
    public:
    // Creating value type constructor for type: TestFinishedEvent
    TestFinishedEvent() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1491540
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestFinishedEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::TestFinishedEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestFinishedEvent*, creationType>()));
    }
  }; // UnityEngine.TestTools.TestRunner.TestFinishedEvent
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::TestFinishedEvent*, "UnityEngine.TestTools.TestRunner", "TestFinishedEvent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::TestFinishedEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
