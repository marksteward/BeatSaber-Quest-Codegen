// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.Initialization.CacheInitialization
#include "UnityEngine/AddressableAssets/Initialization/CacheInitialization.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.AddressableAssets.Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.Initialization.CacheInitialization/UnityEngine.AddressableAssets.Initialization.<>c__DisplayClass1_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CacheInitialization::$$c__DisplayClass1_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.AddressableAssets.Initialization.CacheInitialization <>4__this
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AddressableAssets::Initialization::CacheInitialization* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::Initialization::CacheInitialization*) == 0x8);
    // public System.String id
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String data
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* data;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass1_0
    $$c__DisplayClass1_0(UnityEngine::AddressableAssets::Initialization::CacheInitialization* $$4__this_ = {}, ::Il2CppString* id_ = {}, ::Il2CppString* data_ = {}) noexcept : $$4__this{$$4__this_}, id{id_}, data{data_} {}
    // Get instance field: public UnityEngine.AddressableAssets.Initialization.CacheInitialization <>4__this
    UnityEngine::AddressableAssets::Initialization::CacheInitialization* _get_$$4__this();
    // Set instance field: public UnityEngine.AddressableAssets.Initialization.CacheInitialization <>4__this
    void _set_$$4__this(UnityEngine::AddressableAssets::Initialization::CacheInitialization* value);
    // Get instance field: public System.String id
    ::Il2CppString* _get_id();
    // Set instance field: public System.String id
    void _set_id(::Il2CppString* value);
    // Get instance field: public System.String data
    ::Il2CppString* _get_data();
    // Set instance field: public System.String data
    void _set_data(::Il2CppString* value);
    // System.Boolean <InitializeAsync>b__0()
    // Offset: 0x11705CC
    bool $InitializeAsync$b__0();
    // public System.Void .ctor()
    // Offset: 0x11704DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CacheInitialization::$$c__DisplayClass1_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::Initialization::CacheInitialization::$$c__DisplayClass1_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CacheInitialization::$$c__DisplayClass1_0*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.Initialization.CacheInitialization/UnityEngine.AddressableAssets.Initialization.<>c__DisplayClass1_0
  #pragma pack(pop)
  static check_size<sizeof(CacheInitialization::$$c__DisplayClass1_0), 32 + sizeof(::Il2CppString*)> __UnityEngine_AddressableAssets_Initialization_CacheInitialization_$$c__DisplayClass1_0SizeCheck;
  static_assert(sizeof(CacheInitialization::$$c__DisplayClass1_0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::CacheInitialization::$$c__DisplayClass1_0*, "UnityEngine.AddressableAssets.Initialization", "CacheInitialization/<>c__DisplayClass1_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitialization::$$c__DisplayClass1_0::$InitializeAsync$b__0
// Il2CppName: <InitializeAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::Initialization::CacheInitialization::$$c__DisplayClass1_0::*)()>(&UnityEngine::AddressableAssets::Initialization::CacheInitialization::$$c__DisplayClass1_0::$InitializeAsync$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitialization::$$c__DisplayClass1_0*), "<InitializeAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitialization::$$c__DisplayClass1_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
