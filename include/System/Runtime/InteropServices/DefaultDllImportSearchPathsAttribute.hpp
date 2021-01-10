// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.InteropServices.DllImportSearchPath
#include "System/Runtime/InteropServices/DllImportSearchPath.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x14
  // Autogenerated type: System.Runtime.InteropServices.DefaultDllImportSearchPathsAttribute
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3BC44
  // [AttributeUsageAttribute] Offset: D3BC44
  class DefaultDllImportSearchPathsAttribute : public System::Attribute {
    public:
    // System.Runtime.InteropServices.DllImportSearchPath _paths
    // Size: 0x4
    // Offset: 0x10
    System::Runtime::InteropServices::DllImportSearchPath paths;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::DllImportSearchPath) == 0x4);
    // Creating value type constructor for type: DefaultDllImportSearchPathsAttribute
    DefaultDllImportSearchPathsAttribute(System::Runtime::InteropServices::DllImportSearchPath paths_ = {}) noexcept : paths{paths_} {}
    // Creating conversion operator: operator System::Runtime::InteropServices::DllImportSearchPath
    constexpr operator System::Runtime::InteropServices::DllImportSearchPath() const noexcept {
      return paths;
    }
    // public System.Void .ctor(System.Runtime.InteropServices.DllImportSearchPath paths)
    // Offset: 0x11644F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultDllImportSearchPathsAttribute* New_ctor(System::Runtime::InteropServices::DllImportSearchPath paths) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultDllImportSearchPathsAttribute*, creationType>(paths)));
    }
  }; // System.Runtime.InteropServices.DefaultDllImportSearchPathsAttribute
  static check_size<sizeof(DefaultDllImportSearchPathsAttribute), 16 + sizeof(System::Runtime::InteropServices::DllImportSearchPath)> __System_Runtime_InteropServices_DefaultDllImportSearchPathsAttributeSizeCheck;
  static_assert(sizeof(DefaultDllImportSearchPathsAttribute) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute*, "System.Runtime.InteropServices", "DefaultDllImportSearchPathsAttribute");
#pragma pack(pop)
