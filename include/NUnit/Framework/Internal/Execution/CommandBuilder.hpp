// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Forward declaring type: TestCommand
  class TestCommand;
  // Forward declaring type: SetUpTearDownItem
  class SetUpTearDownItem;
  // Forward declaring type: TestActionItem
  class TestActionItem;
  // Forward declaring type: SkipCommand
  class SkipCommand;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
  // Forward declaring type: Test
  class Test;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Execution
namespace NUnit::Framework::Internal::Execution {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Execution.CommandBuilder
  class CommandBuilder : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CommandBuilder
    CommandBuilder() noexcept {}
    // static public NUnit.Framework.Internal.Commands.TestCommand MakeOneTimeSetUpCommand(NUnit.Framework.Internal.TestSuite suite, System.Collections.Generic.List`1<NUnit.Framework.Internal.Commands.SetUpTearDownItem> setUpTearDown, System.Collections.Generic.List`1<NUnit.Framework.Internal.Commands.TestActionItem> actions)
    // Offset: 0x1738484
    static NUnit::Framework::Internal::Commands::TestCommand* MakeOneTimeSetUpCommand(NUnit::Framework::Internal::TestSuite* suite, System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::SetUpTearDownItem*>* setUpTearDown, System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::TestActionItem*>* actions);
    // static public NUnit.Framework.Internal.Commands.TestCommand MakeOneTimeTearDownCommand(NUnit.Framework.Internal.TestSuite suite, System.Collections.Generic.List`1<NUnit.Framework.Internal.Commands.SetUpTearDownItem> setUpTearDownItems, System.Collections.Generic.List`1<NUnit.Framework.Internal.Commands.TestActionItem> actions)
    // Offset: 0x1738818
    static NUnit::Framework::Internal::Commands::TestCommand* MakeOneTimeTearDownCommand(NUnit::Framework::Internal::TestSuite* suite, System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::SetUpTearDownItem*>* setUpTearDownItems, System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::TestActionItem*>* actions);
    // static public NUnit.Framework.Internal.Commands.SkipCommand MakeSkipCommand(NUnit.Framework.Internal.Test test)
    // Offset: 0x17387B4
    static NUnit::Framework::Internal::Commands::SkipCommand* MakeSkipCommand(NUnit::Framework::Internal::Test* test);
    // static public System.Collections.Generic.List`1<NUnit.Framework.Internal.Commands.SetUpTearDownItem> BuildSetUpTearDownList(System.Type fixtureType, System.Type setUpType, System.Type tearDownType)
    // Offset: 0x17388E4
    static System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::SetUpTearDownItem*>* BuildSetUpTearDownList(System::Type* fixtureType, System::Type* setUpType, System::Type* tearDownType);
    // static private NUnit.Framework.Internal.Commands.SetUpTearDownItem BuildNode(System.Type fixtureType, System.Collections.Generic.IList`1<System.Reflection.MethodInfo> setUpMethods, System.Collections.Generic.IList`1<System.Reflection.MethodInfo> tearDownMethods)
    // Offset: 0x1738A74
    static NUnit::Framework::Internal::Commands::SetUpTearDownItem* BuildNode(System::Type* fixtureType, System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* setUpMethods, System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* tearDownMethods);
    // static private System.Collections.Generic.List`1<System.Reflection.MethodInfo> SelectMethodsByDeclaringType(System.Type type, System.Collections.Generic.IList`1<System.Reflection.MethodInfo> methods)
    // Offset: 0x1738B0C
    static System::Collections::Generic::List_1<System::Reflection::MethodInfo*>* SelectMethodsByDeclaringType(System::Type* type, System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* methods);
  }; // NUnit.Framework.Internal.Execution.CommandBuilder
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Execution::CommandBuilder*, "NUnit.Framework.Internal.Execution", "CommandBuilder");
// Writing MetadataGetter for method: NUnit::Framework::Internal::Execution::CommandBuilder::MakeOneTimeSetUpCommand
// Il2CppName: MakeOneTimeSetUpCommand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::Commands::TestCommand* (*)(NUnit::Framework::Internal::TestSuite*, System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::SetUpTearDownItem*>*, System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::TestActionItem*>*)>(&NUnit::Framework::Internal::Execution::CommandBuilder::MakeOneTimeSetUpCommand)> {
  const MethodInfo* get() {
    static auto* suite = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestSuite")->byval_arg;
    static auto* setUpTearDown = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal.Commands", "SetUpTearDownItem")})->byval_arg;
    static auto* actions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal.Commands", "TestActionItem")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Execution::CommandBuilder*), "MakeOneTimeSetUpCommand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{suite, setUpTearDown, actions});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Execution::CommandBuilder::MakeOneTimeTearDownCommand
// Il2CppName: MakeOneTimeTearDownCommand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::Commands::TestCommand* (*)(NUnit::Framework::Internal::TestSuite*, System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::SetUpTearDownItem*>*, System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::TestActionItem*>*)>(&NUnit::Framework::Internal::Execution::CommandBuilder::MakeOneTimeTearDownCommand)> {
  const MethodInfo* get() {
    static auto* suite = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestSuite")->byval_arg;
    static auto* setUpTearDownItems = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal.Commands", "SetUpTearDownItem")})->byval_arg;
    static auto* actions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal.Commands", "TestActionItem")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Execution::CommandBuilder*), "MakeOneTimeTearDownCommand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{suite, setUpTearDownItems, actions});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Execution::CommandBuilder::MakeSkipCommand
// Il2CppName: MakeSkipCommand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::Commands::SkipCommand* (*)(NUnit::Framework::Internal::Test*)>(&NUnit::Framework::Internal::Execution::CommandBuilder::MakeSkipCommand)> {
  const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Execution::CommandBuilder*), "MakeSkipCommand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Execution::CommandBuilder::BuildSetUpTearDownList
// Il2CppName: BuildSetUpTearDownList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::SetUpTearDownItem*>* (*)(System::Type*, System::Type*, System::Type*)>(&NUnit::Framework::Internal::Execution::CommandBuilder::BuildSetUpTearDownList)> {
  const MethodInfo* get() {
    static auto* fixtureType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* setUpType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* tearDownType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Execution::CommandBuilder*), "BuildSetUpTearDownList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixtureType, setUpType, tearDownType});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Execution::CommandBuilder::BuildNode
// Il2CppName: BuildNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::Commands::SetUpTearDownItem* (*)(System::Type*, System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>*, System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>*)>(&NUnit::Framework::Internal::Execution::CommandBuilder::BuildNode)> {
  const MethodInfo* get() {
    static auto* fixtureType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* setUpMethods = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")})->byval_arg;
    static auto* tearDownMethods = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Execution::CommandBuilder*), "BuildNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixtureType, setUpMethods, tearDownMethods});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Execution::CommandBuilder::SelectMethodsByDeclaringType
// Il2CppName: SelectMethodsByDeclaringType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<System::Reflection::MethodInfo*>* (*)(System::Type*, System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>*)>(&NUnit::Framework::Internal::Execution::CommandBuilder::SelectMethodsByDeclaringType)> {
  const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* methods = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Execution::CommandBuilder*), "SelectMethodsByDeclaringType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, methods});
  }
};
