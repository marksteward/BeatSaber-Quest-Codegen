// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ProfileBlock
  // [NoReflectionBakingAttribute] Offset: D02B04
  class ProfileBlock : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: ProfileBlock
    ProfileBlock() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // [CompilerGeneratedAttribute] Offset: 0xD04ABC
    // Get static field: static private System.Text.RegularExpressions.Regex <ProfilePattern>k__BackingField
    static System::Text::RegularExpressions::Regex* _get_$ProfilePattern$k__BackingField();
    // Set static field: static private System.Text.RegularExpressions.Regex <ProfilePattern>k__BackingField
    static void _set_$ProfilePattern$k__BackingField(System::Text::RegularExpressions::Regex* value);
    // private System.Void .ctor(System.String sampleName, System.Boolean rootBlock)
    // Offset: 0x1532A28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProfileBlock* New_ctor(::Il2CppString* sampleName, bool rootBlock) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ProfileBlock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProfileBlock*, creationType>(sampleName, rootBlock)));
    }
    // private System.Void .ctor(System.String sampleName)
    // Offset: 0x1532A30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProfileBlock* New_ctor(::Il2CppString* sampleName) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ProfileBlock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProfileBlock*, creationType>(sampleName)));
    }
    // static public System.Text.RegularExpressions.Regex get_ProfilePattern()
    // Offset: 0x1532A38
    static System::Text::RegularExpressions::Regex* get_ProfilePattern();
    // static public System.Void set_ProfilePattern(System.Text.RegularExpressions.Regex value)
    // Offset: 0x1532A88
    static void set_ProfilePattern(System::Text::RegularExpressions::Regex* value);
    // static public Zenject.ProfileBlock Start()
    // Offset: 0x1532ADC
    static Zenject::ProfileBlock* Start();
    // static public Zenject.ProfileBlock Start(System.String sampleNameFormat, System.Object obj1, System.Object obj2)
    // Offset: 0x1532AE4
    static Zenject::ProfileBlock* Start(::Il2CppString* sampleNameFormat, ::Il2CppObject* obj1, ::Il2CppObject* obj2);
    // static public Zenject.ProfileBlock Start(System.String sampleNameFormat, System.Object obj)
    // Offset: 0x1532AEC
    static Zenject::ProfileBlock* Start(::Il2CppString* sampleNameFormat, ::Il2CppObject* obj);
    // static public Zenject.ProfileBlock Start(System.String sampleName)
    // Offset: 0x1532AF4
    static Zenject::ProfileBlock* Start(::Il2CppString* sampleName);
    // public System.Void Dispose()
    // Offset: 0x1532AFC
    void Dispose();
  }; // Zenject.ProfileBlock
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ProfileBlock*, "Zenject", "ProfileBlock");
