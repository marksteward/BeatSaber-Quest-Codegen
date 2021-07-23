// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ScriptableObjectInstaller
  class ScriptableObjectInstaller;
  // Forward declaring type: MonoInstaller
  class MonoInstaller;
  // Forward declaring type: InstallerBase
  class InstallerBase;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: ZenjectBinding
  class ZenjectBinding;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Context
  // [TokenAttribute] Offset: FFFFFFFF
  class Context : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: Zenject::Context::$$c
    class $$c;
    // private System.Collections.Generic.List`1<Zenject.ScriptableObjectInstaller> _scriptableObjectInstallers
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::ScriptableObjectInstaller*>* scriptableObjectInstallers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::ScriptableObjectInstaller*>*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xDCB01C
    // [FormerlySerializedAsAttribute] Offset: 0xDCB01C
    // private System.Collections.Generic.List`1<Zenject.MonoInstaller> _monoInstallers
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<Zenject::MonoInstaller*>* monoInstallers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::MonoInstaller*>*) == 0x8);
    // private System.Collections.Generic.List`1<Zenject.MonoInstaller> _installerPrefabs
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<Zenject::MonoInstaller*>* installerPrefabs;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::MonoInstaller*>*) == 0x8);
    // private System.Collections.Generic.List`1<Zenject.InstallerBase> _normalInstallers
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<Zenject::InstallerBase*>* normalInstallers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::InstallerBase*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Type> _normalInstallerTypes
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<System::Type*>* normalInstallerTypes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Type*>*) == 0x8);
    // Creating value type constructor for type: Context
    Context(System::Collections::Generic::List_1<Zenject::ScriptableObjectInstaller*>* scriptableObjectInstallers_ = {}, System::Collections::Generic::List_1<Zenject::MonoInstaller*>* monoInstallers_ = {}, System::Collections::Generic::List_1<Zenject::MonoInstaller*>* installerPrefabs_ = {}, System::Collections::Generic::List_1<Zenject::InstallerBase*>* normalInstallers_ = {}, System::Collections::Generic::List_1<System::Type*>* normalInstallerTypes_ = {}) noexcept : scriptableObjectInstallers{scriptableObjectInstallers_}, monoInstallers{monoInstallers_}, installerPrefabs{installerPrefabs_}, normalInstallers{normalInstallers_}, normalInstallerTypes{normalInstallerTypes_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private System.Collections.Generic.List`1<Zenject.ScriptableObjectInstaller> _scriptableObjectInstallers
    System::Collections::Generic::List_1<Zenject::ScriptableObjectInstaller*>* _get__scriptableObjectInstallers();
    // Set instance field: private System.Collections.Generic.List`1<Zenject.ScriptableObjectInstaller> _scriptableObjectInstallers
    void _set__scriptableObjectInstallers(System::Collections::Generic::List_1<Zenject::ScriptableObjectInstaller*>* value);
    // Get instance field: private System.Collections.Generic.List`1<Zenject.MonoInstaller> _monoInstallers
    System::Collections::Generic::List_1<Zenject::MonoInstaller*>* _get__monoInstallers();
    // Set instance field: private System.Collections.Generic.List`1<Zenject.MonoInstaller> _monoInstallers
    void _set__monoInstallers(System::Collections::Generic::List_1<Zenject::MonoInstaller*>* value);
    // Get instance field: private System.Collections.Generic.List`1<Zenject.MonoInstaller> _installerPrefabs
    System::Collections::Generic::List_1<Zenject::MonoInstaller*>* _get__installerPrefabs();
    // Set instance field: private System.Collections.Generic.List`1<Zenject.MonoInstaller> _installerPrefabs
    void _set__installerPrefabs(System::Collections::Generic::List_1<Zenject::MonoInstaller*>* value);
    // Get instance field: private System.Collections.Generic.List`1<Zenject.InstallerBase> _normalInstallers
    System::Collections::Generic::List_1<Zenject::InstallerBase*>* _get__normalInstallers();
    // Set instance field: private System.Collections.Generic.List`1<Zenject.InstallerBase> _normalInstallers
    void _set__normalInstallers(System::Collections::Generic::List_1<Zenject::InstallerBase*>* value);
    // Get instance field: private System.Collections.Generic.List`1<System.Type> _normalInstallerTypes
    System::Collections::Generic::List_1<System::Type*>* _get__normalInstallerTypes();
    // Set instance field: private System.Collections.Generic.List`1<System.Type> _normalInstallerTypes
    void _set__normalInstallerTypes(System::Collections::Generic::List_1<System::Type*>* value);
    // public System.Collections.Generic.IEnumerable`1<Zenject.MonoInstaller> get_Installers()
    // Offset: 0x137D6B0
    System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller*>* get_Installers();
    // public System.Void set_Installers(System.Collections.Generic.IEnumerable`1<Zenject.MonoInstaller> value)
    // Offset: 0x137D6B8
    void set_Installers(System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller*>* value);
    // public System.Collections.Generic.IEnumerable`1<Zenject.MonoInstaller> get_InstallerPrefabs()
    // Offset: 0x137D738
    System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller*>* get_InstallerPrefabs();
    // public System.Void set_InstallerPrefabs(System.Collections.Generic.IEnumerable`1<Zenject.MonoInstaller> value)
    // Offset: 0x137D740
    void set_InstallerPrefabs(System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller*>* value);
    // public System.Collections.Generic.IEnumerable`1<Zenject.ScriptableObjectInstaller> get_ScriptableObjectInstallers()
    // Offset: 0x137D7C0
    System::Collections::Generic::IEnumerable_1<Zenject::ScriptableObjectInstaller*>* get_ScriptableObjectInstallers();
    // public System.Void set_ScriptableObjectInstallers(System.Collections.Generic.IEnumerable`1<Zenject.ScriptableObjectInstaller> value)
    // Offset: 0x137D7C8
    void set_ScriptableObjectInstallers(System::Collections::Generic::IEnumerable_1<Zenject::ScriptableObjectInstaller*>* value);
    // public System.Collections.Generic.IEnumerable`1<System.Type> get_NormalInstallerTypes()
    // Offset: 0x137D848
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_NormalInstallerTypes();
    // public System.Void set_NormalInstallerTypes(System.Collections.Generic.IEnumerable`1<System.Type> value)
    // Offset: 0x137D850
    void set_NormalInstallerTypes(System::Collections::Generic::IEnumerable_1<System::Type*>* value);
    // public System.Collections.Generic.IEnumerable`1<Zenject.InstallerBase> get_NormalInstallers()
    // Offset: 0x137D988
    System::Collections::Generic::IEnumerable_1<Zenject::InstallerBase*>* get_NormalInstallers();
    // public System.Void set_NormalInstallers(System.Collections.Generic.IEnumerable`1<Zenject.InstallerBase> value)
    // Offset: 0x137D990
    void set_NormalInstallers(System::Collections::Generic::IEnumerable_1<Zenject::InstallerBase*>* value);
    // public Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container();
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> GetRootGameObjects()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* GetRootGameObjects();
    // public System.Void AddNormalInstallerType(System.Type installerType)
    // Offset: 0x137DA10
    void AddNormalInstallerType(System::Type* installerType);
    // public System.Void AddNormalInstaller(Zenject.InstallerBase installer)
    // Offset: 0x137DABC
    void AddNormalInstaller(Zenject::InstallerBase* installer);
    // private System.Void CheckInstallerPrefabTypes(System.Collections.Generic.List`1<Zenject.MonoInstaller> installers, System.Collections.Generic.List`1<Zenject.MonoInstaller> installerPrefabs)
    // Offset: 0x137DB24
    void CheckInstallerPrefabTypes(System::Collections::Generic::List_1<Zenject::MonoInstaller*>* installers, System::Collections::Generic::List_1<Zenject::MonoInstaller*>* installerPrefabs);
    // protected System.Void InstallInstallers()
    // Offset: 0x137DD84
    void InstallInstallers();
    // protected System.Void InstallInstallers(System.Collections.Generic.List`1<Zenject.InstallerBase> normalInstallers, System.Collections.Generic.List`1<System.Type> normalInstallerTypes, System.Collections.Generic.List`1<Zenject.ScriptableObjectInstaller> scriptableObjectInstallers, System.Collections.Generic.List`1<Zenject.MonoInstaller> installers, System.Collections.Generic.List`1<Zenject.MonoInstaller> installerPrefabs)
    // Offset: 0x137DD94
    void InstallInstallers(System::Collections::Generic::List_1<Zenject::InstallerBase*>* normalInstallers, System::Collections::Generic::List_1<System::Type*>* normalInstallerTypes, System::Collections::Generic::List_1<Zenject::ScriptableObjectInstaller*>* scriptableObjectInstallers, System::Collections::Generic::List_1<Zenject::MonoInstaller*>* installers, System::Collections::Generic::List_1<Zenject::MonoInstaller*>* installerPrefabs);
    // protected System.Void InstallSceneBindings(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> injectableMonoBehaviours)
    // Offset: 0x137E408
    void InstallSceneBindings(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* injectableMonoBehaviours);
    // private System.Void InstallZenjectBinding(Zenject.ZenjectBinding binding)
    // Offset: 0x137E8DC
    void InstallZenjectBinding(Zenject::ZenjectBinding* binding);
    // protected System.Void GetInjectableMonoBehaviours(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> components)
    // Offset: 0xFFFFFFFF
    void GetInjectableMonoBehaviours(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* components);
    // protected System.Void .ctor()
    // Offset: 0x137F030
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Context* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Context::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Context*, creationType>()));
    }
  }; // Zenject.Context
  #pragma pack(pop)
  static check_size<sizeof(Context), 56 + sizeof(System::Collections::Generic::List_1<System::Type*>*)> __Zenject_ContextSizeCheck;
  static_assert(sizeof(Context) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Context*, "Zenject", "Context");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Context::get_Installers
