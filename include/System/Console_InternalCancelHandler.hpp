// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Console
#include "System/Console.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Console/InternalCancelHandler
  class Console::InternalCancelHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: InternalCancelHandler
    InternalCancelHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1978F08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Console::InternalCancelHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Console::InternalCancelHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Console::InternalCancelHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke()
    // Offset: 0x197A2D8
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x197A4E4
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x197A510
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Console/InternalCancelHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Console::InternalCancelHandler*, "System", "Console/InternalCancelHandler");
// Writing MetadataGetter for method: System::Console::InternalCancelHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Console::InternalCancelHandler::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Console::InternalCancelHandler::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Console::InternalCancelHandler::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
