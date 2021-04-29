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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: ChallengeViewerFilter
  struct ChallengeViewerFilter;
  // Forward declaring type: ChallengeVisibility
  struct ChallengeVisibility;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.ChallengeOptions
  class ChallengeOptions : public ::Il2CppObject {
    public:
    // private System.IntPtr Handle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: ChallengeOptions
    ChallengeOptions(System::IntPtr Handle_ = {}) noexcept : Handle{Handle_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return Handle;
    }
    // public System.Void SetDescription(System.String value)
    // Offset: 0x139AB90
    void SetDescription(::Il2CppString* value);
    // public System.Void SetEndDate(System.DateTime value)
    // Offset: 0x139AC0C
    void SetEndDate(System::DateTime value);
    // public System.Void SetIncludeActiveChallenges(System.Boolean value)
    // Offset: 0x139AC88
    void SetIncludeActiveChallenges(bool value);
    // public System.Void SetIncludeFutureChallenges(System.Boolean value)
    // Offset: 0x139AD04
    void SetIncludeFutureChallenges(bool value);
    // public System.Void SetIncludePastChallenges(System.Boolean value)
    // Offset: 0x139AD80
    void SetIncludePastChallenges(bool value);
    // public System.Void SetLeaderboardName(System.String value)
    // Offset: 0x139ADFC
    void SetLeaderboardName(::Il2CppString* value);
    // public System.Void SetStartDate(System.DateTime value)
    // Offset: 0x139AE78
    void SetStartDate(System::DateTime value);
    // public System.Void SetTitle(System.String value)
    // Offset: 0x139AEF4
    void SetTitle(::Il2CppString* value);
    // public System.Void SetViewerFilter(Oculus.Platform.ChallengeViewerFilter value)
    // Offset: 0x139AF70
    void SetViewerFilter(Oculus::Platform::ChallengeViewerFilter value);
    // public System.Void SetVisibility(Oculus.Platform.ChallengeVisibility value)
    // Offset: 0x139AFEC
    void SetVisibility(Oculus::Platform::ChallengeVisibility value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.ChallengeOptions options)
    // Offset: 0x139B068
    // ABORTED: conflicts with another method.  explicit operator System::IntPtr();
    // public System.Void .ctor()
    // Offset: 0x139AB18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChallengeOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::ChallengeOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChallengeOptions*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x139B0B8
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.ChallengeOptions
  #pragma pack(pop)
  static check_size<sizeof(ChallengeOptions), 16 + sizeof(System::IntPtr)> __Oculus_Platform_ChallengeOptionsSizeCheck;
  static_assert(sizeof(ChallengeOptions) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::ChallengeOptions*, "Oculus.Platform", "ChallengeOptions");
