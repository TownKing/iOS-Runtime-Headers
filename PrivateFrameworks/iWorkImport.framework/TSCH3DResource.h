/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DDataBuffer;

@interface TSCH3DResource : NSObject <NSCopying> {
    struct DataBufferInfo { 
        int componentType; 
        unsigned long long components; 
        unsigned long long count; 
        unsigned long long byteSize; 
        unsigned long long componentByteSize; 
        unsigned long long elementByteSize; 
    boolmCached;
    boolmChanged;
    TSCH3DDataBuffer *mCache;
    int mCaching;
    } mDataBufferInfo;
    unsigned long long mUniqueIdentifier;
    int mUpdate;
}

@property(readonly) TSCH3DDataBuffer * buffer;
@property(readonly) struct DataBufferInfo { int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; } bufferInfo;
@property int caching;
@property bool changed;
@property(readonly) bool isTexturable;
@property(readonly) unsigned long long uniqueIdentifier;
@property int update;

+ (unsigned long long)allocateResourceUniqueIdentifier;
+ (void)deallocateResourceUniqueIdentifier:(unsigned long long)arg1;
+ (id)resource;
+ (id)resourceWithCaching:(int)arg1;

- (id).cxx_construct;
- (id)buffer;
- (struct DataBufferInfo { int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; })bufferInfo;
- (bool)cacheNeedsUpdate;
- (int)caching;
- (bool)changed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)flushMemory;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCaching:(int)arg1;
- (bool)isTexturable;
- (void)setCache:(id)arg1;
- (void)setCaching:(int)arg1;
- (void)setChanged:(bool)arg1;
- (void)setUpdate:(int)arg1;
- (unsigned long long)uniqueIdentifier;
- (int)update;
- (void)updateBufferInfoFromBuffer:(id)arg1;

@end