// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x38
  // Autogenerated type: System.Runtime.Remoting.ProviderData
  // [] Offset: FFFFFFFF
  class ProviderData : public ::Il2CppObject {
    public:
    // System.String Ref
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Ref;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String Type
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Type;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String Id
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* Id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Collections.Hashtable CustomProperties
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Hashtable* CustomProperties;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // System.Collections.IList CustomData
    // Size: 0x8
    // Offset: 0x30
    System::Collections::IList* CustomData;
    // Field size check
    static_assert(sizeof(System::Collections::IList*) == 0x8);
    // Creating value type constructor for type: ProviderData
    ProviderData(::Il2CppString* Ref_ = {}, ::Il2CppString* Type_ = {}, ::Il2CppString* Id_ = {}, System::Collections::Hashtable* CustomProperties_ = {}, System::Collections::IList* CustomData_ = {}) noexcept : Ref{Ref_}, Type{Type_}, Id{Id_}, CustomProperties{CustomProperties_}, CustomData{CustomData_} {}
    // public System.Void CopyFrom(System.Runtime.Remoting.ProviderData other)
    // Offset: 0x1331FCC
    void CopyFrom(System::Runtime::Remoting::ProviderData* other);
    // public System.Void .ctor()
    // Offset: 0x1332628
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProviderData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ProviderData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProviderData*, creationType>()));
    }
  }; // System.Runtime.Remoting.ProviderData
  static check_size<sizeof(ProviderData), 48 + sizeof(System::Collections::IList*)> __System_Runtime_Remoting_ProviderDataSizeCheck;
  static_assert(sizeof(ProviderData) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ProviderData*, "System.Runtime.Remoting", "ProviderData");
#pragma pack(pop)
