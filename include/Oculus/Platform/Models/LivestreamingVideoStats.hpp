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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.LivestreamingVideoStats
  class LivestreamingVideoStats : public ::Il2CppObject {
    public:
    // public readonly System.Int32 CommentCount
    // Size: 0x4
    // Offset: 0x10
    int CommentCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 ReactionCount
    // Size: 0x4
    // Offset: 0x14
    int ReactionCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.String TotalViews
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* TotalViews;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: LivestreamingVideoStats
    LivestreamingVideoStats(int CommentCount_ = {}, int ReactionCount_ = {}, ::Il2CppString* TotalViews_ = {}) noexcept : CommentCount{CommentCount_}, ReactionCount{ReactionCount_}, TotalViews{TotalViews_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x13A9B64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LivestreamingVideoStats* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::LivestreamingVideoStats::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LivestreamingVideoStats*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LivestreamingVideoStats
  #pragma pack(pop)
  static check_size<sizeof(LivestreamingVideoStats), 24 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_LivestreamingVideoStatsSizeCheck;
  static_assert(sizeof(LivestreamingVideoStats) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LivestreamingVideoStats*, "Oculus.Platform.Models", "LivestreamingVideoStats");
