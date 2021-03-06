/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageDataReader : NSObject <TSPFileCoordinatorDelegate, TSPPassphraseConsumer> {
    NSURL * _URL;
    NSString * _lastPasswordAttempted;
    TSPPackage * _package;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSPDocumentProperties *documentProperties;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isPasswordProtected;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, readonly) NSData *keychainGenericItem;
@property (nonatomic, readonly) NSString *lastPasswordAttempted;
@property (nonatomic, readonly) int packageType;
@property (nonatomic, readonly) NSString *passphraseHint;
@property (nonatomic, readonly) NSString *passwordHint;
@property (nonatomic, readonly) NSString *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)checkPassword:(id)arg1;
- (id)documentProperties;
- (BOOL)hasDataAtRelativePath:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1 decryptionKey:(id)arg2;
- (BOOL)isPasswordProtected;
- (BOOL)isValid;
- (id)lastPasswordAttempted;
- (struct CGDataProvider { }*)newCGDataProviderAtRelativePath:(id)arg1;
- (struct CGImage { }*)newCGImageAtRelativePath:(id)arg1;
- (struct CGImageSource { }*)newCGImageSourceAtRelativePath:(id)arg1;
- (int)packageType;
- (id)passwordHint;
- (void)performReadUsingAccessor:(id /* block */)arg1;
- (BOOL)setPassphrase:(id)arg1;

@end
