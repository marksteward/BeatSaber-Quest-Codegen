// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.LocalDataStoreMgr
#include "System/LocalDataStoreMgr.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.LocalDataStore
#include "System/LocalDataStore.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.LocalDataStoreSlot
#include "System/LocalDataStoreSlot.hpp"
// Including type: System.LocalDataStoreHolder
#include "System/LocalDataStoreHolder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 InitialSlotTableSize
int System::LocalDataStoreMgr::_get_InitialSlotTableSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("LocalDataStoreMgr").WithContext("_get_InitialSlotTableSize");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System", "LocalDataStoreMgr", "InitialSlotTableSize"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 InitialSlotTableSize
void System::LocalDataStoreMgr::_set_InitialSlotTableSize(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("LocalDataStoreMgr").WithContext("_set_InitialSlotTableSize");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "LocalDataStoreMgr", "InitialSlotTableSize", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 SlotTableDoubleThreshold
int System::LocalDataStoreMgr::_get_SlotTableDoubleThreshold() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("LocalDataStoreMgr").WithContext("_get_SlotTableDoubleThreshold");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System", "LocalDataStoreMgr", "SlotTableDoubleThreshold"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 SlotTableDoubleThreshold
void System::LocalDataStoreMgr::_set_SlotTableDoubleThreshold(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("LocalDataStoreMgr").WithContext("_set_SlotTableDoubleThreshold");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "LocalDataStoreMgr", "SlotTableDoubleThreshold", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 LargeSlotTableSizeIncrease
int System::LocalDataStoreMgr::_get_LargeSlotTableSizeIncrease() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("LocalDataStoreMgr").WithContext("_get_LargeSlotTableSizeIncrease");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System", "LocalDataStoreMgr", "LargeSlotTableSizeIncrease"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 LargeSlotTableSizeIncrease
void System::LocalDataStoreMgr::_set_LargeSlotTableSizeIncrease(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("LocalDataStoreMgr").WithContext("_set_LargeSlotTableSizeIncrease");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "LocalDataStoreMgr", "LargeSlotTableSizeIncrease", value));
}
// Autogenerated method: System.LocalDataStoreMgr.CreateLocalDataStore
System::LocalDataStoreHolder* System::LocalDataStoreMgr::CreateLocalDataStore() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("LocalDataStoreMgr").WithContext("CreateLocalDataStore");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateLocalDataStore", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::LocalDataStoreHolder*, false>(this, ___internal__method);
}
// Autogenerated method: System.LocalDataStoreMgr.DeleteLocalDataStore
void System::LocalDataStoreMgr::DeleteLocalDataStore(System::LocalDataStore* store) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("LocalDataStoreMgr").WithContext("DeleteLocalDataStore");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "DeleteLocalDataStore", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(store)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, store);
}
// Autogenerated method: System.LocalDataStoreMgr.AllocateDataSlot
System::LocalDataStoreSlot* System::LocalDataStoreMgr::AllocateDataSlot() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("LocalDataStoreMgr").WithContext("AllocateDataSlot");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AllocateDataSlot", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::LocalDataStoreSlot*, false>(this, ___internal__method);
}
// Autogenerated method: System.LocalDataStoreMgr.AllocateNamedDataSlot
System::LocalDataStoreSlot* System::LocalDataStoreMgr::AllocateNamedDataSlot(::Il2CppString* name) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("LocalDataStoreMgr").WithContext("AllocateNamedDataSlot");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AllocateNamedDataSlot", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(name)));
  return ::il2cpp_utils::RunMethodThrow<System::LocalDataStoreSlot*, false>(this, ___internal__method, name);
}
// Autogenerated method: System.LocalDataStoreMgr.GetNamedDataSlot
System::LocalDataStoreSlot* System::LocalDataStoreMgr::GetNamedDataSlot(::Il2CppString* name) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("LocalDataStoreMgr").WithContext("GetNamedDataSlot");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetNamedDataSlot", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(name)));
  return ::il2cpp_utils::RunMethodThrow<System::LocalDataStoreSlot*, false>(this, ___internal__method, name);
}
// Autogenerated method: System.LocalDataStoreMgr.FreeNamedDataSlot
void System::LocalDataStoreMgr::FreeNamedDataSlot(::Il2CppString* name) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("LocalDataStoreMgr").WithContext("FreeNamedDataSlot");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "FreeNamedDataSlot", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(name)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, name);
}
// Autogenerated method: System.LocalDataStoreMgr.FreeDataSlot
void System::LocalDataStoreMgr::FreeDataSlot(int slot, int64_t cookie) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("LocalDataStoreMgr").WithContext("FreeDataSlot");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "FreeDataSlot", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(slot, cookie)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, slot, cookie);
}
// Autogenerated method: System.LocalDataStoreMgr.ValidateSlot
void System::LocalDataStoreMgr::ValidateSlot(System::LocalDataStoreSlot* slot) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("LocalDataStoreMgr").WithContext("ValidateSlot");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ValidateSlot", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(slot)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, slot);
}
// Autogenerated method: System.LocalDataStoreMgr.GetSlotTableLength
int System::LocalDataStoreMgr::GetSlotTableLength() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("LocalDataStoreMgr").WithContext("GetSlotTableLength");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetSlotTableLength", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
