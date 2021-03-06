/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXEvent : NSObject {
    NSString * _calendarTitle;
    NSDate * _end;
    EKEvent * _event;
    NSString * _identifier;
    BOOL  _isUnscheduledFreeTime;
    NSDate * _start;
    NSString * _title;
}

@property (nonatomic, retain) NSString *calendarTitle;
@property (nonatomic, retain) NSDate *end;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) BOOL isUnscheduledFreeTime;
@property (nonatomic, retain) NSDate *start;
@property (nonatomic, retain) NSString *title;

+ (id)eventFromEKEvent:(id)arg1;

- (void).cxx_destruct;
- (id)calendarTitle;
- (int)compareStartDateWithEvent:(id)arg1;
- (id)description;
- (id)end;
- (id)event;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 calendarTitle:(id)arg3 start:(id)arg4 end:(id)arg5 isUnscheduledFreeTime:(BOOL)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEvent:(id)arg1;
- (BOOL)isUnscheduledFreeTime;
- (void)setCalendarTitle:(id)arg1;
- (void)setEnd:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsUnscheduledFreeTime:(BOOL)arg1;
- (void)setStart:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)start;
- (id)title;

@end
