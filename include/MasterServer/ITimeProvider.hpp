// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.ITimeProvider
  class ITimeProvider {
    public:
    // Creating value type constructor for type: ITimeProvider
    ITimeProvider() noexcept {}
    // public System.Int64 GetTimeMs()
    // Offset: 0xFFFFFFFF
    int64_t GetTimeMs();
    // public System.Threading.Tasks.Task DelayMs(System.Int32 millis, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task* DelayMs(int millis, System::Threading::CancellationToken cancellationToken);
  }; // MasterServer.ITimeProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::ITimeProvider*, "MasterServer", "ITimeProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::ITimeProvider::GetTimeMs
// Il2CppName: GetTimeMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (MasterServer::ITimeProvider::*)()>(&MasterServer::ITimeProvider::GetTimeMs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ITimeProvider*), "GetTimeMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::ITimeProvider::DelayMs
// Il2CppName: DelayMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (MasterServer::ITimeProvider::*)(int, System::Threading::CancellationToken)>(&MasterServer::ITimeProvider::DelayMs)> {
  static const MethodInfo* get() {
    static auto* millis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ITimeProvider*), "DelayMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{millis, cancellationToken});
  }
};
