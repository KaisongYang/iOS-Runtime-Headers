/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSTEphemeralCellMap : NSObject <TSTCellMap> {
    boolmAppliesToHidden;
    boolmIgnoreHiddenCellsWhenApplying;
    boolmMayModifyValuesReferencedByFormulas;
    unsigned long long mCapacity;
    struct { unsigned short x1; unsigned char x2; unsigned char x3; } *mCellIDs;
    id *mCells;
    unsigned long long mCount;
}

@property bool appliesToHidden;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void)addCell:(id)arg1 andCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (bool)appliesToHidden;
- (id)cellAtIndex:(unsigned long long)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cellIDAtIndex:(unsigned long long)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; }*)cellIDs;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (bool)mayModifyFormulasInCells;
- (bool)mayModifyValuesReferencedByFormulas;
- (void)popLastCell;
- (void)setAppliesToHidden:(bool)arg1;
- (void)setMayModifyValuesReferencedByFormulas:(bool)arg1;

@end