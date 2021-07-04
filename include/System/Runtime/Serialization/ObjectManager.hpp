// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: DeserializationEventHandler
  class DeserializationEventHandler;
  // Forward declaring type: SerializationEventHandler
  class SerializationEventHandler;
  // Forward declaring type: ObjectHolder
  class ObjectHolder;
  // Forward declaring type: ObjectHolderList
  class ObjectHolderList;
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
  // Forward declaring type: FixupHolder
  class FixupHolder;
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: MemberInfo
  class MemberInfo;
  // Forward declaring type: RuntimeConstructorInfo
  class RuntimeConstructorInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.ObjectManager
  // [ComVisibleAttribute] Offset: D7DD4C
  class ObjectManager : public ::Il2CppObject {
    public:
    // private System.Runtime.Serialization.DeserializationEventHandler m_onDeserializationHandler
    // Size: 0x8
    // Offset: 0x10
    System::Runtime::Serialization::DeserializationEventHandler* m_onDeserializationHandler;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::DeserializationEventHandler*) == 0x8);
    // private System.Runtime.Serialization.SerializationEventHandler m_onDeserializedHandler
    // Size: 0x8
    // Offset: 0x18
    System::Runtime::Serialization::SerializationEventHandler* m_onDeserializedHandler;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::SerializationEventHandler*) == 0x8);
    // System.Runtime.Serialization.ObjectHolder[] m_objects
    // Size: 0x8
    // Offset: 0x20
    ::Array<System::Runtime::Serialization::ObjectHolder*>* m_objects;
    // Field size check
    static_assert(sizeof(::Array<System::Runtime::Serialization::ObjectHolder*>*) == 0x8);
    // System.Object m_topObject
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* m_topObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Runtime.Serialization.ObjectHolderList m_specialFixupObjects
    // Size: 0x8
    // Offset: 0x30
    System::Runtime::Serialization::ObjectHolderList* m_specialFixupObjects;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::ObjectHolderList*) == 0x8);
    // System.Int64 m_fixupCount
    // Size: 0x8
    // Offset: 0x38
    int64_t m_fixupCount;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Runtime.Serialization.ISurrogateSelector m_selector
    // Size: 0x8
    // Offset: 0x40
    System::Runtime::Serialization::ISurrogateSelector* m_selector;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::ISurrogateSelector*) == 0x8);
    // System.Runtime.Serialization.StreamingContext m_context
    // Size: 0xC
    // Offset: 0x48
    System::Runtime::Serialization::StreamingContext m_context;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::StreamingContext) == 0xC);
    // Creating value type constructor for type: ObjectManager
    ObjectManager(System::Runtime::Serialization::DeserializationEventHandler* m_onDeserializationHandler_ = {}, System::Runtime::Serialization::SerializationEventHandler* m_onDeserializedHandler_ = {}, ::Array<System::Runtime::Serialization::ObjectHolder*>* m_objects_ = {}, ::Il2CppObject* m_topObject_ = {}, System::Runtime::Serialization::ObjectHolderList* m_specialFixupObjects_ = {}, int64_t m_fixupCount_ = {}, System::Runtime::Serialization::ISurrogateSelector* m_selector_ = {}, System::Runtime::Serialization::StreamingContext m_context_ = {}) noexcept : m_onDeserializationHandler{m_onDeserializationHandler_}, m_onDeserializedHandler{m_onDeserializedHandler_}, m_objects{m_objects_}, m_topObject{m_topObject_}, m_specialFixupObjects{m_specialFixupObjects_}, m_fixupCount{m_fixupCount_}, m_selector{m_selector_}, m_context{m_context_} {}
    // System.Void .ctor(System.Runtime.Serialization.ISurrogateSelector selector, System.Runtime.Serialization.StreamingContext context, System.Boolean checkSecurity, System.Boolean isCrossAppDomain)
    // Offset: 0x16953E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectManager* New_ctor(System::Runtime::Serialization::ISurrogateSelector* selector, System::Runtime::Serialization::StreamingContext context, bool checkSecurity, bool isCrossAppDomain) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::ObjectManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectManager*, creationType>(selector, context, checkSecurity, isCrossAppDomain)));
    }
    // private System.Boolean CanCallGetType(System.Object obj)
    // Offset: 0x169546C
    bool CanCallGetType(::Il2CppObject* obj);
    // System.Void set_TopObject(System.Object value)
    // Offset: 0x1695474
    void set_TopObject(::Il2CppObject* value);
    // System.Object get_TopObject()
    // Offset: 0x169547C
    ::Il2CppObject* get_TopObject();
    // System.Runtime.Serialization.ObjectHolderList get_SpecialFixupObjects()
    // Offset: 0x1695484
    System::Runtime::Serialization::ObjectHolderList* get_SpecialFixupObjects();
    // System.Runtime.Serialization.ObjectHolder FindObjectHolder(System.Int64 objectID)
    // Offset: 0x16954F0
    System::Runtime::Serialization::ObjectHolder* FindObjectHolder(int64_t objectID);
    // System.Runtime.Serialization.ObjectHolder FindOrCreateObjectHolder(System.Int64 objectID)
    // Offset: 0x1693CA4
    System::Runtime::Serialization::ObjectHolder* FindOrCreateObjectHolder(int64_t objectID);
    // private System.Void AddObjectHolder(System.Runtime.Serialization.ObjectHolder holder)
    // Offset: 0x1695554
    void AddObjectHolder(System::Runtime::Serialization::ObjectHolder* holder);
    // private System.Boolean GetCompletionInfo(System.Runtime.Serialization.FixupHolder fixup, out System.Runtime.Serialization.ObjectHolder holder, out System.Object member, System.Boolean bThrowIfMissing)
    // Offset: 0x169569C
    bool GetCompletionInfo(System::Runtime::Serialization::FixupHolder* fixup, System::Runtime::Serialization::ObjectHolder*& holder, ::Il2CppObject*& member, bool bThrowIfMissing);
    // private System.Void FixupSpecialObject(System.Runtime.Serialization.ObjectHolder holder)
    // Offset: 0x1695954
    void FixupSpecialObject(System::Runtime::Serialization::ObjectHolder* holder);
    // private System.Boolean ResolveObjectReference(System.Runtime.Serialization.ObjectHolder holder)
    // Offset: 0x1696450
    bool ResolveObjectReference(System::Runtime::Serialization::ObjectHolder* holder);
    // private System.Boolean DoValueTypeFixup(System.Reflection.FieldInfo memberToFix, System.Runtime.Serialization.ObjectHolder holder, System.Object value)
    // Offset: 0x1695E20
    bool DoValueTypeFixup(System::Reflection::FieldInfo* memberToFix, System::Runtime::Serialization::ObjectHolder* holder, ::Il2CppObject* value);
    // System.Void CompleteObject(System.Runtime.Serialization.ObjectHolder holder, System.Boolean bObjectFullyComplete)
    // Offset: 0x1694200
    void CompleteObject(System::Runtime::Serialization::ObjectHolder* holder, bool bObjectFullyComplete);
    // private System.Void DoNewlyRegisteredObjectFixups(System.Runtime.Serialization.ObjectHolder holder)
    // Offset: 0x1696374
    void DoNewlyRegisteredObjectFixups(System::Runtime::Serialization::ObjectHolder* holder);
    // public System.Object GetObject(System.Int64 objectID)
    // Offset: 0x16967D8
    ::Il2CppObject* GetObject(int64_t objectID);
    // System.Void RegisterString(System.String obj, System.Int64 objectID, System.Runtime.Serialization.SerializationInfo info, System.Int64 idOfContainingObj, System.Reflection.MemberInfo member)
    // Offset: 0x16968C0
    void RegisterString(::Il2CppString* obj, int64_t objectID, System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, System::Reflection::MemberInfo* member);
    // public System.Void RegisterObject(System.Object obj, System.Int64 objectID, System.Runtime.Serialization.SerializationInfo info, System.Int64 idOfContainingObj, System.Reflection.MemberInfo member, System.Int32[] arrayIndex)
    // Offset: 0x16969B4
    void RegisterObject(::Il2CppObject* obj, int64_t objectID, System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, System::Reflection::MemberInfo* member, ::Array<int>* arrayIndex);
    // System.Void CompleteISerializableObject(System.Object obj, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1695BB0
    void CompleteISerializableObject(::Il2CppObject* obj, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // static System.Reflection.RuntimeConstructorInfo GetConstructor(System.RuntimeType t)
    // Offset: 0x1696F0C
    static System::Reflection::RuntimeConstructorInfo* GetConstructor(System::RuntimeType* t);
    // public System.Void DoFixups()
    // Offset: 0x1697244
    void DoFixups();
    // private System.Void RegisterFixup(System.Runtime.Serialization.FixupHolder fixup, System.Int64 objectToBeFixed, System.Int64 objectRequired)
    // Offset: 0x1697534
    void RegisterFixup(System::Runtime::Serialization::FixupHolder* fixup, int64_t objectToBeFixed, int64_t objectRequired);
    // public System.Void RecordFixup(System.Int64 objectToBeFixed, System.Reflection.MemberInfo member, System.Int64 objectRequired)
    // Offset: 0x1697640
    void RecordFixup(int64_t objectToBeFixed, System::Reflection::MemberInfo* member, int64_t objectRequired);
    // public System.Void RecordDelayedFixup(System.Int64 objectToBeFixed, System.String memberName, System.Int64 objectRequired)
    // Offset: 0x16978AC
    void RecordDelayedFixup(int64_t objectToBeFixed, ::Il2CppString* memberName, int64_t objectRequired);
    // public System.Void RecordArrayElementFixup(System.Int64 arrayToBeFixed, System.Int32[] indices, System.Int64 objectRequired)
    // Offset: 0x1697A00
    void RecordArrayElementFixup(int64_t arrayToBeFixed, ::Array<int>* indices, int64_t objectRequired);
    // public System.Void RaiseDeserializationEvent()
    // Offset: 0x1697B54
    void RaiseDeserializationEvent();
    // System.Void AddOnDeserialization(System.Runtime.Serialization.DeserializationEventHandler handler)
    // Offset: 0x1697E1C
    void AddOnDeserialization(System::Runtime::Serialization::DeserializationEventHandler* handler);
    // System.Void AddOnDeserialized(System.Object obj)
    // Offset: 0x1697E9C
    void AddOnDeserialized(::Il2CppObject* obj);
    // System.Void RaiseOnDeserializedEvent(System.Object obj)
    // Offset: 0x16983C0
    void RaiseOnDeserializedEvent(::Il2CppObject* obj);
    // public System.Void RaiseOnDeserializingEvent(System.Object obj)
    // Offset: 0x169868C
    void RaiseOnDeserializingEvent(::Il2CppObject* obj);
  }; // System.Runtime.Serialization.ObjectManager
  #pragma pack(pop)
  static check_size<sizeof(ObjectManager), 72 + sizeof(System::Runtime::Serialization::StreamingContext)> __System_Runtime_Serialization_ObjectManagerSizeCheck;
  static_assert(sizeof(ObjectManager) == 0x54);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ObjectManager*, "System.Runtime.Serialization", "ObjectManager");
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::CanCallGetType
// Il2CppName: CanCallGetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::ObjectManager::*)(::Il2CppObject*)>(&System::Runtime::Serialization::ObjectManager::CanCallGetType)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "CanCallGetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::set_TopObject
// Il2CppName: set_TopObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::Il2CppObject*)>(&System::Runtime::Serialization::ObjectManager::set_TopObject)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "set_TopObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::get_TopObject
// Il2CppName: get_TopObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::ObjectManager::*)()>(&System::Runtime::Serialization::ObjectManager::get_TopObject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "get_TopObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::get_SpecialFixupObjects
// Il2CppName: get_SpecialFixupObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::ObjectHolderList* (System::Runtime::Serialization::ObjectManager::*)()>(&System::Runtime::Serialization::ObjectManager::get_SpecialFixupObjects)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "get_SpecialFixupObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::FindObjectHolder
// Il2CppName: FindObjectHolder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::ObjectHolder* (System::Runtime::Serialization::ObjectManager::*)(int64_t)>(&System::Runtime::Serialization::ObjectManager::FindObjectHolder)> {
  const MethodInfo* get() {
    static auto* objectID = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "FindObjectHolder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectID});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::FindOrCreateObjectHolder
// Il2CppName: FindOrCreateObjectHolder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::ObjectHolder* (System::Runtime::Serialization::ObjectManager::*)(int64_t)>(&System::Runtime::Serialization::ObjectManager::FindOrCreateObjectHolder)> {
  const MethodInfo* get() {
    static auto* objectID = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "FindOrCreateObjectHolder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectID});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::AddObjectHolder
// Il2CppName: AddObjectHolder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(System::Runtime::Serialization::ObjectHolder*)>(&System::Runtime::Serialization::ObjectManager::AddObjectHolder)> {
  const MethodInfo* get() {
    static auto* holder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "AddObjectHolder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{holder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::GetCompletionInfo
// Il2CppName: GetCompletionInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::ObjectManager::*)(System::Runtime::Serialization::FixupHolder*, System::Runtime::Serialization::ObjectHolder*&, ::Il2CppObject*&, bool)>(&System::Runtime::Serialization::ObjectManager::GetCompletionInfo)> {
  const MethodInfo* get() {
    static auto* fixup = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "FixupHolder")->byval_arg;
    static auto* holder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectHolder")->this_arg;
    static auto* member = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    static auto* bThrowIfMissing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "GetCompletionInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixup, holder, member, bThrowIfMissing});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::FixupSpecialObject
// Il2CppName: FixupSpecialObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(System::Runtime::Serialization::ObjectHolder*)>(&System::Runtime::Serialization::ObjectManager::FixupSpecialObject)> {
  const MethodInfo* get() {
    static auto* holder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "FixupSpecialObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{holder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::ResolveObjectReference
// Il2CppName: ResolveObjectReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::ObjectManager::*)(System::Runtime::Serialization::ObjectHolder*)>(&System::Runtime::Serialization::ObjectManager::ResolveObjectReference)> {
  const MethodInfo* get() {
    static auto* holder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "ResolveObjectReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{holder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::DoValueTypeFixup
// Il2CppName: DoValueTypeFixup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::ObjectManager::*)(System::Reflection::FieldInfo*, System::Runtime::Serialization::ObjectHolder*, ::Il2CppObject*)>(&System::Runtime::Serialization::ObjectManager::DoValueTypeFixup)> {
  const MethodInfo* get() {
    static auto* memberToFix = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    static auto* holder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectHolder")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "DoValueTypeFixup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{memberToFix, holder, value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::CompleteObject
// Il2CppName: CompleteObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(System::Runtime::Serialization::ObjectHolder*, bool)>(&System::Runtime::Serialization::ObjectManager::CompleteObject)> {
  const MethodInfo* get() {
    static auto* holder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectHolder")->byval_arg;
    static auto* bObjectFullyComplete = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "CompleteObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{holder, bObjectFullyComplete});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::DoNewlyRegisteredObjectFixups
// Il2CppName: DoNewlyRegisteredObjectFixups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(System::Runtime::Serialization::ObjectHolder*)>(&System::Runtime::Serialization::ObjectManager::DoNewlyRegisteredObjectFixups)> {
  const MethodInfo* get() {
    static auto* holder = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "DoNewlyRegisteredObjectFixups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{holder});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::GetObject
// Il2CppName: GetObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::ObjectManager::*)(int64_t)>(&System::Runtime::Serialization::ObjectManager::GetObject)> {
  const MethodInfo* get() {
    static auto* objectID = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "GetObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectID});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RegisterString
// Il2CppName: RegisterString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::Il2CppString*, int64_t, System::Runtime::Serialization::SerializationInfo*, int64_t, System::Reflection::MemberInfo*)>(&System::Runtime::Serialization::ObjectManager::RegisterString)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* objectID = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* idOfContainingObj = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* member = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RegisterString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, objectID, info, idOfContainingObj, member});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RegisterObject
// Il2CppName: RegisterObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::Il2CppObject*, int64_t, System::Runtime::Serialization::SerializationInfo*, int64_t, System::Reflection::MemberInfo*, ::Array<int>*)>(&System::Runtime::Serialization::ObjectManager::RegisterObject)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* objectID = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* idOfContainingObj = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* member = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    static auto* arrayIndex = &classof(::Array<::Array<int>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RegisterObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, objectID, info, idOfContainingObj, member, arrayIndex});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::CompleteISerializableObject
// Il2CppName: CompleteISerializableObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::ObjectManager::CompleteISerializableObject)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "CompleteISerializableObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, info, context});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::GetConstructor
// Il2CppName: GetConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::RuntimeConstructorInfo* (*)(System::RuntimeType*)>(&System::Runtime::Serialization::ObjectManager::GetConstructor)> {
  const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "GetConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::DoFixups
// Il2CppName: DoFixups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)()>(&System::Runtime::Serialization::ObjectManager::DoFixups)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "DoFixups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RegisterFixup
// Il2CppName: RegisterFixup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(System::Runtime::Serialization::FixupHolder*, int64_t, int64_t)>(&System::Runtime::Serialization::ObjectManager::RegisterFixup)> {
  const MethodInfo* get() {
    static auto* fixup = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "FixupHolder")->byval_arg;
    static auto* objectToBeFixed = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* objectRequired = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RegisterFixup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixup, objectToBeFixed, objectRequired});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RecordFixup
// Il2CppName: RecordFixup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(int64_t, System::Reflection::MemberInfo*, int64_t)>(&System::Runtime::Serialization::ObjectManager::RecordFixup)> {
  const MethodInfo* get() {
    static auto* objectToBeFixed = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* member = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    static auto* objectRequired = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RecordFixup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectToBeFixed, member, objectRequired});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RecordDelayedFixup
// Il2CppName: RecordDelayedFixup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(int64_t, ::Il2CppString*, int64_t)>(&System::Runtime::Serialization::ObjectManager::RecordDelayedFixup)> {
  const MethodInfo* get() {
    static auto* objectToBeFixed = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* memberName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* objectRequired = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RecordDelayedFixup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectToBeFixed, memberName, objectRequired});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RecordArrayElementFixup
// Il2CppName: RecordArrayElementFixup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(int64_t, ::Array<int>*, int64_t)>(&System::Runtime::Serialization::ObjectManager::RecordArrayElementFixup)> {
  const MethodInfo* get() {
    static auto* arrayToBeFixed = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* indices = &classof(::Array<::Array<int>*>*)->byval_arg;
    static auto* objectRequired = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RecordArrayElementFixup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arrayToBeFixed, indices, objectRequired});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RaiseDeserializationEvent
// Il2CppName: RaiseDeserializationEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)()>(&System::Runtime::Serialization::ObjectManager::RaiseDeserializationEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RaiseDeserializationEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::AddOnDeserialization
// Il2CppName: AddOnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(System::Runtime::Serialization::DeserializationEventHandler*)>(&System::Runtime::Serialization::ObjectManager::AddOnDeserialization)> {
  const MethodInfo* get() {
    static auto* handler = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "DeserializationEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "AddOnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handler});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::AddOnDeserialized
// Il2CppName: AddOnDeserialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::Il2CppObject*)>(&System::Runtime::Serialization::ObjectManager::AddOnDeserialized)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "AddOnDeserialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RaiseOnDeserializedEvent
// Il2CppName: RaiseOnDeserializedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::Il2CppObject*)>(&System::Runtime::Serialization::ObjectManager::RaiseOnDeserializedEvent)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RaiseOnDeserializedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectManager::RaiseOnDeserializingEvent
// Il2CppName: RaiseOnDeserializingEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectManager::*)(::Il2CppObject*)>(&System::Runtime::Serialization::ObjectManager::RaiseOnDeserializingEvent)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ObjectManager*), "RaiseOnDeserializingEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
