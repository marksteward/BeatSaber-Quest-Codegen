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
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexRunner
  class RegexRunner;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.ExclusiveReference
  // [TokenAttribute] Offset: FFFFFFFF
  class ExclusiveReference : public ::Il2CppObject {
    public:
    // private System.Text.RegularExpressions.RegexRunner _ref
    // Size: 0x8
    // Offset: 0x10
    System::Text::RegularExpressions::RegexRunner* ref;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexRunner*) == 0x8);
    // private System.Object _obj
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* obj;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 _locked
    // Size: 0x4
    // Offset: 0x20
    int locked;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ExclusiveReference
    ExclusiveReference(System::Text::RegularExpressions::RegexRunner* ref_ = {}, ::Il2CppObject* obj_ = {}, int locked_ = {}) noexcept : ref{ref_}, obj{obj_}, locked{locked_} {}
    // System.Object Get()
    // Offset: 0x1834C38
    ::Il2CppObject* Get();
    // System.Void Release(System.Object obj)
    // Offset: 0x1834C88
    void Release(::Il2CppObject* obj);
    // public System.Void .ctor()
    // Offset: 0x1834D94
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExclusiveReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::ExclusiveReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExclusiveReference*, creationType>()));
    }
  }; // System.Text.RegularExpressions.ExclusiveReference
  #pragma pack(pop)
  static check_size<sizeof(ExclusiveReference), 32 + sizeof(int)> __System_Text_RegularExpressions_ExclusiveReferenceSizeCheck;
  static_assert(sizeof(ExclusiveReference) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::ExclusiveReference*, "System.Text.RegularExpressions", "ExclusiveReference");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::ExclusiveReference::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Text::RegularExpressions::ExclusiveReference::*)()>(&System::Text::RegularExpressions::ExclusiveReference::Get)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::ExclusiveReference*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::ExclusiveReference::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::ExclusiveReference::*)(::Il2CppObject*)>(&System::Text::RegularExpressions::ExclusiveReference::Release)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::ExclusiveReference*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::ExclusiveReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
