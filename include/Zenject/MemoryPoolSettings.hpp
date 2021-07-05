// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PoolExpandMethods
#include "Zenject/PoolExpandMethods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.MemoryPoolSettings
  class MemoryPoolSettings : public ::Il2CppObject {
    public:
    // public System.Int32 InitialSize
    // Size: 0x4
    // Offset: 0x10
    int InitialSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 MaxSize
    // Size: 0x4
    // Offset: 0x14
    int MaxSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Zenject.PoolExpandMethods ExpandMethod
    // Size: 0x4
    // Offset: 0x18
    Zenject::PoolExpandMethods ExpandMethod;
    // Field size check
    static_assert(sizeof(Zenject::PoolExpandMethods) == 0x4);
    // Creating value type constructor for type: MemoryPoolSettings
    MemoryPoolSettings(int InitialSize_ = {}, int MaxSize_ = {}, Zenject::PoolExpandMethods ExpandMethod_ = {}) noexcept : InitialSize{InitialSize_}, MaxSize{MaxSize_}, ExpandMethod{ExpandMethod_} {}
    // Get static field: static public readonly Zenject.MemoryPoolSettings Default
    static Zenject::MemoryPoolSettings* _get_Default();
    // Set static field: static public readonly Zenject.MemoryPoolSettings Default
    static void _set_Default(Zenject::MemoryPoolSettings* value);
    // public System.Void .ctor(System.Int32 initialSize, System.Int32 maxSize, Zenject.PoolExpandMethods expandMethod)
    // Offset: 0x16DC804
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryPoolSettings* New_ctor(int initialSize, int maxSize, Zenject::PoolExpandMethods expandMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryPoolSettings*, creationType>(initialSize, maxSize, expandMethod)));
    }
    // static private System.Void .cctor()
    // Offset: 0x16DC844
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x16DC7D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryPoolSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryPoolSettings*, creationType>()));
    }
  }; // Zenject.MemoryPoolSettings
  #pragma pack(pop)
  static check_size<sizeof(MemoryPoolSettings), 24 + sizeof(Zenject::PoolExpandMethods)> __Zenject_MemoryPoolSettingsSizeCheck;
  static_assert(sizeof(MemoryPoolSettings) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::MemoryPoolSettings*, "Zenject", "MemoryPoolSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::MemoryPoolSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::MemoryPoolSettings::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::MemoryPoolSettings::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MemoryPoolSettings*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MemoryPoolSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
