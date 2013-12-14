#import "AppDelegate.h"
#import "GAI.h"

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    // Initialize user defaults
    [self initializeUserDefaults];
    
    // Initialize Google Analytics
    [[GAI sharedInstance] trackerWithTrackingId:@"UA-46292389-1"];
    
    // App is always active
    [UIApplication sharedApplication].idleTimerDisabled = YES;
    
    return YES;
}

- (void)initializeUserDefaults {
    if (![userDefaults objectForKey:wasLaunchedBefore]) {
        [userDefaults setObject:@YES forKey:wasLaunchedBefore];
        
        [userDefaults setObject:@[] forKey:pomodoroHistory];
    }
}

@end
