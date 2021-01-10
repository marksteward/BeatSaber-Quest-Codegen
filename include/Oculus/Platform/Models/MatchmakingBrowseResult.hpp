// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: MatchmakingEnqueueResult
  class MatchmakingEnqueueResult;
  // Forward declaring type: RoomList
  class RoomList;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x20
  // Autogenerated type: Oculus.Platform.Models.MatchmakingBrowseResult
  // [] Offset: FFFFFFFF
  class MatchmakingBrowseResult : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.Models.MatchmakingEnqueueResult EnqueueResult
    // Size: 0x8
    // Offset: 0x10
    Oculus::Platform::Models::MatchmakingEnqueueResult* EnqueueResult;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::MatchmakingEnqueueResult*) == 0x8);
    // public readonly Oculus.Platform.Models.RoomList Rooms
    // Size: 0x8
    // Offset: 0x18
    Oculus::Platform::Models::RoomList* Rooms;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::RoomList*) == 0x8);
    // Creating value type constructor for type: MatchmakingBrowseResult
    MatchmakingBrowseResult(Oculus::Platform::Models::MatchmakingEnqueueResult* EnqueueResult_ = {}, Oculus::Platform::Models::RoomList* Rooms_ = {}) noexcept : EnqueueResult{EnqueueResult_}, Rooms{Rooms_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x11DBFF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchmakingBrowseResult* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::MatchmakingBrowseResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchmakingBrowseResult*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.MatchmakingBrowseResult
  static check_size<sizeof(MatchmakingBrowseResult), 24 + sizeof(Oculus::Platform::Models::RoomList*)> __Oculus_Platform_Models_MatchmakingBrowseResultSizeCheck;
  static_assert(sizeof(MatchmakingBrowseResult) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MatchmakingBrowseResult*, "Oculus.Platform.Models", "MatchmakingBrowseResult");
#pragma pack(pop)
