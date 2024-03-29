#import "SideMenuCell.h"

@implementation SideMenuCell

- (void)setNumberOfPomodoro:(int)number
{
    if (number < 6) {
        for (int i = 1; i < number; i ++)
            [self.pomodoros[i] setHidden:NO];
        for (int i = self.pomodoros.count-1; i >= number; i--)
            [self.pomodoros[i] setHidden:YES];
        self.amountLabel.hidden = YES;
    } else {
        for (int i = 1; i < 5; i ++)
            [self.pomodoros[i] setHidden:YES];
        self.amountLabel.hidden = NO;
        self.amountLabel.text = [NSString stringWithFormat:@"x%d",number];
    }
}

@end
