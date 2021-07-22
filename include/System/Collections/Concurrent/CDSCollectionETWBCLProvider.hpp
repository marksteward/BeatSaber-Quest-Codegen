// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EventSource
#include "System/Diagnostics/Tracing/EventSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Concurrent
namespace System::Collections::Concurrent {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Concurrent.CDSCollectionETWBCLProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class CDSCollectionETWBCLProvider : public System::Diagnostics::Tracing::EventSource {
    public:
    // Creating value type constructor for type: CDSCollectionETWBCLProvider
    CDSCollectionETWBCLProvider() noexcept {}
    // Get static field: static public System.Collections.Concurrent.CDSCollectionETWBCLProvider Log
    static System::Collections::Concurrent::CDSCollectionETWBCLProvider* _get_Log();
    // Set static field: static public System.Collections.Concurrent.CDSCollectionETWBCLProvider Log
    static void _set_Log(System::Collections::Concurrent::CDSCollectionETWBCLProvider* value);
    // public System.Void ConcurrentDictionary_AcquiringAllLocks(System.Int32 numOfBuckets)
    // Offset: 0x178BCE8
    void ConcurrentDictionary_AcquiringAllLocks(int numOfBuckets);
    // private System.Void .ctor()
    // Offset: 0x178BC80
    // Implemented from: System.Diagnostics.Tracing.EventSource
    // Base method: System.Void EventSource::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CDSCollectionETWBCLProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Concurrent::CDSCollectionETWBCLProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CDSCollectionETWBCLProvider*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x178BD54
    // Implemented from: System.Diagnostics.Tracing.EventSource
    // Base method: System.Void EventSource::.cctor()
    static void _cctor();
  }; // System.Collections.Concurrent.CDSCollectionETWBCLProvider
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Concurrent::CDSCollectionETWBCLProvider*, "System.Collections.Concurrent", "CDSCollectionETWBCLProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentDictionary_AcquiringAllLocks
// Il2CppName: ConcurrentDictionary_AcquiringAllLocks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::CDSCollectionETWBCLProvider::*)(int)>(&System::Collections::Concurrent::CDSCollectionETWBCLProvider::ConcurrentDictionary_AcquiringAllLocks)> {
  static const MethodInfo* get() {
    static auto* numOfBuckets = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Concurrent::CDSCollectionETWBCLProvider*), "ConcurrentDictionary_AcquiringAllLocks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numOfBuckets});
  }
};
// Writing MetadataGetter for method: System::Collections::Concurrent::CDSCollectionETWBCLProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Concurrent::CDSCollectionETWBCLProvider::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Collections::Concurrent::CDSCollectionETWBCLProvider::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Concurrent::CDSCollectionETWBCLProvider*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
