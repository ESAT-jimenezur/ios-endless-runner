//
//  player.hpp
//  EndlessRunner
//
//  Created by Jose Luis Jimenez on 25/10/15.
//  Copyright © 2015 ESAT. All rights reserved.
//

#ifndef player_hpp
#define player_hpp

#include <stdio.h>

#include "object.h"

#endif /* player_hpp */

class Player : public Object{
public:
  Player();
  ~Player(){};
  
  void init();
  void jump();
  
private:
  float is_jumping_;
};