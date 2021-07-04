// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DateTimeParse
#include "System/DateTimeParse.hpp"
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
  // Forward declaring type: __DTString
  struct __DTString;
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
  // Autogenerated type: System.DateTimeParse/MatchNumberDelegate
  class DateTimeParse::MatchNumberDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: MatchNumberDelegate
    MatchNumberDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B027B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DateTimeParse::MatchNumberDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::DateTimeParse::MatchNumberDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DateTimeParse::MatchNumberDelegate*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref System.__DTString str, System.Int32 digitLen, out System.Int32 result)
    // Offset: 0x1B01D78
    bool Invoke(System::__DTString& str, int digitLen, int& result);
    // public System.IAsyncResult BeginInvoke(ref System.__DTString str, System.Int32 digitLen, out System.Int32 result, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B027C8
    System::IAsyncResult* BeginInvoke(System::__DTString& str, int digitLen, int& result, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.__DTString str, out System.Int32 result, System.IAsyncResult __result)
    // Offset: 0x1B02894
    bool EndInvoke(System::__DTString& str, int& result, System::IAsyncResult* __result);
  }; // System.DateTimeParse/MatchNumberDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeParse::MatchNumberDelegate*, "System", "DateTimeParse/MatchNumberDelegate");
// Writing MetadataGetter for method: System::DateTimeParse::MatchNumberDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::DateTimeParse::MatchNumberDelegate::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::DateTimeParse::MatchNumberDelegate::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::DateTimeParse::MatchNumberDelegate::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
