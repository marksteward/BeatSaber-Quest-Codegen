// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.MsgUtils
#include "NUnit/Framework/Constraints/MsgUtils.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ValueFormatter
  class ValueFormatter;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.MsgUtils/<>c__DisplayClass14_1
  // [CompilerGeneratedAttribute] Offset: E04F24
  class MsgUtils::$$c__DisplayClass14_1 : public ::Il2CppObject {
    public:
    // public NUnit.Framework.Constraints.ValueFormatter next
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Constraints::ValueFormatter* next;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Constraints::ValueFormatter*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass14_1
    $$c__DisplayClass14_1(NUnit::Framework::Constraints::ValueFormatter* next_ = {}) noexcept : next{next_} {}
    // Creating conversion operator: operator NUnit::Framework::Constraints::ValueFormatter*
    constexpr operator NUnit::Framework::Constraints::ValueFormatter*() const noexcept {
      return next;
    }
    // System.String <.cctor>b__12(System.Object val)
    // Offset: 0x1729624
    ::Il2CppString* $_cctor$b__12(::Il2CppObject* val);
    // public System.Void .ctor()
    // Offset: 0x1729084
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MsgUtils::$$c__DisplayClass14_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MsgUtils::$$c__DisplayClass14_1*, creationType>()));
    }
  }; // NUnit.Framework.Constraints.MsgUtils/<>c__DisplayClass14_1
  #pragma pack(pop)
  static check_size<sizeof(MsgUtils::$$c__DisplayClass14_1), 16 + sizeof(NUnit::Framework::Constraints::ValueFormatter*)> __NUnit_Framework_Constraints_MsgUtils_$$c__DisplayClass14_1SizeCheck;
  static_assert(sizeof(MsgUtils::$$c__DisplayClass14_1) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_1*, "NUnit.Framework.Constraints", "MsgUtils/<>c__DisplayClass14_1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_1::$_cctor$b__12
// Il2CppName: <.cctor>b__12
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_1::*)(::Il2CppObject*)>(&NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_1::$_cctor$b__12)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_1*), "<.cctor>b__12", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass14_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
