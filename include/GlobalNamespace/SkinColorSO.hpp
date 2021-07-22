// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SkinColorSO
  // [TokenAttribute] Offset: FFFFFFFF
  class SkinColorSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.String _id
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x20
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: SkinColorSO
    SkinColorSO(::Il2CppString* id_ = {}, UnityEngine::Color color_ = {}) noexcept : id{id_}, color{color_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_id()
    // Offset: 0x1058794
    ::Il2CppString* get_id();
    // public UnityEngine.Color get_Color()
    // Offset: 0x105879C
    UnityEngine::Color get_Color();
    // public System.Void .ctor()
    // Offset: 0x10587A8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SkinColorSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SkinColorSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SkinColorSO*, creationType>()));
    }
  }; // SkinColorSO
  #pragma pack(pop)
  static check_size<sizeof(SkinColorSO), 32 + sizeof(UnityEngine::Color)> __GlobalNamespace_SkinColorSOSizeCheck;
  static_assert(sizeof(SkinColorSO) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SkinColorSO*, "", "SkinColorSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SkinColorSO::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::SkinColorSO::*)()>(&GlobalNamespace::SkinColorSO::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SkinColorSO*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SkinColorSO::get_Color
// Il2CppName: get_Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::SkinColorSO::*)()>(&GlobalNamespace::SkinColorSO::get_Color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SkinColorSO*), "get_Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SkinColorSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
