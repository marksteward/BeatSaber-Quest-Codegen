// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // WARNING Size may be invalid!
  // Autogenerated type: NUnit.Framework.Interfaces.AttributeDictionary
  // [DefaultMemberAttribute] Offset: E04EDC
  class AttributeDictionary : public System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*> {
    public:
    // Creating value type constructor for type: AttributeDictionary
    AttributeDictionary() noexcept {}
    // public System.String get_Item(System.String key)
    // Offset: 0x172E954
    ::Il2CppString* get_Item(::Il2CppString* key);
    // public System.Void .ctor()
    // Offset: 0x172E9CC
    // Implemented from: System.Collections.Generic.Dictionary`2
    // Base method: System.Void Dictionary_2::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttributeDictionary* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::AttributeDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttributeDictionary*, creationType>()));
    }
  }; // NUnit.Framework.Interfaces.AttributeDictionary
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::AttributeDictionary*, "NUnit.Framework.Interfaces", "AttributeDictionary");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::AttributeDictionary::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::AttributeDictionary::*)(::Il2CppString*)>(&NUnit::Framework::Interfaces::AttributeDictionary::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::AttributeDictionary*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::AttributeDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
