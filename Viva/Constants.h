//
//  Constants.h
//  Viva
//
//  Created by Daniel Kennett on 3/27/11.
//  Copyright 2011 Spotify. All rights reserved.
//

#import <Foundation/Foundation.h>

// ------ Playback ------

static NSTimeInterval const kSkipBackThreshold = 3.0;
// ^ If the "skip back" button is clicked after the track has been playing for this long, 
// the track will be restarted.
static NSTimeInterval const kNextTrackCacheThreshold = 5.0;
// ^ When we get this close to the end of a track, preload the next one.
static NSTimeInterval const kSeekABitInterval = 1.0;
static double const kVolumeStepSize = 0.1;
static NSString * const kMediaKeyUsingBundleIdentifiersDefaultsKey = @"kMediaKeyUsingBundleIdentifiersDefaultsKey";

// ------ Drag & Drop ------

static NSString * const kSpotifyTrackURLListDragIdentifier = @"com.spotify.Viva.TrackURLList";
static NSString * const kSpotifyTrackMoveSourceIndexSetDragIdentifier = @"com.spotify.Viva.TrackInPlaylistIndexSet";
// ^ The indexes in the source playlist rather than the current sort order.
static double const kDragImageMaximumMosaicSize = 64.0;

static NSString * const kSpotifyPlaylistMoveSourceDragIdentifier = @"com.spotify.Viva.PlaylistInParentIndex";
static NSString * const kPlaylistURL = @"kPlaylistURL";
static NSString * const kPlaylistParentId = @"kPlaylistParentId";

// ------ Keychain ------

static NSString * const kVivaKeychainServiceName = @"Viva";

// ------ User Defaults ------

static NSString * const kVivaLastUserNameUserDefaultsKey = @"LastUser";
static NSString * const kVivaMainViewHistoryUserDefaultsKey = @"History";

// ------ Notifications ------

static NSString * const kTrackShouldBePlayedNotification = @"kTrackShouldBePlayedNotification";
static NSString * const kPlaybackInitialTrackContainerKey = @"kPlaybackInitialTrackContainerKey";
