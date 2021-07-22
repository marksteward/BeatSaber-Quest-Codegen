// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DiffieHellmanUtility
#include "GlobalNamespace/DiffieHellmanUtility.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Stopwatch
  class Stopwatch;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DiffieHellmanUtility/OperationTimer
  // [TokenAttribute] Offset: FFFFFFFF
  class DiffieHellmanUtility::OperationTimer : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private readonly System.Diagnostics.Stopwatch _stopwatch
    // Size: 0x8
    // Offset: 0x10
    System::Diagnostics::Stopwatch* stopwatch;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Stopwatch*) == 0x8);
    // private readonly System.String _operationName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* operationName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: OperationTimer
    OperationTimer(System::Diagnostics::Stopwatch* stopwatch_ = {}, ::Il2CppString* operationName_ = {}) noexcept : stopwatch{stopwatch_}, operationName{operationName_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // private System.Void .ctor(System.String operationName)
    // Offset: 0x12C1B10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiffieHellmanUtility::OperationTimer* New_ctor(::Il2CppString* operationName) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DiffieHellmanUtility::OperationTimer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiffieHellmanUtility::OperationTimer*, creationType>(operationName)));
    }
    // public System.Void Dispose()
    // Offset: 0x12C1B9C
    void Dispose();
    // static public DiffieHellmanUtility/OperationTimer Time(System.String operation)
    // Offset: 0x12C1208
    static GlobalNamespace::DiffieHellmanUtility::OperationTimer* Time(::Il2CppString* operation);
  }; // DiffieHellmanUtility/OperationTimer
  #pragma pack(pop)
  static check_size<sizeof(DiffieHellmanUtility::OperationTimer), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_DiffieHellmanUtility_OperationTimerSizeCheck;
  static_assert(sizeof(DiffieHellmanUtility::OperationTimer) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DiffieHellmanUtility::OperationTimer*, "", "DiffieHellmanUtility/OperationTimer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DiffieHellmanUtility::OperationTimer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DiffieHellmanUtility::OperationTimer::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DiffieHellmanUtility::OperationTimer::*)()>(&GlobalNamespace::DiffieHellmanUtility::OperationTimer::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DiffieHellmanUtility::OperationTimer*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DiffieHellmanUtility::OperationTimer::Time
// Il2CppName: Time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::DiffieHellmanUtility::OperationTimer* (*)(::Il2CppString*)>(&GlobalNamespace::DiffieHellmanUtility::OperationTimer::Time)> {
  static const MethodInfo* get() {
    static auto* operation = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DiffieHellmanUtility::OperationTimer*), "Time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{operation});
  }
};
