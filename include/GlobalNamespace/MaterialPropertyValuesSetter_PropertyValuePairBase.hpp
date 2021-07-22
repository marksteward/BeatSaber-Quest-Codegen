// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MaterialPropertyValuesSetter
#include "GlobalNamespace/MaterialPropertyValuesSetter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyValuesSetter/PropertyValuePairBase
  // [TokenAttribute] Offset: FFFFFFFF
  class MaterialPropertyValuesSetter::PropertyValuePairBase : public ::Il2CppObject {
    public:
    // private System.String _propertyName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* propertyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 <propertyId>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int propertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PropertyValuePairBase
    PropertyValuePairBase(::Il2CppString* propertyName_ = {}, int propertyId_ = {}) noexcept : propertyName{propertyName_}, propertyId{propertyId_} {}
    // public System.Int32 get_propertyId()
    // Offset: 0x1DF6418
    int get_propertyId();
    // private System.Void set_propertyId(System.Int32 value)
    // Offset: 0x1DF6420
    void set_propertyId(int value);
    // public System.Void RefreshPropertyId()
    // Offset: 0x1DF62E0
    void RefreshPropertyId();
    // public System.Void .ctor()
    // Offset: 0x1DF6348
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyValuesSetter::PropertyValuePairBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyValuesSetter::PropertyValuePairBase*, creationType>()));
    }
  }; // MaterialPropertyValuesSetter/PropertyValuePairBase
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyValuesSetter::PropertyValuePairBase), 24 + sizeof(int)> __GlobalNamespace_MaterialPropertyValuesSetter_PropertyValuePairBaseSizeCheck;
  static_assert(sizeof(MaterialPropertyValuesSetter::PropertyValuePairBase) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase*, "", "MaterialPropertyValuesSetter/PropertyValuePairBase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::get_propertyId
// Il2CppName: get_propertyId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::*)()>(&GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::get_propertyId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase*), "get_propertyId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::set_propertyId
// Il2CppName: set_propertyId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::*)(int)>(&GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::set_propertyId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase*), "set_propertyId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::RefreshPropertyId
// Il2CppName: RefreshPropertyId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::*)()>(&GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::RefreshPropertyId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase*), "RefreshPropertyId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
