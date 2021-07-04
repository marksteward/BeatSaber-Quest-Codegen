// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseNetworkPlayerModel
#include "GlobalNamespace/BaseNetworkPlayerModel.hpp"
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
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: BaseNetworkPlayerModel/<GetOtherPlayers>d__56
  // [CompilerGeneratedAttribute] Offset: E11C88
  class BaseNetworkPlayerModel::$GetOtherPlayers$d__56 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>, public System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private INetworkPlayer <>2__current
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::INetworkPlayer* $$2__current;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkPlayer*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $GetOtherPlayers$d__56
    $GetOtherPlayers$d__56(int $$1__state_ = {}, GlobalNamespace::INetworkPlayer* $$2__current_ = {}, int $$l__initialThreadId_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>
    operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>
    operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x11B8BD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseNetworkPlayerModel::$GetOtherPlayers$d__56* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseNetworkPlayerModel::$GetOtherPlayers$d__56*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x11B8E0C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x11B8E10
    bool MoveNext();
    // private INetworkPlayer System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current()
    // Offset: 0x11B8E28
    GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator$INetworkPlayer$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x11B8E30
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x11B8E90
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<INetworkPlayer> System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator()
    // Offset: 0x11B8E98
    System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable$INetworkPlayer$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x11B8F30
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // BaseNetworkPlayerModel/<GetOtherPlayers>d__56
  #pragma pack(pop)
  static check_size<sizeof(BaseNetworkPlayerModel::$GetOtherPlayers$d__56), 32 + sizeof(int)> __GlobalNamespace_BaseNetworkPlayerModel_$GetOtherPlayers$d__56SizeCheck;
  static_assert(sizeof(BaseNetworkPlayerModel::$GetOtherPlayers$d__56) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56*, "", "BaseNetworkPlayerModel/<GetOtherPlayers>d__56");
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::System_IDisposable_Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::System_Collections_Generic_IEnumerator$INetworkPlayer$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::INetworkPlayer* (GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::System_Collections_Generic_IEnumerator$INetworkPlayer$_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56*), "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::System_Collections_IEnumerator_Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::System_Collections_IEnumerator_get_Current)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::System_Collections_Generic_IEnumerable$INetworkPlayer$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>* (GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::System_Collections_Generic_IEnumerable$INetworkPlayer$_GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56*), "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::System_Collections_IEnumerable_GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
