//
//  Transaction.h
//  Keychain
//
//  Created by Robert Ellis on 2021/12/28.
//

#ifndef Transaction_h
#define Transaction_h

#import <Foundation/Foundation.h>
#import "Asset.h"
#import "Verification.h"
#import "Certificate.h"

@interface LedgerTransaction : NSObject

@property long transactionPtr;

- (instancetype) init:(long) transactionPtr :(NSError **) error;

- (void) dealloc;

- (NSNumber *) id;

- (NSNumber *) isNil :(NSError **) error;

- (NSString *) toString :(NSError **) error;

- (NSString *) getSenderUrl :(NSError **) error;

- (NSString *) getReceiverUrl :(NSError **) error;

- (NSNumber *) getTransactionTime :(NSError **) error;

- (NSNumber *) getAmount :(NSError **) error;

- (NSString *) getHash :(NSError **) error;

- (NSString *) getReason :(NSError **) error;

- (Asset *) getAsset :(NSError **) error;

- (NSNumber *) getAcceptanceState :(NSError **) error;

- (NSArray<Verification *> *) getVerifications :(NSError **) error;

@end

#endif
