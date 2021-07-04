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
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexFC
  class RegexFC;
  // Forward declaring type: RegexPrefix
  class RegexPrefix;
  // Forward declaring type: RegexTree
  class RegexTree;
  // Forward declaring type: RegexNode
  class RegexNode;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x2F
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexFCD
  class RegexFCD : public ::Il2CppObject {
    public:
    // private System.Int32[] _intStack
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* intStack;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32 _intDepth
    // Size: 0x4
    // Offset: 0x18
    int intDepth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: intDepth and: fcStack
    char __padding1[0x4] = {};
    // private System.Text.RegularExpressions.RegexFC[] _fcStack
    // Size: 0x8
    // Offset: 0x20
    ::Array<System::Text::RegularExpressions::RegexFC*>* fcStack;
    // Field size check
    static_assert(sizeof(::Array<System::Text::RegularExpressions::RegexFC*>*) == 0x8);
    // private System.Int32 _fcDepth
    // Size: 0x4
    // Offset: 0x28
    int fcDepth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _skipAllChildren
    // Size: 0x1
    // Offset: 0x2C
    bool skipAllChildren;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _skipchild
    // Size: 0x1
    // Offset: 0x2D
    bool skipchild;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _failed
    // Size: 0x1
    // Offset: 0x2E
    bool failed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: RegexFCD
    RegexFCD(::Array<int>* intStack_ = {}, int intDepth_ = {}, ::Array<System::Text::RegularExpressions::RegexFC*>* fcStack_ = {}, int fcDepth_ = {}, bool skipAllChildren_ = {}, bool skipchild_ = {}, bool failed_ = {}) noexcept : intStack{intStack_}, intDepth{intDepth_}, fcStack{fcStack_}, fcDepth{fcDepth_}, skipAllChildren{skipAllChildren_}, skipchild{skipchild_}, failed{failed_} {}
    // static System.Text.RegularExpressions.RegexPrefix FirstChars(System.Text.RegularExpressions.RegexTree t)
    // Offset: 0x198CE84
    static System::Text::RegularExpressions::RegexPrefix* FirstChars(System::Text::RegularExpressions::RegexTree* t);
    // static System.Text.RegularExpressions.RegexPrefix Prefix(System.Text.RegularExpressions.RegexTree tree)
    // Offset: 0x198D1C8
    static System::Text::RegularExpressions::RegexPrefix* Prefix(System::Text::RegularExpressions::RegexTree* tree);
    // static System.Int32 Anchors(System.Text.RegularExpressions.RegexTree tree)
    // Offset: 0x198D504
    static int Anchors(System::Text::RegularExpressions::RegexTree* tree);
    // static private System.Int32 AnchorFromType(System.Int32 type)
    // Offset: 0x198D638
    static int AnchorFromType(int type);
    // private System.Void PushInt(System.Int32 I)
    // Offset: 0x198D6A4
    void PushInt(int I);
    // private System.Boolean IntIsEmpty()
    // Offset: 0x198D784
    bool IntIsEmpty();
    // private System.Int32 PopInt()
    // Offset: 0x198D794
    int PopInt();
    // private System.Void PushFC(System.Text.RegularExpressions.RegexFC fc)
    // Offset: 0x198D7DC
    void PushFC(System::Text::RegularExpressions::RegexFC* fc);
    // private System.Boolean FCIsEmpty()
    // Offset: 0x198D8E4
    bool FCIsEmpty();
    // private System.Text.RegularExpressions.RegexFC PopFC()
    // Offset: 0x198D8F4
    System::Text::RegularExpressions::RegexFC* PopFC();
    // private System.Text.RegularExpressions.RegexFC TopFC()
    // Offset: 0x198D93C
    System::Text::RegularExpressions::RegexFC* TopFC();
    // private System.Text.RegularExpressions.RegexFC RegexFCFromRegexTree(System.Text.RegularExpressions.RegexTree tree)
    // Offset: 0x198D01C
    System::Text::RegularExpressions::RegexFC* RegexFCFromRegexTree(System::Text::RegularExpressions::RegexTree* tree);
    // private System.Void SkipChild()
    // Offset: 0x198DDEC
    void SkipChild();
    // private System.Void CalculateFC(System.Int32 NodeType, System.Text.RegularExpressions.RegexNode node, System.Int32 CurIndex)
    // Offset: 0x198D980
    void CalculateFC(int NodeType, System::Text::RegularExpressions::RegexNode* node, int CurIndex);
    // private System.Void .ctor()
    // Offset: 0x198CFA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexFCD* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexFCD::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexFCD*, creationType>()));
    }
  }; // System.Text.RegularExpressions.RegexFCD
  #pragma pack(pop)
  static check_size<sizeof(RegexFCD), 46 + sizeof(bool)> __System_Text_RegularExpressions_RegexFCDSizeCheck;
  static_assert(sizeof(RegexFCD) == 0x2F);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexFCD*, "System.Text.RegularExpressions", "RegexFCD");
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::FirstChars
// Il2CppName: FirstChars
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::Prefix
// Il2CppName: Prefix
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::Anchors
// Il2CppName: Anchors
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::AnchorFromType
// Il2CppName: AnchorFromType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::PushInt
// Il2CppName: PushInt
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::IntIsEmpty
// Il2CppName: IntIsEmpty
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::PopInt
// Il2CppName: PopInt
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::PushFC
// Il2CppName: PushFC
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::FCIsEmpty
// Il2CppName: FCIsEmpty
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::PopFC
// Il2CppName: PopFC
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::TopFC
// Il2CppName: TopFC
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::RegexFCFromRegexTree
// Il2CppName: RegexFCFromRegexTree
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::SkipChild
// Il2CppName: SkipChild
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::CalculateFC
// Il2CppName: CalculateFC
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
