// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.PathList
#include "System/Net/PathList.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.PathList/PathListComparer
  // [] Offset: FFFFFFFF
  class PathList::PathListComparer : public ::Il2CppObject/*, public System::Collections::IComparer*/ {
    public:
    // Creating value type constructor for type: PathListComparer
    PathListComparer() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IComparer
    operator System::Collections::IComparer() noexcept {
      return *reinterpret_cast<System::Collections::IComparer*>(this);
    }
    // Get static field: static readonly System.Net.PathList/PathListComparer StaticInstance
    static System::Net::PathList::PathListComparer* _get_StaticInstance();
    // Set static field: static readonly System.Net.PathList/PathListComparer StaticInstance
    static void _set_StaticInstance(System::Net::PathList::PathListComparer* value);
    // static private System.Void .cctor()
    // Offset: 0x119EEB8
    static void _cctor();
    // private System.Int32 System.Collections.IComparer.Compare(System.Object ol, System.Object or)
    // Offset: 0x119ED34
    // Implemented from: System.Collections.IComparer
    // Base method: System.Int32 IComparer::Compare(System.Object ol, System.Object or)
    int System_Collections_IComparer_Compare(::Il2CppObject* ol, ::Il2CppObject* _or);
    // public System.Void .ctor()
    // Offset: 0x119EEB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PathList::PathListComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::PathList::PathListComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PathList::PathListComparer*, creationType>()));
    }
  }; // System.Net.PathList/PathListComparer
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Net::PathList::PathListComparer*, "System.Net", "PathList/PathListComparer");
