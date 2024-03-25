#include "CameraMovementSystem.hpp"
#include <grumble/core/CameraRange.hpp>

CameraMovementSystem::CameraMovementSystem(
    grumble::InputManager::shared_ptr inputManager,
    grumble::Camera::shared_ptr camera)
    : _inputManager(inputManager), _camera(camera),
      grumble::System("cameraMovementSystem") {

  auto range = (grumble::CameraRange){
      .left = 0.0f, .top = 0.0f, .bottom = 1000.0f, .right = 1000.0f};
  _camera->setCameraRange(range);
}

CameraMovementSystem::~CameraMovementSystem() {}

void CameraMovementSystem::update(double dt) {
  HMM_Vec2 velocity = {0.0f, 0.0f};
  if (_inputManager->isInputActive(grumble::InputCode::ArrowLeft)) {
    velocity += {-1.0f, 0.0f};
  }

  if (_inputManager->isInputActive(grumble::InputCode::ArrowRight)) {
    velocity += {1.0f, 0.0f};
  }

  if (_inputManager->isInputActive(grumble::InputCode::ArrowUp)) {
    velocity += {0.0f, -1.0f};
  }

  if (_inputManager->isInputActive(grumble::InputCode::ArrowDown)) {
    velocity += {0.0f, 1.0f};
  }
  _camera->setVelocity(velocity);
}
