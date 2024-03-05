
#include <SDL_rect.h>
#include <grumble/ui/Transform.hpp>
#include <string>

class SDL2Utils {
public:
  static SDL_Rect to_SDL_Rect(grumble::Transform::shared_ptr transform) {
    glm::vec2 pos = transform->localPosition();
    glm::vec2 size = transform->size();
    return {(int)pos.x, (int)pos.y, (int)size.x, (int)size.y};
  }

  static std::string SDL_Rect_to_string(SDL_Rect rect) {
    return fmt::format("x: {}, y: {}, w: {}, h: {}", rect.x, rect.y, rect.w,
                       rect.h);
  }
};
