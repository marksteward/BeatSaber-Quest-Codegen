// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EtwSession
#include "System/Diagnostics/Tracing/EtwSession.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
  // Forward declaring type: WeakReference`1<T>
  template<typename T>
  class WeakReference_1;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EtwSession/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D3DB68
  class EtwSession::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly System.Diagnostics.Tracing.EtwSession/<>c <>9
    static System::Diagnostics::Tracing::EtwSession::$$c* _get_$$9();
    // Set static field: static public readonly System.Diagnostics.Tracing.EtwSession/<>c <>9
    static void _set_$$9(System::Diagnostics::Tracing::EtwSession::$$c* value);
    // Get static field: static public System.Predicate`1<System.WeakReference`1<System.Diagnostics.Tracing.EtwSession>> <>9__2_0
    static System::Predicate_1<System::WeakReference_1<System::Diagnostics::Tracing::EtwSession*>*>* _get_$$9__2_0();
    // Set static field: static public System.Predicate`1<System.WeakReference`1<System.Diagnostics.Tracing.EtwSession>> <>9__2_0
    static void _set_$$9__2_0(System::Predicate_1<System::WeakReference_1<System::Diagnostics::Tracing::EtwSession*>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x12C6688
    static void _cctor();
    // System.Boolean <TrimGlobalList>b__2_0(System.WeakReference`1<System.Diagnostics.Tracing.EtwSession> wrEtwSession)
    // Offset: 0x12C66F8
    bool $TrimGlobalList$b__2_0(System::WeakReference_1<System::Diagnostics::Tracing::EtwSession*>* wrEtwSession);
    // public System.Void .ctor()
    // Offset: 0x12C66F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EtwSession::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::EtwSession::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EtwSession::$$c*, creationType>()));
    }
  }; // System.Diagnostics.Tracing.EtwSession/<>c
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EtwSession::$$c*, "System.Diagnostics.Tracing", "EtwSession/<>c");
