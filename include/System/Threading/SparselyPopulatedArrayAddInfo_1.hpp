// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SparselyPopulatedArrayFragment`1<T>
  template<typename T>
  class SparselyPopulatedArrayFragment_1;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.SparselyPopulatedArrayAddInfo`1
  template<typename T>
  struct SparselyPopulatedArrayAddInfo_1 : public System::ValueType {
    public:
    // private System.Threading.SparselyPopulatedArrayFragment`1<T> m_source
    // Offset: 0x0
    System::Threading::SparselyPopulatedArrayFragment_1<T>* m_source;
    // private System.Int32 m_index
    // Offset: 0x0
    int m_index;
    // Creating value type constructor for type: SparselyPopulatedArrayAddInfo_1
    constexpr SparselyPopulatedArrayAddInfo_1(System::Threading::SparselyPopulatedArrayFragment_1<T>* m_source_ = {}, int m_index_ = {}) noexcept : m_source{m_source_}, m_index{m_index_} {}
    // System.Void .ctor(System.Threading.SparselyPopulatedArrayFragment`1<T> source, System.Int32 index)
    // Offset: 0xFFFFFFFF
    // ABORTED: conflicts with another method.  SparselyPopulatedArrayAddInfo_1(System::Threading::SparselyPopulatedArrayFragment_1<T>* source, int index)
    // System.Threading.SparselyPopulatedArrayFragment`1<T> get_Source()
    // Offset: 0xFFFFFFFF
    System::Threading::SparselyPopulatedArrayFragment_1<T>* get_Source() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::SparselyPopulatedArrayFragment_1<T>*>(*this, "get_Source"));
    }
    // System.Int32 get_Index()
    // Offset: 0xFFFFFFFF
    int get_Index() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "get_Index"));
    }
  }; // System.Threading.SparselyPopulatedArrayAddInfo`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Threading::SparselyPopulatedArrayAddInfo_1, "System.Threading", "SparselyPopulatedArrayAddInfo`1");
#pragma pack(pop)
