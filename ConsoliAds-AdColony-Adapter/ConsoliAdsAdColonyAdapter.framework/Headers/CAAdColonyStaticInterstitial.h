
#import <Foundation/Foundation.h>
#import <ConsoliAdsMediaition/ConsoliAdsMediaition.h>
#import <AdColony/AdColony.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAAdColonyStaticInterstitial : AdNetwork <AdColonyInterstitialDelegate>

@property (nonatomic , strong) AdColonyInterstitial * _Nullable adColonyInterstitisal;

@end

NS_ASSUME_NONNULL_END
