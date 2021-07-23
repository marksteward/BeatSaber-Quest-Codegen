// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TextMeshProAutosizeGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class TextMeshProAutosizeGroup : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TMP_Text[] _texts
    // Size: 0x8
    // Offset: 0x18
    ::Array<TMPro::TMP_Text*>* texts;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TMP_Text*>*) == 0x8);
    // Creating value type constructor for type: TextMeshProAutosizeGroup
    TextMeshProAutosizeGroup(::Array<TMPro::TMP_Text*>* texts_ = {}) noexcept : texts{texts_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private TMPro.TMP_Text[] _texts
    ::Array<TMPro::TMP_Text*>* _get__texts();
    // Set instance field: private TMPro.TMP_Text[] _texts
    void _set__texts(::Array<TMPro::TMP_Text*>* value);
    // protected System.Void Start()
    // Offset: 0x2358EC8
    void Start();
    // public System.Void .ctor()
    // Offset: 0x235902C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextMeshProAutosizeGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TextMeshProAutosizeGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextMeshProAutosizeGroup*, creationType>()));
    }
  }; // TextMeshProAutosizeGroup
  #pragma pack(pop)
  static check_size<sizeof(TextMeshProAutosizeGroup), 24 + sizeof(::Array<TMPro::TMP_Text*>*)> __GlobalNamespace_TextMeshProAutosizeGroupSizeCheck;
  static_assert(sizeof(TextMeshProAutosizeGroup) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TextMeshProAutosizeGroup*, "", "TextMeshProAutosizeGroup");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TextMeshProAutosizeGroup::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TextMeshProAutosizeGroup::*)()>(&GlobalNamespace::TextMeshProAutosizeGroup::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TextMeshProAutosizeGroup*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TextMeshProAutosizeGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
