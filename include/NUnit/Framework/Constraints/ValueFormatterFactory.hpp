// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ValueFormatter
  class ValueFormatter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.ValueFormatterFactory
  class ValueFormatterFactory : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ValueFormatterFactory
    ValueFormatterFactory() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x17272A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueFormatterFactory* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::ValueFormatterFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueFormatterFactory*, creationType>(object, method)));
    }
    // public NUnit.Framework.Constraints.ValueFormatter Invoke(NUnit.Framework.Constraints.ValueFormatter next)
    // Offset: 0x17273C0
    NUnit::Framework::Constraints::ValueFormatter* Invoke(NUnit::Framework::Constraints::ValueFormatter* next);
    // public System.IAsyncResult BeginInvoke(NUnit.Framework.Constraints.ValueFormatter next, System.AsyncCallback callback, System.Object object)
    // Offset: 0x172E694
    System::IAsyncResult* BeginInvoke(NUnit::Framework::Constraints::ValueFormatter* next, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public NUnit.Framework.Constraints.ValueFormatter EndInvoke(System.IAsyncResult result)
    // Offset: 0x172E6B8
    NUnit::Framework::Constraints::ValueFormatter* EndInvoke(System::IAsyncResult* result);
  }; // NUnit.Framework.Constraints.ValueFormatterFactory
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::ValueFormatterFactory*, "NUnit.Framework.Constraints", "ValueFormatterFactory");
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ValueFormatterFactory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ValueFormatterFactory::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ValueFormatterFactory::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ValueFormatterFactory::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
