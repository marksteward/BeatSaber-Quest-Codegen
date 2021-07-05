// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerSessionManager
#include "GlobalNamespace/MultiplayerSessionManager.hpp"
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
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerSessionManager/<>c
  // [CompilerGeneratedAttribute] Offset: DF04B0
  class MultiplayerSessionManager::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly MultiplayerSessionManager/<>c <>9
    static GlobalNamespace::MultiplayerSessionManager::$$c* _get_$$9();
    // Set static field: static public readonly MultiplayerSessionManager/<>c <>9
    static void _set_$$9(GlobalNamespace::MultiplayerSessionManager::$$c* value);
    // Get static field: static public System.Func`2<IConnectedPlayer,System.Int32> <>9__100_0
    static System::Func_2<GlobalNamespace::IConnectedPlayer*, int>* _get_$$9__100_0();
    // Set static field: static public System.Func`2<IConnectedPlayer,System.Int32> <>9__100_0
    static void _set_$$9__100_0(System::Func_2<GlobalNamespace::IConnectedPlayer*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x150426C
    static void _cctor();
    // System.Int32 <TryUpdateConnectedPlayer>b__100_0(IConnectedPlayer p)
    // Offset: 0x15042D8
    int $TryUpdateConnectedPlayer$b__100_0(GlobalNamespace::IConnectedPlayer* p);
    // public System.Void .ctor()
    // Offset: 0x15042D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerSessionManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSessionManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerSessionManager::$$c*, creationType>()));
    }
  }; // MultiplayerSessionManager/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerSessionManager::$$c*, "", "MultiplayerSessionManager/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSessionManager::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MultiplayerSessionManager::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSessionManager::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSessionManager::$$c::$TryUpdateConnectedPlayer$b__100_0
// Il2CppName: <TryUpdateConnectedPlayer>b__100_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MultiplayerSessionManager::$$c::*)(GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerSessionManager::$$c::$TryUpdateConnectedPlayer$b__100_0)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSessionManager::$$c*), "<TryUpdateConnectedPlayer>b__100_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSessionManager::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
