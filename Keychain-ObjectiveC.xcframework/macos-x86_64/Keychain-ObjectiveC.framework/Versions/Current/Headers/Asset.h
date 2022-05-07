//
//  Asset.h
//  Keychain
//
//  Created by Robert Ellis on 2021/12/27.
//

#ifndef Asset_h
#define Asset_h

#import <Foundation/Foundation.h>

@interface Asset : NSObject

@property long assetPtr;

- (instancetype) init:(long) assetPtr :(NSError **) error;

- (void) dealloc;

- (NSString *) toString :(NSError **) error;

- (NSString *) getVersion :(NSError **) error;

- (NSString *) getSymbol :(NSError **) error;

- (NSString *) getIssuerUri :(NSError **) error;

- (NSString *) getScript :(NSError **) error;

- (NSString *) getHash :(NSError **) error;

- (NSString *) getIssuerSig :(NSError **) error;

- (NSNumber *) getSigTimestamp :(NSError **) error;

- (BOOL) setIssuerSig:(NSString *) sig :(NSError **) error;

@end

#endif
