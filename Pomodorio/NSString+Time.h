#import <Foundation/Foundation.h>

@interface NSString (Time)

+ (NSString *)stringFromHours:(int)hours minutes:(int)minutes seconds:(int)seconds;
+ (NSString *)stringFromSeconds:(int)seconds;
- (int)seconds;

@end
