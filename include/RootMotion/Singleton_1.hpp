// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.Singleton`1
  template<typename T>
  class Singleton_1 : public UnityEngine::MonoBehaviour {
    static_assert((!std::is_complete_v<std::remove_pointer_t<T>> || std::is_convertible_v<T, RootMotion::Singleton_1<T>*>));
    public:
    // Autogenerated static field getter
    // Get static field: static private T sInstance
    static T _get_sInstance() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<T>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Singleton_1<T>*>::get(), "sInstance"));
    }
    // Autogenerated static field setter
    // Set static field: static private T sInstance
    static void _set_sInstance(T value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Singleton_1<T>*>::get(), "sInstance", value));
    }
    // static public T get_instance()
    // Offset: 0xFFFFFFFF
    static T get_instance() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Singleton_1<T>*>::get(), "get_instance"));
    }
    // protected System.Void Awake()
    // Offset: 0xFFFFFFFF
    void Awake() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Singleton_1<T>* New_ctor() {
      return THROW_UNLESS(il2cpp_utils::New<Singleton_1<T>*>());
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor() {
      THROW_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Singleton_1<T>*>::get(), ".cctor"));
    }
  }; // RootMotion.Singleton`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(RootMotion::Singleton_1, "RootMotion", "Singleton`1");
#pragma pack(pop)
