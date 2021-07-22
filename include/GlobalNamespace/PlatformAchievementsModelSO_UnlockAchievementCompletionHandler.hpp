// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: PlatformAchievementsModelSO/UnlockAchievementCompletionHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformAchievementsModelSO::UnlockAchievementCompletionHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: UnlockAchievementCompletionHandler
    UnlockAchievementCompletionHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x10FC558
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformAchievementsModelSO::UnlockAchievementCompletionHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformAchievementsModelSO::UnlockAchievementCompletionHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(PlatformAchievementsModelSO/UnlockAchievementResult result)
    // Offset: 0x10FBF34
    void Invoke(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult result);
    // public System.IAsyncResult BeginInvoke(PlatformAchievementsModelSO/UnlockAchievementResult result, System.AsyncCallback callback, System.Object object)
    // Offset: 0x10FC568
    System::IAsyncResult* BeginInvoke(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult result, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x10FC5F4
    void EndInvoke(System::IAsyncResult* result);
  }; // PlatformAchievementsModelSO/UnlockAchievementCompletionHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler*, "", "PlatformAchievementsModelSO/UnlockAchievementCompletionHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler::*)(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult)>(&GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "PlatformAchievementsModelSO/UnlockAchievementResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler::*)(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "PlatformAchievementsModelSO/UnlockAchievementResult")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler::*)(System::IAsyncResult*)>(&GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
