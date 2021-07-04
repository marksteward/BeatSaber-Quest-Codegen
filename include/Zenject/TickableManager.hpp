// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ITickable
  class ITickable;
  // Forward declaring type: IFixedTickable
  class IFixedTickable;
  // Forward declaring type: ILateTickable
  class ILateTickable;
  // Forward declaring type: TickablesTaskUpdater
  class TickablesTaskUpdater;
  // Forward declaring type: FixedTickablesTaskUpdater
  class FixedTickablesTaskUpdater;
  // Forward declaring type: LateTickablesTaskUpdater
  class LateTickablesTaskUpdater;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x59
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.TickableManager
  class TickableManager : public ::Il2CppObject {
    public:
    // Nested type: Zenject::TickableManager::$$c__DisplayClass17_0
    class $$c__DisplayClass17_0;
    // Nested type: Zenject::TickableManager::$$c
    class $$c;
    // Nested type: Zenject::TickableManager::$$c__DisplayClass18_0
    class $$c__DisplayClass18_0;
    // Nested type: Zenject::TickableManager::$$c__DisplayClass19_0
    class $$c__DisplayClass19_0;
    // [InjectAttribute] Offset: 0xDDF29C
    // private readonly System.Collections.Generic.List`1<Zenject.ITickable> _tickables
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<Zenject::ITickable*>* tickables;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::ITickable*>*) == 0x8);
    // [InjectAttribute] Offset: 0xDDF2D4
    // private readonly System.Collections.Generic.List`1<Zenject.IFixedTickable> _fixedTickables
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::IFixedTickable*>* fixedTickables;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::IFixedTickable*>*) == 0x8);
    // [InjectAttribute] Offset: 0xDDF30C
    // private readonly System.Collections.Generic.List`1<Zenject.ILateTickable> _lateTickables
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<Zenject::ILateTickable*>* lateTickables;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::ILateTickable*>*) == 0x8);
    // [InjectAttribute] Offset: 0xDDF344
    // private readonly System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> _priorities
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* priorities;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>*) == 0x8);
    // [InjectAttribute] Offset: 0xDDF37C
    // private readonly System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> _fixedPriorities
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* fixedPriorities;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>*) == 0x8);
    // [InjectAttribute] Offset: 0xDDF3C4
    // private readonly System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> _latePriorities
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* latePriorities;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>*) == 0x8);
    // private readonly Zenject.TickablesTaskUpdater _updater
    // Size: 0x8
    // Offset: 0x40
    Zenject::TickablesTaskUpdater* updater;
    // Field size check
    static_assert(sizeof(Zenject::TickablesTaskUpdater*) == 0x8);
    // private readonly Zenject.FixedTickablesTaskUpdater _fixedUpdater
    // Size: 0x8
    // Offset: 0x48
    Zenject::FixedTickablesTaskUpdater* fixedUpdater;
    // Field size check
    static_assert(sizeof(Zenject::FixedTickablesTaskUpdater*) == 0x8);
    // private readonly Zenject.LateTickablesTaskUpdater _lateUpdater
    // Size: 0x8
    // Offset: 0x50
    Zenject::LateTickablesTaskUpdater* lateUpdater;
    // Field size check
    static_assert(sizeof(Zenject::LateTickablesTaskUpdater*) == 0x8);
    // private System.Boolean _isPaused
    // Size: 0x1
    // Offset: 0x58
    bool isPaused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TickableManager
    TickableManager(System::Collections::Generic::List_1<Zenject::ITickable*>* tickables_ = {}, System::Collections::Generic::List_1<Zenject::IFixedTickable*>* fixedTickables_ = {}, System::Collections::Generic::List_1<Zenject::ILateTickable*>* lateTickables_ = {}, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* priorities_ = {}, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* fixedPriorities_ = {}, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* latePriorities_ = {}, Zenject::TickablesTaskUpdater* updater_ = {}, Zenject::FixedTickablesTaskUpdater* fixedUpdater_ = {}, Zenject::LateTickablesTaskUpdater* lateUpdater_ = {}, bool isPaused_ = {}) noexcept : tickables{tickables_}, fixedTickables{fixedTickables_}, lateTickables{lateTickables_}, priorities{priorities_}, fixedPriorities{fixedPriorities_}, latePriorities{latePriorities_}, updater{updater_}, fixedUpdater{fixedUpdater_}, lateUpdater{lateUpdater_}, isPaused{isPaused_} {}
    // public System.Collections.Generic.IEnumerable`1<Zenject.ITickable> get_Tickables()
    // Offset: 0x16EBB88
    System::Collections::Generic::IEnumerable_1<Zenject::ITickable*>* get_Tickables();
    // public System.Boolean get_IsPaused()
    // Offset: 0x16EBB90
    bool get_IsPaused();
    // public System.Void set_IsPaused(System.Boolean value)
    // Offset: 0x16EBB98
    void set_IsPaused(bool value);
    // public System.Void Initialize()
    // Offset: 0x16EBBA4
    void Initialize();
    // private System.Void InitFixedTickables()
    // Offset: 0x16EC224
    void InitFixedTickables();
    // private System.Void InitTickables()
    // Offset: 0x16EBBD0
    void InitTickables();
    // private System.Void InitLateTickables()
    // Offset: 0x16EC878
    void InitLateTickables();
    // public System.Void Add(Zenject.ITickable tickable, System.Int32 priority)
    // Offset: 0x16ECEE4
    void Add(Zenject::ITickable* tickable, int priority);
    // public System.Void Add(Zenject.ITickable tickable)
    // Offset: 0x16ECF54
    void Add(Zenject::ITickable* tickable);
    // public System.Void AddLate(Zenject.ILateTickable tickable, System.Int32 priority)
    // Offset: 0x16ECF5C
    void AddLate(Zenject::ILateTickable* tickable, int priority);
    // public System.Void AddLate(Zenject.ILateTickable tickable)
    // Offset: 0x16ECFCC
    void AddLate(Zenject::ILateTickable* tickable);
    // public System.Void AddFixed(Zenject.IFixedTickable tickable, System.Int32 priority)
    // Offset: 0x16ECFD4
    void AddFixed(Zenject::IFixedTickable* tickable, int priority);
    // public System.Void AddFixed(Zenject.IFixedTickable tickable)
    // Offset: 0x16ED044
    void AddFixed(Zenject::IFixedTickable* tickable);
    // public System.Void Remove(Zenject.ITickable tickable)
    // Offset: 0x16ED0B0
    void Remove(Zenject::ITickable* tickable);
    // public System.Void RemoveLate(Zenject.ILateTickable tickable)
    // Offset: 0x16ED118
    void RemoveLate(Zenject::ILateTickable* tickable);
    // public System.Void RemoveFixed(Zenject.IFixedTickable tickable)
    // Offset: 0x16ED180
    void RemoveFixed(Zenject::IFixedTickable* tickable);
    // public System.Void Update()
    // Offset: 0x16DC114
    void Update();
    // public System.Void FixedUpdate()
    // Offset: 0x16DC24C
    void FixedUpdate();
    // public System.Void LateUpdate()
    // Offset: 0x16DC1B0
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x16EBA98
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TickableManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::TickableManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TickableManager*, creationType>()));
    }
  }; // Zenject.TickableManager
  #pragma pack(pop)
  static check_size<sizeof(TickableManager), 88 + sizeof(bool)> __Zenject_TickableManagerSizeCheck;
  static_assert(sizeof(TickableManager) == 0x59);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::TickableManager*, "Zenject", "TickableManager");
// Writing MetadataGetter for method: Zenject::TickableManager::get_Tickables
// Il2CppName: get_Tickables
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::get_IsPaused
// Il2CppName: get_IsPaused
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::set_IsPaused
// Il2CppName: set_IsPaused
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::Initialize
// Il2CppName: Initialize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::InitFixedTickables
// Il2CppName: InitFixedTickables
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::InitTickables
// Il2CppName: InitTickables
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::InitLateTickables
// Il2CppName: InitLateTickables
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::Add
// Il2CppName: Add
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::Add
// Il2CppName: Add
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::AddLate
// Il2CppName: AddLate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::AddLate
// Il2CppName: AddLate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::AddFixed
// Il2CppName: AddFixed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::AddFixed
// Il2CppName: AddFixed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::Remove
// Il2CppName: Remove
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::RemoveLate
// Il2CppName: RemoveLate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::RemoveFixed
// Il2CppName: RemoveFixed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::Update
// Il2CppName: Update
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::FixedUpdate
// Il2CppName: FixedUpdate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::LateUpdate
// Il2CppName: LateUpdate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::TickableManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
