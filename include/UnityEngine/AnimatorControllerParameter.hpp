// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AnimatorControllerParameterType
#include "UnityEngine/AnimatorControllerParameterType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x25
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AnimatorControllerParameter
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D962BC
  // [NativeAsStructAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: D962BC
  // [UsedByNativeCodeAttribute] Offset: D962BC
  // [NativeHeaderAttribute] Offset: D962BC
  class AnimatorControllerParameter : public ::Il2CppObject {
    public:
    // System.String m_Name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // UnityEngine.AnimatorControllerParameterType m_Type
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::AnimatorControllerParameterType m_Type;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimatorControllerParameterType) == 0x4);
    // System.Single m_DefaultFloat
    // Size: 0x4
    // Offset: 0x1C
    float m_DefaultFloat;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Int32 m_DefaultInt
    // Size: 0x4
    // Offset: 0x20
    int m_DefaultInt;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean m_DefaultBool
    // Size: 0x1
    // Offset: 0x24
    bool m_DefaultBool;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AnimatorControllerParameter
    AnimatorControllerParameter(::Il2CppString* m_Name_ = {}, UnityEngine::AnimatorControllerParameterType m_Type_ = {}, float m_DefaultFloat_ = {}, int m_DefaultInt_ = {}, bool m_DefaultBool_ = {}) noexcept : m_Name{m_Name_}, m_Type{m_Type_}, m_DefaultFloat{m_DefaultFloat_}, m_DefaultInt{m_DefaultInt_}, m_DefaultBool{m_DefaultBool_} {}
    // public System.String get_name()
    // Offset: 0x233B1A0
    ::Il2CppString* get_name();
    // public System.Void .ctor()
    // Offset: 0x233B2C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatorControllerParameter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AnimatorControllerParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatorControllerParameter*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x233B1A8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x233B2A0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.AnimatorControllerParameter
  #pragma pack(pop)
  static check_size<sizeof(AnimatorControllerParameter), 36 + sizeof(bool)> __UnityEngine_AnimatorControllerParameterSizeCheck;
  static_assert(sizeof(AnimatorControllerParameter) == 0x25);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimatorControllerParameter*, "UnityEngine", "AnimatorControllerParameter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AnimatorControllerParameter::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::AnimatorControllerParameter::*)()>(&UnityEngine::AnimatorControllerParameter::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorControllerParameter*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimatorControllerParameter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AnimatorControllerParameter::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimatorControllerParameter::*)(::Il2CppObject*)>(&UnityEngine::AnimatorControllerParameter::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorControllerParameter*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimatorControllerParameter::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AnimatorControllerParameter::*)()>(&UnityEngine::AnimatorControllerParameter::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorControllerParameter*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
