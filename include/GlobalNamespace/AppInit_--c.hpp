// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AppInit
#include "GlobalNamespace/AppInit.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AppInit/<>c
  // [CompilerGeneratedAttribute] Offset: E11718
  class AppInit::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly AppInit/<>c <>9
    static GlobalNamespace::AppInit::$$c* _get_$$9();
    // Set static field: static public readonly AppInit/<>c <>9
    static void _set_$$9(GlobalNamespace::AppInit::$$c* value);
    // Get static field: static public System.Func`1<System.Boolean> <>9__8_0
    static System::Func_1<bool>* _get_$$9__8_0();
    // Set static field: static public System.Func`1<System.Boolean> <>9__8_0
    static void _set_$$9__8_0(System::Func_1<bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x112FEC0
    static void _cctor();
    // System.Boolean <StartCoroutine>b__8_0()
    // Offset: 0x112FF2C
    bool $StartCoroutine$b__8_0();
    // public System.Void .ctor()
    // Offset: 0x112FF24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppInit::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AppInit::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppInit::$$c*, creationType>()));
    }
  }; // AppInit/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppInit::$$c*, "", "AppInit/<>c");
// Writing MetadataGetter for method: GlobalNamespace::AppInit::$$c::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AppInit::$$c::$StartCoroutine$b__8_0
// Il2CppName: <StartCoroutine>b__8_0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AppInit::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
