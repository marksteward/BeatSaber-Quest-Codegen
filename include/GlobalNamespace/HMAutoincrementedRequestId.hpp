// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HMAutoincrementedRequestId
  // [] Offset: FFFFFFFF
  class HMAutoincrementedRequestId : public ::Il2CppObject/*, public System::IEquatable_1<GlobalNamespace::HMAutoincrementedRequestId*>*/ {
    public:
    // private System.UInt64 _requestId
    // Size: 0x8
    // Offset: 0x10
    uint64_t requestId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: HMAutoincrementedRequestId
    HMAutoincrementedRequestId(uint64_t requestId_ = {}) noexcept : requestId{requestId_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::HMAutoincrementedRequestId*>
    operator System::IEquatable_1<GlobalNamespace::HMAutoincrementedRequestId*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::HMAutoincrementedRequestId*>*>(this);
    }
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return requestId;
    }
    // Get static field: static private System.UInt64 _nextRequestId
    static uint64_t _get__nextRequestId();
    // Set static field: static private System.UInt64 _nextRequestId
    static void _set__nextRequestId(uint64_t value);
    // public System.UInt64 get_RequestId()
    // Offset: 0x1035460
    uint64_t get_RequestId();
    // static protected System.Void NoDomainReloadInit()
    // Offset: 0x1035468
    static void NoDomainReloadInit();
    // static private System.Void .cctor()
    // Offset: 0x10355E0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1035390
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMAutoincrementedRequestId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HMAutoincrementedRequestId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMAutoincrementedRequestId*, creationType>()));
    }
    // public System.Boolean Equals(HMAutoincrementedRequestId obj)
    // Offset: 0x10354D0
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(HMAutoincrementedRequestId obj)
    bool Equals(GlobalNamespace::HMAutoincrementedRequestId* obj);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x10354F0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x10355B8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // HMAutoincrementedRequestId
  static check_size<sizeof(HMAutoincrementedRequestId), 16 + sizeof(uint64_t)> __GlobalNamespace_HMAutoincrementedRequestIdSizeCheck;
  static_assert(sizeof(HMAutoincrementedRequestId) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HMAutoincrementedRequestId*, "", "HMAutoincrementedRequestId");
