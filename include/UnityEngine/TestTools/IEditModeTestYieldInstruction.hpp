// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.IEditModeTestYieldInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class IEditModeTestYieldInstruction {
    public:
    // Creating value type constructor for type: IEditModeTestYieldInstruction
    IEditModeTestYieldInstruction() noexcept {}
    // public System.Collections.IEnumerator Perform()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* Perform();
  }; // UnityEngine.TestTools.IEditModeTestYieldInstruction
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::IEditModeTestYieldInstruction*, "UnityEngine.TestTools", "IEditModeTestYieldInstruction");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::IEditModeTestYieldInstruction::Perform
// Il2CppName: Perform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestTools::IEditModeTestYieldInstruction::*)()>(&UnityEngine::TestTools::IEditModeTestYieldInstruction::Perform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::IEditModeTestYieldInstruction*), "Perform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
