/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "NSObject.h"


@protocol UIMovieScrubberDelegate <NSObject>
@optional
-(void)movieScrubber:(id)scrubber valueDidChange:(double)value;
-(void)movieScrubber:(id)scrubber editingStartValueDidChange:(double)editingStartValue;
-(void)movieScrubber:(id)scrubber editingEndValueDidChange:(double)editingEndValue;
-(void)movieScrubberDidBeginScrubbing:(id)movieScrubber withHandle:(int)handle;
-(void)movieScrubberDidEndScrubbing:(id)movieScrubber withHandle:(int)handle;
-(void)movieScrubberWillBeginRequestingThumbnails:(id)movieScrubber;
-(void)movieScrubberDidFinishRequestingThumbnails:(id)movieScrubber;
-(void)movieScrubberDidBeginEditing:(id)movieScrubber;
-(void)movieScrubberEditingAnimationFinished:(id)finished;
@end

