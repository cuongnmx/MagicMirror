//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSMultipleStylePartInspectorViewController.h"

@class MSTextLabelForUpDownField, NSButton;

@interface MSMultipleShadowInspectorViewController : MSMultipleStylePartInspectorViewController
{
    NSButton *_addStylePartButton;
    MSTextLabelForUpDownField *_xOffsetField;
    MSTextLabelForUpDownField *_yOffsetField;
    MSTextLabelForUpDownField *_blurRadiusField;
    MSTextLabelForUpDownField *_spreadField;
}


@property(retain, nonatomic) NSButton *addStylePartButton; // @synthesize addStylePartButton=_addStylePartButton;
@property(retain, nonatomic) MSTextLabelForUpDownField *blurRadiusField; // @synthesize blurRadiusField=_blurRadiusField;
- (id)inspectorForStyleParts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)loadViewControllers;
- (void)prepare;
@property(retain, nonatomic) MSTextLabelForUpDownField *spreadField; // @synthesize spreadField=_spreadField;
@property(retain, nonatomic) MSTextLabelForUpDownField *xOffsetField; // @synthesize xOffsetField=_xOffsetField;
@property(retain, nonatomic) MSTextLabelForUpDownField *yOffsetField; // @synthesize yOffsetField=_yOffsetField;
- (BOOL)shouldHideAddStylePartButton;
- (unsigned long long)stylePartType;
- (void)validateSpecialButtons;
- (id)views;

@end

