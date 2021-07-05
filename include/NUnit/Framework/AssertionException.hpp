// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.ResultStateException
#include "NUnit/Framework/ResultStateException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.AssertionException
  class AssertionException : public NUnit::Framework::ResultStateException {
    public:
    // Creating value type constructor for type: AssertionException
    AssertionException() noexcept {}
    // public System.Void .ctor(System.String message)
    // Offset: 0x1721810
    // Implemented from: NUnit.Framework.ResultStateException
    // Base method: System.Void ResultStateException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssertionException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::AssertionException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssertionException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1721818
    // Implemented from: NUnit.Framework.ResultStateException
    // Base method: System.Void ResultStateException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssertionException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::AssertionException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssertionException*, creationType>(info, context)));
    }
    // public override NUnit.Framework.Interfaces.ResultState get_ResultState()
    // Offset: 0x1721820
    // Implemented from: NUnit.Framework.ResultStateException
    // Base method: NUnit.Framework.Interfaces.ResultState ResultStateException::get_ResultState()
    NUnit::Framework::Interfaces::ResultState* get_ResultState();
  }; // NUnit.Framework.AssertionException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::AssertionException*, "NUnit.Framework", "AssertionException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::AssertionException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::AssertionException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::AssertionException::get_ResultState
// Il2CppName: get_ResultState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::ResultState* (NUnit::Framework::AssertionException::*)()>(&NUnit::Framework::AssertionException::get_ResultState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::AssertionException*), "get_ResultState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
