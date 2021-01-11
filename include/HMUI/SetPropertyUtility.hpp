// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.SetPropertyUtility
  // [] Offset: FFFFFFFF
  class SetPropertyUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SetPropertyUtility
    SetPropertyUtility() noexcept {}
    // static public System.Boolean SetColor(ref UnityEngine.Color currentValue, UnityEngine.Color newValue)
    // Offset: 0x1084834
    static bool SetColor(UnityEngine::Color& currentValue, UnityEngine::Color newValue);
    // static public System.Boolean SetStruct(ref T currentValue, T newValue)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool SetStruct(T& currentValue, T newValue) {
      static_assert(is_value_type_v<T>);
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::SetPropertyUtility::SetStruct");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("HMUI", "SetPropertyUtility", "SetStruct", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(currentValue, newValue)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, currentValue, newValue);
    }
    // static public System.Boolean SetClass(ref T currentValue, T newValue)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool SetClass(T& currentValue, T newValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::SetPropertyUtility::SetClass");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("HMUI", "SetPropertyUtility", "SetClass", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(currentValue, newValue)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, currentValue, newValue);
    }
  }; // HMUI.SetPropertyUtility
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(HMUI::SetPropertyUtility*, "HMUI", "SetPropertyUtility");
