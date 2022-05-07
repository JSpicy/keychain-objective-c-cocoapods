//
//  Contact.h
//  Keychain
//
//  Created by Robert Ellis on 2021/12/29.
//

#ifndef Contact_h
#define Contact_h

#import <Foundation/Foundation.h>
#import "Facade.h"

@interface Contact : Facade

- (instancetype) init:(long) contactPtr :(NSError **) error;

- (long) getContactPtr;

- (NSNumber *) id;

- (NSNumber *) isNil :(NSError **) error;

- (NSNumber *) getId :(NSError **) error;

- (NSString *) getName :(NSError **) error;

- (NSString *) getSubName :(NSError **) error;

- (Uri *) getUri :(NSError **) error;

- (NSNumber *) isMature :(NSError **) error;

- (NSNumber *) getStatus :(NSError **) error;

@end

#endif /* Contact_h */
