//
//  INRestaurantOffer.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//
// This API requires you to work with Apple Maps before your application can use it. For information on how to get started, please go to MapsConnect.
//
// http://mapsconnect.apple.com/info/extensions

#import <Intents/INIntent.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.0))
API_UNAVAILABLE(macosx)
@interface INRestaurantOffer : NSObject <NSSecureCoding, NSCopying>

@property (copy, NS_NONATOMIC_IOSONLY) NSString *offerTitleText;
@property (copy, NS_NONATOMIC_IOSONLY) NSString *offerDetailText;
@property (copy, NS_NONATOMIC_IOSONLY) NSString *offerIdentifier;

@end
NS_ASSUME_NONNULL_END
