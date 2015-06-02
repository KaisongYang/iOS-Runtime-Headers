/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDCRSActivationTimerExpired : NSObject <NFAWDEventProtocol> {
    unsigned int _status;
    unsigned int _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int status;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int version;

- (void)setStatus:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)status;
- (unsigned int)updateTransactionStateInfoPreviousState:(unsigned int)arg1 withUUID:(id)arg2 withUUIDRefTimestamp:(unsigned long long)arg3;
- (unsigned int)version;

@end