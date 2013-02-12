/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary;

@interface AVOutputSettings : NSObject <NSCopying> {
    NSDictionary *_outputSettingsDictionary;
}

@property(readonly) NSSet *compatibleMediaTypes;
@property(readonly) NSDictionary *outputSettingsDictionary;
@property(readonly) BOOL willYieldCompressedSamples;

+ (id)defaultOutputSettingsForMediaType:(id)arg1;
+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)outputSettingsWithOutputSettingsDictionary:(id)arg1;
+ (id)registeredOutputSettingsClasses;
+ (NSUInteger)validateOutputSettingsDictionary:(id)arg1;

- (id)compatibleMediaTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithOutputSettingsDictionary:(id)arg1;
- (id)outputSettingsDictionary;
- (BOOL)willYieldCompressedSamples;

@end