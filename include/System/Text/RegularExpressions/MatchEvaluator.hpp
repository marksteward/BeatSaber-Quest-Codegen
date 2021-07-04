// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Match
  class Match;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.MatchEvaluator
  class MatchEvaluator : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: MatchEvaluator
    MatchEvaluator() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1855584
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchEvaluator* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::MatchEvaluator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchEvaluator*, creationType>(object, method)));
    }
    // public System.String Invoke(System.Text.RegularExpressions.Match match)
    // Offset: 0x1855594
    ::Il2CppString* Invoke(System::Text::RegularExpressions::Match* match);
    // public System.IAsyncResult BeginInvoke(System.Text.RegularExpressions.Match match, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1855930
    System::IAsyncResult* BeginInvoke(System::Text::RegularExpressions::Match* match, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.String EndInvoke(System.IAsyncResult result)
    // Offset: 0x1855954
    ::Il2CppString* EndInvoke(System::IAsyncResult* result);
  }; // System.Text.RegularExpressions.MatchEvaluator
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::MatchEvaluator*, "System.Text.RegularExpressions", "MatchEvaluator");
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchEvaluator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchEvaluator::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchEvaluator::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchEvaluator::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
