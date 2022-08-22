//
//  CAAdColonyInterstitial.h
//  ObjectiveC-AdNetworks
//
//  Created by rehmanaslam on 15/10/2018.
//  Copyright © 2018 rehmanaslam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ConsoliAdsMediaition/ConsoliAdsMediaition.h>
#import <AdColony/AdColony.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAAdColonyInterstitial : AdNetwork <AdColonyInterstitialDelegate>

@property (nonatomic) AdColonyInterstitial * _Nullable adColonyInterstitisal;

@end

NS_ASSUME_NONNULL_END
