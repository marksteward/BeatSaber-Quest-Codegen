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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: DisallowMultipleComponent
  class DisallowMultipleComponent;
  // Forward declaring type: ExecuteInEditMode
  class ExecuteInEditMode;
  // Forward declaring type: RequireComponent
  class RequireComponent;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  // Autogenerated type: UnityEngine.AttributeHelperEngine
  // [] Offset: FFFFFFFF
  class AttributeHelperEngine : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AttributeHelperEngine
    AttributeHelperEngine() noexcept {}
    // Get static field: static public UnityEngine.DisallowMultipleComponent[] _disallowMultipleComponentArray
    static ::Array<UnityEngine::DisallowMultipleComponent*>* _get__disallowMultipleComponentArray();
    // Set static field: static public UnityEngine.DisallowMultipleComponent[] _disallowMultipleComponentArray
    static void _set__disallowMultipleComponentArray(::Array<UnityEngine::DisallowMultipleComponent*>* value);
    // Get static field: static public UnityEngine.ExecuteInEditMode[] _executeInEditModeArray
    static ::Array<UnityEngine::ExecuteInEditMode*>* _get__executeInEditModeArray();
    // Set static field: static public UnityEngine.ExecuteInEditMode[] _executeInEditModeArray
    static void _set__executeInEditModeArray(::Array<UnityEngine::ExecuteInEditMode*>* value);
    // Get static field: static public UnityEngine.RequireComponent[] _requireComponentArray
    static ::Array<UnityEngine::RequireComponent*>* _get__requireComponentArray();
    // Set static field: static public UnityEngine.RequireComponent[] _requireComponentArray
    static void _set__requireComponentArray(::Array<UnityEngine::RequireComponent*>* value);
    // static private System.Type GetParentTypeDisallowingMultipleInclusion(System.Type type)
    // Offset: 0x167D15C
    static System::Type* GetParentTypeDisallowingMultipleInclusion(System::Type* type);
    // static private System.Type[] GetRequiredComponents(System.Type klass)
    // Offset: 0x167D25C
    static ::Array<System::Type*>* GetRequiredComponents(System::Type* klass);
    // static private System.Int32 GetExecuteMode(System.Type klass)
    // Offset: 0x167D594
    static int GetExecuteMode(System::Type* klass);
    // static private System.Int32 CheckIsEditorScript(System.Type klass)
    // Offset: 0x167D6A0
    static int CheckIsEditorScript(System::Type* klass);
    // static private System.Int32 GetDefaultExecutionOrderFor(System.Type klass)
    // Offset: 0x167D788
    static int GetDefaultExecutionOrderFor(System::Type* klass);
    // static private T GetCustomAttributeOfType(System.Type klass)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T GetCustomAttributeOfType(System::Type* klass) {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AttributeHelperEngine::GetCustomAttributeOfType");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "AttributeHelperEngine", "GetCustomAttributeOfType", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(klass)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, klass);
    }
    // static private System.Void .cctor()
    // Offset: 0x167D80C
    static void _cctor();
  }; // UnityEngine.AttributeHelperEngine
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AttributeHelperEngine*, "UnityEngine", "AttributeHelperEngine");
#pragma pack(pop)
