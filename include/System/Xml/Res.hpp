// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Res
  // [] Offset: FFFFFFFF
  class Res : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Res
    Res() noexcept {}
    // static public System.String GetString(System.String name)
    // Offset: 0x14E1718
    static ::Il2CppString* GetString(::Il2CppString* name);
    // static public System.String GetString(System.String name, params System.Object[] args)
    // Offset: 0x14E6DD0
    static ::Il2CppString* GetString(::Il2CppString* name, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.String GetString(System.String name, params System.Object[] args)
    static ::Il2CppString* GetString(::Il2CppString* name, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.String GetString(System.String name, params System.Object[] args)
    template<class ...TParams>
    static ::Il2CppString* GetString(::Il2CppString* name, TParams&&... args) {
      return GetString(name, {args...});
    }
  }; // System.Xml.Res
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Res*, "System.Xml", "Res");
