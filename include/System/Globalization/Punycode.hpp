// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Globalization.Bootstring
#include "System/Globalization/Bootstring.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.Punycode
  class Punycode : public System::Globalization::Bootstring {
    public:
    // Creating value type constructor for type: Punycode
    Punycode() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1875794
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Punycode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::Punycode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Punycode*, creationType>()));
    }
  }; // System.Globalization.Punycode
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::Punycode*, "System.Globalization", "Punycode");
