//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCRefactoringProblem : NSObject
{
    NSString *_message;
    int _problemType;
    XCRefactoringFileLocation *_fileLocation;
}

- (long long)compareProblem:(id)arg1;
- (BOOL)isEqualToProblem:(id)arg1;
- (id)fileLocation;
- (int)problemType;
- (id)message;
- (id)description;
- (void)dealloc;
- (id)initWithMessage:(id)arg1 problemType:(int)arg2 fileLocation:(id)arg3;

@end