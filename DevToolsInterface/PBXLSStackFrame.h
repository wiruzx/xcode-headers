//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXLSStackFrame : PBXLSModel
{
    unsigned long long _ipAddress;
    unsigned long long _fpAddress;
    unsigned long long _ipLineNumber;
    NSString *_ipFileName;
    NSString *_functionName;
    PBXLSDataValue *_containerDV;
    NSMutableArray *_visibleDataValues;
    struct _NSRange _visibleDataValuesRange;
    PBXDisassemblyFileDocument *_disassemblyDocument;
    unsigned long long _fpIdentifier_lite;
}

+ (id)globalStackFrame;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChild:(id)arg1;
- (BOOL)hasSymbols;
- (id)disassemblyDocument;
- (void)setDisassemblyDocument:(id)arg1;
- (id)frameNameWithPrefix:(id)arg1;
- (id)mixedFrameName;
- (id)disassemblyFrameName;
- (id)visibleDataItemsVisibleRange:(struct _NSRange *)arg1;
- (void)setVisibleDataItems:(id)arg1 visibleRange:(struct _NSRange *)arg2;
- (void)invalidateDataValues;
- (void)ensureValidDataValues;
- (id)containerDataValue;
- (void)invalidateContainerDataValue;
- (void)threadDidUpdate;
- (id)displayStackFrameInfo;
- (id)displayFunctionName;
- (id)functionName;
- (void)setFunctionName:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (unsigned long long)lineNumber;
- (void)setLineNumber:(unsigned long long)arg1;
- (unsigned long long)framePointerAddress;
- (void)setFramePointerAddress:(unsigned long long)arg1;
- (unsigned long long)liteFramePointerIdentifer;
- (void)setLiteFramePointerIdentifer:(unsigned long long)arg1;
- (id)instructionPointerAddressString;
- (unsigned long long)instructionPointerAddress;
- (void)setInstructionPointerAddress:(unsigned long long)arg1;
- (id)parentThread;
- (void)dealloc;

@end