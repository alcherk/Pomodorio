#import <UIKit/UIKit.h>
#import "GAI.h"

@interface SideViewController : GAITrackedViewController <UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UITableView *table;

@end
