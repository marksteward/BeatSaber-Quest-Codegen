// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // WARNING Size may be invalid!
  // Autogenerated type: System.WeakReference`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class WeakReference_1 : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // private System.Runtime.InteropServices.GCHandle handle
    // Size: 0x4
    // Offset: 0x0
    System::Runtime::InteropServices::GCHandle handle;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::GCHandle) == 0x4);
    // private System.Boolean trackResurrection
    // Size: 0x1
    // Offset: 0x0
    bool trackResurrection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: WeakReference_1
    WeakReference_1(System::Runtime::InteropServices::GCHandle handle_ = {}, bool trackResurrection_ = {}) noexcept : handle{handle_}, trackResurrection{trackResurrection_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // public System.Void .ctor(T target)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WeakReference_1<T>* New_ctor(T target) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::WeakReference_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WeakReference_1<T>*, creationType>(target)));
    }
    // public System.Void .ctor(T target, System.Boolean trackResurrection)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WeakReference_1<T>* New_ctor(T target, bool trackResurrection) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::WeakReference_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WeakReference_1<T>*, creationType>(target, trackResurrection)));
    }
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WeakReference_1<T>* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::WeakReference_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WeakReference_1<T>*, creationType>(info, context)));
    }
    // public System.Boolean TryGetTarget(out T target)
    // Offset: 0xFFFFFFFF
    bool TryGetTarget(T& target) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::WeakReference_1::TryGetTarget");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "TryGetTarget", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(target)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, target);
    }
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::WeakReference_1::GetObjectData");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetObjectData", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(info, context)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, info, context);
    }
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      GetObjectData(info, context);
    }
    // protected override System.Void Finalize()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::WeakReference_1::Finalize");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Finalize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
  }; // System.WeakReference`1
  // Could not write size check! Type: System.WeakReference`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::WeakReference_1, "System", "WeakReference`1");
