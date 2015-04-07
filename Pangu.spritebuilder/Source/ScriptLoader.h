//
//  ScriptLoader.h
//  pangu
//
//  Created by April on 3/31/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ScriptLoader : NSObject
+ (NSDictionary*) loadLevel:(NSInteger) level;
+ (NSInteger) level;
+ (NSDictionary*) script;
- (NSDictionary*)nextEnemy;
@end
