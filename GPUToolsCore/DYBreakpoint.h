//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYBreakpoint : NSObject <NSCoding>
{
    NSString *_name;
    NSPredicate *_predicate;
    NSString *_predicateString;
    unsigned int _fenum;
    NSMutableData *_fbufData;
    struct Function *_function;
    int _glError;
    NSString *_threadName;
    NSArray *_backtrace;
    int _type;
    BOOL _breakBefore;
    BOOL _breakAfter;
    BOOL _noExec;
}

+ (id)keyPathsForValuesAffectingName;
@property(readonly, retain, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
@property(readonly, retain, nonatomic) NSArray *backtrace; // @synthesize backtrace=_backtrace;
@property(readonly, nonatomic) int glError; // @synthesize glError=_glError;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) const struct Function *function; // @synthesize function=_function;
@property(nonatomic) BOOL noExec; // @synthesize noExec=_noExec;
@property(nonatomic) BOOL breakAfter; // @synthesize breakAfter=_breakAfter;
@property(nonatomic) BOOL breakBefore; // @synthesize breakBefore=_breakBefore;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) unsigned int fenum; // @synthesize fenum=_fenum;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *predicateString; // @dynamic predicateString;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)_initWithType:(int)arg1 backtrace:(id)arg2 error:(int)arg3;
- (id)_initWithPbuf:(struct Fbuf *)arg1 type:(int)arg2 backtrace:(id)arg3 error:(int)arg4;
- (void)_commonInit:(int)arg1 backtrace:(id)arg2 error:(int)arg3;

@end