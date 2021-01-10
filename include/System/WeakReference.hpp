// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.InteropServices.GCHandle
#include "System/Runtime/InteropServices/GCHandle.hpp"
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
  // Size: 0x18
  // Autogenerated type: System.WeakReference
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D37EC4
  class WeakReference : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // private System.Boolean isLongReference
    // Size: 0x1
    // Offset: 0x10
    bool isLongReference;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isLongReference and: gcHandle
    char __padding0[0x3] = {};
    // private System.Runtime.InteropServices.GCHandle gcHandle
    // Size: 0x4
    // Offset: 0x14
    System::Runtime::InteropServices::GCHandle gcHandle;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::GCHandle) == 0x4);
    // Creating value type constructor for type: WeakReference
    WeakReference(bool isLongReference_ = {}, System::Runtime::InteropServices::GCHandle gcHandle_ = {}) noexcept : isLongReference{isLongReference_}, gcHandle{gcHandle_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // private System.Void AllocateHandle(System.Object target)
    // Offset: 0x19E1120
    void AllocateHandle(::Il2CppObject* target);
    // public System.Void .ctor(System.Object target)
    // Offset: 0x19E115C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WeakReference* New_ctor(::Il2CppObject* target) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::WeakReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WeakReference*, creationType>(target)));
    }
    // public System.Void .ctor(System.Object target, System.Boolean trackResurrection)
    // Offset: 0x19E1190
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WeakReference* New_ctor(::Il2CppObject* target, bool trackResurrection) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::WeakReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WeakReference*, creationType>(target, trackResurrection)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x19E11D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WeakReference* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::WeakReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WeakReference*, creationType>(info, context)));
    }
    // public System.Boolean get_IsAlive()
    // Offset: 0x19E12E8
    bool get_IsAlive();
    // public System.Object get_Target()
    // Offset: 0x19E130C
    ::Il2CppObject* get_Target();
    // public System.Void set_Target(System.Object value)
    // Offset: 0x19E1350
    void set_Target(::Il2CppObject* value);
    // public System.Boolean get_TrackResurrection()
    // Offset: 0x19E135C
    bool get_TrackResurrection();
    // protected System.Void .ctor()
    // Offset: 0x19E1154
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WeakReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::WeakReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WeakReference*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x19E1364
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x19E13D4
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.WeakReference
  static check_size<sizeof(WeakReference), 20 + sizeof(System::Runtime::InteropServices::GCHandle)> __System_WeakReferenceSizeCheck;
  static_assert(sizeof(WeakReference) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::WeakReference*, "System", "WeakReference");
#pragma pack(pop)
