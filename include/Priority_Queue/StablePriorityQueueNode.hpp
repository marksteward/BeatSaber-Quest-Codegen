// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Priority_Queue.FastPriorityQueueNode
#include "Priority_Queue/FastPriorityQueueNode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Priority_Queue
namespace Priority_Queue {
  // Size: 0x20
  // Autogenerated type: Priority_Queue.StablePriorityQueueNode
  // [] Offset: FFFFFFFF
  class StablePriorityQueueNode : public Priority_Queue::FastPriorityQueueNode {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDD35C0
    // private System.Int64 <InsertionIndex>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    int64_t InsertionIndex;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: StablePriorityQueueNode
    StablePriorityQueueNode(int64_t InsertionIndex_ = {}) noexcept : InsertionIndex{InsertionIndex_} {}
    // Creating conversion operator: operator int64_t
    constexpr operator int64_t() const noexcept {
      return InsertionIndex;
    }
    // public System.Int64 get_InsertionIndex()
    // Offset: 0xF2DA90
    int64_t get_InsertionIndex();
    // System.Void set_InsertionIndex(System.Int64 value)
    // Offset: 0xF2DA98
    void set_InsertionIndex(int64_t value);
    // public System.Void .ctor()
    // Offset: 0xF2DAA0
    // Implemented from: Priority_Queue.FastPriorityQueueNode
    // Base method: System.Void FastPriorityQueueNode::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StablePriorityQueueNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Priority_Queue::StablePriorityQueueNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StablePriorityQueueNode*, creationType>()));
    }
  }; // Priority_Queue.StablePriorityQueueNode
  static check_size<sizeof(StablePriorityQueueNode), 24 + sizeof(int64_t)> __Priority_Queue_StablePriorityQueueNodeSizeCheck;
  static_assert(sizeof(StablePriorityQueueNode) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Priority_Queue::StablePriorityQueueNode*, "Priority_Queue", "StablePriorityQueueNode");
#pragma pack(pop)
