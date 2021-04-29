// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerEndPoint
  class MasterServerEndPoint : public ::Il2CppObject/*, public System::IEquatable_1<GlobalNamespace::MasterServerEndPoint*>*/ {
    public:
    // public readonly System.String hostName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* hostName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Int32 port
    // Size: 0x4
    // Offset: 0x18
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: port and: getEndPointTask
    char __padding1[0x4] = {};
    // private System.Threading.Tasks.Task`1<System.Net.IPEndPoint> _getEndPointTask
    // Size: 0x8
    // Offset: 0x20
    System::Threading::Tasks::Task_1<System::Net::IPEndPoint*>* getEndPointTask;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task_1<System::Net::IPEndPoint*>*) == 0x8);
    // Creating value type constructor for type: MasterServerEndPoint
    MasterServerEndPoint(::Il2CppString* hostName_ = {}, int port_ = {}, System::Threading::Tasks::Task_1<System::Net::IPEndPoint*>* getEndPointTask_ = {}) noexcept : hostName{hostName_}, port{port_}, getEndPointTask{getEndPointTask_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::MasterServerEndPoint*>
    operator System::IEquatable_1<GlobalNamespace::MasterServerEndPoint*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::MasterServerEndPoint*>*>(this);
    }
    // public System.Net.IPEndPoint get_endPoint()
    // Offset: 0x12B214C
    System::Net::IPEndPoint* get_endPoint();
    // public System.Void .ctor(System.String hostName, System.Int32 port)
    // Offset: 0x12B7F44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerEndPoint* New_ctor(::Il2CppString* hostName, int port) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerEndPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerEndPoint*, creationType>(hostName, port)));
    }
    // public System.Threading.Tasks.Task`1<System.Net.IPEndPoint> GetEndPointAsync()
    // Offset: 0x12B7F80
    System::Threading::Tasks::Task_1<System::Net::IPEndPoint*>* GetEndPointAsync();
    // public System.Net.IPEndPoint GetEndPoint()
    // Offset: 0x12B802C
    System::Net::IPEndPoint* GetEndPoint();
    // private System.Net.IPEndPoint GetEndPointInternal()
    // Offset: 0x12B80C4
    System::Net::IPEndPoint* GetEndPointInternal();
    // public System.Boolean Equals(MasterServerEndPoint other)
    // Offset: 0x12B6948
    bool Equals(GlobalNamespace::MasterServerEndPoint* other);
    // public override System.String ToString()
    // Offset: 0x12B8188
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x12B8210
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x12B82C0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // MasterServerEndPoint
  #pragma pack(pop)
  static check_size<sizeof(MasterServerEndPoint), 32 + sizeof(System::Threading::Tasks::Task_1<System::Net::IPEndPoint*>*)> __GlobalNamespace_MasterServerEndPointSizeCheck;
  static_assert(sizeof(MasterServerEndPoint) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerEndPoint*, "", "MasterServerEndPoint");
