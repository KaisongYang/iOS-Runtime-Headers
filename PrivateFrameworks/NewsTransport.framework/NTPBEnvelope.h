/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBEnvelope : PBCodable <NSCopying> {
    NSData * _content;
    int  _contentType;
    int  _contentTypeMinorVersion;
    int  _contentTypePatchVersion;
    int  _contentTypeVersion;
    struct { 
        unsigned int contentTypeMinorVersion : 1; 
        unsigned int contentTypePatchVersion : 1; 
    }  _has;
}

@property (nonatomic, retain) NSData *content;
@property (nonatomic) int contentType;
@property (nonatomic) int contentTypeMinorVersion;
@property (nonatomic) int contentTypePatchVersion;
@property (nonatomic) int contentTypeVersion;
@property (nonatomic) BOOL hasContentTypeMinorVersion;
@property (nonatomic) BOOL hasContentTypePatchVersion;

- (void).cxx_destruct;
- (id)content;
- (int)contentType;
- (int)contentTypeMinorVersion;
- (int)contentTypePatchVersion;
- (int)contentTypeVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasContentTypeMinorVersion;
- (BOOL)hasContentTypePatchVersion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setContentType:(int)arg1;
- (void)setContentTypeMinorVersion:(int)arg1;
- (void)setContentTypePatchVersion:(int)arg1;
- (void)setContentTypeVersion:(int)arg1;
- (void)setHasContentTypeMinorVersion:(BOOL)arg1;
- (void)setHasContentTypePatchVersion:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
