//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSMutableArray;

@interface XCTouchPath : NSObject <NSSecureCoding>
{
    NSMutableArray *_touchEvents;
    BOOL _immutable;
    unsigned long long _index;
    long long _interfaceOrientation;
}
#if TARGET_OS_IPHONE
@property(readonly) UIInterfaceOrientation interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
#endif
@property unsigned long long index; // @synthesize index=_index;
@property BOOL immutable; // @synthesize immutable=_immutable;
@property(readonly) BOOL complete;
@property(readonly) NSArray *touchEvents;

- (id)firstEventAfterOffset:(double)arg1;
- (id)lastEventBeforeOffset:(double)arg1;
- (void)_addTouchEvent:(id)arg1;
- (void)liftUpAtPoint:(struct CGPoint)arg1 offset:(double)arg2;
- (void)moveToPoint:(struct CGPoint)arg1 atOffset:(double)arg2;
- (id)initWithTouchDown:(struct CGPoint)arg1 orientation:(long long)arg2 offset:(double)arg3;
- (id)init;

@end
