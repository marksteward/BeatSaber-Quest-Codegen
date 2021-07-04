// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: GatewayIPAddressInformation
  class GatewayIPAddressInformation;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: Collection`1<T>
  template<typename T>
  class Collection_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.GatewayIPAddressInformationCollection
  // [DefaultMemberAttribute] Offset: D88194
  class GatewayIPAddressInformationCollection : public ::Il2CppObject/*, public System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>*/ {
    public:
    // private System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.GatewayIPAddressInformation> addresses
    // Size: 0x8
    // Offset: 0x10
    System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>* addresses;
    // Field size check
    static_assert(sizeof(System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>*) == 0x8);
    // Creating value type constructor for type: GatewayIPAddressInformationCollection
    GatewayIPAddressInformationCollection(System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>* addresses_ = {}) noexcept : addresses{addresses_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>
    operator System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>*>(this);
    }
    // Creating conversion operator: operator System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>*
    constexpr operator System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>*() const noexcept {
      return addresses;
    }
    // public System.Void CopyTo(System.Net.NetworkInformation.GatewayIPAddressInformation[] array, System.Int32 offset)
    // Offset: 0x148D4A0
    void CopyTo(::Array<System::Net::NetworkInformation::GatewayIPAddressInformation*>* array, int offset);
    // public System.Int32 get_Count()
    // Offset: 0x148D510
    int get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x148D568
    bool get_IsReadOnly();
    // public System.Void Add(System.Net.NetworkInformation.GatewayIPAddressInformation address)
    // Offset: 0x148D570
    void Add(System::Net::NetworkInformation::GatewayIPAddressInformation* address);
    // System.Void InternalAdd(System.Net.NetworkInformation.GatewayIPAddressInformation address)
    // Offset: 0x148D5F0
    void InternalAdd(System::Net::NetworkInformation::GatewayIPAddressInformation* address);
    // public System.Boolean Contains(System.Net.NetworkInformation.GatewayIPAddressInformation address)
    // Offset: 0x148D658
    bool Contains(System::Net::NetworkInformation::GatewayIPAddressInformation* address);
    // public System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.GatewayIPAddressInformation> GetEnumerator()
    // Offset: 0x148D6C0
    System::Collections::Generic::IEnumerator_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x148D718
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Boolean Remove(System.Net.NetworkInformation.GatewayIPAddressInformation address)
    // Offset: 0x148D728
    bool Remove(System::Net::NetworkInformation::GatewayIPAddressInformation* address);
    // public System.Void Clear()
    // Offset: 0x148D7A8
    void Clear();
    // protected internal System.Void .ctor()
    // Offset: 0x148D430
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GatewayIPAddressInformationCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::GatewayIPAddressInformationCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GatewayIPAddressInformationCollection*, creationType>()));
    }
  }; // System.Net.NetworkInformation.GatewayIPAddressInformationCollection
  #pragma pack(pop)
  static check_size<sizeof(GatewayIPAddressInformationCollection), 16 + sizeof(System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>*)> __System_Net_NetworkInformation_GatewayIPAddressInformationCollectionSizeCheck;
  static_assert(sizeof(GatewayIPAddressInformationCollection) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*, "System.Net.NetworkInformation", "GatewayIPAddressInformationCollection");
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)(::Array<System::Net::NetworkInformation::GatewayIPAddressInformation*>*, int)>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::CopyTo)> {
  const MethodInfo* get() {
    static auto* array = &classof(::Array<::Array<System::Net::NetworkInformation::GatewayIPAddressInformation*>*>*)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)()>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::get_Count)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)()>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::get_IsReadOnly)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)(System::Net::NetworkInformation::GatewayIPAddressInformation*)>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Add)> {
  const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net.NetworkInformation", "GatewayIPAddressInformation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::InternalAdd
// Il2CppName: InternalAdd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)(System::Net::NetworkInformation::GatewayIPAddressInformation*)>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::InternalAdd)> {
  const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net.NetworkInformation", "GatewayIPAddressInformation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "InternalAdd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)(System::Net::NetworkInformation::GatewayIPAddressInformation*)>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Contains)> {
  const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net.NetworkInformation", "GatewayIPAddressInformation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<System::Net::NetworkInformation::GatewayIPAddressInformation*>* (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)()>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)()>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::System_Collections_IEnumerable_GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)(System::Net::NetworkInformation::GatewayIPAddressInformation*)>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Remove)> {
  const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net.NetworkInformation", "GatewayIPAddressInformation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)()>(&System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Clear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::GatewayIPAddressInformationCollection*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::GatewayIPAddressInformationCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
