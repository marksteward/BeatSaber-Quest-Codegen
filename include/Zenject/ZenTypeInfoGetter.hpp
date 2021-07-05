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
    // Offset: 0x23BB840
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenTypeInfoGetter* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ZenTypeInfoGetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenTypeInfoGetter*, creationType>(object, method)));
    }
    // public Zenject.InjectTypeInfo Invoke()
    // Offset: 0x23BACDC
    Zenject::InjectTypeInfo* Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x23BB850
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Zenject.InjectTypeInfo EndInvoke(System.IAsyncResult result)
    // Offset: 0x23BB87C
    Zenject::InjectTypeInfo* EndInvoke(System::IAsyncResult* result);
  }; // Zenject.ZenTypeInfoGetter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenTypeInfoGetter*, "Zenject", "ZenTypeInfoGetter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ZenTypeInfoGetter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ZenTypeInfoGetter::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo* (Zenject::ZenTypeInfoGetter::*)()>(&Zenject::ZenTypeInfoGetter::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenTypeInfoGetter*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenTypeInfoGetter::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Zenject::ZenTypeInfoGetter::*)(System::AsyncCallback*, ::Il2CppObject*)>(&Zenject::ZenTypeInfoGetter::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenTypeInfoGetter*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, object});
  }
};
// Writing MetadataGetter for method: Zenject::ZenTypeInfoGetter::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo* (Zenject::ZenTypeInfoGetter::*)(System::IAsyncResult*)>(&Zenject::ZenTypeInfoGetter::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenTypeInfoGetter*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
