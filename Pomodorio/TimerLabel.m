#import "TimerLabel.h"
#import "NSString+Time.h"

@implementation TimerLabel

@synthesize initialValue;

#pragma mark - Accessors -

- (void)setInitialValue:(NSString *)newInitialValue {
    initialValue = newInitialValue;
    self.text = newInitialValue;
}

#pragma mark - View life cycle -

- (void)awakeFromNib
{
    [super awakeFromNib];
}

#pragma mark - General methods -

- (void)decrementByOneSecond
{
    int time = [self.text seconds];
    if (time > 1) {
        time--;
        self.text = [NSString stringFromSeconds:time];
    } else {
        [self.delegate timerLabelDidReachZero];
    }
}

@end
