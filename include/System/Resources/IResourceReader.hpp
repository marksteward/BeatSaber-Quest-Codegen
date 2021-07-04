// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.IResourceReader
  // [ComVisibleAttribute] Offset: D7B594
  class IResourceReader/*, public System::Collections::IEnumerable, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: IResourceReader
    IResourceReader() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IEnumerable
    operator System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerable*>(this);
    }
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void Close()
    // Offset: 0xFFFFFFFF
    void Close();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IDictionaryEnumerator* GetEnumerator();
  }; // System.Resources.IResourceReader
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Resources::IResourceReader*, "System.Resources", "IResourceReader");
// Writing MetadataGetter for method: System::Resources::IResourceReader::Close
// Il2CppName: Close
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Resources::IResourceReader::GetEnumerator
// Il2CppName: GetEnumerator
// Cannot perform method pointer template specialization from operators!
