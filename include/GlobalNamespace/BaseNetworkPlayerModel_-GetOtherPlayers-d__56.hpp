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
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF054
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
    // Offset: 0x1A75710
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseNetworkPlayerModel::$GetOtherPlayers$d__56* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseNetworkPlayerModel::$GetOtherPlayers$d__56*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1A75748
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1A7574C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private INetworkPlayer System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current()
    // Offset: 0x1A75764
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1A7576C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1A757CC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<INetworkPlayer> System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator()
    // Offset: 0x1A757D4
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1A7586C
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // BaseNetworkPlayerModel/<GetOtherPlayers>d__56
  static check_size<sizeof(BaseNetworkPlayerModel::$GetOtherPlayers$d__56), 32 + sizeof(int)> __GlobalNamespace_BaseNetworkPlayerModel_$GetOtherPlayers$d__56SizeCheck;
  static_assert(sizeof(BaseNetworkPlayerModel::$GetOtherPlayers$d__56) == 0x24);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56*, "", "BaseNetworkPlayerModel/<GetOtherPlayers>d__56");
