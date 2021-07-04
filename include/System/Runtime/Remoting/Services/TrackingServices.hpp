// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Services
namespace System::Runtime::Remoting::Services {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Services.TrackingServices
  // [ComVisibleAttribute] Offset: D7E194
  class TrackingServices : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TrackingServices
    TrackingServices() noexcept {}
    // Get static field: static private System.Collections.ArrayList _handlers
    static System::Collections::ArrayList* _get__handlers();
    // Set static field: static private System.Collections.ArrayList _handlers
    static void _set__handlers(System::Collections::ArrayList* value);
    // static System.Void NotifyMarshaledObject(System.Object obj, System.Runtime.Remoting.ObjRef or)
    // Offset: 0x1600B08
    static void NotifyMarshaledObject(::Il2CppObject* obj, System::Runtime::Remoting::ObjRef* _or);
    // static System.Void NotifyUnmarshaledObject(System.Object obj, System.Runtime.Remoting.ObjRef or)
    // Offset: 0x1600E10
    static void NotifyUnmarshaledObject(::Il2CppObject* obj, System::Runtime::Remoting::ObjRef* _or);
    // static System.Void NotifyDisconnectedObject(System.Object obj)
    // Offset: 0x1600810
    static void NotifyDisconnectedObject(::Il2CppObject* obj);
    // static private System.Void .cctor()
    // Offset: 0x1601118
    static void _cctor();
  }; // System.Runtime.Remoting.Services.TrackingServices
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Services::TrackingServices*, "System.Runtime.Remoting.Services", "TrackingServices");
// Writing MetadataGetter for method: System::Runtime::Remoting::Services::TrackingServices::NotifyMarshaledObject
// Il2CppName: NotifyMarshaledObject
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Services::TrackingServices::NotifyUnmarshaledObject
// Il2CppName: NotifyUnmarshaledObject
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Services::TrackingServices::NotifyDisconnectedObject
// Il2CppName: NotifyDisconnectedObject
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Services::TrackingServices::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
