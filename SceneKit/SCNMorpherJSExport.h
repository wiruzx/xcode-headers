//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol SCNMorpherJSExport <JSExport>
+ (SCNMorpher *)morpher;
@property(readonly, nonatomic) SCNMorpher *presentationMorpher;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) long long calculationMode;
@property(copy, nonatomic) NSArray *targets;
- (void)setWeight:(double)arg1 atTargetIndex:(long long)arg2;
- (double)weightAtTargetIndex:(long long)arg1;
- (id)valueForKeyPath:(NSString *)arg1;
- (id)valueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (id)copy;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
- (double)weightForTargetAtIndex:(unsigned long long)arg1;
- (void)setWeight:(double)arg1 forTargetAtIndex:(unsigned long long)arg2;
@end