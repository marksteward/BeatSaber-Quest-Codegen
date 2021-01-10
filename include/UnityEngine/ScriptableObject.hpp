// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  // Autogenerated type: UnityEngine.ScriptableObject
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: D4D8B8
  // [NativeClassAttribute] Offset: D4D8B8
  // [NativeHeaderAttribute] Offset: D4D8B8
  // [ExtensionOfNativeClassAttribute] Offset: D4D8B8
  class ScriptableObject : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: ScriptableObject
    ScriptableObject() noexcept {}
    // static public UnityEngine.ScriptableObject CreateInstance(System.Type type)
    // Offset: 0x16C02B4
    static UnityEngine::ScriptableObject* CreateInstance(System::Type* type);
    // static public T CreateInstance()
    // Offset: 0xFFFFFFFF
    template<class T>
    static T CreateInstance() {
      static_assert(std::is_convertible_v<T, UnityEngine::ScriptableObject*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ScriptableObject::CreateInstance");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "ScriptableObject", "CreateInstance", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
    // static private System.Void CreateScriptableObject(UnityEngine.ScriptableObject self)
    // Offset: 0x16C0274
    static void CreateScriptableObject(UnityEngine::ScriptableObject* self);
    // static UnityEngine.ScriptableObject CreateScriptableObjectInstanceFromType(System.Type type, System.Boolean applyDefaultsAndReset)
    // Offset: 0x16C02F8
    static UnityEngine::ScriptableObject* CreateScriptableObjectInstanceFromType(System::Type* type, bool applyDefaultsAndReset);
    // public System.Void .ctor()
    // Offset: 0x16BCE24
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScriptableObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ScriptableObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScriptableObject*, creationType>()));
    }
  }; // UnityEngine.ScriptableObject
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ScriptableObject*, "UnityEngine", "ScriptableObject");
#pragma pack(pop)
