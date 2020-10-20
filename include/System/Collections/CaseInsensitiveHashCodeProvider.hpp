// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IHashCodeProvider
#include "System/Collections/IHashCodeProvider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: TextInfo
  class TextInfo;
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.CaseInsensitiveHashCodeProvider
  class CaseInsensitiveHashCodeProvider : public ::Il2CppObject/*, public System::Collections::IHashCodeProvider*/ {
    public:
    // private System.Globalization.TextInfo m_text
    // Offset: 0x10
    System::Globalization::TextInfo* m_text;
    // Creating interface conversion operator: operator System::Collections::IHashCodeProvider
    operator System::Collections::IHashCodeProvider() noexcept {
      return *reinterpret_cast<System::Collections::IHashCodeProvider*>(this);
    }
    // Creating conversion operator: operator System::Globalization::TextInfo*
    constexpr operator System::Globalization::TextInfo*() const noexcept {
      return m_text;
    }
    // public System.Void .ctor(System.Globalization.CultureInfo culture)
    // Offset: 0x13AAE24
    static CaseInsensitiveHashCodeProvider* New_ctor(System::Globalization::CultureInfo* culture);
    // static public System.Collections.CaseInsensitiveHashCodeProvider get_Default()
    // Offset: 0x13AAED4
    static System::Collections::CaseInsensitiveHashCodeProvider* get_Default();
    // public System.Void .ctor()
    // Offset: 0x13AAD90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CaseInsensitiveHashCodeProvider* New_ctor();
    // public System.Int32 GetHashCode(System.Object obj)
    // Offset: 0x13AAF60
    // Implemented from: System.Collections.IHashCodeProvider
    // Base method: System.Int32 IHashCodeProvider::GetHashCode(System.Object obj)
    int GetHashCode(::Il2CppObject* obj);
  }; // System.Collections.CaseInsensitiveHashCodeProvider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::CaseInsensitiveHashCodeProvider*, "System.Collections", "CaseInsensitiveHashCodeProvider");
#pragma pack(pop)
