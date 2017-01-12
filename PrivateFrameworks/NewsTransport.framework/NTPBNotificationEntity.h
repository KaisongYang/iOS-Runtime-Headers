/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBNotificationEntity : PBCodable <NSCopying> {
    struct { 
        unsigned int notificationType : 1; 
        unsigned int subscriberType : 1; 
    }  _has;
    int  _notificationType;
    int  _subscriberType;
    NSMutableArray * _tagIds;
}

@property (nonatomic) BOOL hasNotificationType;
@property (nonatomic) BOOL hasSubscriberType;
@property (nonatomic) int notificationType;
@property (nonatomic) int subscriberType;
@property (nonatomic, retain) NSMutableArray *tagIds;

+ (Class)tagIdType;

- (void).cxx_destruct;
- (void)addTagId:(id)arg1;
- (void)clearTagIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasNotificationType;
- (BOOL)hasSubscriberType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)notificationType;
- (BOOL)readFrom:(id)arg1;
- (void)setHasNotificationType:(BOOL)arg1;
- (void)setHasSubscriberType:(BOOL)arg1;
- (void)setNotificationType:(int)arg1;
- (void)setSubscriberType:(int)arg1;
- (void)setTagIds:(id)arg1;
- (int)subscriberType;
- (id)tagIdAtIndex:(unsigned int)arg1;
- (id)tagIds;
- (unsigned int)tagIdsCount;
- (void)writeTo:(id)arg1;

@end