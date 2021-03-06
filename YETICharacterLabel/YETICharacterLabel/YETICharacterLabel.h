//
//  CharacterLabel.h
//  TextFadeTest
//
//  Created by Andrew Hulsizer on 7/1/14.
//  Copyright (c) 2014 Classy Monsters. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol YETICharacterLabelDelegate <NSObject>

- (void)yetiLabelDidAnimateOut;
- (void)yetiLabelDidAnimateIn;
- (void)yetiLabelDidComplete;

@end

@interface YETICharacterLabel : UILabel

@property (nonatomic, strong) NSTextStorage *textStorage;
@property (nonatomic, strong) NSTextContainer *textContainer;
@property (nonatomic, strong) NSLayoutManager *layoutManager;

@property (nonatomic, strong) NSMutableArray *oldCharacterTextLayers;
@property (nonatomic, strong) NSMutableArray *characterTextLayers;

@property (nonatomic, weak) id<YETICharacterLabelDelegate> delegate;


- (void)initialTextLayerAttributes:(CATextLayer *)textLayer;
@end
