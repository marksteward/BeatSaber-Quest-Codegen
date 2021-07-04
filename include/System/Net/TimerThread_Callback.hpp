// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.TimerThread
#include "System/Net/TimerThread.hpp"
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
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.TimerThread/Callback
  class TimerThread::Callback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: Callback
    Callback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15BA904
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimerThread::Callback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::TimerThread::Callback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimerThread::Callback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Net.TimerThread/Timer timer, System.Int32 timeNoticed, System.Object context)
    // Offset: 0x15BA914
    void Invoke(System::Net::TimerThread::Timer* timer, int timeNoticed, ::Il2CppObject* context);
    // public System.IAsyncResult BeginInvoke(System.Net.TimerThread/Timer timer, System.Int32 timeNoticed, System.Object context, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15BAD48
    System::IAsyncResult* BeginInvoke(System::Net::TimerThread::Timer* timer, int timeNoticed, ::Il2CppObject* context, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x15BADE8
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Net.TimerThread/Callback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::TimerThread::Callback*, "System.Net", "TimerThread/Callback");
// Writing MetadataGetter for method: System::Net::TimerThread::Callback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::TimerThread::Callback::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::TimerThread::Callback::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::TimerThread::Callback::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
