//
//  Penguin.h
//  PeevedPenguins
//
//  Created by April on 1/31/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"
#import "Bullet.h"



@interface Plane : CCSprite
@property (nonatomic, retain) Bullet* bullet;
@property (nonatomic, assign) CGFloat maxHp;
@property (nonatomic, assign) CGFloat hp;
@property (nonatomic, assign) CCTime fireInterval;
@property (nonatomic, retain) NSArray* velocity;
@property (nonatomic, copy) NSString* deadCallback;
@property (nonatomic, retain) NSArray* positionInPercent;
- (void)onHitBullet: (Bullet*)bullet;
- (void)onHitPlane: (Plane*)plane;
+ (Plane*) generate:(NSString*)planeFile;
-(BOOL)dead;
@end
