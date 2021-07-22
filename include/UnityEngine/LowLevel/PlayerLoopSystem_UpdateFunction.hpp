// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.LowLevel.PlayerLoopSystem
#include "UnityEngine/LowLevel/PlayerLoopSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.LowLevel
namespace UnityEngine::LowLevel {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.LowLevel.PlayerLoopSystem/UnityEngine.LowLevel.UpdateFunction
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerLoopSystem::UpdateFunction : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: UpdateFunction
    UpdateFunction() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1CEA010
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerLoopSystem::UpdateFunction* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerLoopSystem::UpdateFunction*, creationType>(object, method)));
    }
    // public System.Void Invoke()
    // Offset: 0x1CEA020
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1CEA22C
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1CEA258
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.LowLevel.PlayerLoopSystem/UnityEngine.LowLevel.UpdateFunction
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction*, "UnityEngine.LowLevel", "PlayerLoopSystem/UpdateFunction");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction::*)()>(&UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction::*)(System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction::*)(System::IAsyncResult*)>(&UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
