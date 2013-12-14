#import <UIKit/UIKit.h>

@protocol NKTimerLabelDelegate <NSObject>

- (void)timerLabelDidReachZero;

@end

@interface TimerLabel : UILabel

@property (strong, nonatomic) NSString *initialValue;
@property (weak, nonatomic) IBOutlet id<NKTimerLabelDelegate> delegate;

- (void)decrementByOneSecond;

@end