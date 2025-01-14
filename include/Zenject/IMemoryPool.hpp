// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.IMemoryPool
  // [TokenAttribute] Offset: FFFFFFFF
  class IMemoryPool {
    public:
    // Creating value type constructor for type: IMemoryPool
    IMemoryPool() noexcept {}
    // public System.Int32 get_NumTotal()
    // Offset: 0xFFFFFFFF
    int get_NumTotal();
    // public System.Int32 get_NumActive()
    // Offset: 0xFFFFFFFF
    int get_NumActive();
    // public System.Int32 get_NumInactive()
    // Offset: 0xFFFFFFFF
    int get_NumInactive();
    // public System.Type get_ItemType()
    // Offset: 0xFFFFFFFF
    System::Type* get_ItemType();
    // public System.Void Resize(System.Int32 desiredPoolSize)
    // Offset: 0xFFFFFFFF
    void Resize(int desiredPoolSize);
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear();
    // public System.Void ExpandBy(System.Int32 numToAdd)
    // Offset: 0xFFFFFFFF
    void ExpandBy(int numToAdd);
    // public System.Void ShrinkBy(System.Int32 numToRemove)
    // Offset: 0xFFFFFFFF
    void ShrinkBy(int numToRemove);
    // public System.Void Despawn(System.Object obj)
    // Offset: 0xFFFFFFFF
    void Despawn(::Il2CppObject* obj);
  }; // Zenject.IMemoryPool
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::IMemoryPool*, "Zenject", "IMemoryPool");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::IMemoryPool::get_NumTotal
// Il2CppName: get_NumTotal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::IMemoryPool::*)()>(&Zenject::IMemoryPool::get_NumTotal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IMemoryPool*), "get_NumTotal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::IMemoryPool::get_NumActive
// Il2CppName: get_NumActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::IMemoryPool::*)()>(&Zenject::IMemoryPool::get_NumActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IMemoryPool*), "get_NumActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::IMemoryPool::get_NumInactive
// Il2CppName: get_NumInactive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::IMemoryPool::*)()>(&Zenject::IMemoryPool::get_NumInactive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IMemoryPool*), "get_NumInactive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::IMemoryPool::get_ItemType
// Il2CppName: get_ItemType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::IMemoryPool::*)()>(&Zenject::IMemoryPool::get_ItemType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IMemoryPool*), "get_ItemType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::IMemoryPool::Resize
// Il2CppName: Resize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IMemoryPool::*)(int)>(&Zenject::IMemoryPool::Resize)> {
  static const MethodInfo* get() {
    static auto* desiredPoolSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::IMemoryPool*), "Resize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{desiredPoolSize});
  }
};
// Writing MetadataGetter for method: Zenject::IMemoryPool::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IMemoryPool::*)()>(&Zenject::IMemoryPool::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IMemoryPool*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::IMemoryPool::ExpandBy
// Il2CppName: ExpandBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IMemoryPool::*)(int)>(&Zenject::IMemoryPool::ExpandBy)> {
  static const MethodInfo* get() {
    static auto* numToAdd = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::IMemoryPool*), "ExpandBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numToAdd});
  }
};
// Writing MetadataGetter for method: Zenject::IMemoryPool::ShrinkBy
// Il2CppName: ShrinkBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IMemoryPool::*)(int)>(&Zenject::IMemoryPool::ShrinkBy)> {
  static const MethodInfo* get() {
    static auto* numToRemove = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::IMemoryPool*), "ShrinkBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numToRemove});
  }
};
// Writing MetadataGetter for method: Zenject::IMemoryPool::Despawn
// Il2CppName: Despawn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IMemoryPool::*)(::Il2CppObject*)>(&Zenject::IMemoryPool::Despawn)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::IMemoryPool*), "Despawn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
