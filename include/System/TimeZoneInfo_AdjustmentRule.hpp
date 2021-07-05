// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TimeZoneInfo
#include "System/TimeZoneInfo.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Including type: System.TimeZoneInfo/TransitionTime
#include "System/TimeZoneInfo_TransitionTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: System.TimeZoneInfo/AdjustmentRule
  // [TypeForwardedFromAttribute] Offset: D7AE70
  class TimeZoneInfo::AdjustmentRule : public ::Il2CppObject/*, public System::IEquatable_1<System::TimeZoneInfo::AdjustmentRule*>, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IDeserializationCallback*/ {
    public:
    // private System.DateTime m_dateStart
    // Size: 0x8
    // Offset: 0x10
    System::DateTime m_dateStart;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // private System.DateTime m_dateEnd
    // Size: 0x8
    // Offset: 0x18
    System::DateTime m_dateEnd;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // private System.TimeSpan m_daylightDelta
    // Size: 0x8
    // Offset: 0x20
    System::TimeSpan m_daylightDelta;
    // Field size check
    static_assert(sizeof(System::TimeSpan) == 0x8);
    // private System.TimeZoneInfo/TransitionTime m_daylightTransitionStart
    // Size: 0x11
    // Offset: 0x28
    System::TimeZoneInfo::TransitionTime m_daylightTransitionStart;
    // Field size check
    static_assert(sizeof(System::TimeZoneInfo::TransitionTime) == 0x11);
    // Padding between fields: m_daylightTransitionStart and: m_daylightTransitionEnd
    char __padding3[0x7] = {};
    // private System.TimeZoneInfo/TransitionTime m_daylightTransitionEnd
    // Size: 0x11
    // Offset: 0x40
    System::TimeZoneInfo::TransitionTime m_daylightTransitionEnd;
    // Field size check
    static_assert(sizeof(System::TimeZoneInfo::TransitionTime) == 0x11);
    // Padding between fields: m_daylightTransitionEnd and: m_baseUtcOffsetDelta
    char __padding4[0x7] = {};
    // private System.TimeSpan m_baseUtcOffsetDelta
    // Size: 0x8
    // Offset: 0x58
    System::TimeSpan m_baseUtcOffsetDelta;
    // Field size check
    static_assert(sizeof(System::TimeSpan) == 0x8);
    // Creating value type constructor for type: AdjustmentRule
    AdjustmentRule(System::DateTime m_dateStart_ = {}, System::DateTime m_dateEnd_ = {}, System::TimeSpan m_daylightDelta_ = {}, System::TimeZoneInfo::TransitionTime m_daylightTransitionStart_ = {}, System::TimeZoneInfo::TransitionTime m_daylightTransitionEnd_ = {}, System::TimeSpan m_baseUtcOffsetDelta_ = {}) noexcept : m_dateStart{m_dateStart_}, m_dateEnd{m_dateEnd_}, m_daylightDelta{m_daylightDelta_}, m_daylightTransitionStart{m_daylightTransitionStart_}, m_daylightTransitionEnd{m_daylightTransitionEnd_}, m_baseUtcOffsetDelta{m_baseUtcOffsetDelta_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<System::TimeZoneInfo::AdjustmentRule*>
    operator System::IEquatable_1<System::TimeZoneInfo::AdjustmentRule*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<System::TimeZoneInfo::AdjustmentRule*>*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::IDeserializationCallback
    operator System::Runtime::Serialization::IDeserializationCallback() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // public System.DateTime get_DateStart()
    // Offset: 0x18A2544
    System::DateTime get_DateStart();
    // public System.DateTime get_DateEnd()
    // Offset: 0x18A254C
    System::DateTime get_DateEnd();
    // public System.TimeSpan get_DaylightDelta()
    // Offset: 0x18A2554
    System::TimeSpan get_DaylightDelta();
    // public System.TimeZoneInfo/TransitionTime get_DaylightTransitionStart()
    // Offset: 0x18A255C
    System::TimeZoneInfo::TransitionTime get_DaylightTransitionStart();
    // public System.TimeZoneInfo/TransitionTime get_DaylightTransitionEnd()
    // Offset: 0x18A2570
    System::TimeZoneInfo::TransitionTime get_DaylightTransitionEnd();
    // public System.Boolean Equals(System.TimeZoneInfo/AdjustmentRule other)
    // Offset: 0x18A040C
    bool Equals(System::TimeZoneInfo::AdjustmentRule* other);
    // static public System.TimeZoneInfo/AdjustmentRule CreateAdjustmentRule(System.DateTime dateStart, System.DateTime dateEnd, System.TimeSpan daylightDelta, System.TimeZoneInfo/TransitionTime daylightTransitionStart, System.TimeZoneInfo/TransitionTime daylightTransitionEnd)
    // Offset: 0x189A59C
    static System::TimeZoneInfo::AdjustmentRule* CreateAdjustmentRule(System::DateTime dateStart, System::DateTime dateEnd, System::TimeSpan daylightDelta, System::TimeZoneInfo::TransitionTime daylightTransitionStart, System::TimeZoneInfo::TransitionTime daylightTransitionEnd);
    // static System.TimeZoneInfo/AdjustmentRule CreateAdjustmentRule(System.DateTime dateStart, System.DateTime dateEnd, System.TimeSpan daylightDelta, System.TimeZoneInfo/TransitionTime daylightTransitionStart, System.TimeZoneInfo/TransitionTime daylightTransitionEnd, System.TimeSpan baseUtcOffsetDelta)
    // Offset: 0x189B308
    static System::TimeZoneInfo::AdjustmentRule* CreateAdjustmentRule(System::DateTime dateStart, System::DateTime dateEnd, System::TimeSpan daylightDelta, System::TimeZoneInfo::TransitionTime daylightTransitionStart, System::TimeZoneInfo::TransitionTime daylightTransitionEnd, System::TimeSpan baseUtcOffsetDelta);
    // static private System.Void ValidateAdjustmentRule(System.DateTime dateStart, System.DateTime dateEnd, System.TimeSpan daylightDelta, System.TimeZoneInfo/TransitionTime daylightTransitionStart, System.TimeZoneInfo/TransitionTime daylightTransitionEnd)
    // Offset: 0x18A2598
    static void ValidateAdjustmentRule(System::DateTime dateStart, System::DateTime dateEnd, System::TimeSpan daylightDelta, System::TimeZoneInfo::TransitionTime daylightTransitionStart, System::TimeZoneInfo::TransitionTime daylightTransitionEnd);
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0x18A28F8
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x18A2A3C
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x18A2BE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeZoneInfo::AdjustmentRule* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TimeZoneInfo::AdjustmentRule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeZoneInfo::AdjustmentRule*, creationType>(info, context)));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x18A2584
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // private System.Void .ctor()
    // Offset: 0x18A2590
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeZoneInfo::AdjustmentRule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TimeZoneInfo::AdjustmentRule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeZoneInfo::AdjustmentRule*, creationType>()));
    }
  }; // System.TimeZoneInfo/AdjustmentRule
  #pragma pack(pop)
  static check_size<sizeof(TimeZoneInfo::AdjustmentRule), 88 + sizeof(System::TimeSpan)> __System_TimeZoneInfo_AdjustmentRuleSizeCheck;
  static_assert(sizeof(TimeZoneInfo::AdjustmentRule) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(System::TimeZoneInfo::AdjustmentRule*, "System", "TimeZoneInfo/AdjustmentRule");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TimeZoneInfo::AdjustmentRule::get_DateStart
// Il2CppName: get_DateStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::TimeZoneInfo::AdjustmentRule::*)()>(&System::TimeZoneInfo::AdjustmentRule::get_DateStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::AdjustmentRule*), "get_DateStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::AdjustmentRule::get_DateEnd
// Il2CppName: get_DateEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::TimeZoneInfo::AdjustmentRule::*)()>(&System::TimeZoneInfo::AdjustmentRule::get_DateEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::AdjustmentRule*), "get_DateEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::AdjustmentRule::get_DaylightDelta
// Il2CppName: get_DaylightDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::TimeZoneInfo::AdjustmentRule::*)()>(&System::TimeZoneInfo::AdjustmentRule::get_DaylightDelta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::AdjustmentRule*), "get_DaylightDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::AdjustmentRule::get_DaylightTransitionStart
// Il2CppName: get_DaylightTransitionStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeZoneInfo::TransitionTime (System::TimeZoneInfo::AdjustmentRule::*)()>(&System::TimeZoneInfo::AdjustmentRule::get_DaylightTransitionStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::AdjustmentRule*), "get_DaylightTransitionStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::AdjustmentRule::get_DaylightTransitionEnd
// Il2CppName: get_DaylightTransitionEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeZoneInfo::TransitionTime (System::TimeZoneInfo::AdjustmentRule::*)()>(&System::TimeZoneInfo::AdjustmentRule::get_DaylightTransitionEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::AdjustmentRule*), "get_DaylightTransitionEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::AdjustmentRule::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::TimeZoneInfo::AdjustmentRule::*)(System::TimeZoneInfo::AdjustmentRule*)>(&System::TimeZoneInfo::AdjustmentRule::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "TimeZoneInfo/AdjustmentRule")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::AdjustmentRule*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::AdjustmentRule::CreateAdjustmentRule
// Il2CppName: CreateAdjustmentRule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeZoneInfo::AdjustmentRule* (*)(System::DateTime, System::DateTime, System::TimeSpan, System::TimeZoneInfo::TransitionTime, System::TimeZoneInfo::TransitionTime)>(&System::TimeZoneInfo::AdjustmentRule::CreateAdjustmentRule)> {
  static const MethodInfo* get() {
    static auto* dateStart = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* dateEnd = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* daylightDelta = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* daylightTransitionStart = &::il2cpp_utils::GetClassFromName("System", "TimeZoneInfo/TransitionTime")->byval_arg;
    static auto* daylightTransitionEnd = &::il2cpp_utils::GetClassFromName("System", "TimeZoneInfo/TransitionTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::AdjustmentRule*), "CreateAdjustmentRule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::AdjustmentRule::CreateAdjustmentRule
// Il2CppName: CreateAdjustmentRule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeZoneInfo::AdjustmentRule* (*)(System::DateTime, System::DateTime, System::TimeSpan, System::TimeZoneInfo::TransitionTime, System::TimeZoneInfo::TransitionTime, System::TimeSpan)>(&System::TimeZoneInfo::AdjustmentRule::CreateAdjustmentRule)> {
  static const MethodInfo* get() {
    static auto* dateStart = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* dateEnd = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* daylightDelta = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* daylightTransitionStart = &::il2cpp_utils::GetClassFromName("System", "TimeZoneInfo/TransitionTime")->byval_arg;
    static auto* daylightTransitionEnd = &::il2cpp_utils::GetClassFromName("System", "TimeZoneInfo/TransitionTime")->byval_arg;
    static auto* baseUtcOffsetDelta = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::AdjustmentRule*), "CreateAdjustmentRule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd, baseUtcOffsetDelta});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::AdjustmentRule::ValidateAdjustmentRule
// Il2CppName: ValidateAdjustmentRule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::DateTime, System::DateTime, System::TimeSpan, System::TimeZoneInfo::TransitionTime, System::TimeZoneInfo::TransitionTime)>(&System::TimeZoneInfo::AdjustmentRule::ValidateAdjustmentRule)> {
  static const MethodInfo* get() {
    static auto* dateStart = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* dateEnd = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* daylightDelta = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* daylightTransitionStart = &::il2cpp_utils::GetClassFromName("System", "TimeZoneInfo/TransitionTime")->byval_arg;
    static auto* daylightTransitionEnd = &::il2cpp_utils::GetClassFromName("System", "TimeZoneInfo/TransitionTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::AdjustmentRule*), "ValidateAdjustmentRule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::AdjustmentRule::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
// Il2CppName: System.Runtime.Serialization.IDeserializationCallback.OnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TimeZoneInfo::AdjustmentRule::*)(::Il2CppObject*)>(&System::TimeZoneInfo::AdjustmentRule::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::AdjustmentRule*), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::AdjustmentRule::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TimeZoneInfo::AdjustmentRule::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::TimeZoneInfo::AdjustmentRule::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::AdjustmentRule*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::AdjustmentRule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TimeZoneInfo::AdjustmentRule::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TimeZoneInfo::AdjustmentRule::*)()>(&System::TimeZoneInfo::AdjustmentRule::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::AdjustmentRule*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::AdjustmentRule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
