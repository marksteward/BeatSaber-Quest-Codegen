// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
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
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerController/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MultiplayerController::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly MultiplayerController/<>c <>9
    static GlobalNamespace::MultiplayerController::$$c* _get_$$9();
    // Set static field: static public readonly MultiplayerController/<>c <>9
    static void _set_$$9(GlobalNamespace::MultiplayerController::$$c* value);
    // Get static field: static public System.Func`2<MultiplayerLevelCompletionResults,System.Boolean> <>9__47_0
    static System::Func_2<GlobalNamespace::MultiplayerLevelCompletionResults*, bool>* _get_$$9__47_0();
    // Set static field: static public System.Func`2<MultiplayerLevelCompletionResults,System.Boolean> <>9__47_0
    static void _set_$$9__47_0(System::Func_2<GlobalNamespace::MultiplayerLevelCompletionResults*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x11A928C
    static void _cctor();
    // System.Boolean <EndGameplay>b__47_0(MultiplayerLevelCompletionResults result)
    // Offset: 0x11A92F8
    bool $EndGameplay$b__47_0(GlobalNamespace::MultiplayerLevelCompletionResults* result);
    // public System.Void .ctor()
    // Offset: 0x11A92F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerController::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerController::$$c*, creationType>()));
    }
  }; // MultiplayerController/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerController::$$c*, "", "MultiplayerController/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerController::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MultiplayerController::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerController::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerController::$$c::$EndGameplay$b__47_0
// Il2CppName: <EndGameplay>b__47_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerController::$$c::*)(GlobalNamespace::MultiplayerLevelCompletionResults*)>(&GlobalNamespace::MultiplayerController::$$c::$EndGameplay$b__47_0)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "MultiplayerLevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerController::$$c*), "<EndGameplay>b__47_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerController::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
