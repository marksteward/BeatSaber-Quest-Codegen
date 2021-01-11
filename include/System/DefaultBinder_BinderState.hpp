// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DefaultBinder
#include "System/DefaultBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: System.DefaultBinder/BinderState
  // [] Offset: FFFFFFFF
  class DefaultBinder::BinderState : public ::Il2CppObject {
    public:
    // System.Int32[] m_argsMap
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* m_argsMap;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Int32 m_originalSize
    // Size: 0x4
    // Offset: 0x18
    int m_originalSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean m_isParamArray
    // Size: 0x1
    // Offset: 0x1C
    bool m_isParamArray;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: BinderState
    BinderState(::Array<int>* m_argsMap_ = {}, int m_originalSize_ = {}, bool m_isParamArray_ = {}) noexcept : m_argsMap{m_argsMap_}, m_originalSize{m_originalSize_}, m_isParamArray{m_isParamArray_} {}
    // System.Void .ctor(System.Int32[] argsMap, System.Int32 originalSize, System.Boolean isParamArray)
    // Offset: 0x1672270
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultBinder::BinderState* New_ctor(::Array<int>* argsMap, int originalSize, bool isParamArray) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::DefaultBinder::BinderState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultBinder::BinderState*, creationType>(argsMap, originalSize, isParamArray)));
    }
  }; // System.DefaultBinder/BinderState
  static check_size<sizeof(DefaultBinder::BinderState), 28 + sizeof(bool)> __System_DefaultBinder_BinderStateSizeCheck;
  static_assert(sizeof(DefaultBinder::BinderState) == 0x1D);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::DefaultBinder::BinderState*, "System", "DefaultBinder/BinderState");
