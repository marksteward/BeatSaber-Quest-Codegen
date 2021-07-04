// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionStagesManager
#include "GlobalNamespace/MissionStagesManager.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionStage
  class MissionStage;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MissionStagesManager/<>c
  // [CompilerGeneratedAttribute] Offset: E12648
  class MissionStagesManager::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly MissionStagesManager/<>c <>9
    static GlobalNamespace::MissionStagesManager::$$c* _get_$$9();
    // Set static field: static public readonly MissionStagesManager/<>c <>9
    static void _set_$$9(GlobalNamespace::MissionStagesManager::$$c* value);
    // Get static field: static public System.Func`2<MissionStage,System.Int32> <>9__6_0
    static System::Func_2<GlobalNamespace::MissionStage*, int>* _get_$$9__6_0();
    // Set static field: static public System.Func`2<MissionStage,System.Int32> <>9__6_0
    static void _set_$$9__6_0(System::Func_2<GlobalNamespace::MissionStage*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x109D344
    static void _cctor();
    // System.Int32 <InitStages>b__6_0(MissionStage stage)
    // Offset: 0x109D3B0
    int $InitStages$b__6_0(GlobalNamespace::MissionStage* stage);
    // public System.Void .ctor()
    // Offset: 0x109D3A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionStagesManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionStagesManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionStagesManager::$$c*, creationType>()));
    }
  }; // MissionStagesManager/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionStagesManager::$$c*, "", "MissionStagesManager/<>c");
// Writing MetadataGetter for method: GlobalNamespace::MissionStagesManager::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MissionStagesManager::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionStagesManager::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionStagesManager::$$c::$InitStages$b__6_0
// Il2CppName: <InitStages>b__6_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MissionStagesManager::$$c::*)(GlobalNamespace::MissionStage*)>(&GlobalNamespace::MissionStagesManager::$$c::$InitStages$b__6_0)> {
  const MethodInfo* get() {
    static auto* stage = &::il2cpp_utils::GetClassFromName("", "MissionStage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionStagesManager::$$c*), "<InitStages>b__6_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stage});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionStagesManager::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
