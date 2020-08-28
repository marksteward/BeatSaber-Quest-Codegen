// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.IntervalTreeNode
  struct IntervalTreeNode : public System::ValueType {
    public:
    // public System.Int64 center
    // Offset: 0x0
    int64_t center;
    // public System.Int32 first
    // Offset: 0x8
    int first;
    // public System.Int32 last
    // Offset: 0xC
    int last;
    // public System.Int32 left
    // Offset: 0x10
    int left;
    // public System.Int32 right
    // Offset: 0x14
    int right;
    // Creating value type constructor for type: IntervalTreeNode
    constexpr IntervalTreeNode(int64_t center_ = {}, int first_ = {}, int last_ = {}, int left_ = {}, int right_ = {}) : center{center_}, first{first_}, last{last_}, left{left_}, right{right_} {}
  }; // UnityEngine.Timeline.IntervalTreeNode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::IntervalTreeNode, "UnityEngine.Timeline", "IntervalTreeNode");
#pragma pack(pop)
