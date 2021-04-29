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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
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
  // Autogenerated type: Zenject.ZenTypeInfoGetter
  class ZenTypeInfoGetter : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ZenTypeInfoGetter
    ZenTypeInfoGetter() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2178E1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenTypeInfoGetter* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ZenTypeInfoGetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenTypeInfoGetter*, creationType>(object, method)));
    }
    // public Zenject.InjectTypeInfo Invoke()
    // Offset: 0x21782B8
    Zenject::InjectTypeInfo* Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x2178E2C
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Zenject.InjectTypeInfo EndInvoke(System.IAsyncResult result)
    // Offset: 0x2178E58
    Zenject::InjectTypeInfo* EndInvoke(System::IAsyncResult* result);
  }; // Zenject.ZenTypeInfoGetter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenTypeInfoGetter*, "Zenject", "ZenTypeInfoGetter");
