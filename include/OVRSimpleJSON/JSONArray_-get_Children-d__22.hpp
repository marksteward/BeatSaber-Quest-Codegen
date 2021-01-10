// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSimpleJSON.JSONArray
#include "OVRSimpleJSON/JSONArray.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.List`1/Enumerator
#include "System/Collections/Generic/List_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNode
  class JSONNode;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // WARNING Size may be invalid!
  // Autogenerated type: OVRSimpleJSON.JSONArray/<get_Children>d__22
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D85890
  class JSONArray::$get_Children$d__22 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>, public System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private OVRSimpleJSON.JSONNode <>2__current
    // Size: 0x8
    // Offset: 0x18
    OVRSimpleJSON::JSONNode* $$2__current;
    // Field size check
    static_assert(sizeof(OVRSimpleJSON::JSONNode*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public OVRSimpleJSON.JSONArray <>4__this
    // Size: 0x8
    // Offset: 0x28
    OVRSimpleJSON::JSONArray* $$4__this;
    // Field size check
    static_assert(sizeof(OVRSimpleJSON::JSONArray*) == 0x8);
    // private System.Collections.Generic.List`1/Enumerator<OVRSimpleJSON.JSONNode> <>7__wrap1
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    typename System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode*>::Enumerator $$7__wrap1;
    // Creating value type constructor for type: $get_Children$d__22
    $get_Children$d__22(int $$1__state_ = {}, OVRSimpleJSON::JSONNode* $$2__current_ = {}, int $$l__initialThreadId_ = {}, OVRSimpleJSON::JSONArray* $$4__this_ = {}, typename System::Collections::Generic::List_1<OVRSimpleJSON::JSONNode*>::Enumerator $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>
    operator System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*>
    operator System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x12E7598
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONArray::$get_Children$d__22* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONArray::$get_Children$d__22::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONArray::$get_Children$d__22*, creationType>($$1__state)));
    }
    // private System.Void <>m__Finally1()
    // Offset: 0x12E7808
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x12E77EC
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x12E7860
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private OVRSimpleJSON.JSONNode System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current()
    // Offset: 0x12E79C8
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    OVRSimpleJSON::JSONNode* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x12E79D0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x12E7A30
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<OVRSimpleJSON.JSONNode> System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator()
    // Offset: 0x12E7A38
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x12E7AEC
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // OVRSimpleJSON.JSONArray/<get_Children>d__22
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONArray::$get_Children$d__22*, "OVRSimpleJSON", "JSONArray/<get_Children>d__22");
