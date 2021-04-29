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
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ZenInjectMethod
  class ZenInjectMethod : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ZenInjectMethod
    ZenInjectMethod() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x219AA4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenInjectMethod* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ZenInjectMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenInjectMethod*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object obj, System.Object[] args)
    // Offset: 0x219AA5C
    void Invoke(::Il2CppObject* obj, ::Array<::Il2CppObject*>* args);
    // public System.IAsyncResult BeginInvoke(System.Object obj, System.Object[] args, System.AsyncCallback callback, System.Object object)
    // Offset: 0x219AE44
    System::IAsyncResult* BeginInvoke(::Il2CppObject* obj, ::Array<::Il2CppObject*>* args, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x219AE74
    void EndInvoke(System::IAsyncResult* result);
  }; // Zenject.ZenInjectMethod
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenInjectMethod*, "Zenject", "ZenInjectMethod");
