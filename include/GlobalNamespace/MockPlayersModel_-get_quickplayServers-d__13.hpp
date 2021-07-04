// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockPlayersModel
#include "GlobalNamespace/MockPlayersModel.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockServer
  class MockServer;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MockPlayersModel/<get_quickplayServers>d__13
  // [CompilerGeneratedAttribute] Offset: E12258
  class MockPlayersModel::$get_quickplayServers$d__13 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<GlobalNamespace::MockServer*>, public System::Collections::Generic::IEnumerator_1<GlobalNamespace::MockServer*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private MockServer <>2__current
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MockServer* $$2__current;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockServer*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public MockPlayersModel <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MockPlayersModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockPlayersModel*) == 0x8);
    // Creating value type constructor for type: $get_quickplayServers$d__13
    $get_quickplayServers$d__13(int $$1__state_ = {}, GlobalNamespace::MockServer* $$2__current_ = {}, int $$l__initialThreadId_ = {}, GlobalNamespace::MockPlayersModel* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::MockServer*>
    operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::MockServer*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::MockServer*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::MockServer*>
    operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::MockServer*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<GlobalNamespace::MockServer*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1142144
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockPlayersModel::$get_quickplayServers$d__13* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockPlayersModel::$get_quickplayServers$d__13*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x11424F0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x11424F4
    bool MoveNext();
    // private MockServer System.Collections.Generic.IEnumerator<MockServer>.get_Current()
    // Offset: 0x1142548
    GlobalNamespace::MockServer* System_Collections_Generic_IEnumerator$MockServer$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1142550
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x11425B0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<MockServer> System.Collections.Generic.IEnumerable<MockServer>.GetEnumerator()
    // Offset: 0x11425B8
    System::Collections::Generic::IEnumerator_1<GlobalNamespace::MockServer*>* System_Collections_Generic_IEnumerable$MockServer$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1142664
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // MockPlayersModel/<get_quickplayServers>d__13
  #pragma pack(pop)
  static check_size<sizeof(MockPlayersModel::$get_quickplayServers$d__13), 40 + sizeof(GlobalNamespace::MockPlayersModel*)> __GlobalNamespace_MockPlayersModel_$get_quickplayServers$d__13SizeCheck;
  static_assert(sizeof(MockPlayersModel::$get_quickplayServers$d__13) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13*, "", "MockPlayersModel/<get_quickplayServers>d__13");
// Writing MetadataGetter for method: GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::*)()>(&GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::System_IDisposable_Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::*)()>(&GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::System_Collections_Generic_IEnumerator$MockServer$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<MockServer>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MockServer* (GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::*)()>(&GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::System_Collections_Generic_IEnumerator$MockServer$_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13*), "System.Collections.Generic.IEnumerator<MockServer>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::*)()>(&GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::System_Collections_IEnumerator_Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::*)()>(&GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::System_Collections_IEnumerator_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::System_Collections_Generic_IEnumerable$MockServer$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<MockServer>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<GlobalNamespace::MockServer*>* (GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::*)()>(&GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::System_Collections_Generic_IEnumerable$MockServer$_GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13*), "System.Collections.Generic.IEnumerable<MockServer>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::*)()>(&GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13::System_Collections_IEnumerable_GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
