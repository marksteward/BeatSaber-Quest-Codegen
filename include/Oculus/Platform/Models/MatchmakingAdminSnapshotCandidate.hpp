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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.MatchmakingAdminSnapshotCandidate
  // [] Offset: FFFFFFFF
  class MatchmakingAdminSnapshotCandidate : public ::Il2CppObject {
    public:
    // public readonly System.Boolean CanMatch
    // Size: 0x1
    // Offset: 0x10
    bool CanMatch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: CanMatch and: MyTotalScore
    char __padding0[0x7] = {};
    // public readonly System.Double MyTotalScore
    // Size: 0x8
    // Offset: 0x18
    double MyTotalScore;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public readonly System.Double TheirCurrentThreshold
    // Size: 0x8
    // Offset: 0x20
    double TheirCurrentThreshold;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public readonly System.Double TheirTotalScore
    // Size: 0x8
    // Offset: 0x28
    double TheirTotalScore;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public readonly System.String TraceId
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* TraceId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MatchmakingAdminSnapshotCandidate
    MatchmakingAdminSnapshotCandidate(bool CanMatch_ = {}, double MyTotalScore_ = {}, double TheirCurrentThreshold_ = {}, double TheirTotalScore_ = {}, ::Il2CppString* TraceId_ = {}) noexcept : CanMatch{CanMatch_}, MyTotalScore{MyTotalScore_}, TheirCurrentThreshold{TheirCurrentThreshold_}, TheirTotalScore{TheirTotalScore_}, TraceId{TraceId_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x11E1434
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchmakingAdminSnapshotCandidate* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchmakingAdminSnapshotCandidate*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.MatchmakingAdminSnapshotCandidate
  static check_size<sizeof(MatchmakingAdminSnapshotCandidate), 48 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_MatchmakingAdminSnapshotCandidateSizeCheck;
  static_assert(sizeof(MatchmakingAdminSnapshotCandidate) == 0x38);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate*, "Oculus.Platform.Models", "MatchmakingAdminSnapshotCandidate");
