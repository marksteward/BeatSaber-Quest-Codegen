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
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.LongList
  class LongList : public ::Il2CppObject {
    public:
    // private System.Int64[] m_values
    // Size: 0x8
    // Offset: 0x10
    ::Array<int64_t>* m_values;
    // Field size check
    static_assert(sizeof(::Array<int64_t>*) == 0x8);
    // private System.Int32 m_count
    // Size: 0x4
    // Offset: 0x18
    int m_count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_totalItems
    // Size: 0x4
    // Offset: 0x1C
    int m_totalItems;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_currentItem
    // Size: 0x4
    // Offset: 0x20
    int m_currentItem;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LongList
    LongList(::Array<int64_t>* m_values_ = {}, int m_count_ = {}, int m_totalItems_ = {}, int m_currentItem_ = {}) noexcept : m_values{m_values_}, m_count{m_count_}, m_totalItems{m_totalItems_}, m_currentItem{m_currentItem_} {}
    // System.Void .ctor(System.Int32 startingSize)
    // Offset: 0x1502258
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LongList* New_ctor(int startingSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::LongList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LongList*, creationType>(startingSize)));
    }
    // System.Void Add(System.Int64 value)
    // Offset: 0x15022CC
    void Add(int64_t value);
    // System.Int32 get_Count()
    // Offset: 0x15023E8
    int get_Count();
    // System.Void StartEnumeration()
    // Offset: 0x15023F0
    void StartEnumeration();
    // System.Boolean MoveNext()
    // Offset: 0x15023FC
    bool MoveNext();
    // System.Int64 get_Current()
    // Offset: 0x1502464
    int64_t get_Current();
    // System.Boolean RemoveElement(System.Int64 value)
    // Offset: 0x15024A4
    bool RemoveElement(int64_t value);
    // private System.Void EnlargeArray()
    // Offset: 0x1502358
    void EnlargeArray();
    // System.Void .ctor()
    // Offset: 0x1502250
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LongList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::LongList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LongList*, creationType>()));
    }
  }; // System.Runtime.Serialization.LongList
  #pragma pack(pop)
  static check_size<sizeof(LongList), 32 + sizeof(int)> __System_Runtime_Serialization_LongListSizeCheck;
  static_assert(sizeof(LongList) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::LongList*, "System.Runtime.Serialization", "LongList");
