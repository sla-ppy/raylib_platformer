#ifndef VECTOR_MATH_H
#define VECTOR_MATH_H

#include <cmath>

// Vector length
inline float length(const Vector2& vec) {
    return std::sqrt((vec.x * vec.x) + (vec.y * vec.y));
}

// Vector normalization
inline Vector2 normalized(Vector2& vec) {
    vec.x = vec.x / length(vec);
    vec.y = vec.y / length(vec);
    return vec;
}

inline void ensure_boundaries(Vector2& pos, const Vector2& screen_size) {
    // off the left side
    if (pos.x <= 0) {
        pos.x = screen_size.x - 1;
    }
    // off the top side
    if (pos.y <= 0) {
        pos.y = screen_size.y - 1;
    }
    // off the right side
    if (pos.x >= screen_size.x) {
        pos.x = 1;
    }
    // off the bottom side
    if (pos.y >= screen_size.y) {
        pos.y = 1;
    }
}

#endif // VECTOR_MATH_H
