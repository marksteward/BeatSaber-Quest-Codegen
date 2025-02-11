// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Globalization.Unicode.CodePointIndexer
  // [TokenAttribute] Offset: FFFFFFFF
  class CodePointIndexer : public ::Il2CppObject {
    public:
    // Nested type: Mono::Globalization::Unicode::CodePointIndexer::TableRange
    struct TableRange;
    // Size: 0x14
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Mono.Globalization.Unicode.CodePointIndexer/Mono.Globalization.Unicode.TableRange
    // [TokenAttribute] Offset: FFFFFFFF
    struct TableRange/*, public System::ValueType*/ {
      public:
      // public readonly System.Int32 Start
      // Size: 0x4
      // Offset: 0x0
      int Start;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public readonly System.Int32 End
      // Size: 0x4
      // Offset: 0x4
      int End;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public readonly System.Int32 Count
      // Size: 0x4
      // Offset: 0x8
      int Count;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public readonly System.Int32 IndexStart
      // Size: 0x4
      // Offset: 0xC
      int IndexStart;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public readonly System.Int32 IndexEnd
      // Size: 0x4
      // Offset: 0x10
      int IndexEnd;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: TableRange
      constexpr TableRange(int Start_ = {}, int End_ = {}, int Count_ = {}, int IndexStart_ = {}, int IndexEnd_ = {}) noexcept : Start{Start_}, End{End_}, Count{Count_}, IndexStart{IndexStart_}, IndexEnd{IndexEnd_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field: public readonly System.Int32 Start
      int _get_Start();
      // Set instance field: public readonly System.Int32 Start
      void _set_Start(int value);
      // Get instance field: public readonly System.Int32 End
      int _get_End();
      // Set instance field: public readonly System.Int32 End
      void _set_End(int value);
      // Get instance field: public readonly System.Int32 Count
      int _get_Count();
      // Set instance field: public readonly System.Int32 Count
      void _set_Count(int value);
      // Get instance field: public readonly System.Int32 IndexStart
      int _get_IndexStart();
      // Set instance field: public readonly System.Int32 IndexStart
      void _set_IndexStart(int value);
      // Get instance field: public readonly System.Int32 IndexEnd
      int _get_IndexEnd();
      // Set instance field: public readonly System.Int32 IndexEnd
      void _set_IndexEnd(int value);
      // public System.Void .ctor(System.Int32 start, System.Int32 end, System.Int32 indexStart)
      // Offset: 0xD80D04
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      TableRange(int start, int end, int indexStart) {
        static auto ___internal__logger = ::Logger::get().WithContext("Mono::Globalization::Unicode::CodePointIndexer::TableRange::.ctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(start), ::il2cpp_utils::ExtractType(end), ::il2cpp_utils::ExtractType(indexStart)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, start, end, indexStart);
      }
    }; // Mono.Globalization.Unicode.CodePointIndexer/Mono.Globalization.Unicode.TableRange
    #pragma pack(pop)
    static check_size<sizeof(CodePointIndexer::TableRange), 16 + sizeof(int)> __Mono_Globalization_Unicode_CodePointIndexer_TableRangeSizeCheck;
    static_assert(sizeof(CodePointIndexer::TableRange) == 0x14);
    // private readonly Mono.Globalization.Unicode.CodePointIndexer/Mono.Globalization.Unicode.TableRange[] ranges
    // Size: 0x8
    // Offset: 0x10
    ::Array<Mono::Globalization::Unicode::CodePointIndexer::TableRange>* ranges;
    // Field size check
    static_assert(sizeof(::Array<Mono::Globalization::Unicode::CodePointIndexer::TableRange>*) == 0x8);
    // public readonly System.Int32 TotalCount
    // Size: 0x4
    // Offset: 0x18
    int TotalCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 defaultIndex
    // Size: 0x4
    // Offset: 0x1C
    int defaultIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 defaultCP
    // Size: 0x4
    // Offset: 0x20
    int defaultCP;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CodePointIndexer
    CodePointIndexer(::Array<Mono::Globalization::Unicode::CodePointIndexer::TableRange>* ranges_ = {}, int TotalCount_ = {}, int defaultIndex_ = {}, int defaultCP_ = {}) noexcept : ranges{ranges_}, TotalCount{TotalCount_}, defaultIndex{defaultIndex_}, defaultCP{defaultCP_} {}
    // Get instance field: private readonly Mono.Globalization.Unicode.CodePointIndexer/Mono.Globalization.Unicode.TableRange[] ranges
    ::Array<Mono::Globalization::Unicode::CodePointIndexer::TableRange>* _get_ranges();
    // Set instance field: private readonly Mono.Globalization.Unicode.CodePointIndexer/Mono.Globalization.Unicode.TableRange[] ranges
    void _set_ranges(::Array<Mono::Globalization::Unicode::CodePointIndexer::TableRange>* value);
    // Get instance field: public readonly System.Int32 TotalCount
    int _get_TotalCount();
    // Set instance field: public readonly System.Int32 TotalCount
    void _set_TotalCount(int value);
    // Get instance field: private System.Int32 defaultIndex
    int _get_defaultIndex();
    // Set instance field: private System.Int32 defaultIndex
    void _set_defaultIndex(int value);
    // Get instance field: private System.Int32 defaultCP
    int _get_defaultCP();
    // Set instance field: private System.Int32 defaultCP
    void _set_defaultCP(int value);
    // public System.Void .ctor(System.Int32[] starts, System.Int32[] ends, System.Int32 defaultIndex, System.Int32 defaultCP)
    // Offset: 0x16CA5C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CodePointIndexer* New_ctor(::Array<int>* starts, ::Array<int>* ends, int defaultIndex, int defaultCP) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Globalization::Unicode::CodePointIndexer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CodePointIndexer*, creationType>(starts, ends, defaultIndex, defaultCP)));
    }
    // public System.Int32 ToIndex(System.Int32 cp)
    // Offset: 0x16CA754
    int ToIndex(int cp);
  }; // Mono.Globalization.Unicode.CodePointIndexer
  #pragma pack(pop)
  static check_size<sizeof(CodePointIndexer), 32 + sizeof(int)> __Mono_Globalization_Unicode_CodePointIndexerSizeCheck;
  static_assert(sizeof(CodePointIndexer) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::CodePointIndexer*, "Mono.Globalization.Unicode", "CodePointIndexer");
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::CodePointIndexer::TableRange, "Mono.Globalization.Unicode", "CodePointIndexer/TableRange");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Globalization::Unicode::CodePointIndexer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Globalization::Unicode::CodePointIndexer::ToIndex
// Il2CppName: ToIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Globalization::Unicode::CodePointIndexer::*)(int)>(&Mono::Globalization::Unicode::CodePointIndexer::ToIndex)> {
  static const MethodInfo* get() {
    static auto* cp = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::CodePointIndexer*), "ToIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cp});
  }
};
