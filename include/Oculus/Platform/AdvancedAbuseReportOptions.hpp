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
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: AbuseReportType
  struct AbuseReportType;
  // Forward declaring type: AbuseReportVideoMode
  struct AbuseReportVideoMode;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.AdvancedAbuseReportOptions
  class AdvancedAbuseReportOptions : public ::Il2CppObject {
    public:
    // private System.IntPtr Handle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: AdvancedAbuseReportOptions
    AdvancedAbuseReportOptions(System::IntPtr Handle_ = {}) noexcept : Handle{Handle_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return Handle;
    }
    // public System.Void SetObjectType(System.String value)
    // Offset: 0x1BAF7A8
    void SetObjectType(::Il2CppString* value);
    // public System.Void SetReportType(Oculus.Platform.AbuseReportType value)
    // Offset: 0x1BAF8CC
    void SetReportType(Oculus::Platform::AbuseReportType value);
    // public System.Void SetVideoMode(Oculus.Platform.AbuseReportVideoMode value)
    // Offset: 0x1BAF9D4
    void SetVideoMode(Oculus::Platform::AbuseReportVideoMode value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.AdvancedAbuseReportOptions options)
    // Offset: 0x1BAFADC
    // ABORTED: conflicts with another method.  explicit operator System::IntPtr();
    // public System.Void .ctor()
    // Offset: 0x1BAF6C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdvancedAbuseReportOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::AdvancedAbuseReportOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdvancedAbuseReportOptions*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x1BAFB2C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.AdvancedAbuseReportOptions
  #pragma pack(pop)
  static check_size<sizeof(AdvancedAbuseReportOptions), 16 + sizeof(System::IntPtr)> __Oculus_Platform_AdvancedAbuseReportOptionsSizeCheck;
  static_assert(sizeof(AdvancedAbuseReportOptions) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::AdvancedAbuseReportOptions*, "Oculus.Platform", "AdvancedAbuseReportOptions");