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
  // Forward declaring type: UnicastIPAddressInformation
  class UnicastIPAddressInformation;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: Collection`1<T>
  template<typename T>
  class Collection_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.UnicastIPAddressInformationCollection
  // [DefaultMemberAttribute] Offset: D88204
  class UnicastIPAddressInformationCollection : public ::Il2CppObject/*, public System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>*/ {
    public:
    // private System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.UnicastIPAddressInformation> addresses
    // Size: 0x8
    // Offset: 0x10
    System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>* addresses;
    // Field size check
    static_assert(sizeof(System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>*) == 0x8);
    // Creating value type constructor for type: UnicastIPAddressInformationCollection
    UnicastIPAddressInformationCollection(System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>* addresses_ = {}) noexcept : addresses{addresses_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>
    operator System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>*>(this);
    }
    // Creating conversion operator: operator System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>*
    constexpr operator System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>*() const noexcept {
      return addresses;
    }
    // public System.Void CopyTo(System.Net.NetworkInformation.UnicastIPAddressInformation[] array, System.Int32 offset)
    // Offset: 0x1491280
    void CopyTo(::Array<System::Net::NetworkInformation::UnicastIPAddressInformation*>* array, int offset);
    // public System.Int32 get_Count()
    // Offset: 0x14912F0
    int get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x1491348
    bool get_IsReadOnly();
    // public System.Void Add(System.Net.NetworkInformation.UnicastIPAddressInformation address)
    // Offset: 0x1491350
    void Add(System::Net::NetworkInformation::UnicastIPAddressInformation* address);
    // System.Void InternalAdd(System.Net.NetworkInformation.UnicastIPAddressInformation address)
    // Offset: 0x14913D0
    void InternalAdd(System::Net::NetworkInformation::UnicastIPAddressInformation* address);
    // public System.Boolean Contains(System.Net.NetworkInformation.UnicastIPAddressInformation address)
    // Offset: 0x1491438
    bool Contains(System::Net::NetworkInformation::UnicastIPAddressInformation* address);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x14914A0
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation> GetEnumerator()
    // Offset: 0x14914B0
    System::Collections::Generic::IEnumerator_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>* GetEnumerator();
    // public System.Boolean Remove(System.Net.NetworkInformation.UnicastIPAddressInformation address)
    // Offset: 0x1491508
    bool Remove(System::Net::NetworkInformation::UnicastIPAddressInformation* address);
    // public System.Void Clear()
    // Offset: 0x1491588
    void Clear();
    // protected internal System.Void .ctor()
    // Offset: 0x1491210
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicastIPAddressInformationCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::UnicastIPAddressInformationCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicastIPAddressInformationCollection*, creationType>()));
    }
  }; // System.Net.NetworkInformation.UnicastIPAddressInformationCollection
  #pragma pack(pop)
  static check_size<sizeof(UnicastIPAddressInformationCollection), 16 + sizeof(System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>*)> __System_Net_NetworkInformation_UnicastIPAddressInformationCollectionSizeCheck;
  static_assert(sizeof(UnicastIPAddressInformationCollection) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnicastIPAddressInformationCollection*, "System.Net.NetworkInformation", "UnicastIPAddressInformationCollection");
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnicastIPAddressInformationCollection::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::UnicastIPAddressInformationCollection::*)(::Array<System::Net::NetworkInformation::UnicastIPAddressInformation*>*, int)>(&System::Net::NetworkInformation::UnicastIPAddressInformationCollection::CopyTo)> {
  const MethodInfo* get() {
    static auto* array = &classof(::Array<::Array<System::Net::NetworkInformation::UnicastIPAddressInformation*>*>*)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnicastIPAddressInformationCollection*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnicastIPAddressInformationCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::NetworkInformation::UnicastIPAddressInformationCollection::*)()>(&System::Net::NetworkInformation::UnicastIPAddressInformationCollection::get_Count)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnicastIPAddressInformationCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnicastIPAddressInformationCollection::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::NetworkInformation::UnicastIPAddressInformationCollection::*)()>(&System::Net::NetworkInformation::UnicastIPAddressInformationCollection::get_IsReadOnly)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnicastIPAddressInformationCollection*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnicastIPAddressInformationCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::UnicastIPAddressInformationCollection::*)(System::Net::NetworkInformation::UnicastIPAddressInformation*)>(&System::Net::NetworkInformation::UnicastIPAddressInformationCollection::Add)> {
  const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net.NetworkInformation", "UnicastIPAddressInformation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnicastIPAddressInformationCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnicastIPAddressInformationCollection::InternalAdd
// Il2CppName: InternalAdd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::UnicastIPAddressInformationCollection::*)(System::Net::NetworkInformation::UnicastIPAddressInformation*)>(&System::Net::NetworkInformation::UnicastIPAddressInformationCollection::InternalAdd)> {
  const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net.NetworkInformation", "UnicastIPAddressInformation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnicastIPAddressInformationCollection*), "InternalAdd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnicastIPAddressInformationCollection::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::NetworkInformation::UnicastIPAddressInformationCollection::*)(System::Net::NetworkInformation::UnicastIPAddressInformation*)>(&System::Net::NetworkInformation::UnicastIPAddressInformationCollection::Contains)> {
  const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net.NetworkInformation", "UnicastIPAddressInformation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnicastIPAddressInformationCollection*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnicastIPAddressInformationCollection::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Net::NetworkInformation::UnicastIPAddressInformationCollection::*)()>(&System::Net::NetworkInformation::UnicastIPAddressInformationCollection::System_Collections_IEnumerable_GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnicastIPAddressInformationCollection*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnicastIPAddressInformationCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>* (System::Net::NetworkInformation::UnicastIPAddressInformationCollection::*)()>(&System::Net::NetworkInformation::UnicastIPAddressInformationCollection::GetEnumerator)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnicastIPAddressInformationCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnicastIPAddressInformationCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::NetworkInformation::UnicastIPAddressInformationCollection::*)(System::Net::NetworkInformation::UnicastIPAddressInformation*)>(&System::Net::NetworkInformation::UnicastIPAddressInformationCollection::Remove)> {
  const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net.NetworkInformation", "UnicastIPAddressInformation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnicastIPAddressInformationCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnicastIPAddressInformationCollection::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::UnicastIPAddressInformationCollection::*)()>(&System::Net::NetworkInformation::UnicastIPAddressInformationCollection::Clear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnicastIPAddressInformationCollection*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnicastIPAddressInformationCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
