//
//  FadeTextView.h
//  TextFadeTest
//
//  Created by Andrew Hulsizer on 7/1/14.
//  Copyright (c) 2014 Classy Monsters. All rights reserved.
//

#import "YETICharacterLabel.h"

@interface YETIFadeLabel : YETICharacterLabel

- (void)animateInWithCompletion:(void(^)(void))completionBlock;
- (void)animateOutWithCompletion:(void(^)(BOOL finished))completionBlock;

@end
