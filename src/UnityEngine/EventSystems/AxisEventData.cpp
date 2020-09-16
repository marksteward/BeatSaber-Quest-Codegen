// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.EventSystems.AxisEventData
#include "UnityEngine/EventSystems/AxisEventData.hpp"
// Including type: UnityEngine.EventSystems.EventSystem
#include "UnityEngine/EventSystems/EventSystem.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.EventSystems.AxisEventData.get_moveVector
UnityEngine::Vector2 UnityEngine::EventSystems::AxisEventData::get_moveVector() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>(this, "get_moveVector"));
}
// Autogenerated method: UnityEngine.EventSystems.AxisEventData.set_moveVector
void UnityEngine::EventSystems::AxisEventData::set_moveVector(UnityEngine::Vector2 value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_moveVector", value));
}
// Autogenerated method: UnityEngine.EventSystems.AxisEventData.get_moveDir
UnityEngine::EventSystems::MoveDirection UnityEngine::EventSystems::AxisEventData::get_moveDir() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::EventSystems::MoveDirection>(this, "get_moveDir"));
}
// Autogenerated method: UnityEngine.EventSystems.AxisEventData.set_moveDir
void UnityEngine::EventSystems::AxisEventData::set_moveDir(UnityEngine::EventSystems::MoveDirection value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_moveDir", value));
}
// Autogenerated method: UnityEngine.EventSystems.AxisEventData..ctor
UnityEngine::EventSystems::AxisEventData* UnityEngine::EventSystems::AxisEventData::New_ctor(UnityEngine::EventSystems::EventSystem* eventSystem) {
  return THROW_UNLESS(il2cpp_utils::New<AxisEventData*>(eventSystem));
}
