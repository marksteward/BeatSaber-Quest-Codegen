// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.OneTimeTearDownCommand
#include "NUnit/Framework/Internal/Commands/OneTimeTearDownCommand.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IDisposable
  class IDisposable;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Commands.OneTimeTearDownCommand/NUnit.Framework.Internal.Commands.<>c__DisplayClass3_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OneTimeTearDownCommand::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public System.IDisposable disposable
    // Size: 0x8
    // Offset: 0x10
    System::IDisposable* disposable;
    // Field size check
    static_assert(sizeof(System::IDisposable*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass3_0
    $$c__DisplayClass3_0(System::IDisposable* disposable_ = {}) noexcept : disposable{disposable_} {}
    // Creating conversion operator: operator System::IDisposable*
    constexpr operator System::IDisposable*() const noexcept {
      return disposable;
    }
    // Get instance field: public System.IDisposable disposable
    System::IDisposable* _get_disposable();
    // Set instance field: public System.IDisposable disposable
    void _set_disposable(System::IDisposable* value);
    // System.Object <Execute>b__0()
    // Offset: 0x1728E80
    ::Il2CppObject* $Execute$b__0();
    // public System.Void .ctor()
    // Offset: 0x1728B30
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OneTimeTearDownCommand::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Commands::OneTimeTearDownCommand::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OneTimeTearDownCommand::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // NUnit.Framework.Internal.Commands.OneTimeTearDownCommand/NUnit.Framework.Internal.Commands.<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(OneTimeTearDownCommand::$$c__DisplayClass3_0), 16 + sizeof(System::IDisposable*)> __NUnit_Framework_Internal_Commands_OneTimeTearDownCommand_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(OneTimeTearDownCommand::$$c__DisplayClass3_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Commands::OneTimeTearDownCommand::$$c__DisplayClass3_0*, "NUnit.Framework.Internal.Commands", "OneTimeTearDownCommand/<>c__DisplayClass3_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::OneTimeTearDownCommand::$$c__DisplayClass3_0::$Execute$b__0
// Il2CppName: <Execute>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::Internal::Commands::OneTimeTearDownCommand::$$c__DisplayClass3_0::*)()>(&NUnit::Framework::Internal::Commands::OneTimeTearDownCommand::$$c__DisplayClass3_0::$Execute$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::OneTimeTearDownCommand::$$c__DisplayClass3_0*), "<Execute>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::OneTimeTearDownCommand::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
