//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStylePartInspectorViewController.h"

@class MSColorPreviewButton, MSUpDownTextField, NSPopUpButton;

@interface MSBorderInspectorViewController : MSStylePartInspectorViewController
{
    NSPopUpButton *positionPopUp;
    MSColorPreviewButton *colorButton;
    MSUpDownTextField *_thicknessField;
}


- (void)borderThicknessChanged:(id)arg1;
- (BOOL)canDrawInnerOrOuterBorders;
- (void)dealloc;
- (void)enableAction:(id)arg1;
- (id)init;
- (id)layers;
- (id)lineShapes;
- (id)positionPopUpToolTip;
- (void)prepare;
- (void)setStyleParts:(id)arg1;
@property(retain, nonatomic) MSUpDownTextField *thicknessField; // @synthesize thicknessField=_thicknessField;

@end

