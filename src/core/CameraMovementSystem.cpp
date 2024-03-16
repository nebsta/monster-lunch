#include "CameraMovementSystem.hpp"

CameraMovementSystem::CameraMovementSystem(
    grumble::InputManager::shared_ptr inputManager,
    grumble::Camera::shared_ptr camera)
    : _inputManager(inputManager), _camera(camera),
      grumble::System("cameraMovementSystem") {}

CameraMovementSystem::~CameraMovementSystem() {}

void CameraMovementSystem::update(double dt) {
  HMM_Vec2 movement = {0.0f, 0.0f};
  float distance = dt * CAMERA_SPEED;
  if (_inputManager->isInputActive(grumble::InputCode::ArrowLeft)) {
    movement += {-distance, 0.0f};
  }

  if (_inputManager->isInputActive(grumble::InputCode::ArrowRight)) {
    movement += {distance, 0.0f};
  }

  if (_inputManager->isInputActive(grumble::InputCode::ArrowUp)) {
    movement += {0.0f, -distance};
  }

  if (_inputManager->isInputActive(grumble::InputCode::ArrowDown)) {
    movement += {0.0f, distance};
  }
  _camera->setPosition(_camera->position() + movement);
}
