// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModestTree.TypeExtensions
#include "ModestTree/TypeExtensions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Attribute
  class Attribute;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.TypeExtensions/ModestTree.<>c__DisplayClass39_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TypeExtensions::$$c__DisplayClass39_1 : public ::Il2CppObject {
    public:
    // public System.Attribute a
    // Size: 0x8
    // Offset: 0x10
    System::Attribute* a;
    // Field size check
    static_assert(sizeof(System::Attribute*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass39_1
    $$c__DisplayClass39_1(System::Attribute* a_ = {}) noexcept : a{a_} {}
    // Creating conversion operator: operator System::Attribute*
    constexpr operator System::Attribute*() const noexcept {
      return a;
    }
    // System.Boolean <AllAttributes>b__1(System.Type x)
    // Offset: 0x13748C8
    bool $AllAttributes$b__1(System::Type* x);
    // public System.Void .ctor()
    // Offset: 0x13748C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeExtensions::$$c__DisplayClass39_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::TypeExtensions::$$c__DisplayClass39_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeExtensions::$$c__DisplayClass39_1*, creationType>()));
    }
  }; // ModestTree.TypeExtensions/ModestTree.<>c__DisplayClass39_1
  #pragma pack(pop)
  static check_size<sizeof(TypeExtensions::$$c__DisplayClass39_1), 16 + sizeof(System::Attribute*)> __ModestTree_TypeExtensions_$$c__DisplayClass39_1SizeCheck;
  static_assert(sizeof(TypeExtensions::$$c__DisplayClass39_1) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::TypeExtensions::$$c__DisplayClass39_1*, "ModestTree", "TypeExtensions/<>c__DisplayClass39_1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ModestTree::TypeExtensions::$$c__DisplayClass39_1::$AllAttributes$b__1
// Il2CppName: <AllAttributes>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ModestTree::TypeExtensions::$$c__DisplayClass39_1::*)(System::Type*)>(&ModestTree::TypeExtensions::$$c__DisplayClass39_1::$AllAttributes$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions::$$c__DisplayClass39_1*), "<AllAttributes>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::$$c__DisplayClass39_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
