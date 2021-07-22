// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.VertexGradient
  // [TokenAttribute] Offset: FFFFFFFF
  struct VertexGradient/*, public System::ValueType*/ {
    public:
    // public UnityEngine.Color topLeft
    // Size: 0x10
    // Offset: 0x0
    UnityEngine::Color topLeft;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color topRight
    // Size: 0x10
    // Offset: 0x10
    UnityEngine::Color topRight;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color bottomLeft
    // Size: 0x10
    // Offset: 0x20
    UnityEngine::Color bottomLeft;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color bottomRight
    // Size: 0x10
    // Offset: 0x30
    UnityEngine::Color bottomRight;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: VertexGradient
    constexpr VertexGradient(UnityEngine::Color topLeft_ = {}, UnityEngine::Color topRight_ = {}, UnityEngine::Color bottomLeft_ = {}, UnityEngine::Color bottomRight_ = {}) noexcept : topLeft{topLeft_}, topRight{topRight_}, bottomLeft{bottomLeft_}, bottomRight{bottomRight_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(UnityEngine.Color color)
    // Offset: 0xEF4E64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    VertexGradient(UnityEngine::Color color) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::VertexGradient::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(color)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, color);
    }
    // public System.Void .ctor(UnityEngine.Color color0, UnityEngine.Color color1, UnityEngine.Color color2, UnityEngine.Color color3)
    // Offset: 0xEF4E88
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  VertexGradient(UnityEngine::Color color0, UnityEngine::Color color1, UnityEngine::Color color2, UnityEngine::Color color3)
  }; // TMPro.VertexGradient
  #pragma pack(pop)
  static check_size<sizeof(VertexGradient), 48 + sizeof(UnityEngine::Color)> __TMPro_VertexGradientSizeCheck;
  static_assert(sizeof(VertexGradient) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::VertexGradient, "TMPro", "VertexGradient");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::VertexGradient::VertexGradient
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::VertexGradient::VertexGradient
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
