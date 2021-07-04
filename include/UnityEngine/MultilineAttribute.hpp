// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.MultilineAttribute
  // [AttributeUsageAttribute] Offset: D8FC88
  class MultilineAttribute : public UnityEngine::PropertyAttribute {
    public:
    // public readonly System.Int32 lines
    // Size: 0x4
    // Offset: 0x10
    int lines;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MultilineAttribute
    MultilineAttribute(int lines_ = {}) noexcept : lines{lines_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return lines;
    }
    // public System.Void .ctor()
    // Offset: 0x1C1ACD8
    // Implemented from: UnityEngine.PropertyAttribute
    // Base method: System.Void PropertyAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultilineAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::MultilineAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultilineAttribute*, creationType>()));
    }
  }; // UnityEngine.MultilineAttribute
  #pragma pack(pop)
  static check_size<sizeof(MultilineAttribute), 16 + sizeof(int)> __UnityEngine_MultilineAttributeSizeCheck;
  static_assert(sizeof(MultilineAttribute) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MultilineAttribute*, "UnityEngine", "MultilineAttribute");
// Writing MetadataGetter for method: UnityEngine::MultilineAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
