// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StringListSO
  class StringListSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.String[] _strings
    // Offset: 0x18
    ::Array<::Il2CppString*>* strings;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // public System.String[] get_strings()
    // Offset: 0xCBDE38
    ::Array<::Il2CppString*>* get_strings();
    // public System.Void .ctor()
    // Offset: 0xCBDE40
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static StringListSO* New_ctor();
  }; // StringListSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StringListSO*, "", "StringListSO");
#pragma pack(pop)
