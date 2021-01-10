// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.LivestreamingStartStatus
#include "Oculus/Platform/LivestreamingStartStatus.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x14
  // Autogenerated type: Oculus.Platform.Models.LivestreamingStartResult
  // [] Offset: FFFFFFFF
  class LivestreamingStartResult : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.LivestreamingStartStatus StreamingResult
    // Size: 0x4
    // Offset: 0x10
    Oculus::Platform::LivestreamingStartStatus StreamingResult;
    // Field size check
    static_assert(sizeof(Oculus::Platform::LivestreamingStartStatus) == 0x4);
    // Creating value type constructor for type: LivestreamingStartResult
    LivestreamingStartResult(Oculus::Platform::LivestreamingStartStatus StreamingResult_ = {}) noexcept : StreamingResult{StreamingResult_} {}
    // Creating conversion operator: operator Oculus::Platform::LivestreamingStartStatus
    constexpr operator Oculus::Platform::LivestreamingStartStatus() const noexcept {
      return StreamingResult;
    }
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x11DB8DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LivestreamingStartResult* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::LivestreamingStartResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LivestreamingStartResult*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LivestreamingStartResult
  static check_size<sizeof(LivestreamingStartResult), 16 + sizeof(Oculus::Platform::LivestreamingStartStatus)> __Oculus_Platform_Models_LivestreamingStartResultSizeCheck;
  static_assert(sizeof(LivestreamingStartResult) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LivestreamingStartResult*, "Oculus.Platform.Models", "LivestreamingStartResult");
#pragma pack(pop)
