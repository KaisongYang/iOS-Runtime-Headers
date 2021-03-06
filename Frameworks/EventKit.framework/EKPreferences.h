/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPreferences : NSObject {
    CalPreferences * _preferences;
}

@property (nonatomic) BOOL alwaysSetArrivedAndSettledForReminders;
@property (nonatomic, retain) NSArray *deselectedCalendarIdentifiers;
@property (nonatomic, retain) NSArray *deselectedCalendarSyncHashes;
@property (nonatomic) BOOL privacyPaneHasBeenAcknowledged;
@property (nonatomic) BOOL refiringReminderAlarmsEnabled;
@property (nonatomic) BOOL remindMeAboutThisInCalendarWidgetEnabled;
@property (nonatomic, retain) NSArray *selectedCalendarIdentifiers;
@property (nonatomic) double travelEngineThrottlePeriod;
@property (nonatomic) BOOL useShortReminderRefireInterval;
@property (nonatomic) BOOL useShortReminderSnoozeInterval;

+ (id)shared;

- (void).cxx_destruct;
- (BOOL)alwaysSetArrivedAndSettledForReminders;
- (id)deselectedCalendarIdentifiers;
- (id)deselectedCalendarSyncHashes;
- (id)init;
- (BOOL)privacyPaneHasBeenAcknowledged;
- (BOOL)refiringReminderAlarmsEnabled;
- (BOOL)remindMeAboutThisInCalendarWidgetEnabled;
- (id)selectedCalendarIdentifiers;
- (void)setAlwaysSetArrivedAndSettledForReminders:(BOOL)arg1;
- (void)setDeselectedCalendarIdentifiers:(id)arg1;
- (void)setDeselectedCalendarSyncHashes:(id)arg1;
- (void)setPrivacyPaneHasBeenAcknowledged:(BOOL)arg1;
- (void)setRefiringReminderAlarmsEnabled:(BOOL)arg1;
- (void)setRemindMeAboutThisInCalendarWidgetEnabled:(BOOL)arg1;
- (void)setSelectedCalendarIdentifiers:(id)arg1;
- (void)setTravelEngineThrottlePeriod:(double)arg1;
- (void)setUseShortReminderRefireInterval:(BOOL)arg1;
- (void)setUseShortReminderSnoozeInterval:(BOOL)arg1;
- (double)travelEngineThrottlePeriod;
- (BOOL)useShortReminderRefireInterval;
- (BOOL)useShortReminderSnoozeInterval;

@end
