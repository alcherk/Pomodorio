#import "TimeSlider.h"

@implementation TimeSlider

@synthesize reverse;

#pragma mark - Accessors -

- (BOOL)reverse
{
    return reverse;
}

- (void)setReverse:(BOOL)newReverse
{
    reverse = newReverse;
    self.maximumTrackTintColor = (reverse) ? [UIColor redColor] : [UIColor blackColor];
    self.minimumTrackTintColor = (reverse) ? [UIColor blackColor] : [UIColor redColor];
}

@end
