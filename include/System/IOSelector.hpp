// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: IOSelectorJob
  class IOSelectorJob;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IOSelector
  class IOSelector : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IOSelector
    IOSelector() noexcept {}
    // static public System.Void Add(System.IntPtr handle, System.IOSelectorJob job)
    // Offset: 0x18769B4
    static void Add(System::IntPtr handle, System::IOSelectorJob* job);
  }; // System.IOSelector
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IOSelector*, "System", "IOSelector");
// Writing MetadataGetter for method: System::IOSelector::Add
// Il2CppName: Add
// Cannot perform method pointer template specialization from operators!
