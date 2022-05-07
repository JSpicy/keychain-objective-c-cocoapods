//
//  LedgerResult.h
//  Keychain
//
//  Created by Robert Ellis on 2021/12/30.
//

#ifndef LedgerResult_h
#define LedgerResult_h

#import <Foundation/Foundation.h>
#import "LedgerTransaction.h"

@interface LedgerResult : NSObject

@property NSString * cipherText;
@property NSArray<NSString *> * recipientUris;
@property LedgerTransaction * transaction;
@property long returnCode;

- (instancetype) init:(NSString *) cipherText
                    :(NSArray<NSString *> *) recipientsUris
                    :(LedgerTransaction *) transaction
                    :(long) returnCode
                     :(NSError **) error;

@end

#endif /* LedgerResult_h */
