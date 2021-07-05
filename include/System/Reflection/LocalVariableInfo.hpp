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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.LocalVariableInfo
  // [ComVisibleAttribute] Offset: D7C3C8
  class LocalVariableInfo : public ::Il2CppObject {
    public:
    // System.Type type
    // Size: 0x8
    // Offset: 0x10
    System::Type* type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // System.Boolean is_pinned
    // Size: 0x1
    // Offset: 0x18
    bool is_pinned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: is_pinned and: position
    char __padding1[0x1] = {};
    // System.UInt16 position
    // Size: 0x2
    // Offset: 0x1A
    uint16_t position;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Creating value type constructor for type: LocalVariableInfo
    LocalVariableInfo(System::Type* type_ = {}, bool is_pinned_ = {}, uint16_t position_ = {}) noexcept : type{type_}, is_pinned{is_pinned_}, position{position_} {}
    // protected System.Void .ctor()
    // Offset: 0x1C7B660
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalVariableInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::LocalVariableInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalVariableInfo*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1C7B664
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Reflection.LocalVariableInfo
  #pragma pack(pop)
  static check_size<sizeof(LocalVariableInfo), 26 + sizeof(uint16_t)> __System_Reflection_LocalVariableInfoSizeCheck;
  static_assert(sizeof(LocalVariableInfo) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::LocalVariableInfo*, "System.Reflection", "LocalVariableInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::LocalVariableInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::LocalVariableInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::LocalVariableInfo::*)()>(&System::Reflection::LocalVariableInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::LocalVariableInfo*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