// Il2CppName: get_Installers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller*>* (Zenject::Context::*)()>(&Zenject::Context::get_Installers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "get_Installers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Context::set_Installers
// Il2CppName: set_Installers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Context::*)(System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller*>*)>(&Zenject::Context::set_Installers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "MonoInstaller")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "set_Installers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::Context::get_InstallerPrefabs
// Il2CppName: get_InstallerPrefabs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller*>* (Zenject::Context::*)()>(&Zenject::Context::get_InstallerPrefabs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "get_InstallerPrefabs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Context::set_InstallerPrefabs
// Il2CppName: set_InstallerPrefabs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Context::*)(System::Collections::Generic::IEnumerable_1<Zenject::MonoInstaller*>*)>(&Zenject::Context::set_InstallerPrefabs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "MonoInstaller")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "set_InstallerPrefabs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::Context::get_ScriptableObjectInstallers
// Il2CppName: get_ScriptableObjectInstallers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<Zenject::ScriptableObjectInstaller*>* (Zenject::Context::*)()>(&Zenject::Context::get_ScriptableObjectInstallers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "get_ScriptableObjectInstallers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Context::set_ScriptableObjectInstallers
// Il2CppName: set_ScriptableObjectInstallers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Context::*)(System::Collections::Generic::IEnumerable_1<Zenject::ScriptableObjectInstaller*>*)>(&Zenject::Context::set_ScriptableObjectInstallers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "ScriptableObjectInstaller")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "set_ScriptableObjectInstallers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::Context::get_NormalInstallerTypes
// Il2CppName: get_NormalInstallerTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Type*>* (Zenject::Context::*)()>(&Zenject::Context::get_NormalInstallerTypes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "get_NormalInstallerTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Context::set_NormalInstallerTypes
// Il2CppName: set_NormalInstallerTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Context::*)(System::Collections::Generic::IEnumerable_1<System::Type*>*)>(&Zenject::Context::set_NormalInstallerTypes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "set_NormalInstallerTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::Context::get_NormalInstallers
// Il2CppName: get_NormalInstallers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<Zenject::InstallerBase*>* (Zenject::Context::*)()>(&Zenject::Context::get_NormalInstallers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "get_NormalInstallers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Context::set_NormalInstallers
// Il2CppName: set_NormalInstallers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Context::*)(System::Collections::Generic::IEnumerable_1<Zenject::InstallerBase*>*)>(&Zenject::Context::set_NormalInstallers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "InstallerBase")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "set_NormalInstallers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::Context::get_Container
// Il2CppName: get_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (Zenject::Context::*)()>(&Zenject::Context::get_Container)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Context::GetRootGameObjects
// Il2CppName: GetRootGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* (Zenject::Context::*)()>(&Zenject::Context::GetRootGameObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "GetRootGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Context::AddNormalInstallerType
// Il2CppName: AddNormalInstallerType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Context::*)(System::Type*)>(&Zenject::Context::AddNormalInstallerType)> {
  static const MethodInfo* get() {
    static auto* installerType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "AddNormalInstallerType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{installerType});
  }
};
// Writing MetadataGetter for method: Zenject::Context::AddNormalInstaller
// Il2CppName: AddNormalInstaller
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Context::*)(Zenject::InstallerBase*)>(&Zenject::Context::AddNormalInstaller)> {
  static const MethodInfo* get() {
    static auto* installer = &::il2cpp_utils::GetClassFromName("Zenject", "InstallerBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "AddNormalInstaller", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{installer});
  }
};
// Writing MetadataGetter for method: Zenject::Context::CheckInstallerPrefabTypes
// Il2CppName: CheckInstallerPrefabTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Context::*)(System::Collections::Generic::List_1<Zenject::MonoInstaller*>*, System::Collections::Generic::List_1<Zenject::MonoInstaller*>*)>(&Zenject::Context::CheckInstallerPrefabTypes)> {
  static const MethodInfo* get() {
    static auto* installers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "MonoInstaller")})->byval_arg;
    static auto* installerPrefabs = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "MonoInstaller")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "CheckInstallerPrefabTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{installers, installerPrefabs});
  }
};
// Writing MetadataGetter for method: Zenject::Context::InstallInstallers
// Il2CppName: InstallInstallers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Context::*)()>(&Zenject::Context::InstallInstallers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "InstallInstallers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Context::InstallInstallers
// Il2CppName: InstallInstallers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Context::*)(System::Collections::Generic::List_1<Zenject::InstallerBase*>*, System::Collections::Generic::List_1<System::Type*>*, System::Collections::Generic::List_1<Zenject::ScriptableObjectInstaller*>*, System::Collections::Generic::List_1<Zenject::MonoInstaller*>*, System::Collections::Generic::List_1<Zenject::MonoInstaller*>*)>(&Zenject::Context::InstallInstallers)> {
  static const MethodInfo* get() {
    static auto* normalInstallers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "InstallerBase")})->byval_arg;
    static auto* normalInstallerTypes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    static auto* scriptableObjectInstallers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "ScriptableObjectInstaller")})->byval_arg;
    static auto* installers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "MonoInstaller")})->byval_arg;
    static auto* installerPrefabs = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "MonoInstaller")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "InstallInstallers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{normalInstallers, normalInstallerTypes, scriptableObjectInstallers, installers, installerPrefabs});
  }
};
// Writing MetadataGetter for method: Zenject::Context::InstallSceneBindings
// Il2CppName: InstallSceneBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Context::*)(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>*)>(&Zenject::Context::InstallSceneBindings)> {
  static const MethodInfo* get() {
    static auto* injectableMonoBehaviours = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "InstallSceneBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{injectableMonoBehaviours});
  }
};
// Writing MetadataGetter for method: Zenject::Context::InstallZenjectBinding
// Il2CppName: InstallZenjectBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Context::*)(Zenject::ZenjectBinding*)>(&Zenject::Context::InstallZenjectBinding)> {
  static const MethodInfo* get() {
    static auto* binding = &::il2cpp_utils::GetClassFromName("Zenject", "ZenjectBinding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "InstallZenjectBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binding});
  }
};
// Writing MetadataGetter for method: Zenject::Context::GetInjectableMonoBehaviours
// Il2CppName: GetInjectableMonoBehaviours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Context::*)(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>*)>(&Zenject::Context::GetInjectableMonoBehaviours)> {
  static const MethodInfo* get() {
    static auto* components = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Context*), "GetInjectableMonoBehaviours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{components});
  }
};
// Writing MetadataGetter for method: Zenject::Context::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
