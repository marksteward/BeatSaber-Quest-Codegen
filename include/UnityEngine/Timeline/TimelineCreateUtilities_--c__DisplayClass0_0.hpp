// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.TimelineCreateUtilities
#include "UnityEngine/Timeline/TimelineCreateUtilities.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineCreateUtilities/<>c__DisplayClass0_0
  // [CompilerGeneratedAttribute] Offset: DD79D4
  class TimelineCreateUtilities::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass0_0
    $$c__DisplayClass0_0(::Il2CppString* name_ = {}) noexcept : name{name_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return name;
    }
    // System.Boolean <GenerateUniqueActorName>b__0(UnityEngine.ScriptableObject x)
    // Offset: 0x233B030
    bool $GenerateUniqueActorName$b__0(UnityEngine::ScriptableObject* x);
    // public System.Void .ctor()
    // Offset: 0x233ABE8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimelineCreateUtilities::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimelineCreateUtilities::$$c__DisplayClass0_0*, creationType>()));
    }
  }; // UnityEngine.Timeline.TimelineCreateUtilities/<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(TimelineCreateUtilities::$$c__DisplayClass0_0), 16 + sizeof(::Il2CppString*)> __UnityEngine_Timeline_TimelineCreateUtilities_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(TimelineCreateUtilities::$$c__DisplayClass0_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_0*, "UnityEngine.Timeline", "TimelineCreateUtilities/<>c__DisplayClass0_0");
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_0::$GenerateUniqueActorName$b__0
// Il2CppName: <GenerateUniqueActorName>b__0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
