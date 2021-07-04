// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Scripting.PreserveAttribute
#include "UnityEngine/Scripting/PreserveAttribute.hpp"
// Including type: UnityEngine.RuntimeInitializeLoadType
#include "UnityEngine/RuntimeInitializeLoadType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RuntimeInitializeOnLoadMethodAttribute
  // [RequiredByNativeCodeAttribute] Offset: D90484
  // [AttributeUsageAttribute] Offset: D90484
  class RuntimeInitializeOnLoadMethodAttribute : public UnityEngine::Scripting::PreserveAttribute {
    public:
    // private UnityEngine.RuntimeInitializeLoadType m_LoadType
    // Size: 0x4
    // Offset: 0x10
    UnityEngine::RuntimeInitializeLoadType m_LoadType;
    // Field size check
    static_assert(sizeof(UnityEngine::RuntimeInitializeLoadType) == 0x4);
    // Creating value type constructor for type: RuntimeInitializeOnLoadMethodAttribute
    RuntimeInitializeOnLoadMethodAttribute(UnityEngine::RuntimeInitializeLoadType m_LoadType_ = {}) noexcept : m_LoadType{m_LoadType_} {}
    // Creating conversion operator: operator UnityEngine::RuntimeInitializeLoadType
    constexpr operator UnityEngine::RuntimeInitializeLoadType() const noexcept {
      return m_LoadType;
    }
    // public System.Void .ctor(UnityEngine.RuntimeInitializeLoadType loadType)
    // Offset: 0x1B31FE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeInitializeOnLoadMethodAttribute* New_ctor(UnityEngine::RuntimeInitializeLoadType loadType) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RuntimeInitializeOnLoadMethodAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeInitializeOnLoadMethodAttribute*, creationType>(loadType)));
    }
    // private System.Void set_loadType(UnityEngine.RuntimeInitializeLoadType value)
    // Offset: 0x1B31FDC
    void set_loadType(UnityEngine::RuntimeInitializeLoadType value);
    // public System.Void .ctor()
    // Offset: 0x1B31FAC
    // Implemented from: UnityEngine.Scripting.PreserveAttribute
    // Base method: System.Void PreserveAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeInitializeOnLoadMethodAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RuntimeInitializeOnLoadMethodAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeInitializeOnLoadMethodAttribute*, creationType>()));
    }
  }; // UnityEngine.RuntimeInitializeOnLoadMethodAttribute
  #pragma pack(pop)
  static check_size<sizeof(RuntimeInitializeOnLoadMethodAttribute), 16 + sizeof(UnityEngine::RuntimeInitializeLoadType)> __UnityEngine_RuntimeInitializeOnLoadMethodAttributeSizeCheck;
  static_assert(sizeof(RuntimeInitializeOnLoadMethodAttribute) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RuntimeInitializeOnLoadMethodAttribute*, "UnityEngine", "RuntimeInitializeOnLoadMethodAttribute");
// Writing MetadataGetter for method: UnityEngine::RuntimeInitializeOnLoadMethodAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RuntimeInitializeOnLoadMethodAttribute::set_loadType
// Il2CppName: set_loadType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RuntimeInitializeOnLoadMethodAttribute::*)(UnityEngine::RuntimeInitializeLoadType)>(&UnityEngine::RuntimeInitializeOnLoadMethodAttribute::set_loadType)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RuntimeInitializeLoadType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RuntimeInitializeOnLoadMethodAttribute*), "set_loadType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RuntimeInitializeOnLoadMethodAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
