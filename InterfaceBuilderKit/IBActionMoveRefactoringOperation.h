//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBActionMoveRefactoringOperation : IBRefactoringOperation
{
    NSString *actionName;
    NSString *oldClassName;
    NSString *newClassName;
}

- (void)refactorObject:(id)arg1 inDocument:(id)arg2 error:(id *)arg3;
- (id)newClassName;
- (id)oldClassName;
- (id)actionName;
- (void)dealloc;
- (id)initWithActionName:(id)arg1 oldClassName:(id)arg2 andNewClassName:(id)arg3;

@end