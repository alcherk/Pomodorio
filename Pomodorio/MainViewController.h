#import <UIKit/UIKit.h>
#import "SWRevealViewController.h"
#import "TimerLabel.h"
#import "TimerCircle.h"
#import "TimeIndicatorView.h"
#import "TimeSlider.h"
#import "GAI.h"

@interface MainViewController : GAITrackedViewController <SWRevealViewControllerDelegate, NKTimerLabelDelegate>

// UI properties
@property (weak, nonatomic) IBOutlet UIView *toolbar;
@property (strong, nonatomic) IBOutlet UITapGestureRecognizer *tapGR;

@property (weak, nonatomic) IBOutlet TimerLabel *timerLabel;
@property (weak, nonatomic) IBOutlet TimerCircle *timerCircle;
@property (weak, nonatomic) IBOutlet TimeSlider *slider;

@property (weak, nonatomic) IBOutlet TimeIndicatorView *timeIndicator;

@property (weak, nonatomic) IBOutlet UIButton *pauseButton;
@property (weak, nonatomic) IBOutlet UIButton *playButton;

- (IBAction)screenTapped:(id)sender;

- (IBAction)upTouched:(UIButton *)sender;
- (IBAction)downTouched:(UIButton *)sender;

- (IBAction)toggleLeftTouched:(UIButton *)sender;
- (IBAction)sliderChanged:(UISlider *)sender;

- (IBAction)stopTouched:(UIButton *)sender;
- (IBAction)pauseTouched:(UIButton *)sender;
- (IBAction)playTouched:(UIButton *)sender;
- (IBAction)nextTouched:(UIButton *)sender;

@end
