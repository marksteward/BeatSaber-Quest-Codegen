// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MulticolorAvatarPartPropertyBlockSetter
#include "GlobalNamespace/MulticolorAvatarPartPropertyBlockSetter.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MulticolorAvatarPartPropertyBlockSetter/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MulticolorAvatarPartPropertyBlockSetter::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly MulticolorAvatarPartPropertyBlockSetter/<>c <>9
    static GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c* _get_$$9();
    // Set static field: static public readonly MulticolorAvatarPartPropertyBlockSetter/<>c <>9
    static void _set_$$9(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c* value);
    // Get static field: static public System.Func`2<MulticolorAvatarPartPropertyBlockSetter/ColorData,UnityEngine.Color> <>9__10_0
    static System::Func_2<GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData*, UnityEngine::Color>* _get_$$9__10_0();
    // Set static field: static public System.Func`2<MulticolorAvatarPartPropertyBlockSetter/ColorData,UnityEngine.Color> <>9__10_0
    static void _set_$$9__10_0(System::Func_2<GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData*, UnityEngine::Color>* value);
    // static private System.Void .cctor()
    // Offset: 0x119AAF8
    static void _cctor();
    // UnityEngine.Color <OnValidate>b__10_0(MulticolorAvatarPartPropertyBlockSetter/ColorData x)
    // Offset: 0x119AB64
    UnityEngine::Color $OnValidate$b__10_0(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData* x);
    // public System.Void .ctor()
    // Offset: 0x119AB5C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MulticolorAvatarPartPropertyBlockSetter::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MulticolorAvatarPartPropertyBlockSetter::$$c*, creationType>()));
    }
  }; // MulticolorAvatarPartPropertyBlockSetter/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c*, "", "MulticolorAvatarPartPropertyBlockSetter/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c::$OnValidate$b__10_0
// Il2CppName: <OnValidate>b__10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c::*)(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::ColorData*)>(&GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c::$OnValidate$b__10_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "MulticolorAvatarPartPropertyBlockSetter/ColorData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c*), "<OnValidate>b__10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
