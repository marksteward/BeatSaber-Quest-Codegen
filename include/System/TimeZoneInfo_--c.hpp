// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TimeZoneInfo
#include "System/TimeZoneInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  // Autogenerated type: System.TimeZoneInfo/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D37964
  class TimeZoneInfo::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly System.TimeZoneInfo/<>c <>9
    static System::TimeZoneInfo::$$c* _get_$$9();
    // Set static field: static public readonly System.TimeZoneInfo/<>c <>9
    static void _set_$$9(System::TimeZoneInfo::$$c* value);
    // Get static field: static public System.Comparison`1<System.TimeZoneInfo/AdjustmentRule> <>9__19_0
    static System::Comparison_1<System::TimeZoneInfo::AdjustmentRule*>* _get_$$9__19_0();
    // Set static field: static public System.Comparison`1<System.TimeZoneInfo/AdjustmentRule> <>9__19_0
    static void _set_$$9__19_0(System::Comparison_1<System::TimeZoneInfo::AdjustmentRule*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1654830
    static void _cctor();
    // System.Int32 <CreateLocalUnity>b__19_0(System.TimeZoneInfo/AdjustmentRule rule1, System.TimeZoneInfo/AdjustmentRule rule2)
    // Offset: 0x16548A0
    int $CreateLocalUnity$b__19_0(System::TimeZoneInfo::AdjustmentRule* rule1, System::TimeZoneInfo::AdjustmentRule* rule2);
    // public System.Void .ctor()
    // Offset: 0x1654898
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeZoneInfo::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TimeZoneInfo::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeZoneInfo::$$c*, creationType>()));
    }
  }; // System.TimeZoneInfo/<>c
}
DEFINE_IL2CPP_ARG_TYPE(System::TimeZoneInfo::$$c*, "System", "TimeZoneInfo/<>c");
#pragma pack(pop)
