//
//  obstacle.h
//  EndlessRunner
//
//  Created by Olmo on 25/10/15.
//  Copyright © 2015 ESAT. All rights reserved.
//

#ifndef obstacle_h
#define obstacle_h

#include "object.h"

class Obstacle : public Object {
  
public:
    Obstacle();
    ~Obstacle();

    void init(float x, float y, float width, float height, float speed);

    void set_speed(float speed);
    float speed() const;

    void set_availability(bool state);
    bool available() const;

    void set_color(float color[3]);
    const float* color() const;

    void update(float dt);

    static unsigned int texture_id_;
    static unsigned int texture_goomba_;
    static unsigned int texture_koopa_;

    static float speed_;

private: 
    bool available_;
    float color_[3];
};

#endif /* obstacle_h */
