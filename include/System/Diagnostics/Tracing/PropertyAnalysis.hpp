// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingTypeInfo
  class TraceLoggingTypeInfo;
  // Forward declaring type: EventFieldAttribute
  class EventFieldAttribute;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.PropertyAnalysis
  // [] Offset: FFFFFFFF
  class PropertyAnalysis : public ::Il2CppObject {
    public:
    // readonly System.String name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // readonly System.Reflection.MethodInfo getterInfo
    // Size: 0x8
    // Offset: 0x18
    System::Reflection::MethodInfo* getterInfo;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // readonly System.Diagnostics.Tracing.TraceLoggingTypeInfo typeInfo
    // Size: 0x8
    // Offset: 0x20
    System::Diagnostics::Tracing::TraceLoggingTypeInfo* typeInfo;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::TraceLoggingTypeInfo*) == 0x8);
    // readonly System.Diagnostics.Tracing.EventFieldAttribute fieldAttribute
    // Size: 0x8
    // Offset: 0x28
    System::Diagnostics::Tracing::EventFieldAttribute* fieldAttribute;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::EventFieldAttribute*) == 0x8);
    // Creating value type constructor for type: PropertyAnalysis
    PropertyAnalysis(::Il2CppString* name_ = {}, System::Reflection::MethodInfo* getterInfo_ = {}, System::Diagnostics::Tracing::TraceLoggingTypeInfo* typeInfo_ = {}, System::Diagnostics::Tracing::EventFieldAttribute* fieldAttribute_ = {}) noexcept : name{name_}, getterInfo{getterInfo_}, typeInfo{typeInfo_}, fieldAttribute{fieldAttribute_} {}
    // public System.Void .ctor(System.String name, System.Reflection.MethodInfo getterInfo, System.Diagnostics.Tracing.TraceLoggingTypeInfo typeInfo, System.Diagnostics.Tracing.EventFieldAttribute fieldAttribute)
    // Offset: 0x111F3C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyAnalysis* New_ctor(::Il2CppString* name, System::Reflection::MethodInfo* getterInfo, System::Diagnostics::Tracing::TraceLoggingTypeInfo* typeInfo, System::Diagnostics::Tracing::EventFieldAttribute* fieldAttribute) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::PropertyAnalysis::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyAnalysis*, creationType>(name, getterInfo, typeInfo, fieldAttribute)));
    }
  }; // System.Diagnostics.Tracing.PropertyAnalysis
  static check_size<sizeof(PropertyAnalysis), 40 + sizeof(System::Diagnostics::Tracing::EventFieldAttribute*)> __System_Diagnostics_Tracing_PropertyAnalysisSizeCheck;
  static_assert(sizeof(PropertyAnalysis) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::PropertyAnalysis*, "System.Diagnostics.Tracing", "PropertyAnalysis");
