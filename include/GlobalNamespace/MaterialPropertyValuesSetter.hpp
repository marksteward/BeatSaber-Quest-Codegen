// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyValuesSetter
  // [TokenAttribute] Offset: FFFFFFFF
  class MaterialPropertyValuesSetter : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase
    class PropertyValuePairBase;
    // Nested type: GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameFloatValuePair
    class PropertyNameFloatValuePair;
    // Nested type: GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameIntValuePair
    class PropertyNameIntValuePair;
    // Nested type: GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameVectorValuePair
    class PropertyNameVectorValuePair;
    // Nested type: GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameColorValuePair
    class PropertyNameColorValuePair;
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // private MaterialPropertyValuesSetter/PropertyNameFloatValuePair[] _floats
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameFloatValuePair*>* floats;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameFloatValuePair*>*) == 0x8);
    // private MaterialPropertyValuesSetter/PropertyNameVectorValuePair[] _vectors
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameVectorValuePair*>* vectors;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameVectorValuePair*>*) == 0x8);
    // private MaterialPropertyValuesSetter/PropertyNameColorValuePair[] _colors
    // Size: 0x8
    // Offset: 0x30
    ::Array<GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameColorValuePair*>* colors;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameColorValuePair*>*) == 0x8);
    // private MaterialPropertyValuesSetter/PropertyNameIntValuePair[] _ints
    // Size: 0x8
    // Offset: 0x38
    ::Array<GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameIntValuePair*>* ints;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameIntValuePair*>*) == 0x8);
    // Creating value type constructor for type: MaterialPropertyValuesSetter
    MaterialPropertyValuesSetter(GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController_ = {}, ::Array<GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameFloatValuePair*>* floats_ = {}, ::Array<GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameVectorValuePair*>* vectors_ = {}, ::Array<GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameColorValuePair*>* colors_ = {}, ::Array<GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameIntValuePair*>* ints_ = {}) noexcept : materialPropertyBlockController{materialPropertyBlockController_}, floats{floats_}, vectors{vectors_}, colors{colors_}, ints{ints_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1DF5F00
    void Start();
    // protected System.Void OnValidate()
    // Offset: 0x1DF60D8
    void OnValidate();
    // private System.Void RefreshPropertyIds()
    // Offset: 0x1DF6174
    void RefreshPropertyIds();
    // private System.Void ApplyParams()
    // Offset: 0x1DF5F04
    void ApplyParams();
    // public System.Void .ctor()
    // Offset: 0x1DF630C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyValuesSetter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MaterialPropertyValuesSetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyValuesSetter*, creationType>()));
    }
  }; // MaterialPropertyValuesSetter
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyValuesSetter), 56 + sizeof(::Array<GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameIntValuePair*>*)> __GlobalNamespace_MaterialPropertyValuesSetterSizeCheck;
  static_assert(sizeof(MaterialPropertyValuesSetter) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyValuesSetter*, "", "MaterialPropertyValuesSetter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyValuesSetter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyValuesSetter::*)()>(&GlobalNamespace::MaterialPropertyValuesSetter::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyValuesSetter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyValuesSetter::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyValuesSetter::*)()>(&GlobalNamespace::MaterialPropertyValuesSetter::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyValuesSetter*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyValuesSetter::RefreshPropertyIds
// Il2CppName: RefreshPropertyIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyValuesSetter::*)()>(&GlobalNamespace::MaterialPropertyValuesSetter::RefreshPropertyIds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyValuesSetter*), "RefreshPropertyIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyValuesSetter::ApplyParams
// Il2CppName: ApplyParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyValuesSetter::*)()>(&GlobalNamespace::MaterialPropertyValuesSetter::ApplyParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyValuesSetter*), "ApplyParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyValuesSetter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
