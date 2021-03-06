/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleAlbumProvider : NSObject <PXPeopleDataSourceDelegate, PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    NSObject<OS_dispatch_queue> * _cacheIsolationQueue;
    int  _cachedPeopleCount;
    int  _currentRequestId;
    BOOL  _didInitiatePeopleCountFetchRequest;
    BOOL  _didInitiateReCacheRequest;
    BOOL  _didPrepareDataSource;
    PXPeoplePersonDataSource * _favoriteDS;
    NSMutableDictionary * _imageCache;
    struct CGSize { 
        float width; 
        float height; 
    }  _imageSize;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    PXPeoplePersonDataSource * _otherDS;
    PHPhotoLibrary * _photoLibrary;
    PXPeopleProgressManager * _progressMgr;
    id /* block */  _requestCompletion;
}

@property (nonatomic) int cachedPeopleCount;
@property (getter=isCountAvailable, nonatomic, readonly) BOOL countAvailable;
@property int currentRequestId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXPeoplePersonDataSource *favoriteDS;
@property (readonly) unsigned int hash;
@property (retain) NSMutableDictionary *imageCache;
@property (nonatomic) struct CGSize { float x1; float x2; } imageSize;
@property (nonatomic, retain) PXPeoplePersonDataSource *otherDS;
@property (nonatomic, readonly) int peopleCount;
@property (nonatomic, retain) PXPeopleProgressManager *progressMgr;
@property (nonatomic, copy) id /* block */ requestCompletion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appWillEnterForeground;
- (void)_asyncAddImagesToCacheWithItems:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleRequestResult:(void *)arg1 forRequestID:(void *)arg2 person:(void *)arg3 atIndex:(void *)arg4 error:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 7: id, /* Warning: Unrecognized filer type: '' using 'void*' */ void*, int, id, int, id, id /* block */
- (void)_invalidateCache;
- (id)_members;
- (void)_prepareIfNeeded;
- (void)_reCacheImagesCompletion:(id /* block */)arg1;
- (BOOL)_shouldShowInterstitialProgress;
- (void)_updateCachedCountIfNeeded;
- (int)cachedPeopleCount;
- (int)currentRequestId;
- (void)dealloc;
- (id)favoriteDS;
- (id)imageCache;
- (void)imageCacheDidChanged:(id)arg1;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)init;
- (BOOL)isCountAvailable;
- (id)otherDS;
- (int)peopleCount;
- (void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleDataSourceMembersChanged:(id)arg1;
- (id)peopleViewController;
- (id)progressMgr;
- (void)requestAlbumImagesWithSize:(struct CGSize { float x1; float x2; })arg1 completion:(id /* block */)arg2;
- (id /* block */)requestCompletion;
- (void)setCachedPeopleCount:(int)arg1;
- (void)setCurrentRequestId:(int)arg1;
- (void)setFavoriteDS:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setOtherDS:(id)arg1;
- (void)setProgressMgr:(id)arg1;
- (void)setRequestCompletion:(id /* block */)arg1;

@end
