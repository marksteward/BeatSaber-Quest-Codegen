// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnifiedNetworkPlayerModel
#include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnifiedNetworkPlayerModel/<get_localNetworkPlayers>d__82
  // [CompilerGeneratedAttribute] Offset: E11DA8
  class UnifiedNetworkPlayerModel::$get_localNetworkPlayers$d__82 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>, public System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>*/ {
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
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public UnifiedNetworkPlayerModel <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::UnifiedNetworkPlayerModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UnifiedNetworkPlayerModel*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<INetworkPlayer> <>7__wrap1
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>*) == 0x8);
    // Creating value type constructor for type: $get_localNetworkPlayers$d__82
    $get_localNetworkPlayers$d__82(int $$1__state_ = {}, GlobalNamespace::INetworkPlayer* $$2__current_ = {}, int $$l__initialThreadId_ = {}, GlobalNamespace::UnifiedNetworkPlayerModel* $$4__this_ = {}, System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>* $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>
    operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>
    operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1124940
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnifiedNetworkPlayerModel::$get_localNetworkPlayers$d__82* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnifiedNetworkPlayerModel::$get_localNetworkPlayers$d__82::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnifiedNetworkPlayerModel::$get_localNetworkPlayers$d__82*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1128E3C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1128F18
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x1128E58
    void $$m__Finally1();
    // private INetworkPlayer System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current()
    // Offset: 0x1129248
    GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator$INetworkPlayer$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1129250
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x11292B0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<INetworkPlayer> System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator()
    // Offset: 0x11292B8
    System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable$INetworkPlayer$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1129364
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnifiedNetworkPlayerModel/<get_localNetworkPlayers>d__82
  #pragma pack(pop)
  static check_size<sizeof(UnifiedNetworkPlayerModel::$get_localNetworkPlayers$d__82), 48 + sizeof(System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>*)> __GlobalNamespace_UnifiedNetworkPlayerModel_$get_localNetworkPlayers$d__82SizeCheck;
  static_assert(sizeof(UnifiedNetworkPlayerModel::$get_localNetworkPlayers$d__82) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel::$get_localNetworkPlayers$d__82*, "", "UnifiedNetworkPlayerModel/<get_localNetworkPlayers>d__82");
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_localNetworkPlayers$d__82::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_localNetworkPlayers$d__82::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_localNetworkPlayers$d__82::MoveNext
// Il2CppName: MoveNext
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_localNetworkPlayers$d__82::$$m__Finally1
// Il2CppName: <>m__Finally1
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_localNetworkPlayers$d__82::System_Collections_Generic_IEnumerator$INetworkPlayer$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_localNetworkPlayers$d__82::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_localNetworkPlayers$d__82::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_localNetworkPlayers$d__82::System_Collections_Generic_IEnumerable$INetworkPlayer$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_localNetworkPlayers$d__82::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
// Cannot perform method pointer template specialization from operators!
