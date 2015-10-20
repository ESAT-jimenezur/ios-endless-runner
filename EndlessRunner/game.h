//
//  game.hpp
//  EndlessRunner
//
//  Created by Marcos Martí Nacher on 2/10/15.
//  Copyright © 2015 ESAT. All rights reserved.
//

#ifndef __GAME_H__
#define __GAME_H__ 1

namespace endlessrunner {
    
class Game {
 public:
	Game();
	~Game();
        
	void setupGL();
	void initialize(int width, int height);
	void teardownGL();
	
	void touchDownAt(float x, float y);
	void touchUpAt(float x, float y);
        
	void pause();
	void resume();
        
	void update();
	void render();
        
 private:
	Game(const Game&);
	void operator=(const Game&);
        
	bool is_opengl_init_;
	bool is_paused_;
	double secs_last_update_;
	int width_;
	int height_;
        
	// GL ES
	int program_handle_;
	int attribute_position_;
	int uniform_mvp_matrix_;
        
        
	// draw a rectangle
	void drawRectBad(float x, float y, float width, float height) const;
        
	// methods load shaders
	bool loadShaders();
	int loadProgram(const char* str_vert_source, const char* str_frag_source);
	int loadShader(const char* str_source, int id_type);
};

}  // namespace endlessrunner

#endif  // __GAME_H__
