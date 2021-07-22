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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.TimerCallback
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D6A964
  class TimerCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: TimerCallback
    TimerCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x188EE58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimerCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::TimerCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimerCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object state)
    // Offset: 0x188E3F4
    void Invoke(::Il2CppObject* state);
    // public System.IAsyncResult BeginInvoke(System.Object state, System.AsyncCallback callback, System.Object object)
    // Offset: 0x188EE68
    System::IAsyncResult* BeginInvoke(::Il2CppObject* state, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x188EE8C
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Threading.TimerCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::TimerCallback*, "System.Threading", "TimerCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::TimerCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::TimerCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::TimerCallback::*)(::Il2CppObject*)>(&System::Threading::TimerCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::TimerCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Threading::TimerCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Threading::TimerCallback::*)(::Il2CppObject*, System::AsyncCallback*, ::Il2CppObject*)>(&System::Threading::TimerCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::TimerCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, callback, object});
  }
};
// Writing MetadataGetter for method: System::Threading::TimerCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::TimerCallback::*)(System::IAsyncResult*)>(&System::Threading::TimerCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::TimerCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
