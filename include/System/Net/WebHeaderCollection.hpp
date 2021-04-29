// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Specialized.NameValueCollection
#include "System/Collections/Specialized/NameValueCollection.hpp"
// Including type: System.Net.WebHeaderCollectionType
#include "System/Net/WebHeaderCollectionType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpRequestHeader
  struct HttpRequestHeader;
  // Forward declaring type: HeaderInfoTable
  class HeaderInfoTable;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x72
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebHeaderCollection
  // [ComVisibleAttribute] Offset: CB2DA4
  // [DefaultMemberAttribute] Offset: CB2DA4
  class WebHeaderCollection : public System::Collections::Specialized::NameValueCollection {
    public:
    // Nested type: System::Net::WebHeaderCollection::RfcChar
    struct RfcChar;
    // Size: 0x1
    #pragma pack(push, 1)
    // Autogenerated type: System.Net.WebHeaderCollection/RfcChar
    struct RfcChar/*, public System::Enum*/ {
      public:
      // public System.Byte value__
      // Size: 0x1
      // Offset: 0x0
      uint8_t value;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      // Creating value type constructor for type: RfcChar
      constexpr RfcChar(uint8_t value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return value;
      }
      // static field const value: static public System.Net.WebHeaderCollection/RfcChar High
      static constexpr const uint8_t High = 0u;
      // Get static field: static public System.Net.WebHeaderCollection/RfcChar High
      static System::Net::WebHeaderCollection::RfcChar _get_High();
      // Set static field: static public System.Net.WebHeaderCollection/RfcChar High
      static void _set_High(System::Net::WebHeaderCollection::RfcChar value);
      // static field const value: static public System.Net.WebHeaderCollection/RfcChar Reg
      static constexpr const uint8_t Reg = 1u;
      // Get static field: static public System.Net.WebHeaderCollection/RfcChar Reg
      static System::Net::WebHeaderCollection::RfcChar _get_Reg();
      // Set static field: static public System.Net.WebHeaderCollection/RfcChar Reg
      static void _set_Reg(System::Net::WebHeaderCollection::RfcChar value);
      // static field const value: static public System.Net.WebHeaderCollection/RfcChar Ctl
      static constexpr const uint8_t Ctl = 2u;
      // Get static field: static public System.Net.WebHeaderCollection/RfcChar Ctl
      static System::Net::WebHeaderCollection::RfcChar _get_Ctl();
      // Set static field: static public System.Net.WebHeaderCollection/RfcChar Ctl
      static void _set_Ctl(System::Net::WebHeaderCollection::RfcChar value);
      // static field const value: static public System.Net.WebHeaderCollection/RfcChar CR
      static constexpr const uint8_t CR = 3u;
      // Get static field: static public System.Net.WebHeaderCollection/RfcChar CR
      static System::Net::WebHeaderCollection::RfcChar _get_CR();
      // Set static field: static public System.Net.WebHeaderCollection/RfcChar CR
      static void _set_CR(System::Net::WebHeaderCollection::RfcChar value);
      // static field const value: static public System.Net.WebHeaderCollection/RfcChar LF
      static constexpr const uint8_t LF = 4u;
      // Get static field: static public System.Net.WebHeaderCollection/RfcChar LF
      static System::Net::WebHeaderCollection::RfcChar _get_LF();
      // Set static field: static public System.Net.WebHeaderCollection/RfcChar LF
      static void _set_LF(System::Net::WebHeaderCollection::RfcChar value);
      // static field const value: static public System.Net.WebHeaderCollection/RfcChar WS
      static constexpr const uint8_t WS = 5u;
      // Get static field: static public System.Net.WebHeaderCollection/RfcChar WS
      static System::Net::WebHeaderCollection::RfcChar _get_WS();
      // Set static field: static public System.Net.WebHeaderCollection/RfcChar WS
      static void _set_WS(System::Net::WebHeaderCollection::RfcChar value);
      // static field const value: static public System.Net.WebHeaderCollection/RfcChar Colon
      static constexpr const uint8_t Colon = 6u;
      // Get static field: static public System.Net.WebHeaderCollection/RfcChar Colon
      static System::Net::WebHeaderCollection::RfcChar _get_Colon();
      // Set static field: static public System.Net.WebHeaderCollection/RfcChar Colon
      static void _set_Colon(System::Net::WebHeaderCollection::RfcChar value);
      // static field const value: static public System.Net.WebHeaderCollection/RfcChar Delim
      static constexpr const uint8_t Delim = 7u;
      // Get static field: static public System.Net.WebHeaderCollection/RfcChar Delim
      static System::Net::WebHeaderCollection::RfcChar _get_Delim();
      // Set static field: static public System.Net.WebHeaderCollection/RfcChar Delim
      static void _set_Delim(System::Net::WebHeaderCollection::RfcChar value);
    }; // System.Net.WebHeaderCollection/RfcChar
    #pragma pack(pop)
    static check_size<sizeof(WebHeaderCollection::RfcChar), 0 + sizeof(uint8_t)> __System_Net_WebHeaderCollection_RfcCharSizeCheck;
    static_assert(sizeof(WebHeaderCollection::RfcChar) == 0x1);
    // private System.String[] m_CommonHeaders
    // Size: 0x8
    // Offset: 0x58
    ::Array<::Il2CppString*>* m_CommonHeaders;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.Int32 m_NumCommonHeaders
    // Size: 0x4
    // Offset: 0x60
    int m_NumCommonHeaders;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_NumCommonHeaders and: m_InnerCollection
    char __padding1[0x4] = {};
    // private System.Collections.Specialized.NameValueCollection m_InnerCollection
    // Size: 0x8
    // Offset: 0x68
    System::Collections::Specialized::NameValueCollection* m_InnerCollection;
    // Field size check
    static_assert(sizeof(System::Collections::Specialized::NameValueCollection*) == 0x8);
    // private System.Net.WebHeaderCollectionType m_Type
    // Size: 0x2
    // Offset: 0x70
    System::Net::WebHeaderCollectionType m_Type;
    // Field size check
    static_assert(sizeof(System::Net::WebHeaderCollectionType) == 0x2);
    // Creating value type constructor for type: WebHeaderCollection
    WebHeaderCollection(::Array<::Il2CppString*>* m_CommonHeaders_ = {}, int m_NumCommonHeaders_ = {}, System::Collections::Specialized::NameValueCollection* m_InnerCollection_ = {}, System::Net::WebHeaderCollectionType m_Type_ = {}) noexcept : m_CommonHeaders{m_CommonHeaders_}, m_NumCommonHeaders{m_NumCommonHeaders_}, m_InnerCollection{m_InnerCollection_}, m_Type{m_Type_} {}
    // Get static field: static private readonly System.Net.HeaderInfoTable HInfo
    static System::Net::HeaderInfoTable* _get_HInfo();
    // Set static field: static private readonly System.Net.HeaderInfoTable HInfo
    static void _set_HInfo(System::Net::HeaderInfoTable* value);
    // Get static field: static private readonly System.String[] s_CommonHeaderNames
    static ::Array<::Il2CppString*>* _get_s_CommonHeaderNames();
    // Set static field: static private readonly System.String[] s_CommonHeaderNames
    static void _set_s_CommonHeaderNames(::Array<::Il2CppString*>* value);
    // Get static field: static private readonly System.SByte[] s_CommonHeaderHints
    static ::Array<int8_t>* _get_s_CommonHeaderHints();
    // Set static field: static private readonly System.SByte[] s_CommonHeaderHints
    static void _set_s_CommonHeaderHints(::Array<int8_t>* value);
    // Get static field: static private readonly System.Char[] HttpTrimCharacters
    static ::Array<::Il2CppChar>* _get_HttpTrimCharacters();
    // Set static field: static private readonly System.Char[] HttpTrimCharacters
    static void _set_HttpTrimCharacters(::Array<::Il2CppChar>* value);
    // Get static field: static private System.Net.WebHeaderCollection/RfcChar[] RfcCharMap
    static ::Array<System::Net::WebHeaderCollection::RfcChar>* _get_RfcCharMap();
    // Set static field: static private System.Net.WebHeaderCollection/RfcChar[] RfcCharMap
    static void _set_RfcCharMap(::Array<System::Net::WebHeaderCollection::RfcChar>* value);
    // private System.Void NormalizeCommonHeaders()
    // Offset: 0x1431F24
    void NormalizeCommonHeaders();
    // private System.Collections.Specialized.NameValueCollection get_InnerCollection()
    // Offset: 0x1432044
    System::Collections::Specialized::NameValueCollection* get_InnerCollection();
    // static System.Boolean AllowMultiValues(System.String name)
    // Offset: 0x142A944
    static bool AllowMultiValues(::Il2CppString* name);
    // private System.Boolean get_AllowHttpRequestHeader()
    // Offset: 0x14320EC
    bool get_AllowHttpRequestHeader();
    // public System.Void Remove(System.Net.HttpRequestHeader header)
    // Offset: 0x1432124
    void Remove(System::Net::HttpRequestHeader header);
    // System.Void AddInternal(System.String name, System.String value)
    // Offset: 0x142A9F4
    void AddInternal(::Il2CppString* name, ::Il2CppString* value);
    // System.Void ChangeInternal(System.String name, System.String value)
    // Offset: 0x1432224
    void ChangeInternal(::Il2CppString* name, ::Il2CppString* value);
    // System.Void RemoveInternal(System.String name)
    // Offset: 0x1432284
    void RemoveInternal(::Il2CppString* name);
    // static System.String CheckBadChars(System.String name, System.Boolean isHeaderValue)
    // Offset: 0x14322E4
    static ::Il2CppString* CheckBadChars(::Il2CppString* name, bool isHeaderValue);
    // static System.Boolean ContainsNonAsciiChars(System.String token)
    // Offset: 0x1432660
    static bool ContainsNonAsciiChars(::Il2CppString* token);
    // System.Void ThrowOnRestrictedHeader(System.String headerName)
    // Offset: 0x14326E8
    void ThrowOnRestrictedHeader(::Il2CppString* headerName);
    // public System.Void Add(System.String header)
    // Offset: 0x1428A08
    void Add(::Il2CppString* header);
    // System.Void SetInternal(System.String name, System.String value)
    // Offset: 0x142AA54
    void SetInternal(::Il2CppString* name, ::Il2CppString* value);
    // static System.String GetAsString(System.Collections.Specialized.NameValueCollection cc, System.Boolean winInetCompat, System.Boolean forTrace)
    // Offset: 0x1432FF4
    static ::Il2CppString* GetAsString(System::Collections::Specialized::NameValueCollection* cc, bool winInetCompat, bool forTrace);
    // System.Void .ctor(System.Net.WebHeaderCollectionType type)
    // Offset: 0x1433294
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebHeaderCollection* New_ctor(System::Net::WebHeaderCollectionType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebHeaderCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebHeaderCollection*, creationType>(type)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x14336A8
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.Void Add(System.String name, System.String value)
    // Offset: 0x1432874
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.Void NameValueCollection::Add(System.String name, System.String value)
    void Add(::Il2CppString* name, ::Il2CppString* value);
    // public override System.Void Set(System.String name, System.String value)
    // Offset: 0x1432A2C
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.Void NameValueCollection::Set(System.String name, System.String value)
    void Set(::Il2CppString* name, ::Il2CppString* value);
    // public override System.Void Remove(System.String name)
    // Offset: 0x1432C4C
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.Void NameValueCollection::Remove(System.String name)
    void Remove(::Il2CppString* name);
    // public override System.String[] GetValues(System.String header)
    // Offset: 0x1432D84
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.String[] NameValueCollection::GetValues(System.String header)
    ::Array<::Il2CppString*>* GetValues(::Il2CppString* header);
    // public override System.String ToString()
    // Offset: 0x1432F88
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x14288F0
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.Void NameValueCollection::.ctor()
    // Base method: System.Void NameObjectCollectionBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebHeaderCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebHeaderCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebHeaderCollection*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x1433378
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.Void NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebHeaderCollection* New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebHeaderCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebHeaderCollection*, creationType>(serializationInfo, streamingContext)));
    }
    // public override System.Void OnDeserialization(System.Object sender)
    // Offset: 0x143352C
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::OnDeserialization(System.Object sender)
    void OnDeserialization(::Il2CppObject* sender);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x1433530
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.String Get(System.String name)
    // Offset: 0x14336B4
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.String NameValueCollection::Get(System.String name)
    ::Il2CppString* Get(::Il2CppString* name);
    // public override System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1433A18
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Collections.IEnumerator NameObjectCollectionBase::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // public override System.Int32 get_Count()
    // Offset: 0x1433A94
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Int32 NameObjectCollectionBase::get_Count()
    int get_Count();
    // public override System.String Get(System.Int32 index)
    // Offset: 0x1433ACC
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.String NameValueCollection::Get(System.Int32 index)
    ::Il2CppString* Get(int index);
    // public override System.String[] GetValues(System.Int32 index)
    // Offset: 0x1433B10
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.String[] NameValueCollection::GetValues(System.Int32 index)
    ::Array<::Il2CppString*>* GetValues(int index);
    // public override System.String GetKey(System.Int32 index)
    // Offset: 0x1433B54
    // Implemented from: System.Collections.Specialized.NameValueCollection
    // Base method: System.String NameValueCollection::GetKey(System.Int32 index)
    ::Il2CppString* GetKey(int index);
    // static private System.Void .cctor()
    // Offset: 0x1433B98
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::.cctor()
    static void _cctor();
  }; // System.Net.WebHeaderCollection
  #pragma pack(pop)
  static check_size<sizeof(WebHeaderCollection), 112 + sizeof(System::Net::WebHeaderCollectionType)> __System_Net_WebHeaderCollectionSizeCheck;
  static_assert(sizeof(WebHeaderCollection) == 0x72);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebHeaderCollection*, "System.Net", "WebHeaderCollection");
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebHeaderCollection::RfcChar, "System.Net", "WebHeaderCollection/RfcChar");
