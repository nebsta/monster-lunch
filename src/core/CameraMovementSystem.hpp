#pragma once

#include <grumble/core/Camera.hpp>
#include <grumble/core/System.hpp>
#include <grumble/input/InputManager.hpp>

#define CAMERA_SPEED 2.0f;

class CameraMovementSystem : public grumble::System {
public:
  CameraMovementSystem(grumble::InputManager::shared_ptr inputMananger,
                       grumble::Camera::shared_ptr camera);
  ~CameraMovementSystem() override;

  void update(double dt) override;

private:
  grumble::Camera::shared_ptr _camera;
  grumble::InputManager::shared_ptr _inputManager;
};
