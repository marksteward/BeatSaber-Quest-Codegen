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
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.CADArgHolder
  // [TokenAttribute] Offset: FFFFFFFF
  class CADArgHolder : public ::Il2CppObject {
    public:
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x10
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CADArgHolder
    CADArgHolder(int index_ = {}) noexcept : index{index_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return index;
    }
    // Get instance field: public System.Int32 index
    int _get_index();
    // Set instance field: public System.Int32 index
    void _set_index(int value);
    // public System.Void .ctor(System.Int32 i)
    // Offset: 0x19F391C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CADArgHolder* New_ctor(int i) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::CADArgHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CADArgHolder*, creationType>(i)));
    }
  }; // System.Runtime.Remoting.Messaging.CADArgHolder
  #pragma pack(pop)
  static check_size<sizeof(CADArgHolder), 16 + sizeof(int)> __System_Runtime_Remoting_Messaging_CADArgHolderSizeCheck;
  static_assert(sizeof(CADArgHolder) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CADArgHolder*, "System.Runtime.Remoting.Messaging", "CADArgHolder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CADArgHolder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
