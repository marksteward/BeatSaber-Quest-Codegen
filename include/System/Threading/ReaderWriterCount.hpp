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
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ReaderWriterCount
  // [TokenAttribute] Offset: FFFFFFFF
  class ReaderWriterCount : public ::Il2CppObject {
    public:
    // public System.Int64 lockID
    // Size: 0x8
    // Offset: 0x10
    int64_t lockID;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.Int32 readercount
    // Size: 0x4
    // Offset: 0x18
    int readercount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 writercount
    // Size: 0x4
    // Offset: 0x1C
    int writercount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 upgradecount
    // Size: 0x4
    // Offset: 0x20
    int upgradecount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: upgradecount and: next
    char __padding3[0x4] = {};
    // public System.Threading.ReaderWriterCount next
    // Size: 0x8
    // Offset: 0x28
    System::Threading::ReaderWriterCount* next;
    // Field size check
    static_assert(sizeof(System::Threading::ReaderWriterCount*) == 0x8);
    // Creating value type constructor for type: ReaderWriterCount
    ReaderWriterCount(int64_t lockID_ = {}, int readercount_ = {}, int writercount_ = {}, int upgradecount_ = {}, System::Threading::ReaderWriterCount* next_ = {}) noexcept : lockID{lockID_}, readercount{readercount_}, writercount{writercount_}, upgradecount{upgradecount_}, next{next_} {}
    // public System.Void .ctor()
    // Offset: 0x2365C7C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReaderWriterCount* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ReaderWriterCount::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReaderWriterCount*, creationType>()));
    }
  }; // System.Threading.ReaderWriterCount
  #pragma pack(pop)
  static check_size<sizeof(ReaderWriterCount), 40 + sizeof(System::Threading::ReaderWriterCount*)> __System_Threading_ReaderWriterCountSizeCheck;
  static_assert(sizeof(ReaderWriterCount) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ReaderWriterCount*, "System.Threading", "ReaderWriterCount");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::ReaderWriterCount::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
