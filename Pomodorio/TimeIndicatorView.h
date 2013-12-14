#import <UIKit/UIKit.h>

@interface TimeIndicatorView : UIView

@property (weak, nonatomic) IBOutlet UILabel *label;

- (void)pushUp:(int)minutes;
- (void)pushDown:(int)minutes;

@end
