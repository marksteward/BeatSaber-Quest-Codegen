// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockMultiplayerSessionManager
#include "GlobalNamespace/MockMultiplayerSessionManager.hpp"
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
  // Forward declaring type: MockPlayer
  class MockPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MockMultiplayerSessionManager/<>c
  // [CompilerGeneratedAttribute] Offset: E12208
  class MockMultiplayerSessionManager::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly MockMultiplayerSessionManager/<>c <>9
    static GlobalNamespace::MockMultiplayerSessionManager::$$c* _get_$$9();
    // Set static field: static public readonly MockMultiplayerSessionManager/<>c <>9
    static void _set_$$9(GlobalNamespace::MockMultiplayerSessionManager::$$c* value);
    // Get static field: static public System.Func`2<MockPlayer,System.Boolean> <>9__76_0
    static System::Func_2<GlobalNamespace::MockPlayer*, bool>* _get_$$9__76_0();
    // Set static field: static public System.Func`2<MockPlayer,System.Boolean> <>9__76_0
    static void _set_$$9__76_0(System::Func_2<GlobalNamespace::MockPlayer*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x10A16C8
    static void _cctor();
    // System.Boolean <GetConnectedPlayerByUserId>b__76_0(MockPlayer player)
    // Offset: 0x10A1734
    bool $GetConnectedPlayerByUserId$b__76_0(GlobalNamespace::MockPlayer* player);
    // public System.Void .ctor()
    // Offset: 0x10A172C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockMultiplayerSessionManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockMultiplayerSessionManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockMultiplayerSessionManager::$$c*, creationType>()));
    }
  }; // MockMultiplayerSessionManager/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockMultiplayerSessionManager::$$c*, "", "MockMultiplayerSessionManager/<>c");
// Writing MetadataGetter for method: GlobalNamespace::MockMultiplayerSessionManager::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MockMultiplayerSessionManager::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockMultiplayerSessionManager::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockMultiplayerSessionManager::$$c::$GetConnectedPlayerByUserId$b__76_0
// Il2CppName: <GetConnectedPlayerByUserId>b__76_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MockMultiplayerSessionManager::$$c::*)(GlobalNamespace::MockPlayer*)>(&GlobalNamespace::MockMultiplayerSessionManager::$$c::$GetConnectedPlayerByUserId$b__76_0)> {
  const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("", "MockPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockMultiplayerSessionManager::$$c*), "<GetConnectedPlayerByUserId>b__76_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockMultiplayerSessionManager::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
