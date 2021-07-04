// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.ReaderWriterLockSlim
#include "System/Threading/ReaderWriterLockSlim.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.ReaderWriterLockSlim/TimeoutTracker
  struct ReaderWriterLockSlim::TimeoutTracker/*, public System::ValueType*/ {
    public:
    // private System.Int32 m_total
    // Size: 0x4
    // Offset: 0x0
    int m_total;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_start
    // Size: 0x4
    // Offset: 0x4
    int m_start;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TimeoutTracker
    constexpr TimeoutTracker(int m_total_ = {}, int m_start_ = {}) noexcept : m_total{m_total_}, m_start{m_start_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.Int32 millisecondsTimeout)
    // Offset: 0xF22994
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    TimeoutTracker(int millisecondsTimeout) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ReaderWriterLockSlim::TimeoutTracker::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(millisecondsTimeout)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, millisecondsTimeout);
    }
    // public System.Int32 get_RemainingMilliseconds()
    // Offset: 0xF2299C
    int get_RemainingMilliseconds();
    // public System.Boolean get_IsExpired()
    // Offset: 0xF229A4
    bool get_IsExpired();
  }; // System.Threading.ReaderWriterLockSlim/TimeoutTracker
  #pragma pack(pop)
  static check_size<sizeof(ReaderWriterLockSlim::TimeoutTracker), 4 + sizeof(int)> __System_Threading_ReaderWriterLockSlim_TimeoutTrackerSizeCheck;
  static_assert(sizeof(ReaderWriterLockSlim::TimeoutTracker) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ReaderWriterLockSlim::TimeoutTracker, "System.Threading", "ReaderWriterLockSlim/TimeoutTracker");
// Writing MetadataGetter for method: System::Threading::ReaderWriterLockSlim::TimeoutTracker::TimeoutTracker
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::ReaderWriterLockSlim::TimeoutTracker::get_RemainingMilliseconds
// Il2CppName: get_RemainingMilliseconds
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::ReaderWriterLockSlim::TimeoutTracker::get_IsExpired
// Il2CppName: get_IsExpired
// Cannot perform method pointer template specialization from operators!
