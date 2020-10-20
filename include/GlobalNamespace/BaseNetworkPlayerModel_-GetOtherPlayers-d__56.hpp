// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseNetworkPlayerModel
#include "GlobalNamespace/BaseNetworkPlayerModel.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
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
  // Autogenerated type: BaseNetworkPlayerModel/<GetOtherPlayers>d__56
  class BaseNetworkPlayerModel::$GetOtherPlayers$d__56 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>, public System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>*/ {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private INetworkPlayer <>2__current
    // Offset: 0x18
    GlobalNamespace::INetworkPlayer* $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x20
    int $$l__initialThreadId;
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>
    operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>
    operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2039170
    static BaseNetworkPlayerModel::$GetOtherPlayers$d__56* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x20393B4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x20393B8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private INetworkPlayer System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current()
    // Offset: 0x20393D0
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x20393D8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2039438
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<INetworkPlayer> System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator()
    // Offset: 0x2039440
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x20394D8
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // BaseNetworkPlayerModel/<GetOtherPlayers>d__56
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56*, "", "BaseNetworkPlayerModel/<GetOtherPlayers>d__56");
#pragma pack(pop)
