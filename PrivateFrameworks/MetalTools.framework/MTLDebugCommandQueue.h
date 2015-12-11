/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugCommandQueue : MTLToolsCommandQueue {
    unsigned int _maxCommandBufferCount;
}

@property (nonatomic, readonly) unsigned int maxCommandBufferCount;

- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (id)initWithCommandQueue:(id)arg1 device:(id)arg2 maxBufferCount:(unsigned int)arg3;
- (unsigned int)maxCommandBufferCount;

@end