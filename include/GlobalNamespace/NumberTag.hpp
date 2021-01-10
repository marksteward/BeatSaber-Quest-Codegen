// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  // Autogenerated type: NumberTag
  // [] Offset: FFFFFFFF
  class NumberTag : public UnityEngine::MonoBehaviour {
    public:
    // [HideInInspector] Offset: 0xD98ED8
    // public System.Int32 number
    // Size: 0x4
    // Offset: 0x18
    int number;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NumberTag
    NumberTag(int number_ = {}) noexcept : number{number_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void .ctor()
    // Offset: 0x1037D14
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NumberTag* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NumberTag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NumberTag*, creationType>()));
    }
  }; // NumberTag
  static check_size<sizeof(NumberTag), 24 + sizeof(int)> __GlobalNamespace_NumberTagSizeCheck;
  static_assert(sizeof(NumberTag) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NumberTag*, "", "NumberTag");
#pragma pack(pop)
