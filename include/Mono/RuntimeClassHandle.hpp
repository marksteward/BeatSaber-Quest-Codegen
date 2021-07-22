// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
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
  // Forward declaring type: RuntimeTypeHandle
  struct RuntimeTypeHandle;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.RuntimeClassHandle
  // [TokenAttribute] Offset: FFFFFFFF
  struct RuntimeClassHandle/*, public System::ValueType*/ {
    public:
    // private Mono.RuntimeStructs/Mono.MonoClass* value
    // Size: 0x8
    // Offset: 0x0
    Mono::RuntimeStructs::MonoClass* value;
    // Field size check
    static_assert(sizeof(Mono::RuntimeStructs::MonoClass*) == 0x8);
    // Creating value type constructor for type: RuntimeClassHandle
    constexpr RuntimeClassHandle(Mono::RuntimeStructs::MonoClass* value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator Mono::RuntimeStructs::MonoClass*
    constexpr operator Mono::RuntimeStructs::MonoClass*() const noexcept {
      return value;
    }
    // Mono.RuntimeStructs/Mono.MonoClass* get_Value()
    // Offset: 0xEECE84
    Mono::RuntimeStructs::MonoClass* get_Value();
    // System.Void .ctor(Mono.RuntimeStructs/Mono.MonoClass* value)
    // Offset: 0xEECE50
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  RuntimeClassHandle(Mono::RuntimeStructs::MonoClass* value)
    // System.Void .ctor(System.IntPtr ptr)
    // Offset: 0xEECE58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RuntimeClassHandle(System::IntPtr ptr) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::RuntimeClassHandle::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(ptr)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, ptr);
    }
    // static System.IntPtr GetTypeFromClass(Mono.RuntimeStructs/Mono.MonoClass* klass)
    // Offset: 0x1A212A4
    static System::IntPtr GetTypeFromClass(Mono::RuntimeStructs::MonoClass* klass);
    // System.RuntimeTypeHandle GetTypeHandle()
    // Offset: 0xEECEC8
    System::RuntimeTypeHandle GetTypeHandle();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEECE8C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEECE94
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // Mono.RuntimeClassHandle
  #pragma pack(pop)
  static check_size<sizeof(RuntimeClassHandle), 0 + sizeof(Mono::RuntimeStructs::MonoClass*)> __Mono_RuntimeClassHandleSizeCheck;
  static_assert(sizeof(RuntimeClassHandle) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeClassHandle, "Mono", "RuntimeClassHandle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::RuntimeClassHandle::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::RuntimeStructs::MonoClass* (Mono::RuntimeClassHandle::*)()>(&Mono::RuntimeClassHandle::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeClassHandle), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeClassHandle::RuntimeClassHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::RuntimeClassHandle::RuntimeClassHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::RuntimeClassHandle::GetTypeFromClass
// Il2CppName: GetTypeFromClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(Mono::RuntimeStructs::MonoClass*)>(&Mono::RuntimeClassHandle::GetTypeFromClass)> {
  static const MethodInfo* get() {
    static auto* klass = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono", "RuntimeStructs/MonoClass"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeClassHandle), "GetTypeFromClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{klass});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeClassHandle::GetTypeHandle
// Il2CppName: GetTypeHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeTypeHandle (Mono::RuntimeClassHandle::*)()>(&Mono::RuntimeClassHandle::GetTypeHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeClassHandle), "GetTypeHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeClassHandle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::RuntimeClassHandle::*)(::Il2CppObject*)>(&Mono::RuntimeClassHandle::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeClassHandle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeClassHandle::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::RuntimeClassHandle::*)()>(&Mono::RuntimeClassHandle::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeClassHandle), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
