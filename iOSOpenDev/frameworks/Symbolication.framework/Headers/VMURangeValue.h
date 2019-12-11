/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/VMUAddressRange.h>
#import <Symbolication/Symbolication-Structs.h>


@interface VMURangeValue : VMUAddressRange {
	int _value;	// 20 = 0x14
}
@property(readonly, assign) int value;	// G=0x323c0; converted property
+ (id)rangeValueWithRange:(VMURange)range value:(int)value;	// 0x324d8
- (id)initWithRange:(VMURange)range value:(int)value;	// 0x3244c
- (VMURange)addressRange;	// 0x32398
// converted property getter: - (int)value;	// 0x323c0
- (int)compare:(id)compare;	// 0x323d4
- (id)description;	// 0x3253c
@end