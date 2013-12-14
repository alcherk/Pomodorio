#import <UIKit/UIKit.h>

@interface SideMenuCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *amountLabel;

@property (strong, nonatomic) IBOutletCollection(UIImageView) NSArray *pomodoros;

- (void)setNumberOfPomodoro:(int)number;

@end
