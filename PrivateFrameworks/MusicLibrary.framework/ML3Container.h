/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Container : ML3Entity {
}

@property(readonly) ML3Predicate *dynamicPredicate;
@property(readonly) NSArray *limitOrderingDirectionality;
@property(readonly) NSArray *limitOrderingProperties;
@property(readonly) NSString *limitingProperty;
@property(readonly) ML3Predicate *staticPredicate;
@property(getter=isLimitOrderingDescending,readonly) BOOL limitOrderingDescending;
@property(readonly) long long limitValue;
@property(getter=isLimitedByCount,readonly) BOOL limitedByCount;

+ (id)databaseTable;
+ (id)defaultOrderingProperties;
+ (BOOL)hasCriterionInCriteriaList:(struct OpaqueSearchCriteriaList { }*)arg1 forITDBTrackField:(NSInteger)arg2;
+ (void)initialize;
+ (id)joinClauseForProperty:(id)arg1;
+ (void)populateStaticItemsOfDynamicContainersOnHandle:(struct sqlite3 { }*)arg1;
+ (id)predicateForCriteriaList:(struct OpaqueSearchCriteriaList { }*)arg1 dynamicCriteria:(BOOL)arg2;
+ (id)sectionPropertyForProperty:(id)arg1;

- (BOOL)_isDescendingForTrackOrderProperty:(id)arg1 reverseOrderProperty:(id)arg2;
- (void)bindPopulateStatement:(struct sqlite3_stmt { }*)arg1 withStaticTrackPersistentID:(id)arg2;
- (id)dynamicPredicate;
- (void)getDisplayOrderingProperties:(id*)arg1 isDescending:(BOOL*)arg2;
- (struct OpaqueSearchCriteriaList { }*)importedCriteriaList;
- (BOOL)isCustomContainerOrderingDescending;
- (BOOL)isLimitOrderingDescending;
- (BOOL)isLimitedByCount;
- (id)limitOrderingDirectionality;
- (id)limitOrderingProperties;
- (long long)limitValue;
- (id)limitingProperty;
- (id)populateSQLWithStaticTrackPersistentID:(id)arg1;
- (id)staticPredicate;

@end