// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.Utils.TestRunCallbackListener
#include "UnityEngine/TestRunner/Utils/TestRunCallbackListener.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: AssemblyName
  class AssemblyName;
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::TestRunner
namespace UnityEngine::TestRunner {
  // Forward declaring type: TestRunCallbackAttribute
  class TestRunCallbackAttribute;
  // Forward declaring type: ITestRunCallback
  class ITestRunCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.Utils
namespace UnityEngine::TestRunner::Utils {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.Utils.TestRunCallbackListener/<>c
  // [CompilerGeneratedAttribute] Offset: E3D7DC
  class TestRunCallbackListener::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.TestRunner.Utils.TestRunCallbackListener/<>c <>9
    static UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestRunner.Utils.TestRunCallbackListener/<>c <>9
    static void _set_$$9(UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c* value);
    // Get static field: static public System.Func`2<System.Reflection.AssemblyName,System.Boolean> <>9__2_3
    static System::Func_2<System::Reflection::AssemblyName*, bool>* _get_$$9__2_3();
    // Set static field: static public System.Func`2<System.Reflection.AssemblyName,System.Boolean> <>9__2_3
    static void _set_$$9__2_3(System::Func_2<System::Reflection::AssemblyName*, bool>* value);
    // Get static field: static public System.Func`2<System.Reflection.Assembly,System.Boolean> <>9__2_0
    static System::Func_2<System::Reflection::Assembly*, bool>* _get_$$9__2_0();
    // Set static field: static public System.Func`2<System.Reflection.Assembly,System.Boolean> <>9__2_0
    static void _set_$$9__2_0(System::Func_2<System::Reflection::Assembly*, bool>* value);
    // Get static field: static public System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<UnityEngine.TestRunner.TestRunCallbackAttribute>> <>9__2_1
    static System::Func_2<System::Reflection::Assembly*, System::Collections::Generic::IEnumerable_1<UnityEngine::TestRunner::TestRunCallbackAttribute*>*>* _get_$$9__2_1();
    // Set static field: static public System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<UnityEngine.TestRunner.TestRunCallbackAttribute>> <>9__2_1
    static void _set_$$9__2_1(System::Func_2<System::Reflection::Assembly*, System::Collections::Generic::IEnumerable_1<UnityEngine::TestRunner::TestRunCallbackAttribute*>*>* value);
    // Get static field: static public System.Func`2<UnityEngine.TestRunner.TestRunCallbackAttribute,UnityEngine.TestRunner.ITestRunCallback> <>9__2_2
    static System::Func_2<UnityEngine::TestRunner::TestRunCallbackAttribute*, UnityEngine::TestRunner::ITestRunCallback*>* _get_$$9__2_2();
    // Set static field: static public System.Func`2<UnityEngine.TestRunner.TestRunCallbackAttribute,UnityEngine.TestRunner.ITestRunCallback> <>9__2_2
    static void _set_$$9__2_2(System::Func_2<UnityEngine::TestRunner::TestRunCallbackAttribute*, UnityEngine::TestRunner::ITestRunCallback*>* value);
    // static private System.Void .cctor()
    // Offset: 0x14B4360
    static void _cctor();
    // System.Boolean <GetAllCallbacks>b__2_0(System.Reflection.Assembly x)
    // Offset: 0x14B43CC
    bool $GetAllCallbacks$b__2_0(System::Reflection::Assembly* x);
    // System.Boolean <GetAllCallbacks>b__2_3(System.Reflection.AssemblyName z)
    // Offset: 0x14B44E0
    bool $GetAllCallbacks$b__2_3(System::Reflection::AssemblyName* z);
    // System.Collections.Generic.IEnumerable`1<UnityEngine.TestRunner.TestRunCallbackAttribute> <GetAllCallbacks>b__2_1(System.Reflection.Assembly assembly)
    // Offset: 0x14B453C
    System::Collections::Generic::IEnumerable_1<UnityEngine::TestRunner::TestRunCallbackAttribute*>* $GetAllCallbacks$b__2_1(System::Reflection::Assembly* assembly);
    // UnityEngine.TestRunner.ITestRunCallback <GetAllCallbacks>b__2_2(UnityEngine.TestRunner.TestRunCallbackAttribute attribute)
    // Offset: 0x14B45E0
    UnityEngine::TestRunner::ITestRunCallback* $GetAllCallbacks$b__2_2(UnityEngine::TestRunner::TestRunCallbackAttribute* attribute);
    // public System.Void .ctor()
    // Offset: 0x14B43C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestRunCallbackListener::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestRunCallbackListener::$$c*, creationType>()));
    }
  }; // UnityEngine.TestRunner.Utils.TestRunCallbackListener/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c*, "UnityEngine.TestRunner.Utils", "TestRunCallbackListener/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c::$GetAllCallbacks$b__2_0
// Il2CppName: <GetAllCallbacks>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c::*)(System::Reflection::Assembly*)>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c::$GetAllCallbacks$b__2_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c*), "<GetAllCallbacks>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c::$GetAllCallbacks$b__2_3
// Il2CppName: <GetAllCallbacks>b__2_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c::*)(System::Reflection::AssemblyName*)>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c::$GetAllCallbacks$b__2_3)> {
  static const MethodInfo* get() {
    static auto* z = &::il2cpp_utils::GetClassFromName("System.Reflection", "AssemblyName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c*), "<GetAllCallbacks>b__2_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{z});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c::$GetAllCallbacks$b__2_1
// Il2CppName: <GetAllCallbacks>b__2_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::TestRunner::TestRunCallbackAttribute*>* (UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c::*)(System::Reflection::Assembly*)>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c::$GetAllCallbacks$b__2_1)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c*), "<GetAllCallbacks>b__2_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c::$GetAllCallbacks$b__2_2
// Il2CppName: <GetAllCallbacks>b__2_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TestRunner::ITestRunCallback* (UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c::*)(UnityEngine::TestRunner::TestRunCallbackAttribute*)>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c::$GetAllCallbacks$b__2_2)> {
  static const MethodInfo* get() {
    static auto* attribute = &::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner", "TestRunCallbackAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c*), "<GetAllCallbacks>b__2_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attribute});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
