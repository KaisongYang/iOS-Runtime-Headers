/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXEngineDrivenAssetsTilingLayout : PXAssetsTilingLayout {
    int  _contentMode;
    <PXEngineDrivenAssetsTilingLayoutDelegate> * _delegate;
    struct { 
        BOOL respondsToEngineDrivenLayoutReferenceSizeDidChange; 
        BOOL respondsToEngineDrivenLayoutAspectRatioForItemAtIndexPath; 
        BOOL respondsToEngineDrivenLayoutZPositionForItemAtIndexPath; 
        BOOL respondsToEngineDrivenLayoutContentsRectForItemAtIndexPathForAspectRatio; 
        BOOL respondsToEngineDrivenLayoutPlayButtonSizeForItemAtIndexPathForAspectRatio; 
    }  _delegateFlags;
    PXLayoutSnapshot * _layoutSnapshot;
    struct { }  _needsUpdateFlags;
}

@property (nonatomic) int contentMode;
@property (nonatomic) <PXEngineDrivenAssetsTilingLayoutDelegate> *delegate;
@property (nonatomic, retain) PXLayoutSnapshot *layoutSnapshot;

- (void).cxx_destruct;
- (float)_aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg1;
- (void)_commonInit;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg1 forAspectRatio:(float)arg2;
- (BOOL)_needsUpdate;
- (void)_updateIfNeeded;
- (float)_zPositionForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg1;
- (void)adjustGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; float x6; BOOL x7; struct CGSize { float x_8_1_1; float x_8_1_2; } x8; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_9_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg1 forContentTileWithIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentBounds;
- (int)contentMode;
- (id)dataSource;
- (id)delegate;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (BOOL)getGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; float x6; BOOL x7; struct CGSize { float x_8_1_1; float x_8_1_2; } x8; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_9_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg1 group:(unsigned int*)arg2 userData:(id*)arg3 forTileWithIdentifier:(struct PXTileIdentifier { unsigned int x1; unsigned int x2[10]; })arg4;
- (id)initWithDataSource:(id)arg1;
- (id)initWithLayoutEngineSnapshot:(id)arg1;
- (id)layoutSnapshot;
- (struct CGSize { float x1; float x2; })playButtonSizeForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg1 contentTileSize:(struct CGSize { float x1; float x2; })arg2;
- (void)setContentMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutSnapshot:(id)arg1;
- (void)setReferenceSize:(struct CGSize { float x1; float x2; })arg1;

@end
