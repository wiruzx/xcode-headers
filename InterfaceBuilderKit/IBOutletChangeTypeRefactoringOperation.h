//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBOutletChangeTypeRefactoringOperation : IBRefactoringOperation
{
    NSString *outletName;
    NSString *className;
    NSString *oldType;
    NSString *newType;
}

- (void)refactorObject:(id)arg1 inDocument:(id)arg2 error:(id *)arg3;
- (id)newType;
- (id)oldType;
- (id)className;
- (id)outletName;
- (void)dealloc;
- (id)initWithClassName:(id)arg1 outletName:(id)arg2 oldType:(id)arg3 andNewType:(id)arg4;

@end