// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_InputField
#include "TMPro/TMP_InputField.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // WARNING Size may be invalid!
  // Autogenerated type: TMPro.TMP_InputField/SubmitEvent
  class TMP_InputField::SubmitEvent : public UnityEngine::Events::UnityEvent_1<::Il2CppString*> {
    public:
    // Creating value type constructor for type: SubmitEvent
    SubmitEvent() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x116831C
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_InputField::SubmitEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_InputField::SubmitEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_InputField::SubmitEvent*, creationType>()));
    }
  }; // TMPro.TMP_InputField/SubmitEvent
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_InputField::SubmitEvent*, "TMPro", "TMP_InputField/SubmitEvent");
// Writing MetadataGetter for method: TMPro::TMP_InputField::SubmitEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
