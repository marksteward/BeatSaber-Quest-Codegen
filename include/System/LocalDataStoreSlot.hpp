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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: LocalDataStoreMgr
  class LocalDataStoreMgr;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.LocalDataStoreSlot
  // [ComVisibleAttribute] Offset: D79FE0
  class LocalDataStoreSlot : public ::Il2CppObject {
    public:
    // private System.LocalDataStoreMgr m_mgr
    // Size: 0x8
    // Offset: 0x10
    System::LocalDataStoreMgr* m_mgr;
    // Field size check
    static_assert(sizeof(System::LocalDataStoreMgr*) == 0x8);
    // private System.Int32 m_slot
    // Size: 0x4
    // Offset: 0x18
    int m_slot;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_slot and: m_cookie
    char __padding1[0x4] = {};
    // private System.Int64 m_cookie
    // Size: 0x8
    // Offset: 0x20
    int64_t m_cookie;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: LocalDataStoreSlot
    LocalDataStoreSlot(System::LocalDataStoreMgr* m_mgr_ = {}, int m_slot_ = {}, int64_t m_cookie_ = {}) noexcept : m_mgr{m_mgr_}, m_slot{m_slot_}, m_cookie{m_cookie_} {}
    // System.Void .ctor(System.LocalDataStoreMgr mgr, System.Int32 slot, System.Int64 cookie)
    // Offset: 0x1821140
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalDataStoreSlot* New_ctor(System::LocalDataStoreMgr* mgr, int slot, int64_t cookie) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::LocalDataStoreSlot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalDataStoreSlot*, creationType>(mgr, slot, cookie)));
    }
    // System.LocalDataStoreMgr get_Manager()
    // Offset: 0x1821644
    System::LocalDataStoreMgr* get_Manager();
    // System.Int32 get_Slot()
    // Offset: 0x182164C
    int get_Slot();
    // System.Int64 get_Cookie()
    // Offset: 0x1821654
    int64_t get_Cookie();
    // protected override System.Void Finalize()
    // Offset: 0x182165C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.LocalDataStoreSlot
  #pragma pack(pop)
  static check_size<sizeof(LocalDataStoreSlot), 32 + sizeof(int64_t)> __System_LocalDataStoreSlotSizeCheck;
  static_assert(sizeof(LocalDataStoreSlot) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::LocalDataStoreSlot*, "System", "LocalDataStoreSlot");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::LocalDataStoreSlot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::LocalDataStoreSlot::get_Manager
// Il2CppName: get_Manager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::LocalDataStoreMgr* (System::LocalDataStoreSlot::*)()>(&System::LocalDataStoreSlot::get_Manager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreSlot*), "get_Manager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::LocalDataStoreSlot::get_Slot
// Il2CppName: get_Slot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::LocalDataStoreSlot::*)()>(&System::LocalDataStoreSlot::get_Slot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreSlot*), "get_Slot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::LocalDataStoreSlot::get_Cookie
// Il2CppName: get_Cookie
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::LocalDataStoreSlot::*)()>(&System::LocalDataStoreSlot::get_Cookie)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreSlot*), "get_Cookie", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::LocalDataStoreSlot::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LocalDataStoreSlot::*)()>(&System::LocalDataStoreSlot::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreSlot*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
