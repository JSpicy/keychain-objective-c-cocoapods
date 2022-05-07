//
//  Verification.h
//  Keychain
//
//  Created by Robert Ellis on 2021/12/28.
//

#ifndef Verification_h
#define Verification_h

#import <Foundation/Foundation.h>
#import "Facade.h"

@interface Verification : NSObject

-(instancetype) init:(long) verificationPtr :(NSError **) error;

- (void) dealloc;

- (NSNumber *) isVerified :(NSError **) error;

- (BOOL) signerIsKnown :(NSError **) error;

- (Facade *) getFacade :(NSError **) error;

- (NSNumber *) getTimestamp :(NSError **) error;

-(NSString *) getSignature :(NSError **) error;

-(NSString *) getPublicKey :(NSError **) error;

-(NSString *) getPublicKeyId :(NSError **) error;

- (NSNumber *) isApproval :(NSError **) error;

@end

#endif
