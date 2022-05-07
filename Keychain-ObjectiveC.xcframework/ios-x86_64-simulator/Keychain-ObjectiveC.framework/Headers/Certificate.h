//
//  Certificate.h
//  Keychain
//
//  Created by Robert Ellis on 2021/12/28.
//

#ifndef Certificate_h
#define Certificate_h

#import <Foundation/Foundation.h>
#import "Asset.h"

@interface Certificate : NSObject

@property long certificatePtr;

- (instancetype) init:(long) certificatePtr :(NSError **) error;

- (void) dealloc;

- (NSNumber *) isNil :(NSError **) error;

- (NSString *) toString :(NSError **) error;

- (NSString *) getVersion :(NSError **) error;

- (Asset *) getAsset:(NSError **) error;

- (NSNumber *) getOffline :(NSError **) error;

- (NSNumber *) getNotional :(NSError **) error;

- (NSNumber *) getVelocity :(NSError **) error;

- (NSString *) getHolderUri :(NSError **) error;

- (NSString *) getAuthorizerUri :(NSError **) error;

- (NSString *) getAuthorizerSig :(NSError **) error;

- (NSNumber *) getAuthorizerSigTimestamp :(NSError **) error;

@end

#endif
