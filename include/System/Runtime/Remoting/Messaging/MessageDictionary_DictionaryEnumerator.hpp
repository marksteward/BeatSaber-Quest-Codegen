// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.MessageDictionary
#include "System/Runtime/Remoting/Messaging/MessageDictionary.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: DictionaryEntry
  struct DictionaryEntry;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.MessageDictionary/DictionaryEnumerator
  class MessageDictionary::DictionaryEnumerator : public ::Il2CppObject/*, public System::Collections::IDictionaryEnumerator*/ {
    public:
    // private System.Runtime.Remoting.Messaging.MessageDictionary _methodDictionary
    // Size: 0x8
    // Offset: 0x10
    System::Runtime::Remoting::Messaging::MessageDictionary* methodDictionary;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::MessageDictionary*) == 0x8);
    // private System.Collections.IDictionaryEnumerator _hashtableEnum
    // Size: 0x8
    // Offset: 0x18
    System::Collections::IDictionaryEnumerator* hashtableEnum;
    // Field size check
    static_assert(sizeof(System::Collections::IDictionaryEnumerator*) == 0x8);
    // private System.Int32 _posMethod
    // Size: 0x4
    // Offset: 0x20
    int posMethod;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DictionaryEnumerator
    DictionaryEnumerator(System::Runtime::Remoting::Messaging::MessageDictionary* methodDictionary_ = {}, System::Collections::IDictionaryEnumerator* hashtableEnum_ = {}, int posMethod_ = {}) noexcept : methodDictionary{methodDictionary_}, hashtableEnum{hashtableEnum_}, posMethod{posMethod_} {}
    // Creating interface conversion operator: operator System::Collections::IDictionaryEnumerator
    operator System::Collections::IDictionaryEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IDictionaryEnumerator*>(this);
    }
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.MessageDictionary methodDictionary)
    // Offset: 0x188FF0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageDictionary::DictionaryEnumerator* New_ctor(System::Runtime::Remoting::Messaging::MessageDictionary* methodDictionary) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageDictionary::DictionaryEnumerator*, creationType>(methodDictionary)));
    }
    // public System.Object get_Current()
    // Offset: 0x1890068
    ::Il2CppObject* get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x1890248
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x189040C
    void Reset();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0x18900D4
    System::Collections::DictionaryEntry get_Entry();
    // public System.Object get_Key()
    // Offset: 0x18904C8
    ::Il2CppObject* get_Key();
    // public System.Object get_Value()
    // Offset: 0x18904CC
    ::Il2CppObject* get_Value();
  }; // System.Runtime.Remoting.Messaging.MessageDictionary/DictionaryEnumerator
  #pragma pack(pop)
  static check_size<sizeof(MessageDictionary::DictionaryEnumerator), 32 + sizeof(int)> __System_Runtime_Remoting_Messaging_MessageDictionary_DictionaryEnumeratorSizeCheck;
  static_assert(sizeof(MessageDictionary::DictionaryEnumerator) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator*, "System.Runtime.Remoting.Messaging", "MessageDictionary/DictionaryEnumerator");
