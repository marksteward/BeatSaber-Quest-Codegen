// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: ISerializationSurrogate
  class ISerializationSurrogate;
  // Forward declaring type: FixupHolderList
  class FixupHolderList;
  // Forward declaring type: LongList
  class LongList;
  // Forward declaring type: ValueTypeFixupInfo
  class ValueTypeFixupInfo;
  // Forward declaring type: TypeLoadExceptionHolder
  class TypeLoadExceptionHolder;
  // Forward declaring type: ObjectManager
  class ObjectManager;
  // Forward declaring type: FixupHolder
  class FixupHolder;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.ObjectHolder
  class ObjectHolder : public ::Il2CppObject {
    public:
    // private System.Object m_object
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* m_object;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Int64 m_id
    // Size: 0x8
    // Offset: 0x18
    int64_t m_id;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int32 m_missingElementsRemaining
    // Size: 0x4
    // Offset: 0x20
    int m_missingElementsRemaining;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_missingDecendents
    // Size: 0x4
    // Offset: 0x24
    int m_missingDecendents;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Runtime.Serialization.SerializationInfo m_serInfo
    // Size: 0x8
    // Offset: 0x28
    System::Runtime::Serialization::SerializationInfo* m_serInfo;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::SerializationInfo*) == 0x8);
    // System.Runtime.Serialization.ISerializationSurrogate m_surrogate
    // Size: 0x8
    // Offset: 0x30
    System::Runtime::Serialization::ISerializationSurrogate* m_surrogate;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::ISerializationSurrogate*) == 0x8);
    // System.Runtime.Serialization.FixupHolderList m_missingElements
    // Size: 0x8
    // Offset: 0x38
    System::Runtime::Serialization::FixupHolderList* m_missingElements;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::FixupHolderList*) == 0x8);
    // System.Runtime.Serialization.LongList m_dependentObjects
    // Size: 0x8
    // Offset: 0x40
    System::Runtime::Serialization::LongList* m_dependentObjects;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::LongList*) == 0x8);
    // System.Runtime.Serialization.ObjectHolder m_next
    // Size: 0x8
    // Offset: 0x48
    System::Runtime::Serialization::ObjectHolder* m_next;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::ObjectHolder*) == 0x8);
    // System.Int32 m_flags
    // Size: 0x4
    // Offset: 0x50
    int m_flags;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_markForFixupWhenAvailable
    // Size: 0x1
    // Offset: 0x54
    bool m_markForFixupWhenAvailable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_markForFixupWhenAvailable and: m_valueFixup
    char __padding10[0x3] = {};
    // private System.Runtime.Serialization.ValueTypeFixupInfo m_valueFixup
    // Size: 0x8
    // Offset: 0x58
    System::Runtime::Serialization::ValueTypeFixupInfo* m_valueFixup;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::ValueTypeFixupInfo*) == 0x8);
    // private System.Runtime.Serialization.TypeLoadExceptionHolder m_typeLoad
    // Size: 0x8
    // Offset: 0x60
    System::Runtime::Serialization::TypeLoadExceptionHolder* m_typeLoad;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::TypeLoadExceptionHolder*) == 0x8);
    // private System.Boolean m_reachable
    // Size: 0x1
    // Offset: 0x68
    bool m_reachable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ObjectHolder
    ObjectHolder(::Il2CppObject* m_object_ = {}, int64_t m_id_ = {}, int m_missingElementsRemaining_ = {}, int m_missingDecendents_ = {}, System::Runtime::Serialization::SerializationInfo* m_serInfo_ = {}, System::Runtime::Serialization::ISerializationSurrogate* m_surrogate_ = {}, System::Runtime::Serialization::FixupHolderList* m_missingElements_ = {}, System::Runtime::Serialization::LongList* m_dependentObjects_ = {}, System::Runtime::Serialization::ObjectHolder* m_next_ = {}, int m_flags_ = {}, bool m_markForFixupWhenAvailable_ = {}, System::Runtime::Serialization::ValueTypeFixupInfo* m_valueFixup_ = {}, System::Runtime::Serialization::TypeLoadExceptionHolder* m_typeLoad_ = {}, bool m_reachable_ = {}) noexcept : m_object{m_object_}, m_id{m_id_}, m_missingElementsRemaining{m_missingElementsRemaining_}, m_missingDecendents{m_missingDecendents_}, m_serInfo{m_serInfo_}, m_surrogate{m_surrogate_}, m_missingElements{m_missingElements_}, m_dependentObjects{m_dependentObjects_}, m_next{m_next_}, m_flags{m_flags_}, m_markForFixupWhenAvailable{m_markForFixupWhenAvailable_}, m_valueFixup{m_valueFixup_}, m_typeLoad{m_typeLoad_}, m_reachable{m_reachable_} {}
    // System.Void .ctor(System.Int64 objID)
    // Offset: 0x1693628
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectHolder* New_ctor(int64_t objID) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::ObjectHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectHolder*, creationType>(objID)));
    }
    // System.Void .ctor(System.Object obj, System.Int64 objID, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.ISerializationSurrogate surrogate, System.Int64 idOfContainingObj, System.Reflection.FieldInfo field, System.Int32[] arrayIndex)
    // Offset: 0x169374C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectHolder* New_ctor(::Il2CppObject* obj, int64_t objID, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainingObj, System::Reflection::FieldInfo* field, ::Array<int>* arrayIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::ObjectHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectHolder*, creationType>(obj, objID, info, surrogate, idOfContainingObj, field, arrayIndex)));
    }
    // System.Void .ctor(System.String obj, System.Int64 objID, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.ISerializationSurrogate surrogate, System.Int64 idOfContainingObj, System.Reflection.FieldInfo field, System.Int32[] arrayIndex)
    // Offset: 0x1693660
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectHolder* New_ctor(::Il2CppString* obj, int64_t objID, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainingObj, System::Reflection::FieldInfo* field, ::Array<int>* arrayIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::ObjectHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectHolder*, creationType>(obj, objID, info, surrogate, idOfContainingObj, field, arrayIndex)));
    }
    // private System.Void IncrementDescendentFixups(System.Int32 amount)
    // Offset: 0x1693B0C
    void IncrementDescendentFixups(int amount);
    // System.Void DecrementFixupsRemaining(System.Runtime.Serialization.ObjectManager manager)
    // Offset: 0x1693B1C
    void DecrementFixupsRemaining(System::Runtime::Serialization::ObjectManager* manager);
    // System.Void RemoveDependency(System.Int64 id)
    // Offset: 0x1693BB0
    void RemoveDependency(int64_t id);
    // System.Void AddFixup(System.Runtime.Serialization.FixupHolder fixup, System.Runtime.Serialization.ObjectManager manager)
    // Offset: 0x1693BC8
    void AddFixup(System::Runtime::Serialization::FixupHolder* fixup, System::Runtime::Serialization::ObjectManager* manager);
    // private System.Void UpdateDescendentDependencyChain(System.Int32 amount, System.Runtime.Serialization.ObjectManager manager)
    // Offset: 0x1693B4C
    void UpdateDescendentDependencyChain(int amount, System::Runtime::Serialization::ObjectManager* manager);
    // System.Void AddDependency(System.Int64 dependentObject)
    // Offset: 0x1693D50
    void AddDependency(int64_t dependentObject);
    // System.Void UpdateData(System.Object obj, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.ISerializationSurrogate surrogate, System.Int64 idOfContainer, System.Reflection.FieldInfo field, System.Int32[] arrayIndex, System.Runtime.Serialization.ObjectManager manager)
    // Offset: 0x1693DD4
    void UpdateData(::Il2CppObject* obj, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainer, System::Reflection::FieldInfo* field, ::Array<int>* arrayIndex, System::Runtime::Serialization::ObjectManager* manager);
    // System.Void MarkForCompletionWhenAvailable()
    // Offset: 0x169403C
    void MarkForCompletionWhenAvailable();
    // System.Void SetFlags()
    // Offset: 0x1693A58
    void SetFlags();
    // System.Boolean get_IsIncompleteObjectReference()
    // Offset: 0x1694048
    bool get_IsIncompleteObjectReference();
    // System.Void set_IsIncompleteObjectReference(System.Boolean value)
    // Offset: 0x1694054
    void set_IsIncompleteObjectReference(bool value);
    // System.Boolean get_RequiresDelayedFixup()
    // Offset: 0x1694070
    bool get_RequiresDelayedFixup();
    // System.Boolean get_RequiresValueTypeFixup()
    // Offset: 0x1693B40
    bool get_RequiresValueTypeFixup();
    // System.Boolean get_ValueTypeFixupPerformed()
    // Offset: 0x1694080
    bool get_ValueTypeFixupPerformed();
    // System.Void set_ValueTypeFixupPerformed(System.Boolean value)
    // Offset: 0x16940B8
    void set_ValueTypeFixupPerformed(bool value);
    // System.Boolean get_HasISerializable()
    // Offset: 0x16940CC
    bool get_HasISerializable();
    // System.Boolean get_HasSurrogate()
    // Offset: 0x16940D8
    bool get_HasSurrogate();
    // System.Boolean get_CanSurrogatedObjectValueChange()
    // Offset: 0x16940E4
    bool get_CanSurrogatedObjectValueChange();
    // System.Boolean get_CanObjectValueChange()
    // Offset: 0x1694190
    bool get_CanObjectValueChange();
    // System.Int32 get_DirectlyDependentObjects()
    // Offset: 0x16941B0
    int get_DirectlyDependentObjects();
    // System.Int32 get_TotalDependentObjects()
    // Offset: 0x16941B8
    int get_TotalDependentObjects();
    // System.Boolean get_Reachable()
    // Offset: 0x16941C4
    bool get_Reachable();
    // System.Void set_Reachable(System.Boolean value)
    // Offset: 0x16941CC
    void set_Reachable(bool value);
    // System.Boolean get_TypeLoadExceptionReachable()
    // Offset: 0x16941D8
    bool get_TypeLoadExceptionReachable();
    // System.Runtime.Serialization.TypeLoadExceptionHolder get_TypeLoadException()
    // Offset: 0x16941E8
    System::Runtime::Serialization::TypeLoadExceptionHolder* get_TypeLoadException();
    // System.Void set_TypeLoadException(System.Runtime.Serialization.TypeLoadExceptionHolder value)
    // Offset: 0x16941F0
    void set_TypeLoadException(System::Runtime::Serialization::TypeLoadExceptionHolder* value);
    // System.Object get_ObjectValue()
    // Offset: 0x16941F8
    ::Il2CppObject* get_ObjectValue();
    // System.Void SetObjectValue(System.Object obj, System.Runtime.Serialization.ObjectManager manager)
    // Offset: 0x1693F6C
    void SetObjectValue(::Il2CppObject* obj, System::Runtime::Serialization::ObjectManager* manager);
    // System.Runtime.Serialization.SerializationInfo get_SerializationInfo()
    // Offset: 0x1694808
    System::Runtime::Serialization::SerializationInfo* get_SerializationInfo();
    // System.Void set_SerializationInfo(System.Runtime.Serialization.SerializationInfo value)
    // Offset: 0x1694810
    void set_SerializationInfo(System::Runtime::Serialization::SerializationInfo* value);
    // System.Runtime.Serialization.ISerializationSurrogate get_Surrogate()
    // Offset: 0x1694818
    System::Runtime::Serialization::ISerializationSurrogate* get_Surrogate();
    // System.Runtime.Serialization.LongList get_DependentObjects()
    // Offset: 0x1694820
    System::Runtime::Serialization::LongList* get_DependentObjects();
    // System.Void set_DependentObjects(System.Runtime.Serialization.LongList value)
    // Offset: 0x1694828
    void set_DependentObjects(System::Runtime::Serialization::LongList* value);
    // System.Boolean get_RequiresSerInfoFixup()
    // Offset: 0x1694830
    bool get_RequiresSerInfoFixup();
    // System.Void set_RequiresSerInfoFixup(System.Boolean value)
    // Offset: 0x169484C
    void set_RequiresSerInfoFixup(bool value);
    // System.Runtime.Serialization.ValueTypeFixupInfo get_ValueFixup()
    // Offset: 0x1694868
    System::Runtime::Serialization::ValueTypeFixupInfo* get_ValueFixup();
    // System.Boolean get_CompletelyFixed()
    // Offset: 0x1694870
    bool get_CompletelyFixed();
    // System.Int64 get_ContainerID()
    // Offset: 0x1693C8C
    int64_t get_ContainerID();
  }; // System.Runtime.Serialization.ObjectHolder
  #pragma pack(pop)
  static check_size<sizeof(ObjectHolder), 104 + sizeof(bool)> __System_Runtime_Serialization_ObjectHolderSizeCheck;
  static_assert(sizeof(ObjectHolder) == 0x69);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ObjectHolder*, "System.Runtime.Serialization", "ObjectHolder");
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::IncrementDescendentFixups
// Il2CppName: IncrementDescendentFixups
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::DecrementFixupsRemaining
// Il2CppName: DecrementFixupsRemaining
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::RemoveDependency
// Il2CppName: RemoveDependency
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::AddFixup
// Il2CppName: AddFixup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::UpdateDescendentDependencyChain
// Il2CppName: UpdateDescendentDependencyChain
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::AddDependency
// Il2CppName: AddDependency
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::UpdateData
// Il2CppName: UpdateData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::MarkForCompletionWhenAvailable
// Il2CppName: MarkForCompletionWhenAvailable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::SetFlags
// Il2CppName: SetFlags
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_IsIncompleteObjectReference
// Il2CppName: get_IsIncompleteObjectReference
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::set_IsIncompleteObjectReference
// Il2CppName: set_IsIncompleteObjectReference
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_RequiresDelayedFixup
// Il2CppName: get_RequiresDelayedFixup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_RequiresValueTypeFixup
// Il2CppName: get_RequiresValueTypeFixup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_ValueTypeFixupPerformed
// Il2CppName: get_ValueTypeFixupPerformed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::set_ValueTypeFixupPerformed
// Il2CppName: set_ValueTypeFixupPerformed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_HasISerializable
// Il2CppName: get_HasISerializable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_HasSurrogate
// Il2CppName: get_HasSurrogate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_CanSurrogatedObjectValueChange
// Il2CppName: get_CanSurrogatedObjectValueChange
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_CanObjectValueChange
// Il2CppName: get_CanObjectValueChange
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_DirectlyDependentObjects
// Il2CppName: get_DirectlyDependentObjects
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_TotalDependentObjects
// Il2CppName: get_TotalDependentObjects
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_Reachable
// Il2CppName: get_Reachable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::set_Reachable
// Il2CppName: set_Reachable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_TypeLoadExceptionReachable
// Il2CppName: get_TypeLoadExceptionReachable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_TypeLoadException
// Il2CppName: get_TypeLoadException
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::set_TypeLoadException
// Il2CppName: set_TypeLoadException
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_ObjectValue
// Il2CppName: get_ObjectValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::SetObjectValue
// Il2CppName: SetObjectValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_SerializationInfo
// Il2CppName: get_SerializationInfo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::set_SerializationInfo
// Il2CppName: set_SerializationInfo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_Surrogate
// Il2CppName: get_Surrogate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_DependentObjects
// Il2CppName: get_DependentObjects
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::set_DependentObjects
// Il2CppName: set_DependentObjects
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_RequiresSerInfoFixup
// Il2CppName: get_RequiresSerInfoFixup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::set_RequiresSerInfoFixup
// Il2CppName: set_RequiresSerInfoFixup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_ValueFixup
// Il2CppName: get_ValueFixup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_CompletelyFixed
// Il2CppName: get_CompletelyFixed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::ObjectHolder::get_ContainerID
// Il2CppName: get_ContainerID
// Cannot perform method pointer template specialization from operators!
