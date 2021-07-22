// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.LivestreamingApplicationStatus
  // [TokenAttribute] Offset: FFFFFFFF
  class LivestreamingApplicationStatus : public ::Il2CppObject {
    public:
    // public readonly System.Boolean StreamingEnabled
    // Size: 0x1
    // Offset: 0x10
    bool StreamingEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LivestreamingApplicationStatus
    LivestreamingApplicationStatus(bool StreamingEnabled_ = {}) noexcept : StreamingEnabled{StreamingEnabled_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return StreamingEnabled;
    }
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x14A3CBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LivestreamingApplicationStatus* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::LivestreamingApplicationStatus::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LivestreamingApplicationStatus*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LivestreamingApplicationStatus
  #pragma pack(pop)
  static check_size<sizeof(LivestreamingApplicationStatus), 16 + sizeof(bool)> __Oculus_Platform_Models_LivestreamingApplicationStatusSizeCheck;
  static_assert(sizeof(LivestreamingApplicationStatus) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LivestreamingApplicationStatus*, "Oculus.Platform.Models", "LivestreamingApplicationStatus");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::LivestreamingApplicationStatus::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
