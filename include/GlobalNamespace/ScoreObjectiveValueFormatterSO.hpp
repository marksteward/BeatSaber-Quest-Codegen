// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ObjectiveValueFormatterSO
#include "GlobalNamespace/ObjectiveValueFormatterSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ScoreObjectiveValueFormatterSO
  class ScoreObjectiveValueFormatterSO : public GlobalNamespace::ObjectiveValueFormatterSO {
    public:
    // Creating value type constructor for type: ScoreObjectiveValueFormatterSO
    ScoreObjectiveValueFormatterSO() noexcept {}
    // public override System.String FormatValue(System.Int32 value)
    // Offset: 0x10D8570
    // Implemented from: ObjectiveValueFormatterSO
    // Base method: System.String ObjectiveValueFormatterSO::FormatValue(System.Int32 value)
    ::Il2CppString* FormatValue(int value);
    // public System.Void .ctor()
    // Offset: 0x10D85D4
    // Implemented from: ObjectiveValueFormatterSO
    // Base method: System.Void ObjectiveValueFormatterSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreObjectiveValueFormatterSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScoreObjectiveValueFormatterSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreObjectiveValueFormatterSO*, creationType>()));
    }
  }; // ScoreObjectiveValueFormatterSO
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreObjectiveValueFormatterSO*, "", "ScoreObjectiveValueFormatterSO");
// Writing MetadataGetter for method: GlobalNamespace::ScoreObjectiveValueFormatterSO::FormatValue
// Il2CppName: FormatValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::ScoreObjectiveValueFormatterSO::*)(int)>(&GlobalNamespace::ScoreObjectiveValueFormatterSO::FormatValue)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreObjectiveValueFormatterSO*), "FormatValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreObjectiveValueFormatterSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
