//
//  GameWrapper.h
//  EndlessRunner
//
//  Created by Marcos Martí Nacher on 2/10/15.
//  Copyright © 2015 ESAT. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface GameWrapper : NSObject

- (void)setupGL;
- (void)tearDownGL;

- (void)initializeWithWidth:(float)width andHeight:(float)height;

- (void)touchDownAtPosX:(float)x posY:(float)y;
- (void)touchUpAtPosX:(float)x posY:(float)y;

- (void)pause;
- (void)resume;

- (void)update;
- (void)render;

@end