// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GlobalJavaObjectRef
  // [TokenAttribute] Offset: FFFFFFFF
  class GlobalJavaObjectRef : public ::Il2CppObject {
    public:
    // private System.Boolean m_disposed
    // Size: 0x1
    // Offset: 0x10
    bool m_disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_disposed and: m_jobject
    char __padding0[0x7] = {};
    // protected System.IntPtr m_jobject
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr m_jobject;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: GlobalJavaObjectRef
    GlobalJavaObjectRef(bool m_disposed_ = {}, System::IntPtr m_jobject_ = {}) noexcept : m_disposed{m_disposed_}, m_jobject{m_jobject_} {}
    // public System.Void .ctor(System.IntPtr jobject)
    // Offset: 0x2351EE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GlobalJavaObjectRef* New_ctor(System::IntPtr jobject) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GlobalJavaObjectRef::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GlobalJavaObjectRef*, creationType>(jobject)));
    }
    // public System.Void Dispose()
    // Offset: 0x2352E84
    void Dispose();
    // protected override System.Void Finalize()
    // Offset: 0x2355A9C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.GlobalJavaObjectRef
  #pragma pack(pop)
  static check_size<sizeof(GlobalJavaObjectRef), 24 + sizeof(System::IntPtr)> __UnityEngine_GlobalJavaObjectRefSizeCheck;
  static_assert(sizeof(GlobalJavaObjectRef) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GlobalJavaObjectRef*, "UnityEngine", "GlobalJavaObjectRef");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GlobalJavaObjectRef::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::GlobalJavaObjectRef::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GlobalJavaObjectRef::*)()>(&UnityEngine::GlobalJavaObjectRef::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GlobalJavaObjectRef*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GlobalJavaObjectRef::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GlobalJavaObjectRef::*)()>(&UnityEngine::GlobalJavaObjectRef::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GlobalJavaObjectRef*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
